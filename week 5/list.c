#include<stdio.h>
#include<stdlib.h>
// struture of code
struct Node
{
    int data;
    struct Node*next;
};
int main()
{
    // create 3 nodes
    struct Node * head = NULL;
    struct Node * second = NULL;
    struct Node * third = NULL;
    // allocate memory for nodes
    head=malloc(sizeof(struct Node));
    second=malloc(sizeof(struct Node));
    third=malloc(sizeof(struct Node));
    // assign data & link nodes
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    // print the list
    struct Node*temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp= temp->next;
    }
    printf("NULL\n");
    return 0;



}

