#include<stdio.h>
int main()
{
    char s[5][20]={"rammotwani@gmail","prince@gmail","jai@mail","yash@mail","rahul@mail"};
    int i,j,r;
    for(i=0;i<5;i++)
    {
        r=1;
      for(j=0;s[i][j];j++)
      {
          if(s[i][j]=='@')
          {
              r=0;
          }
      }
      if(r==1)
      {
          printf("%s this mail not contain @",s[i]);
          break;
      }
    }
    if(i==5)
    {
        printf("there is no odd email");
    }
    return 0;
}
