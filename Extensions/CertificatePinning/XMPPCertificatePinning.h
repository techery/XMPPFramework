//
//  XMPPCertificatePinning.h
//  Off the Record
//
//  Created by David on 9/17/13.
//  Copyright (c) 2013 Chris Ballinger. All rights reserved.
//

#import "XMPPModule.h"

@class AFSecurityPolicy;

@interface XMPPCertificatePinning : XMPPModule
{
    AFSecurityPolicy * securityPolicy;
}

@property (nonatomic,strong) NSArray * pinnedCertificates;

- (id)initWithCertificates:(NSArray *)certificates;
- (id)initWithDefaultCertificates;

+ (id)defaultCertificates;

@end
