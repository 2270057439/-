//
//  Config.h
//  Enjoy
//
//  Created by Sam McCall on 4/05/09.
//  Copyright 2009 University of Otago. All rights reserved.
//

@class Target;
@class JSAction;

@interface Config : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSMutableDictionary *entries;

- (id)initWithName:(NSString *)name;
- (Target *)objectForKeyedSubscript:(JSAction *)action;
- (void)setObject:(Target *)target forKeyedSubscript:(JSAction *)action;
- (NSDictionary *)serialize;

@end
