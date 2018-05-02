//
//  ViewController.h
//  Calculator
//
//  Created by SBT on 02/05/2018.
//  Copyright © 2018 SBT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    
    int currentOperation;
    float result;
    float currentNumber;
    
}
@property (weak, nonatomic) IBOutlet UILabel *Label;
- (IBAction)NuttonDigit:(id)sender;
- (IBAction)ButtonOpertion:(id)sender;
- (IBAction)Cancel:(id)sender;


@end

