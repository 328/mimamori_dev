//
//  FirstViewController.h
//  BeaconSample2
//
//  Created by 高山博行 on 2016/11/17.
//  Copyright © 2016年 高山博行. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MimamoriBeacon.h"
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreLocation/CoreLocation.h>

@interface FirstViewController : UIViewController<BeaconDelegate,CBPeripheralManagerDelegate,UIAlertViewDelegate,UIActionSheetDelegate> {
    BOOL _isSendMsg;
    MimamoriBeacon *_Beacon[2];
}

@property (strong, nonatomic) IBOutlet UITextField *UUIDField1;
@property (strong, nonatomic) IBOutlet UITextField *MajorField1;
@property (strong, nonatomic) IBOutlet UITextField *MinorField1;
@property (strong, nonatomic) IBOutlet UITextField *UUIDField2;
@property (strong, nonatomic) IBOutlet UITextField *MajorField2;
@property (strong, nonatomic) IBOutlet UITextField *MinorField2;
@property (strong, nonatomic) IBOutlet UIButton *BeaconOnBtn;
@property (strong, nonatomic) IBOutlet UIButton *BeaconOffBtn;

@property (strong, nonatomic) CBPeripheralManager *PeripheralManager;

- (IBAction)setBtnBeaconOn:(id)sender;
- (IBAction)setBtnBeaconOff:(id)sender;

@end

