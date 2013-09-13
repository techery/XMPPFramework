//
//  XMPPXOATH2Google.h
//  Off the Record
//
//  Created by David on 9/13/13.
//  Copyright (c) 2013 Chris Ballinger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XMPPSASLAuthentication.h"
#import "XMPPStream.h"

@interface XMPPXOATH2Google : NSObject <XMPPSASLAuthentication>

-(id)initWithStream:(XMPPStream *)stream accessToken:(NSString *)accessToken;

@end



@interface XMPPStream (XMPPXOATH2Google)


- (BOOL)supportsXOAUTH2GoogleAuthentication;

- (BOOL)authenticateWithGoogleAccessToken:(NSString *)accessToken error:(NSError **)errPtr;

@end
