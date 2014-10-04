//
//  OWOuterSpaceTableViewController.h
//  Out of this World
//
//  Created by Robin van 't Slot on 24-09-14.
//  Copyright (c) 2014 BrickInc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"
#import "OWAddSpaceObjectViewController.h"

@interface OWOuterSpaceTableViewController : UITableViewController <OWAddSpaceObjectViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *planets;
@property (nonatomic, strong) NSMutableArray *addedSpaceObjects;


@end
