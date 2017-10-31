int MenuConfig(char *cmd, char *desc, int (*handler)(int argc, char *argv[]))
{
    tDataNode *pNode = NULL;
    if(head == NULL)
    {
        head = (tLinkTable *)CreateLinkTable();
        pNode = (tDataNode *)malloc(sizeof(tDataNode));
        pNode->cmd = "help";
        pNode->desc = "Help List";
        pNode->handler = Help;
        AddLinkTableNode(head, (tLinkTableNode *)pNode);
    }
    pNode = (tDataNode *)malloc(sizeof(tDataNode));
    pNode->cmd = cmd;
    pNode->desc = desc;
    pNode->handler = handler;
    AddLinkTableNode(head, (tLinkTableNode *)pNode);
}
