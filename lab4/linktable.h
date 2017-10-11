#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H
typedef struct LinkNode
{
	char *cmd;
	void (*func)();
	struct LinkNode *next;
}LNode;
extern LNode * findCmdInLinkedList(LNode *head, char *cmd);
extern void quit();
extern void perimt();//perimeter
extern void greet();
extern void square();
extern void help();
extern void power();
extern void jgyear();//judge a year is a leap year or not
extern void divi();
#define LEN 64 //cmd max length
#endif
