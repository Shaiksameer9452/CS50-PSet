#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    FILE *f1=fopen("sameer.txt","w");
    fputs("sameer is the best\n",f1);
    fputs("how are you\n",f1);
    f1=fopen("sameer.txt","r");
    char ch[100];
    if (f1!=NULL)
    {
        while(fgets(ch,100,f1))
        {
            printf("%s",ch);
        }
    }
    fclose(f1);
}
