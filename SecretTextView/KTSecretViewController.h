//
//  KTSecretViewController.h
//
//  Created by Kenny Tang on 4/30/14.
//  Copyright (c) 2014 Corgitoergosum. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DZNPhotoPickerController.h"
#import "GrabKit.h"
#import "GRKPickerViewController.h"
#import "GRKAlbum.h"

@protocol KTSecretViewControllerDelegate;

/*!
 *  View Controller that hosts the secret view.
 */
@interface KTSecretViewController : UIViewController<DZNPhotoPickerControllerDelegate,GRKPickerViewControllerDelegate>

@property (nonatomic, weak) id<KTSecretViewControllerDelegate,UIActionSheetDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate> delegate;

@end


@protocol KTSecretViewControllerDelegate <NSObject>

- (void)secretViewController:(KTSecretViewController*)vc secretViewSnapshot:(UIView*)snapshotView backgroundImage:(UIImage*)backgroundImage attributedString:(NSAttributedString*)attributedString;

@end