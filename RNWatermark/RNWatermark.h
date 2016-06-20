//
//  RNWatermark.h
//  RNWatermark
//
//  Created by watzak on 16/11/15.
//

#import "RCTBridge.h"
#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CMTime.h>

@interface RNWatermark : NSObject <RCTBridgeModule>


- (void)exportDidFinish:(AVAssetExportSession*)session;
- (void)applyVideoEffectsToComposition:(AVMutableVideoComposition *)composition size:(CGSize)size;


@end
