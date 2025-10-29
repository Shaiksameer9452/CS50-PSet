#include<stdio.h>
#include<cs50.h>
int main(void){
    int dollars=1;
    while(true){
        char c=get_char("here;s$%i.double it give to next person???",dollars);
        if (c=='y')
        {
            dollars*=2;
        }
        else
        {
            break;
        }

    }

    printf("here's $%i.\n",dollars);

}
