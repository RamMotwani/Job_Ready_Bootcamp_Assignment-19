#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][2][20]={{"prince","123"},{"ram","234"},{"happy","345"}},i;
    char user[20],pass[20];
    printf("enter userid: ");
    gets(user);
    printf("\n enter password ");
    gets(pass);
    for(i=0;i<3;i++)
    {
        if(strcmp(str[i][0],user)==0 && strcmp(str[i][1],pass)==0)
        {
            printf("congratulations!!!bhikhmange");
            break;
        }

    }
    if(i==3)
    printf("nalle berozgaar");
    return 0;
}
