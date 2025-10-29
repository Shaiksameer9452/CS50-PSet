#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main(void)
{
    FILE *file=fopen("phonebook.csv","w");
    string name=get_string("name:");
    string number=get_string("number:");
    fprintf(file,"Name :%s ,number :%s\n",name,number);
    fclose(file);
}
