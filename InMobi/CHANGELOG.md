## Changelog
* 9.2.0.1
     * Adjust minimium MoPub SDK version from 5.17.0 to 5.17. This allows integrations to use MoPub 5.17.x up to (but not including) 6.0.
     * Service release. No new features. 

* 9.2.0.0
     * This version of the adapters has been certified with InMobi 9.2.0 and MoPub SDK 5.17.0.

* 9.1.7.4
     * Cache network information from the MoPub dashboard for subsequent ad requests.

* 9.1.7.3
     * Fix bidding logic not being called when bidding ad response is returned.
     * Publishers must use this adapter version at the minimum for Advanced Bidding.

* 9.1.7.2
     * Replace `InMobiSDK` with `ImMobiSDK/Core` to exclude the Moat SDK in order to avoid UIWebView deprecation issues.

* 9.1.7.1
     * Add `fullscreenAdAdapterAdWillPresent` and `fullscreenAdAdapterAdDidPresent` to notify publishers of the fullscreen ad show event. Remove `fullscreenAdAdapterAdWillAppear` and  `fullscreenAdAdapterAdDidAppear` as they are now deprecated by the MoPub iOS SDK.
     * Publishers must use v5.17.0 of the MoPub SDK at the minimum.

* 9.1.7.0
     * Initial commit.
     * This version of the adapters has been certified with InMobi 9.1.7 and MoPub SDK 5.16.2.
     * This and newer adapter versions are only compatible with 5.16.2+ MoPub SDK.
