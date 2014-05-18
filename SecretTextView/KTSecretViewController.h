//
//  KTSecretViewController.h
//
//  Created by Kenny Tang on 4/30/14.
//  Copyright (c) 2014 Corgitoergosum. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DZNPhotoPickerController.h"

@protocol KTSecretViewControllerDelegate;

/*!
 *  View Controller that hosts the secret view.
 */
@interface KTSecretViewController : UIViewController<DZNPhotoPickerControllerDelegate>

@property (nonatomic, weak) id<KTSecretViewControllerDelegate,UIActionSheetDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate> delegate;

@end


@protocol KTSecretViewControllerDelegate <NSObject>

- (void)secretViewController:(KTSecretViewController*)vc secretViewSnapshot:(UIView*)snapshotView backgroundImage:(UIImage*)backgroundImage attributedString:(NSAttributedString*)attributedString;

@end