//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class NSAttributedString, NSFont, NSString;

@interface NSFormCell : NSActionCell
{
    double _titleWidth;
    id _titleCell;
    double _titleEndPoint;
    double _preferredTextFieldWidth;
}

+ (void)initialize;
@property long long titleBaseWritingDirection;
@property(copy) NSAttributedString *placeholderAttributedString;
@property(copy) NSString *placeholderString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (id)_selectOrEdit:(const struct CGRect *)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_layoutTitleRect:(struct CGRect *)arg1 interiorChromeRect:(struct CGRect *)arg2 interiorTextRect:(struct CGRect *)arg3 withFrame:(struct CGRect)arg4 inView:(id)arg5;
- (struct CGRect)_titleRectForCellFrame:(struct CGRect)arg1;
- (void)_drawLiveResizeHighlightWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_highlightsWithHighlightRect;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
@property(readonly, getter=isOpaque) BOOL opaque;
- (void)setEnabled:(BOOL)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
@property unsigned long long titleAlignment;
@property(retain) NSFont *titleFont;
- (void)setAttributedTitle:(id)arg1;
- (id)attributedTitle;
- (void)setTitleWithMnemonic:(id)arg1;
@property(copy) NSString *title;
@property double preferredTextFieldWidth;
@property double titleWidth;
- (double)titleWidth:(struct CGSize)arg1;
- (BOOL)acceptsFirstResponder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (void)_updateFormAlignmentForUserInterfaceLayoutDirection;
- (id)init;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityTitleRect;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsPlaceholderValueAttributeSettable;
- (id)accessibilityPlaceholderValueAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsTitleUIElementAttributeSettable;
- (id)accessibilityTitleUIElementAttribute;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeNames;

@end
