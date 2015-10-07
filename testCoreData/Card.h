//
//  Card.h
//  testCoreData
//
//  Created by gree's apple on 7/10/15.
//  Copyright (c) 2015年 WJF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Person;

@interface Card : NSManagedObject

@property (nonatomic, retain) NSNumber * no;
@property (nonatomic, retain) Person *person;

@end
