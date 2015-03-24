#import <PEGKit/PKParser.h>

enum {
    JSONPARSER_TOKEN_KIND_FALSE = 14,
    JSONPARSER_TOKEN_KIND_CLOSECURLY = 15,
    JSONPARSER_TOKEN_KIND_OPENBRACKET = 16,
    JSONPARSER_TOKEN_KIND_NULLLITERAL = 17,
    JSONPARSER_TOKEN_KIND_COMMA = 18,
    JSONPARSER_TOKEN_KIND_TRUE = 19,
    JSONPARSER_TOKEN_KIND_CLOSEBRACKET = 20,
    JSONPARSER_TOKEN_KIND_OPENCURLY = 21,
    JSONPARSER_TOKEN_KIND_COLON = 22,
};

@interface JSONParser : PKParser

@end
