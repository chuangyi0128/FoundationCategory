//
//  NSString+SLREncode.h
//
//  Created by SongLi on 3/4/15.
//  Copyright (c) 2015 SongLi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SLREncode)

- (NSString *)SLR_URLEncodedString;

- (NSString *)SLR_URLDecodedString;

- (NSData *)SLR_base16Data;

- (NSString *)SLR_md5String;

- (NSDictionary *)SLR_urlParamsDecodeDictionary;

@end
