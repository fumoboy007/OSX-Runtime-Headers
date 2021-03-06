//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTableColumn, NSTableView;

@protocol NSTableViewCellElement <NSObject>
+ (id <NSTableViewCellElement>)cellForRow:(long long)arg1 tableColumn:(NSTableColumn *)arg2;
+ (id <NSTableViewCellElement>)cellForRow:(long long)arg1 column:(long long)arg2 tableView:(NSTableView *)arg3;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (NSTableView *)tableView;
- (long long)column;
- (long long)row;
@end

