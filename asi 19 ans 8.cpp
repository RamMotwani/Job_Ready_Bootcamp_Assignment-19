#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[5][20]={"the","quick","brown","fox","jumps"};
    char a[20]="the";
    char b[20]="fox";
    int i,index_a=-1,index_b=-1,d;
    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],a)==0)
            index_a=i;
        if(strcmp(str[i],b)==0)
            index_b=i;
    }
    if(index_a!=-1 && index_b!=-1)
    {
        d=abs(index_b-index_a);
    }
    printf("distance is %d",d-1);
}
