//
//  NodePlayer.h
//  NodeMediaClient v1.2.6
//
//  Created by Mingliang Chen on 16/8/15.
//  Copyright © 2016年 NodeMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol NodePlayerDelegate

-(void) onEventCallback:(id)sender event:(int)event msg:(NSString*)msg;

@end

@interface NodePlayer : NSObject

@property (nonatomic, weak) id<NodePlayerDelegate> nodePlayerDelegate;
@property (nonatomic, strong) NSString *pageUrl;
@property (nonatomic, strong) NSString *swfUrl;
@property (nonatomic) int bufferTime;
@property (nonatomic) int maxBufferTime;
@property (nonatomic) bool receiveAudio;
@property (nonatomic) bool receiveVideo;
@property (nonatomic) bool subscribe;

-(int) setUIView:(UIView*)playVideoView ContentMode:(UIViewContentMode)contentMode;
-(int) startPlay:(NSString*)rtmpUrl;
-(int) stopPlay;
-(int) getBufferLength;
-(int) setSpkEnable:(BOOL)spkEnable;
-(BOOL) capturePicture:(NSString*)filePath;
@end
