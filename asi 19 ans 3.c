#include<stdio.h>
int main()
{
    char s[5][10];
    int i;
    printf("enter 5 names in 2d array");
    for(i=0;i<5;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",s[i]);
    }
}
