//
//  CPDScatterPlotViewController.h
//  CorePlotDemo
//
//  Created by muhammad.aftab on 13/11/2013.
//  Copyright (c) 2013 muhammad.aftab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CPDScatterPlotViewController : UIViewController<CPTPlotDataSource>
@property (nonatomic, strong) CPTGraphHostingView *hostView;
@end
