//
//  CPDFirstViewController.h
//  CorePlotDemo
//
//  Created by muhammad.aftab on 13/11/2013.
//  Copyright (c) 2013 muhammad.aftab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CPDPieChartViewController : UIViewController <CPTPlotDataSource, UIActionSheetDelegate>
@property (nonatomic, strong) IBOutlet UIToolbar *toolbar;
@property (nonatomic, strong) IBOutlet UIBarButtonItem *themeButton;

-(IBAction)themeTapped:(id)sender;
@end
