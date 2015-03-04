//
//  CadastrarFilhosViewController.h
//  OndeEstaMeuFilho
//
//  Created by Ana Elisa Pessoa Aguiar on 03/03/15.
//  Copyright (c) 2015 Ana Elisa Pessoa Aguiar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FilhosSingleton.h"
#import "Filho.h"
#import "FilhosSingleton.h"

@interface CadastrarFilhosViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *novoFilho;

- (IBAction)confirmar:(id)sender;

@end
