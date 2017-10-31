int ExecuteMenu()
{
    //InitMenuData(&head); 
    //char cmd[81];
   /* cmd line begins */
    while(1)
    {
        //char cmd[CMD_MAX_LEN];
        int argc = 0;
        char *argv[CMD_MAX_ARGV_LEN];
        //char cmd[CMD_MAX_LEN];
        char *pcmd = NULL;
        printf("Input a cmd number > ");
        //scanf("%s", cmd);
        pcmd = fgets(cmd, CMD_MAX_LEN, stdin);

        if(pcmd == NULL)
        {
            continue;
        }

        pcmd = strtok(pcmd, " ");

        while(pcmd != NULL && argc < CMD_MAX_ARGC_LEN)
        {
            printf("%s\n", pcmd);
            argv[argc] = pcmd;
            argc++;
            pcmd = strtok(NULL, " ");
        }
        if(argc == 1)
        {
            int len = strlen(argv[0]);
            *(argv[0] + len - 1) = '\0';
        }
        tDataNode *p = FindCmd(head, argv[0]);
        if( p == NULL)
        {
            printf("This is a wrong cmd!\n ");
            continue;
        }
        printf("%s - %s\n", p->cmd, p->desc); 
        if(p->handler != NULL) 
        { 
            p->handler(argc, argv);
        }

    }
}
