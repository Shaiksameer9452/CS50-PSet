#include<stdio.h>
#include<cs50.h>
void cat(int n);
int main(void){
    int n=get_int("number of times:");
    cat(n);

}
void cat(int n){
    for(int i=0; i<n; i++){
         printf("meoew\n");

    }

}
