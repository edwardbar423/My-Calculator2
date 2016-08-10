//
//  main.c
//  My Calculator 2
//
//  Created by Andrew Barber on 8/9/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int numOne = 7;
    int numTwo = 7;
    int calcEh = 7;
    int pam = 7;
    
    printf("What is your first number?: ");
    scanf("%d", &numOne);
    
    printf("What is your second number?: ");
    scanf("%d", &numTwo);
    
    printf("Addition: 0\nSubtraction: 1\nMultiplication: 2\nDivision: 3\n\nHow do you want to calculate?: \n");
    while(calcEh < 0 || calcEh > 3) {
        fpurge(stdin);
        scanf("%d", &calcEh);
    }
    
    if (calcEh == 0) {
        (pam = numOne + numTwo);
        printf("Your number is... %d \n", pam);
    }
    if (calcEh == 1) {
        (pam = numOne - numTwo);
        printf("Your number is... %d \n", pam);
    }
    if (calcEh == 2) {
        (pam = numOne * numTwo);
        printf("Your number is... %d \n", pam);
    }
    if (calcEh == 3) {
        (pam = numOne / numTwo);
        printf("Why did you do that...? %d \n", pam);
    }
    
    
    return 0;
}
