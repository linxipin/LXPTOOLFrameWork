//
//  LXPNormalTableCell.h
//  NormalTableViewCell
//
//  Created by 林希品 on 2018/12/25.
//  Copyright © 2018 林希品. All rights reserved.
//

#import <UIKit/UIKit.h>

/**setModelDelegate*/
@protocol LXPNormalTableCellDelegate <NSObject>
@optional
-(void)LXPNormalTableCellDelegateSetModelWithModel:(id)model tableCell:(UITableViewCell *)tableCell cellIndexPath:(NSIndexPath *)indexPath;
@end



//cellButtonActionBlock
typedef void(^cellSelectButtonBlock)(NSIndexPath *indexPath,UIButton *button);
//cellTextField
typedef void(^cellTextFieldBlock)(NSIndexPath *indexPath,UITextField *textField);

NS_ASSUME_NONNULL_BEGIN

@interface LXPNormalTableCell : UITableViewCell<UITextFieldDelegate>
/**UIimageView*/
@property (strong, nonatomic) UIImageView *cellImageView;
/**cellLabel*/
@property (strong, nonatomic) UILabel *cellTextLabel;
/**cellDetailLabel*/
@property (strong, nonatomic) UILabel *cellDetailLabel;
/**cellTextField*/
@property (strong, nonatomic) UITextField *cellTextField;
/**选择*/
@property (strong, nonatomic) UIButton *cellSelectButton;

/**indexPath*/
@property (strong, nonatomic) NSIndexPath *cellIndexPath;

/**cellSelectButtonAction*/
@property (copy, nonatomic) cellSelectButtonBlock buttonBlock;
/**cellTextFieldBlock*/
@property (copy, nonatomic) cellTextFieldBlock textFieldblock;

/**LXPNormalTableCellDelegate*/
@property (assign, nonatomic) id<LXPNormalTableCellDelegate> delegate;
/**model*/
@property (strong, nonatomic) id model;


//public method
-(void)addUISubView;
-(void)setupUI;




/**
 字符串的k宽度
 
 @param string f字符串
 @param fontSize 字体大小
 @return 宽度
 */
-(CGFloat)labelWidthWithString:(NSString *)string fontSize:(UIFont *)fontSize;

@end

NS_ASSUME_NONNULL_END

/**
 //
 //Label_textField  文字——输入框
 //
 */
NS_ASSUME_NONNULL_BEGIN

@interface LXPNormalTableCell_Label_textField : LXPNormalTableCell

@end

NS_ASSUME_NONNULL_END


/**
 //
 //Label_textField_button  文字——输入框——按钮
 //
 */
NS_ASSUME_NONNULL_BEGIN

@interface LXPNormalTableCell_Label_textField_button : LXPNormalTableCell

@end

NS_ASSUME_NONNULL_END


/**
 //
 //Label_Label  文字-文字
 //
 */
NS_ASSUME_NONNULL_BEGIN

@interface LXPNormalTableCell_Label_Label : LXPNormalTableCell

@end

NS_ASSUME_NONNULL_END



/**
 //
 //ImageView_Label 图片-文字
 //
 */
NS_ASSUME_NONNULL_BEGIN

@interface LXPNormalTableCell_UIImageView_Label : LXPNormalTableCell

@end

NS_ASSUME_NONNULL_END
