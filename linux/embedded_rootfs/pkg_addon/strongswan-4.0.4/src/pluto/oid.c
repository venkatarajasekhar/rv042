/* List of some useful object identifiers (OIDs)
 * Copyright (C) 2003-2004 Andreas Steffen, Zuercher Hochschule Winterthur
 * 
 * This file has been automatically generated by the script oid.pl
 * Do not edit manually!
 */

#include <stdlib.h>

#include "oid.h"

const oid_t oid_names[] = {
  {0x02,                       7, 1, "ITU-T Administration"   },  /*   0 */
  {  0x82,                     0, 1, ""                       },  /*   1 */
  {    0x06,                   0, 1, "Germany ITU-T member"   },  /*   2 */
  {      0x01,                 0, 1, "Deutsche Telekom AG"    },  /*   3 */
  {        0x0A,               0, 1, ""                       },  /*   4 */
  {          0x07,             0, 1, ""                       },  /*   5 */
  {            0x14,           0, 0, "ND"                     },  /*   6 */
  {0x09,                      18, 1, "data"                   },  /*   7 */
  {  0x92,                     0, 1, ""                       },  /*   8 */
  {    0x26,                   0, 1, ""                       },  /*   9 */
  {      0x89,                 0, 1, ""                       },  /*  10 */
  {        0x93,               0, 1, ""                       },  /*  11 */
  {          0xF2,             0, 1, ""                       },  /*  12 */
  {            0x2C,           0, 1, ""                       },  /*  13 */
  {              0x64,         0, 1, "pilot"                  },  /*  14 */
  {                0x01,       0, 1, "pilotAttributeType"     },  /*  15 */
  {                  0x01,    17, 0, "UID"                    },  /*  16 */
  {                  0x19,     0, 0, "DC"                     },  /*  17 */
  {0x55,                      51, 1, "X.500"                  },  /*  18 */
  {  0x04,                    36, 1, "X.509"                  },  /*  19 */
  {    0x03,                  21, 0, "CN"                     },  /*  20 */
  {    0x04,                  22, 0, "S"                      },  /*  21 */
  {    0x05,                  23, 0, "SN"                     },  /*  22 */
  {    0x06,                  24, 0, "C"                      },  /*  23 */
  {    0x07,                  25, 0, "L"                      },  /*  24 */
  {    0x08,                  26, 0, "ST"                     },  /*  25 */
  {    0x0A,                  27, 0, "O"                      },  /*  26 */
  {    0x0B,                  28, 0, "OU"                     },  /*  27 */
  {    0x0C,                  29, 0, "T"                      },  /*  28 */
  {    0x0D,                  30, 0, "D"                      },  /*  29 */
  {    0x24,                  31, 0, "userCertificate"        },  /*  30 */
  {    0x29,                  32, 0, "N"                      },  /*  31 */
  {    0x2A,                  33, 0, "G"                      },  /*  32 */
  {    0x2B,                  34, 0, "I"                      },  /*  33 */
  {    0x2D,                  35, 0, "ID"                     },  /*  34 */
  {    0x48,                   0, 0, "role"                   },  /*  35 */
  {  0x1D,                     0, 1, "id-ce"                  },  /*  36 */
  {    0x09,                  38, 0, "subjectDirectoryAttrs"  },  /*  37 */
  {    0x0E,                  39, 0, "subjectKeyIdentifier"   },  /*  38 */
  {    0x0F,                  40, 0, "keyUsage"               },  /*  39 */
  {    0x10,                  41, 0, "privateKeyUsagePeriod"  },  /*  40 */
  {    0x11,                  42, 0, "subjectAltName"         },  /*  41 */
  {    0x12,                  43, 0, "issuerAltName"          },  /*  42 */
  {    0x13,                  44, 0, "basicConstraints"       },  /*  43 */
  {    0x15,                  45, 0, "reasonCode"             },  /*  44 */
  {    0x1F,                  46, 0, "crlDistributionPoints"  },  /*  45 */
  {    0x20,                  47, 0, "certificatePolicies"    },  /*  46 */
  {    0x23,                  48, 0, "authorityKeyIdentifier" },  /*  47 */
  {    0x25,                  49, 0, "extendedKeyUsage"       },  /*  48 */
  {    0x37,                  50, 0, "targetInformation"      },  /*  49 */
  {    0x38,                   0, 0, "noRevAvail"             },  /*  50 */
  {0x2A,                      88, 1, ""                       },  /*  51 */
  {  0x86,                     0, 1, ""                       },  /*  52 */
  {    0x48,                   0, 1, ""                       },  /*  53 */
  {      0x86,                 0, 1, ""                       },  /*  54 */
  {        0xF7,               0, 1, ""                       },  /*  55 */
  {          0x0D,             0, 1, "RSADSI"                 },  /*  56 */
  {            0x01,          83, 1, "PKCS"                   },  /*  57 */
  {              0x01,        66, 1, "PKCS-1"                 },  /*  58 */
  {                0x01,      60, 0, "rsaEncryption"          },  /*  59 */
  {                0x02,      61, 0, "md2WithRSAEncryption"   },  /*  60 */
  {                0x04,      62, 0, "md5WithRSAEncryption"   },  /*  61 */
  {                0x05,      63, 0, "sha-1WithRSAEncryption" },  /*  62 */
  {                0x0B,      64, 0, "sha256WithRSAEncryption"},  /*  63 */
  {                0x0C,      65, 0, "sha384WithRSAEncryption"},  /*  64 */
  {                0x0D,       0, 0, "sha512WithRSAEncryption"},  /*  65 */
  {              0x07,        73, 1, "PKCS-7"                 },  /*  66 */
  {                0x01,      68, 0, "data"                   },  /*  67 */
  {                0x02,      69, 0, "signedData"             },  /*  68 */
  {                0x03,      70, 0, "envelopedData"          },  /*  69 */
  {                0x04,      71, 0, "signedAndEnvelopedData" },  /*  70 */
  {                0x05,      72, 0, "digestedData"           },  /*  71 */
  {                0x06,       0, 0, "encryptedData"          },  /*  72 */
  {              0x09,         0, 1, "PKCS-9"                 },  /*  73 */
  {                0x01,      75, 0, "E"                      },  /*  74 */
  {                0x02,      76, 0, "unstructuredName"       },  /*  75 */
  {                0x03,      77, 0, "contentType"            },  /*  76 */
  {                0x04,      78, 0, "messageDigest"          },  /*  77 */
  {                0x05,      79, 0, "signingTime"            },  /*  78 */
  {                0x06,      80, 0, "counterSignature"       },  /*  79 */
  {                0x07,      81, 0, "challengePassword"      },  /*  80 */
  {                0x08,      82, 0, "unstructuredAddress"    },  /*  81 */
  {                0x0E,       0, 0, "extensionRequest"       },  /*  82 */
  {            0x02,          86, 1, "digestAlgorithm"        },  /*  83 */
  {              0x02,        85, 0, "md2"                    },  /*  84 */
  {              0x05,         0, 0, "md5"                    },  /*  85 */
  {            0x03,           0, 1, "encryptionAlgorithm"    },  /*  86 */
  {              0x07,         0, 0, "3des-ede-cbc"           },  /*  87 */
  {0x2B,                     149, 1, ""                       },  /*  88 */
  {  0x06,                   136, 1, "dod"                    },  /*  89 */
  {    0x01,                   0, 1, "internet"               },  /*  90 */
  {      0x04,               105, 1, "private"                },  /*  91 */
  {        0x01,               0, 1, "enterprise"             },  /*  92 */
  {          0x82,            98, 1, ""                       },  /*  93 */
  {            0x37,           0, 1, "Microsoft"              },  /*  94 */
  {              0x0A,         0, 1, ""                       },  /*  95 */
  {                0x03,       0, 1, ""                       },  /*  96 */
  {                  0x03,     0, 0, "msSGC"                  },  /*  97 */
  {          0x89,             0, 1, ""                       },  /*  98 */
  {            0x31,           0, 1, ""                       },  /*  99 */
  {              0x01,         0, 1, ""                       },  /* 100 */
  {                0x01,       0, 1, ""                       },  /* 101 */
  {                  0x02,     0, 1, ""                       },  /* 102 */
  {                    0x02, 104, 0, ""                       },  /* 103 */
  {                    0x4B,   0, 0, "TCGID"                  },  /* 104 */
  {      0x05,                 0, 1, "security"               },  /* 105 */
  {        0x05,               0, 1, "mechanisms"             },  /* 106 */
  {          0x07,             0, 1, "id-pkix"                },  /* 107 */
  {            0x01,         110, 1, "id-pe"                  },  /* 108 */
  {              0x01,         0, 0, "authorityInfoAccess"    },  /* 109 */
  {            0x03,         120, 1, "id-kp"                  },  /* 110 */
  {              0x01,       112, 0, "serverAuth"             },  /* 111 */
  {              0x02,       113, 0, "clientAuth"             },  /* 112 */
  {              0x03,       114, 0, "codeSigning"            },  /* 113 */
  {              0x04,       115, 0, "emailProtection"        },  /* 114 */
  {              0x05,       116, 0, "ipsecEndSystem"         },  /* 115 */
  {              0x06,       117, 0, "ipsecTunnel"            },  /* 116 */
  {              0x07,       118, 0, "ipsecUser"              },  /* 117 */
  {              0x08,       119, 0, "timeStamping"           },  /* 118 */
  {              0x09,         0, 0, "ocspSigning"            },  /* 119 */
  {            0x08,         122, 1, "id-otherNames"          },  /* 120 */
  {              0x05,         0, 0, "xmppAddr"               },  /* 121 */
  {            0x0A,         127, 1, "id-aca"                 },  /* 122 */
  {              0x01,       124, 0, "authenticationInfo"     },  /* 123 */
  {              0x02,       125, 0, "accessIdentity"         },  /* 124 */
  {              0x03,       126, 0, "chargingIdentity"       },  /* 125 */
  {              0x04,         0, 0, "group"                  },  /* 126 */
  {            0x30,           0, 1, "id-ad"                  },  /* 127 */
  {              0x01,         0, 1, "ocsp"                   },  /* 128 */
  {                0x01,     130, 0, "basic"                  },  /* 129 */
  {                0x02,     131, 0, "nonce"                  },  /* 130 */
  {                0x03,     132, 0, "crl"                    },  /* 131 */
  {                0x04,     133, 0, "response"               },  /* 132 */
  {                0x05,     134, 0, "noCheck"                },  /* 133 */
  {                0x06,     135, 0, "archiveCutoff"          },  /* 134 */
  {                0x07,       0, 0, "serviceLocator"         },  /* 135 */
  {  0x0E,                   142, 1, "oiw"                    },  /* 136 */
  {    0x03,                   0, 1, "secsig"                 },  /* 137 */
  {      0x02,                 0, 1, "algorithms"             },  /* 138 */
  {        0x07,             140, 0, "des-cbc"                },  /* 139 */
  {        0x1A,             141, 0, "sha-1"                  },  /* 140 */
  {        0x1D,               0, 0, "sha-1WithRSASignature"  },  /* 141 */
  {  0x24,                     0, 1, "TeleTrusT"              },  /* 142 */
  {    0x03,                   0, 1, "algorithm"              },  /* 143 */
  {      0x03,                 0, 1, "signatureAlgorithm"     },  /* 144 */
  {        0x01,               0, 1, "rsaSignature"           },  /* 145 */
  {          0x02,           147, 0, "rsaSigWithripemd160"    },  /* 146 */
  {          0x03,           148, 0, "rsaSigWithripemd128"    },  /* 147 */
  {          0x04,             0, 0, "rsaSigWithripemd256"    },  /* 148 */
  {0x60,                       0, 1, ""                       },  /* 149 */
  {  0x86,                     0, 1, ""                       },  /* 150 */
  {    0x48,                   0, 1, ""                       },  /* 151 */
  {      0x01,                 0, 1, "organization"           },  /* 152 */
  {        0x65,             160, 1, "gov"                    },  /* 153 */
  {          0x03,             0, 1, "csor"                   },  /* 154 */
  {            0x04,           0, 1, "nistalgorithm"          },  /* 155 */
  {              0x02,         0, 1, "hashalgs"               },  /* 156 */
  {                0x01,     158, 0, "id-SHA-256"             },  /* 157 */
  {                0x02,     159, 0, "id-SHA-384"             },  /* 158 */
  {                0x03,       0, 0, "id-SHA-512"             },  /* 159 */
  {        0x86,               0, 1, ""                       },  /* 160 */
  {          0xf8,             0, 1, ""                       },  /* 161 */
  {            0x42,         174, 1, "netscape"               },  /* 162 */
  {              0x01,       169, 1, ""                       },  /* 163 */
  {                0x01,     165, 0, "nsCertType"             },  /* 164 */
  {                0x03,     166, 0, "nsRevocationUrl"        },  /* 165 */
  {                0x04,     167, 0, "nsCaRevocationUrl"      },  /* 166 */
  {                0x08,     168, 0, "nsCaPolicyUrl"          },  /* 167 */
  {                0x0d,       0, 0, "nsComment"              },  /* 168 */
  {              0x03,       172, 1, "directory"              },  /* 169 */
  {                0x01,       0, 1, ""                       },  /* 170 */
  {                  0x03,     0, 0, "employeeNumber"         },  /* 171 */
  {              0x04,         0, 1, "policy"                 },  /* 172 */
  {                0x01,       0, 0, "nsSGC"                  },  /* 173 */
  {            0x45,           0, 1, "verisign"               },  /* 174 */
  {              0x01,         0, 1, "pki"                    },  /* 175 */
  {                0x09,       0, 1, "attributes"             },  /* 176 */
  {                  0x02,   178, 0, "messageType"            },  /* 177 */
  {                  0x03,   179, 0, "pkiStatus"              },  /* 178 */
  {                  0x04,   180, 0, "failInfo"               },  /* 179 */
  {                  0x05,   181, 0, "senderNonce"            },  /* 180 */
  {                  0x06,   182, 0, "recipientNonce"         },  /* 181 */
  {                  0x07,   183, 0, "transID"                },  /* 182 */
  {                  0x08,     0, 0, "extensionReq"           }   /* 183 */
};
