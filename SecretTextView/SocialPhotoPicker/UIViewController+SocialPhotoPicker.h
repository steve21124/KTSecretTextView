//
//  UIViewController+PhotoPicker.h
//  EasySample
//
//  Created by Steve on 6/9/13.
//
//

#import <UIKit/UIKit.h>
#import "GrabKit.h"
#import "GRKPickerViewController.h"
#import "GRKAlbum.h"

@interface UIViewController (SocialPhotoPicker)<GRKPickerViewControllerDelegate>
- (id)initWithRouterParams:(NSDictionary *)params;
- (void)socialPhotoView;
@end
