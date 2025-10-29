#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int x = get_int("what is your age: ");
    {
    printf("%i\n", x);
    }
    if (x < 18)
    {
        printf("Not eligable for vote\n");
    }
    else
    {
        printf("eligable for vote\n");
    }
}




