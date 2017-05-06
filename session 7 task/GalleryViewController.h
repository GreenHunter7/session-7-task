//
//  GalleryViewController.h
//  session 7 task
//
//  Created by GreenRoot on 5/5/17.
//  Copyright © 2017 GreenRoot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GalleryViewController : UIViewController<UICollectionViewDelegate,UICollectionViewDataSource>{
    
    NSInteger OffsetImages;

    NSMutableArray *ImageArray;
}

@property (strong, nonatomic) IBOutlet UIBarButtonItem *sideBarButton;
@property (strong, nonatomic) IBOutlet UIImageView *bigImageView;
@property (strong, nonatomic) IBOutlet UIScrollView *BigScrollView;
@property (strong, nonatomic) IBOutlet UICollectionView *collectionGallery;

-(void)onTimer;

@end
