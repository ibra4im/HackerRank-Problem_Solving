SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position)
{
    //create new node
    SinglyLinkedListNode* newnode = create_singly_linked_list_node(data);
    // handle case 0 if position is 0 "head"
    if (position == 0)
    {
        newnode->next = llist ;
        return newnode;
    }

int i = 0 ;
SinglyLinkedListNode* temp = llist ;
//traversing until the node befor the position
while (i < position -1 && temp != NULL )
{
    temp = temp->next;
    i++;
}
// check if the position out of range
if (temp == NULL)
{
    return llist ;
}
// insert in the position
newnode->next = temp->next ;
temp->next = newnode ;
return llist;
}