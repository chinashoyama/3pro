/*
 * Copyright Ricoh Company, Ltd. All rights reserved.
 */

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet UITextField *ipField;
@property (nonatomic, strong) IBOutlet UIButton *connectButton;
@property (strong, nonatomic) IBOutlet UIButton *captureButton;
@property (strong, nonatomic) IBOutlet UIButton *imageSizeButtom;
@property (nonatomic, strong) IBOutlet UIImageView *motionJpegView;
@property (nonatomic, strong) IBOutlet UITableView *contentsView;
@property (nonatomic, strong) IBOutlet UITextView *logView;
@property NSTimeInterval startTime;
@property IBOutlet UILabel *timerLabel;
@property IBOutlet UILabel *countPicture;
- (IBAction)onCaptureClicked:(id)sender;
- (IBAction)timerStop:(id)sender;

@end
