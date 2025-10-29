#include<stdio.h>
#include<cs50.h>
int main(void){
    int i;
    int n;
    do{
        n=get_int("Enter: \n");
    }
    while(n<0 || n>10);

    for(i=0;i<=n;i++){
        printf("%i\n",i);


    }
}

