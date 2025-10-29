#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    string names[]={"sameer","salim","akram"};
    string number[]={"6305222692", "9959830181", "8897887088"};
    string name=get_string("name:");
    for(int i=0; i<3; i++)
    {
        if (strcmp(names[i],name)==0)
        {
            printf("found %s,\n", number[i]);
            return 0;

        }
    }
    printf("not found \n");
        return 0;
}

