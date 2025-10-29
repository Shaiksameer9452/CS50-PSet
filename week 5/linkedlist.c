#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
typedef struct node
{
    int number;
    struct node*next;
} node;
int main(void)
{
int array[]= {30,20,10};
for (int i=0; i<3; i++)
{
    printf("%d",array[i]);
}

    node *list=NULL;
    for(int i=0; i<3; i++)
    {
        node *array[i] =malloc(sizeof(node));
        if (array[i]==NULL)
        {
            return 1;
        }


        array[i]->next = list;
        list = array[i];
    }
    // time pass
    node*ptr =list;
    while(ptr!=NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}
