#import "XCTestCase+Specta.h"
#import "SPTXCTestCase.h"

@implementation XCTestCase (Specta)

- (NSString *)SPT_title
{
    if ([self isKindOfClass:[SPTXCTestCase class]])
    {
        SPTExample * example = [(SPTXCTestCase *)self SPT_getCurrentExample];
        return [example name];
    }
    else
    {
        return NSStringFromSelector([self selector]);
    }
}

@end
