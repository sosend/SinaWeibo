//
//  WeiboDetailViewController.h
//  SinaWeiBoSDKDemo
//
//  Created by Singro on 3/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellBody.h"
#import "CellHeader.h"
#import "HJObjManager.h"

@interface WeiboDetailContentViewController : UITableViewController {
    NSDictionary *detail;
    HJObjManager *objMan;
}

@property (strong, readwrite) NSDictionary *detail;

- (id)initWithData:(NSDictionary *)data obj:(HJObjManager *)_objMan;

@end
