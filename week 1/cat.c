#include<stdio.h>
#include<cs50.h>
void meow(void);
int main(void){
    for (int i=0; i<5; i++)
    {
        meow();
    }
}
void meow(void){
    printf("meow\n");
}
