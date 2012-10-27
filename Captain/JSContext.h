//
//  JSContext.h
//  JavascriptDemo
//
//  Created by Jon Manning on 9/10/12.
//  Copyright (c) 2012 Secret Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef id(^JSExtensionFunction)(NSArray* parameters);

@interface JSContext : NSObject

- (void)loadScriptNamed:(NSString*)fileName error:(NSError**)error;

- (id) evaluateScript:(NSString*)script error:(NSError**)error;

- (void) addFunction:(JSExtensionFunction)function withName:(NSString*)functionName;

- (void) addFunctionsWithDictionary:(NSDictionary*)functionDictionary withName:(NSString*)functionDictionaryName;

- (void) setProperty:(NSString*)propertyName toObject:(id)object;

- (id) callFunction:(NSString*)functionName withParameters:(NSArray*)parameters object:(NSObject*)thisObject error:(NSError**)error;


@end