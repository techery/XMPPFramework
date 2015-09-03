#import <Foundation/Foundation.h>
//#import <libxml/tree.h>
//@import libxml;
@import ONEModule.libxml;
#else
@import ONEModule.libxmlSimu;
#endif

@interface NSString (DDXML)

/**
 * xmlChar - A basic replacement for char, a byte in a UTF-8 encoded string.
**/
- (const xmlChar *)xmlChar;

- (NSString *)stringByTrimming;

@end
