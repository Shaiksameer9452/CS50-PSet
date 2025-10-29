#include<stdio.h>
#include<cs50.h>
int main(void)
{
int n=10;
int arr[n];
for (int i=0;i<10;i++)
{
    arr[i]=get_int("Number: %d ",i+1);
    printf("%i\n",arr[i]);

}
printf("u enter values\n");

    for( int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}

