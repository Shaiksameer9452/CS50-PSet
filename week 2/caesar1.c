#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    int key=get_int(" enter key:");
    string name=get_string("enter name:\n");
    int length=strlen(name);
    for(int i=0;i<length;i++)
    {
        printf("%c",name[i]+key);

    }
    printf("\n");

}








