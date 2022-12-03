#include<stdio.h>
int main()
{
    char s[5][10]={"ram","prince","joy","tonu","monu"};
    char name[10];
    int i,r;
    printf("enter a name you want to find");
    gets(name);
    for(i=0;i<5;i++)
    {
        r=strcmp(s[i],name);
        if(r==0)
        {
            printf("found");
            break;
        }
    }
    if(i==5)
    {
        printf("not found");
    }

}
