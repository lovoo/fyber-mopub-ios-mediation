#import <Foundation/Foundation.h>

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDK/MoPub.h>)
    #import <MoPubSDK/MoPub.h>
#else
    #import "MPMediationSettingsProtocol.h"
#endif

/*
 * `UnityInstanceMediationSettings` allows the application to provide per-instance properties
 * to configure aspects of Unity ads. See `MPMediationSettingsProtocol` to see how mediation settings
 * are used.
 */
@interface UnityAdsInstanceMediationSettings : NSObject <MPMediationSettingsProtocol>

/*
 * An NSString that's used as an identifier for a specific user, and is passed along to Unity
 * when the rewarded video ad is played.
 */
@property (nonatomic, copy) NSString *userIdentifier;

@end
