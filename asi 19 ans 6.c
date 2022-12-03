#include<stdio.h>
int main()
{
    char s[4][10]={"ram","desh","abba","malayalam"};
    int i,j,l,r;
    for(i=0;i<4;i++)
    {
        r=0;
        l=strlen(s[i]);
        for(j=0;s[i][j];j++)
        {
          if(s[i][j]==s[i][l-1-j])
          {
              r++;
          }
        }
        if(r==l)
        {
            printf("%s is palindrome\n",s[i]);
        }
    }
}

