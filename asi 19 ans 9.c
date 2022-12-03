#include<stdio.h>
int main()
{
    int i,r,n,fac=1;
    char name[20];
    char s[5][20]={"rammotwani","princejha","joycheema","vijaymotwani","harbhajansingh"};
    printf("enter your username to calculate the factorial of no.\n");
    gets(name);
    for(i=0;i<5;i++)
    {
        r=strcmp(s[i],name);
        if(r==0)
        {
            printf("congratulations!!! you got a chance to calculate the factorial");
            printf("enter a no.\n");
            scanf("%d",&n);
            while(n>1)
            {
                fac=fac*n;
                n--;
            }
            printf("factorial is %d ",fac);
            break;
        }
        }
    if(i==5)
    {
        printf("invalid user name");
    }
    return 0;
}







