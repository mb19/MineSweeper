//
//  ViewController.h
//  MineSweeper
//
//  Created by Wayne O. Cochran on 4/14/15.
//  Copyright (c) 2015 Wayne O. Cochran. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MineField.h"

@interface ViewController : NSViewController

@property (weak) IBOutlet NSMatrix *minefieldMatrix;
@property (weak) IBOutlet NSTextField *scoreTextField;

- (IBAction)newGame:(id)sender;
- (IBAction)levelSelected:(NSPopUpButton *)sender;
- (IBAction)minefieldMatrixCellSelected:(NSMatrix *)sender;

@property (strong, nonatomic) MineField *mineField;

@property (strong, nonatomic) NSImage *bombImage;
@property (strong, nonatomic) NSImage *flagImage;

-(void)rightClicked:(NSMatrix*)sender;

@end

