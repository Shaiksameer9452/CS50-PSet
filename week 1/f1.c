#include<stdio.h>
#include<cs50.h>
//void add(int a,int b);
//void sub(int a,int b);
int add(int a,int b)
{
    int sum=(a+b);
    return sum;
}
int sub(int a,int b){
    int sub1=(a-b);
   return sub1;
}

int main (void)
{
   int a=get_int("enter a:\n");
    int b=get_int("enter b;\n");
    int an1=add(a,b);
    printf("%i\n",an1);
    int an2=sub(a,b);
    printf("%i\n",an2);
}


