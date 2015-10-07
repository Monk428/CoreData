//
//  CoreDataDao.h
//  Stocks
//
//  Created by gree's apple on 24/6/15.
//  Copyright (c) 2015 WJF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CoreDataDao : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

- (void)insertCoreData:(NSMutableArray *)dataArray;
- (NSMutableArray *)selectData:(int)pageSize andOffset:(int)currentPage;
- (void)deleteData;
- (void)updateData:(NSString *)newsId withIsLook:(NSString *)islook;


@end
