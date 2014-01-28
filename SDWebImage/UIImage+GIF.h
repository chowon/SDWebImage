//
//  UIImage+GIF.h
//  LBGIFImage
//
//  Created by Laurin Brandner on 06.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GIF)

+ (UIImage *)sd_animatedGIFNamed:(NSString *)name;

+ (UIImage *)sd_animatedGIFWithData:(NSData *)data;

+ (size_t)countOfGIFImageWithData:(NSData *)data;

+ (void)sd_animatedGifWithData:(NSData *)data index:(NSInteger)index resultBlock:(void (^)(UIImage *image, NSTimeInterval duration, size_t count))resultBlock;

- (UIImage *)sd_animatedImageByScalingAndCroppingToSize:(CGSize)size;

@end
