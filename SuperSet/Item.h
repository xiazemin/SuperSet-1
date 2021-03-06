#import "_Item.h"
#import "ItemTag.h"

@interface Item : _Item {
  NSMutableSet *tags_;
  NSString *firstLetter_;
}

- (NSString *) tagDescription;

@property (nonatomic, retain) NSMutableSet *tags_;
@property (nonatomic, retain) NSMutableSet *tags;

@property (nonatomic, retain) NSString *firstLetter;

@end
