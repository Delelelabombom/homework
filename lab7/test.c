#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "linktable.h"
#include "menu.h"
/*
int getopt(int argc, char * const argv[], const char *optstring);
extern char *optarg;
extern int optind, opterr, optopt;
*/
int Quit(int argc, char* argv[]);
int main(int argc, char* argv[])
{
    MenuConfig("version", "Menu Program V3.0", NULL);
    MenuConfig("quit", "Quit from Menu Program V3.0", Quit);
    ExecuteMenu();
}
int Quit(int argc, char* argv[])
{
    int oc;
    char *b_opt_arg;
    while((oc = getopt(argc, argv, "cl:\n")) != -1)
    {
        switch(oc)
        {
            case 'c':
                printf("Clean Success,exiting\n");
                //delay(2000);
                sleep(2);
                break;
            case 'l':
                b_opt_arg = optarg;
                printf("Log :%s\n",optarg);
                //delay(2000);
                sleep(2);
                break;
            case '\n':
                break;

        }

    }
    exit(0);
}
