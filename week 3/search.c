#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int numbers[]={50,68,34,45,44,47,30};
    int n=get_int("number :");
    for(int i=0; i<7; i++)
    {
        if( numbers[i] == n)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
}
