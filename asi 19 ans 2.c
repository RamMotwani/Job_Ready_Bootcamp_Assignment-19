#include<stdio.h>
int main()
{
    char s[5][20],v[20];
    int i,round,r;
    printf("enter 5 city names");
    for(i=0;i<5;i++)
    {
        gets(s[i]);
    }
    for(round=1;round<5;round++)
    {
        for(i=0;i<5-round;i++)
        {
            r=strcmp(s[i],s[i+1]);
            if(r>0)
            {
                strcpy(v,s[i]);
                strcpy(s[i],s[i+1]);
                strcpy(s[i+1],v);
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",s[i]);
    }

}
