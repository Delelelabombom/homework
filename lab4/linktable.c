#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"linktable.h"
LNode * findCmdInLinkedList(LNode *head, char *cmd)
{
	if(NULL == cmd || NULL == head)
		return NULL;
	LNode *p = head;
	while(p != NULL)
	{
		if(!strcmp(cmd, p -> cmd))
			return p;
		p = p -> next;
	}
	return NULL;
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
    printf("+ divi    + division of two numbers         +\n");
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
