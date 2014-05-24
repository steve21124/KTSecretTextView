/*
 * This file is part of the GrabKit package.
 * Copyright (c) 2013 Pierre-Olivier Simonard <pierre.olivier.simonard@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the
 * following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * The Software is provided "as is", without warranty of any kind, express or implied, including but not
 * limited to the warranties of merchantability, fitness for a particular purpose and noninfringement. In no
 * event shall the authors or copyright holders be liable for any claim, damages or other liability, whether
 * in an action of contract, tort or otherwise, arising from, out of or in connection with the Software or the
 * use or other dealings in the Software.
 *
 * Except as contained in this notice, the name(s) of (the) Author shall not be used in advertising or otherwise
 * to promote the sale, use or other dealings in this Software without prior written authorization from (the )Author.
 */

#import "appGrabKitConfigurator.h"
#import "GRKPickerViewController.h"
#import "Constants.h"

@implementation appGrabKitConfigurator


// Connection to services


// Facebook - https://developers.facebook.com/apps

- (NSString*)facebookAppId {
    
#if DEBUG
	return kFacebookKey;
#else
#warning Facebook AppId should be set
    return kFacebookKey;
#endif
    
}



// Instragram - http://instagram.com/developer/clients/register/

- (NSString*)instagramAppId {
    
#if DEBUG
    // This is the Instagram App id of GrabKit's demo application. Don't use it in your own app.
    return @"7cea3f418ed54aa3a492efed8c6974da";
#else
#warning Instagram AppId should be set
    return @"7cea3f418ed54aa3a492efed8c6974da";
#endif
    
}

/**
 * this configuration used in
 *  [NSString stringWithFormat:@"https://instagram.com/oauth/authorize/?client_id=%@&redirect_uri=%@&response_type=token", [GRKCONFIG instagramAppId], [GRKCONFIG instagramRedirectUri]
 *
 https://instagram.com/oauth/authorize/?client_id=33221863eec546659f2564dd71a8a38d&redirect_uri=https://breaksec.com.mx&response_type=token
 
 
 
 *  @return <#return value description#>
 */
- (NSString*)instagramRedirectUri {
#if DEBUG
    //return @"instagram://media";
    //return @"ig7cea3f418ed54aa3a492efed8c6974da://media";
    //ig052252e29cdb409bb985dce423b4ca4a://authorize
    // This is the Instagram Redirect Uri of GrabKit's demo application. Don't use it in your own app.
    //return @"clocks://";
    //ig[clientId]://authorize
    //    return @"ig7cea3f418ed54aa3a492efed8c6974da://authorize";
    return @"ig7cea3f418ed54aa3a492efed8c6974da%3A%2F%2Fauthorize";
    //return @"http://www.ojor.com/clocks";
    //return @"instagram://camera";
    
#else
#warning Instagram Redirect Uri  should be set
    //return @"instagram://media";
    //return @"ig7cea3f418ed54aa3a492efed8c6974da://media";
    // return @"ig7cea3f418ed54aa3a492efed8c6974da://authorize";
    return @"ig7cea3f418ed54aa3a492efed8c6974da%3A%2F%2Fauthorize";
    //return @"clocks://";
    //return @"http://www.ojor.com/clocks";
    //return @"instagram://camera";
#endif
    
}





// Flickr - http://www.flickr.com/services/apps/create/apply/

- (NSString*)flickrApiKey {
#if DEBUG
    return @"cfb3f10680ef5c1b23a3c0d60fe72ae8";
#else
#warning FlickR Api Key should be set
    return @"";
#endif
    
}

- (NSString*)flickrApiSecret {
#if DEBUG
    // This is the FlickR Api Secret of GrabKit's demo application. Don't use it in your own app.
    return @"cbd9d250d34542e0";
#else
#warning FlickR API Secret should be set
    return @"";
#endif
    
    
}

- (NSString*)flickrRedirectUri{
#if DEBUG
    // This is the Flickr Redirect Uri of GrabKit's demo application. Don't use it in your own app.
    return @"EasySample://";
#else
#warning FlickR Redirect Uri should be set
    return @"";
#endif
    
    
}






// Picasa - https://code.google.com/apis/console/

- (NSString*)picasaClientId {
#if DEBUG
    // This is the Picasa client Id of GrabKit's demo application. Don't use it in your own app.
    return @"301419300289.apps.googleusercontent.com";
#else
#warning Picasa Client Id should be set
    return @"";
#endif
    
    
}

- (NSString*)picasaClientSecret {
#if DEBUG
    // This is the Picasa Client Secret of GrabKit's demo application. Don't use it in your own app.
    return  @"mChy4Y2YJ1j8El1J96taVPMO";
#else
#warning Picasa Client Secret  should be set
    return @"";
#endif
    
}



// Others

// The name of the album "Tagged photos" on Facebook, as you want GrabKit to return it.
// Hint : You can use the default localization here.
- (NSString*)facebookTaggedPhotosAlbumName {
    
    return GRK_i18n(@"GRK_FACEBOOK_TAGGED_PHOTOS", @"Tagged photos");
    
}




/* The Picasa connector doesn't open a Safari page to let the user authenticate. Instead, it presents a viewController.
 When using the GrabKitPicker, the viewController is presented in its navigation hierarchy, there is nothing you have to handle.
 
 But when you use GrabKit as a library, Picasa's Auth viewController needs to be displayed.
 The viewController returned by this configuration method will present Picasa's auth controller.
 
 
 If your custom viewController is an instance of UINavigationController, GrabKit will call the configuration method 'customViewControllerShouldPresentPicasaAuthControllerModally' to know if Picasa's Auth Controller must be presented "modally", or pushed in the navigation hierarchy.
 
 If your custom viewController is not a navigationController, GrabKit will present Picasa's auth controller "modally"
 
 */
/*
 -(UIViewController *)customViewControllerToPresentPicasaAuthController {
 
 return  yourUIViewController;
 }*/


/* If you use GrabKit as a library (i.e. without GrabKitPicker), and if the custom view controller you return in "customViewControllerToPresentPicasaAuthController" is an instance of UINavigationController, then this method will help you define if Picasa's Auth Controller must be pushed in the navigation hierarchy, or must be presented modally.
 
 */
/*
 -(BOOL)customViewControllerShouldPresentPicasaAuthControllerModally {
 return YES;
 }
 */


@end
