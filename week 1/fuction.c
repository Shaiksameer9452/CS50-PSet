#include<stdio.h>
#include<cs50.h>
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void div(int a,int b);
int main(void){
int a=get_int("Enter a:\n");
int b=get_int("Enter b:\n");
  add(a,b);
  sub(a,b);
  mul(a,b);
  div(a,b);
}
void add(int a,int b){
    int sum=a+b;
    printf("%i\n",sum);
}
void sub(int a,int b){
    int sum1=a-b;
    printf("%i\n",sum1);
}
void mul(int a,int b){
    int sum2=a*b;
    printf("%i\n",sum2);
}
void div(int a,int b){
    float sum3=a/b;
    printf("%f\n",(float)sum3);
}
