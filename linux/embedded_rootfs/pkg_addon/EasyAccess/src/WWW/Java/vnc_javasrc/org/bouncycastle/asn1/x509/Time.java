package org.bouncycastle.asn1.x509;

import java.util.Date;
import java.util.SimpleTimeZone;
import java.text.ParsePosition;
import java.text.SimpleDateFormat;

import org.bouncycastle.asn1.*;

public class Time
    implements DEREncodable
{
    DERObject   time;

    public static Time getInstance(
        ASN1TaggedObject obj,
        boolean          explicit)
    {
        return getInstance(obj.getObject());
    }

    public Time(
        DERObject   time)
    {
        if (!(time instanceof DERUTCTime)
            && !(time instanceof DERGeneralizedTime))
        {
            throw new IllegalArgumentException("unknown object passed to Time");
        }

        this.time = time; 
    }

    /**
     * creates a time object from a given date - if the date is between 1950
     * and 2049 a UTCTime object is generated, otherwise a GeneralizedTime
     * is used.
     */
    public Time(
        Date    date)
    {
        SimpleTimeZone      tz = new SimpleTimeZone(0, "Z");
        SimpleDateFormat    dateF = new SimpleDateFormat("yyyyMMddHHmmss");

        dateF.setTimeZone(tz);

        String  d = dateF.format(date) + "Z";
        int     year = Integer.parseInt(d.substring(0, 4));

        if (year < 1950 || year > 2049)
        {
            time = new DERGeneralizedTime(d);
        }
        else
        {
            time = new DERUTCTime(d.substring(2));
        }
    }

    public static Time getInstance(
        Object  obj)
    {
        if (obj instanceof Time)
        {
            return (Time)obj;
        }
        else if (obj instanceof DERUTCTime)
        {
            return new Time((DERUTCTime)obj);
        }
        else if (obj instanceof DERGeneralizedTime)
        {
            return new Time((DERGeneralizedTime)obj);
        }

        throw new IllegalArgumentException("unknown object in factory");
    }

    public String getTime()
    {
        if (time instanceof DERUTCTime)
        {
            return ((DERUTCTime)time).getAdjustedTime();
        }
        else
        {
            return ((DERGeneralizedTime)time).getTime();
        }
    }

    public Date getDate()
    {
        SimpleDateFormat dateF = new SimpleDateFormat("yyyyMMddHHmmssz");

        return dateF.parse(this.getTime(), new ParsePosition(0));
    }

    /**
     * <pre>
     * Time ::= CHOICE {
     *             utcTime        UTCTime,
     *             generalTime    GeneralizedTime }
     * </pre>
     */
    public DERObject getDERObject()
    {
        return time;
    }
}