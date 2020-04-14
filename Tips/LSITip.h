//
//  LSITip.h
//  Tips
//
//  Created by Nick Nguyen on 4/14/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSITip : NSObject
// What information do we need to store?

// property attribute (* = default)

// readonly
// readwrite

// copy
// assign* (default for primitive types)

// atomic:
// nonatomic : use nonatomic most of the time

// total
// # of people
// percent
// name
@property(readonly,nonatomic) double total;

// 1. setter method is created by complier
// - (void) setTotal: (double)total;

// 2. getter method is created by complier
// - (double)total;

// 3. create an instance variable (_total)
// double _total;

@property (readonly,nonatomic)int splitCount;
@property (readonly,nonatomic)double tipPercentage;

//Always use copy with NSString, NSArray, NSSet
@property (readonly,nonatomic,copy)NSString *name; //* : pointer

-(instancetype)initWithTotal:(double)total // Init
                  splitCount:(int)splitCount tipPercentage:(double)tipPercentage name:(NSString *)name;
// Trick: copy and paste init to the m file

@end

NS_ASSUME_NONNULL_END
