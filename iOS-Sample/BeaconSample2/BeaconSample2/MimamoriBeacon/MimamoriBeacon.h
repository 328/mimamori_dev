//
//  MimamoriBeacon.h
//  BeaconSample2
//
//  Created by 高山博行 on 2016/11/17.
//  Copyright © 2016年 高山博行. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "BeaconInfo.h"

/**
 *  SampleViewControllerDelegate プロトコル
 */
@protocol BeaconDelegate <NSObject>

/**
 * serach beacon
 */
//- (void)searchBeaconInfo:(BeaconInfo *)beaconInfo;
/**
 * serach beacon
 */
- (void)searchBeaconInfo:(NSString *)message title:(NSString *)title;
/**
 * is beacon
 */
- (void)isBeacon:(BOOL)status;

@end

@interface MimamoriBeacon : NSObject<CLLocationManagerDelegate>
{
    // 緯度
    double _latitude;
    // 経度
    double _longitude;
    // range flug
    BOOL _isRange;
    // beacon
    NSString *_beacon;
    //
    NSMutableArray *_BeaconList;
    //
    NSTimer *_timer;
}

@property (nonatomic, assign) id<BeaconDelegate> delegate;

@property (strong, nonatomic) NSString *Identifier;
@property (strong, nonatomic) CLLocationManager *LocationManager;
@property (strong, nonatomic) CLBeaconRegion *Region;

/**
 * init
 */
- (id)initIdentifier:(NSString *)identifier;
/**
 * set uuid, major, minor
 */
- (void)setUUID:(NSString *)uuid major:(NSString *)major minor:(NSString *)minor;
/**
 * set uuid, major
 */
- (void)setUUID:(NSString *)uuid major:(NSString *)major;
/**
 * set uuid
 */
- (void)setUUID:(NSString *)uuid;
/**
 * beacon on
 */
- (void)on;
/**
 * beacon off
 */
- (void)off;
@end
