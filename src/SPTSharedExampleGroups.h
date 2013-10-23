#import <Foundation/Foundation.h>
#import "SpectaTypes.h"

@class
  SPTExampleGroup
;

@interface SPTSharedExampleGroups : NSObject

+ (void)addSharedExampleGroupWithName:(NSString *)name block:(SPTDictionaryBlock)block exampleGroup:(SPTExampleGroup *)exampleGroup;
+ (SPTDictionaryBlock)sharedExampleGroupWithName:(NSString *)name exampleGroup:(SPTExampleGroup *)exampleGroup;
+ (void)defineSharedExampleGroups;

#ifdef XCT_EXPORT
+ (void) recordFailureWithDescription:(NSString *) description inFile:(NSString *) filename atLine:(NSUInteger) lineNumber expected:(BOOL) expected;
#else
+ (void)failWithException:(NSException *)exception;
#endif

@end

