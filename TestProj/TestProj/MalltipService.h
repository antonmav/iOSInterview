//
//  MalltipService.h
//  TestProj
//
//  Created by Anton Marinov on 1/29/14.
//  Copyright (c) 2014 Anton Marinov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HttpService.h"
#import "FeedParser.h"


@protocol MalltipServiceDelegate <NSObject>


@optional
- (void)MalltipServiceDIdGetFeeds:(NSArray *)feeds withOffset:(NSNumber*)offset;


@end


@interface MalltipService : NSObject <HttpServiceDelegate,FeedParserDelegate>

@property id<MalltipServiceDelegate> delegate;

- (void)getFeedsWithMallID:(NSString*)strMallID andOffset:(int)offset;

@end
