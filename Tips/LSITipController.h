//
//  LSITipController.h
//  Tips
//
//  Created by Nick Nguyen on 4/14/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
// Forward class declaration  (this classes details will be shared later, but I want to use a placeholder for now)
// Helps with build times being faster
// Helps with classes that need to include each other (import cycle)
@class LSITip;


@interface LSITipController : NSObject

// Public properties
@property (nonatomic,readonly)NSArray<LSITip *> *tips;


// Public Methods
-(void)addTip:(LSITip *)tip;



@end

NS_ASSUME_NONNULL_END
