//
//  SPIDAppController.h
//
//  Copyright 2009 Kelan Champagne. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "YRKSpinningProgressIndicator.h"


@interface SPIDAppController : NSObject {
    NSViewAnimation *viewAnimation;

    IBOutlet NSProgressIndicator *progressIndicator;
    IBOutlet YRKSpinningProgressIndicator *turboFan;
    IBOutlet NSButton *piButton;
    IBOutlet NSButton *tfButton;

    IBOutlet NSColorWell *ftForegroundColor;
    IBOutlet NSColorWell *ftBackgroundColor;
    BOOL tfIsRunning, piIsRunning;

}

- (IBAction)toggleProgressIndicator:(id)sender;
- (IBAction)toggleTurboFan:(id)sender;

- (IBAction)changeForegroundColor:(id)sender;
- (IBAction)changeBackgroundColor:(id)sender;
- (IBAction)toggleDrawBackground:(id)sender;

@end
