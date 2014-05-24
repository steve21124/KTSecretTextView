//
//  SocialPhotoPickerViewController.h
//  EasySample
//
//  Created by Steve on 7/6/13.
//
//

#import <UIKit/UIKit.h>
#import "GrabKit.h"
#import "GRKPickerViewController.h"
#import "GRKAlbum.h"

@interface SocialPhotoPickerViewController : UIViewController<GRKPickerViewControllerDelegate>
- (id)initWithRouterParams:(NSDictionary *)params;
@end
