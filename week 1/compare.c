#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int i =get_int("i:");
    int j =get_int("j:");
    if(i>j)
    {
        printf("greater than\n");
    }
    else
    {
        printf("less than\n");
    }
}
