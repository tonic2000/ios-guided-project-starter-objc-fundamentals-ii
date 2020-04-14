//
//  LSITip.m
//  Tips
//
//  Created by Nick Nguyen on 4/14/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import "LSITip.h"

@implementation LSITip

@synthesize name = _name; // do this when you override both setter/ getter or disable them, you need to tell the complier to still create your backing instance variable

-(instancetype)initWithTotal:(double)total // Init
                  splitCount:(int)splitCount tipPercentage:(double)tipPercentage name:(NSString *)name {
    self = [super init];
    if (self) {
        // init or dealloc (deinit) we want to use the
        // _uderscoreVariableName for assignment
        // This prevent side effects from property didSet/willSet 
        _total = total; // == to self.total = total
        _splitCount = splitCount;
        _tipPercentage = tipPercentage;
        _name = name;
        
    }
    return self;
}


- (NSString *)name {
    NSLog(@"accessing name");
    return _name;
}

@end
