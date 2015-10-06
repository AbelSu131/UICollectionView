//
//  ViewController.h
//  UICollectionView
//
//  Created by abel on 15/10/5.
//  Copyright © 2015年 abel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
@property(strong,nonatomic)UICollectionView *collectionView;

@end

