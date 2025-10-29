#include<stdio.h>
#include<cs50.h>
int main(void)
{
char c=get_char("do you agree???");
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("agree.\n");
}
else
{
printf("not agree,\n");
}
}
