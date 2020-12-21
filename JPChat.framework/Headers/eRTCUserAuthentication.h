//
//  eRTCUserAuthentication.h
//  eRTC
//
//  Created by rakesh  palotra on 12/04/19.
//  Copyright © 2019 Demo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^userAuthenticationCompletion)(id json, NSString *errMsg);
typedef void (^userAuthenticationFailure)(NSError *error);

@interface eRTCUserAuthentication : NSObject

+(eRTCUserAuthentication *)sharedInstance;

- (void)userAuthenticationWithParam:(NSDictionary *)dictParam andCompletion:(userAuthenticationCompletion)success andFailure:(userAuthenticationFailure)failure;

- (void)forgotPasswordWithParam:(NSDictionary *)dictParam andCompletion:(userAuthenticationCompletion)success andFailure:(userAuthenticationFailure)failure;

- (void)changePasswordWithParam:(NSDictionary *)dictParam andCompletion:(userAuthenticationCompletion)success andFailure:(userAuthenticationFailure)failure;

@end

NS_ASSUME_NONNULL_END
