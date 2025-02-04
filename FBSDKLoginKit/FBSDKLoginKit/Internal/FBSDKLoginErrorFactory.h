/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#if !TARGET_OS_TV

#import <Foundation/Foundation.h>

#import <FBSDKLoginKit/FBSDKLoginError.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(LoginErrorFactory)
@interface FBSDKLoginErrorFactory : NSObject

+ (NSError *)fbErrorForFailedLoginWithCode:(FBSDKLoginError)code;
+ (nullable NSError *)fbErrorFromReturnURLParameters:(NSDictionary<NSString *, id> *)parameters;

@end

NS_ASSUME_NONNULL_END

#endif
