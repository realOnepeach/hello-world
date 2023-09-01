//
//  main.c
//  My Project
//  Two functions in one file
//  Created by Chenyu Tao on 31/08/2023.
//

#include <stdio.h>
// ANSI/ISO function prototypes
void butler(void);
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void smile(void);
void one_three(void);
void two(void);

int main(int argc, const char * argv[]) {
    // Declare a and b then calculate them
    int a, b;
    
    a = 5;
    b = 2;
    b = a;
    a = b;
    printf("%d %d\n", b, a);
    
    // Declare x and y then calculate them
    int x, y;
    
    x = 10;
    y = 5;
    y = x + y;
    x = x * y;
    printf("%d %d\n", x, y);
    
    // Declare num then print it
    int num;
    
    num = 1;
    printf("I'm a simple ");
    printf("computer. \n");
    printf("My favorite number is %d becasue it is first. \n",num);
    printf("Hello, World!\n");
    
    // Transfer 2 fanthom to feet.
    int feet, fathoms;
    
    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);
    
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes, bring me some tea and writeable DVDs.\n");
    
    // Print my name
    printf("Tao Chenyu\n");
    printf("Tao\nChenyu\n");
    printf("Tao");
    printf(" Chenyu\n");
    
    // Print my name and adress
    printf("Tao Chenyu\nChunshuian' Donghu, No. 166 Huanle Avenue, Hongshan District, Wuhan, Hubei, China.\n");
    
    // Print my age and transfer it to days
    int age, days;
    
    age = 26;
    days = age * 365 + (365 - 122); /* days of previous years plus days of this year has been thorugh */
    printf("My age is %d and the number of days which it transfers is %d.\n", age, days);
    
    // Call functions "jolly" and "deny"
    jolly();
    deny();
    
    // Call functions "br" and "ic"
    br();
    printf(", ");
    ic();
    ic();
    br();
    printf("\n");
    
    // Get different values of "toes"
    int toes, doubleToes, squaredToes;
    
    toes = 10;
    doubleToes = 2 * toes;
    squaredToes = toes * toes;
    printf("The value of toes is %d.\nThe value of double toes is %d.\nThe value of squared toes is %d.\n", toes, doubleToes, squaredToes);
    
    // Call the function "smile"
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");
    
    // Call functions "one_three" and "two" and print other words
    printf("starting now:\n");
    one_three();
    printf("three\n");
    printf("done!\n");
    
    // Your weight in platinum
    float weight;
    float value;
    
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    
    scanf("%f", & weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    
    return 0;
}

void butler(void) /* define the function butler */
{
    printf("You rang, sir?\n");
}

void jolly(void) /* define the function jolly */
{
    printf("For he's a jolly good fellow!\nFor he's a jolly good fellow!\nFor he's a jolly good fellow!\n");
    
}

void deny(void) /* define the function deny */
{
    printf("Which nobody can deny!\n");
}

void br(void) /* define the function br */
{
    printf("Brazil, Russia");
}

void ic(void) /* define the function ic */
{
    printf("India, China\n");
}

void smile(void) /* define the function smile */
{
    printf("Smile!");
}

void one_three(void) /* define the function one_three */
{
    printf("one\n");
    two();
}

void two(void) /* define the function two */
{
    printf("two\n");
}
