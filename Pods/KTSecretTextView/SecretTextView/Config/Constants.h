
#define kAppName @"Imagedeo"
#define kAppHomepage @"http://www.ojor.com/imagedeo"
#define kGOOGLE_API_KEY @"AIzaSyA3tTEZH5FtCExD70H9AjIzyF6bQu8gNwU"
#define kGOOGLE_Publisher_id @"pub-3911464759308681"

#define kGooglePlusClientID @"368733947983-nfm8laa6jrtqmjvn67d4qq7plnkjfupk.apps.googleusercontent.com"
#define kGooglePlusScretID @"cilp95kpjx7t5L0-IvhB2TJw"

#define kFacebookKey @"242136209308899" //image quote api

#define kARMixpanelToken @"b5956e1263878d2666572e2a761f8c46"  //image quote api

#define kFlickrConsumerKey      @"cba7a67b9ce1b3e583a2528f4f78e398"  //image quote api
#define kFlickrConsumerSecret   @"5ddd00a18d234347"
#define kFlickrCallBackURL      @"imagequote://flickr"


#define kTwitterAPIKey          @"og0jD46JYm6JSzrHgfNlAK4Hp"    //image quote api
#define kTwitterSecretKey       @"VGolqhUIDqS7TJicPbsYJwIHd62gogoebUoeNW3u7X8ygEicg0"
#define kTwitterCallBackURL     @"http://www.ojor.com/imagequote"  //this must match with https://apps.twitter.com

#define kTumblrConsumerKey      @"9NjjNlf2ihTWeWr2xTQTIOv9lMXd7BhlVRqBbGyV9hSrdvPC93"   //image quote api
#define kTumblrSecret          @"C7ZKtiL7cdbXM0FUue0kFcDUJJIjohwkQPvD0NAaJLyO0HDlQx"
#define kTumblrCallBackURL     @"com.ojor.imagequote"

#define kDropboxKey             @"8a5ewq03v04dapv"  //using imagequote api
#define kDropboxSecret          @"4cl4bowynfgpr8c"

#define kOthersAppStoreApps @"798504920,738033927,327926378"



//#*********************** rate my app
#define kNumberOfDaysUntilShowAgain 2
#define kAppStoreAddress @"https://itunes.apple.com/us/app/jobsy/id806995755"




#define RAND_FROM_TO(min,max) (min + arc4random_uniform(max - min + 1))

#define IS_OS_5_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 5.0)
#define IS_OS_6_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define IS_OS_7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPHONE_5 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height == 568.0f)
#define IS_RETINA ([[UIScreen mainScreen] scale] == 2.0f)
#define WIDTH_IPAD 1024
#define WIDTH_IPHONE_5 568
#define WIDTH_IPHONE_4 480
#define HEIGHT_IPAD 768
#define HEIGHT_IPHONE 320

#define cp_ph4(__X__, __Y__) ccp(cx_ph4(__X__), cy_ph4(__Y__))
#define cx_ph4(__X__) (IS_IPAD ? (__X__ * WIDTH_IPAD / WIDTH_IPHONE_4) : (IS_IPHONE_5 ? (__X__ * WIDTH_IPHONE_5 / WIDTH_IPHONE_4) : (__X__)))
#define cy_ph4(__Y__) (IS_IPAD ? (__Y__ * HEIGHT_IPAD / HEIGHT_IPHONE) : (__Y__))

#define cp_pad(__X__, __Y__) ccp(cx_pad(__X__), cy_pad(__Y__))
#define cx_pad(__X__) (IS_IPAD ? (__X__) : (IS_IPHONE_5 ? (__X__ * WIDTH_IPHONE_5 / WIDTH_IPAD) : (__X__ * WIDTH_IPHONE_4 / WIDTH_IPAD)))
#define cy_pad(__Y__) (IS_IPAD ? (__Y__) : (__Y__ * HEIGHT_IPHONE / HEIGHT_IPAD))


//http://stackoverflow.com/questions/8870197/adding-properties-to-uiviewcontroller-and-all-its-subclasses
#ifndef ASSOCIATED_STORAGE_PROPERTY_IMP
#define THREE_WAY_PASTER_INNER(a, b, c) a ## b ## c
#define THREE_WAY_PASTER(x,y,z) THREE_WAY_PASTER_INNER(x,y,z)

#define ASSOCIATED_STORAGE_PROPERTY_IMP(type, setter, getter, policy) \
static void * const THREE_WAY_PASTER(__ASSOCIATED_STORAGE_KEY_, getter, __LINE__) = (void*)&THREE_WAY_PASTER(__ASSOCIATED_STORAGE_KEY_, getter,__LINE__); \
\
- (type)getter { return objc_getAssociatedObject(self, THREE_WAY_PASTER(__ASSOCIATED_STORAGE_KEY_, getter,__LINE__) ); } \
\
- (void)setter: (type)value { objc_setAssociatedObject(self, THREE_WAY_PASTER(__ASSOCIATED_STORAGE_KEY_, getter,__LINE__) , value, policy); } \

#endif

