#include"linktable.h"
#include<stdio.h>
LNode head[] =
{
	{"help", &help, head+1},
	{"quit", &quit, head+2},
	{"greet", &greet, head+3},
	{"square", &square, head+4},
	{"perimt", &perimt, head+5},
	{"power", &power, head+6},
	{"jgyear", &jgyear, head+7},
	{"divi", &divi, NULL}
};
int main(int argc, char *argv[])
{
	char cmd[LEN];
	help();
	printf("\n\n");
	while(1)
	{
		printf("Please input your command: ");
		scanf("%s", cmd);
		LNode *p = findCmdInLinkedList(head, cmd);
		if(NULL == p)
		{
			printf("No such cmd\n");
			help();
			continue;
		}
		if(p -> func != NULL)
			p -> func();
		printf("\n\n");
	}
	return 0;
}
