## Changelog
* 7.8.8.0
  * Added support for DV360 SCAR integration for full screen ads.
  * iOS 14.5 and SKAdNetwork 2.2 support - Xcode 12.5+ is not required anymore, 12.4+ required (in contrary to version 7.8.5).
  * Changed the SDK frameworks type from “.framework” to “.xcframework”. When integrating manually: “IASDKResources.bundle” is now inside ‘IASDKCore.xcframework’ and should be taken from there.
  * This version of the adapters has been certified with Fyber Marketplace 7.8.8 and MoPub SDK 5.18.0.

* 7.8.7.0
  * This version of the adapters has been certified with Fyber Marketplace 7.8.7 and MoPub SDK 5.18.0.
  
* 7.8.6.2
  * Pass MoPub collected GDPR consent data to Fyber.
  
* 7.8.6.1
  * Adjust minimium MoPub SDK version from 5.17.0 to 5.17. This allows integrations to use MoPub 5.17.x up to (but not including) 6.0.
  * Service release. No new features. 

* 7.8.6.0
  * This version of the adapters has been certified with Fyber Marketplace 7.8.6 and MoPub SDK 5.17.0.
  * Do not pass GDPR consent to Fyber via adapters.

* 7.8.5.0 
  * Initial Commit
  * Add support for banner, interstitial and rewarded video.
  * This version of the adapters has been certified with Fyber Marketplace 7.8.5 and MoPub SDK 5.17.0.
