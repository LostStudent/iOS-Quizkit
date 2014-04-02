/*
 Copyright (c) 2012 Inline Studios
 Licensed under the MIT license: http://www.opensource.org/licenses/mit-license.php
 */

#import <UIKit/UIKit.h>
#import "ISQuizKit.h"
#import "QuizController.h"
#import "BaseQuestionViewController.h"

@interface TrueFalseViewController : BaseQuestionViewController
{
    IBOutlet UITextView* _questionTextView;
    ISTrueFalseQuestion* _question;
    ISTrueFalseResponse* _response;
}

- (id)initWithTrueFalseQuestion:(ISTrueFalseQuestion*)question
                       response:(ISTrueFalseResponse*)response
                     controller:(id <QuizController>)controller
                  responceGiven:(ISQuestionResponseWasGiven)responceGiven;


@end
