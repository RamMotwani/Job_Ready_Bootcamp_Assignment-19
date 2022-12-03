#include<stdio.h>
int main()
{
    char s[5][10],v[]={"aeiouAEIOU"};
    int i,j,count,k;
    printf("enter characters in string");
    for(i=0;i<5;i++)
    {
        fgets(s[i],10,stdin);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0;s[i][j];j++)
        {
           for(k=0;v[k];k++)
           {
               if(s[i][j]==v[k])
               {
                   count++;
                   break;
               }
           }
        }

    printf("%s has %d vovels\n",s[i],count);

  }
}

