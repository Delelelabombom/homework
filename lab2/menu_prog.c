#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quit();
void perimt();//perimeter
void greet();
void square();
void help();
void power();
void jgyear();//judge a year is a leap year or not
void divi();
int main()
{
    char cmd[256];
    while (1)
    {
        scanf ("%s", cmd);
        if (strcmp(cmd, "help") == 0)
        {
            help();
        }
        else if (strcmp(cmd, "quit") == 0)
        {
            quit();
        }
        else if (strcmp(cmd, "greet") == 0)
        {
            greet();
        }
        else if (strcmp(cmd, "square") == 0)
        {
            square();
        }
        else if (strcmp(cmd, "perimt") == 0)
        {
            perimt();
        }
        else if (strcmp(cmd, "power") == 0)
        {
            power();
        }
        else if (strcmp(cmd, "jgyear") == 0)
        {
            jgyear();
        }
        else if (strcmp(cmd, "div") == 0)
        {
            divi();
        }
        else
        {
            printf("Sorry we have not achieve this function yet!\n\n");
            help();
        }

    }

    return 0;
}
void help()
{
    printf("+--------+---------------------------------+\n");
    printf("+ CMD    + desciption                      +\n");
    printf("+--------+---------------------------------+\n");
    printf("+ help   + cmd man                         +\n");
    printf("+ quit   + quit cmd                        +\n");
    printf("+ greet  + greetings                       +\n");
    printf("+ square + square of a round               +\n");
    printf("+ perimt + perimeter of a round            +\n");
    printf("+ power  + pow of two numbers              +\n");
    printf("+ jgyear + judge is a leap year or not     +\n");
    printf("+ div    + division of two numbers         +\n");
    printf("+--------+---------------------------------+\n");
}
void quit()
{
    exit(0);
}
void greet()
{
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Hello, I'm AlphaGo\n");
    printf("You must be very handsome(beautiful)!\n");
    printf("Thank you for using the menu program!\n");
    printf("+-------*--------*--------*--------*-------+\n");
}
void square()
{
    double round_r, s;//a round's R
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Please input a round's radius:"); 
    scanf("%lf", &round_r);
    s = 3.14159 * round_r * round_r;
    printf("The round's square is %lf\n", s);
    printf("+-------*--------*--------*--------*-------+\n");
}
void perimt()
{
    double radius, perimeter;
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Please input a round's radius:");
    scanf("%lf",&radius);
    perimeter = 2 * 3.14159 * radius;
    printf("The round's perimeter is %lf\n", perimeter);
    printf("+-------*--------*--------*--------*-------+\n");
}
void power()
{
    double result, num1, num2;
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Power!\n please input two numbers:");
    scanf("%lf %lf",&num1, &num2);
    result = pow(num1, num2);
    printf("pow(%lf, %lf) = %lf\n",num1, num2, result);
    printf("+-------*--------*--------*--------*-------+\n");
}
void divi()
{
    double num1,num2,div;
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Division!\n please input two numbers:");
    scanf("%lf %lf",&num1, &num2);
    if (num2 == 0)
    {
        printf("Error:divisor can not be zero!\n");
    }
    else
    {
        div = num1 / num2;
        printf("%lf / %lf = %lf\n",num1, num2, div);
    }
    printf("+-------*--------*--------*--------*-------+\n");
}
void jgyear()
{
    int year, judge;
    printf("+-------*--------*--------*--------*-------+\n");
    printf("JudgeAYear!\n please input a year: ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 400 != 0 || year % 400 == 0) 
        judge = 1;
    else judge = 0;
    printf("%d is ", year);
    if(judge == 0)
        printf("not");
    printf(" a leap year!\n");
    printf("+-------*--------*--------*--------*-------+\n");
}
