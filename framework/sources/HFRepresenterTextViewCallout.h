//
//  HFRepresenterTextViewCallout.h
//  HexFiend_2
//
//  Copyright 2011 ridiculous_fish. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class HFRepresenterTextView;

#define kHFRepresenterTextViewCalloutMaxGlyphCount 2u

@interface HFRepresenterTextViewCallout : NSObject

@property(nonatomic) NSInteger byteOffset;
#if TARGET_OS_IPHONE
@property(nullable, nonatomic, copy) UIColor *color;
#else
@property(nullable, nonatomic, copy) NSColor *color;
#endif
@property(nullable, nonatomic, copy) NSString *label;
@property(nullable, nonatomic, retain) id representedObject;
@property(readonly) CGRect rect;

+ (void)layoutCallouts:(NSArray *)callouts inView:(HFRepresenterTextView *)textView;

- (void)drawShadowWithClip:(CGRect)clip context:(CGContextRef)ctx;
- (void)drawWithClip:(CGRect)clip context:(CGContextRef)ctx;

@end

NS_ASSUME_NONNULL_END

