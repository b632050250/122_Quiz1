#include<stdio.h>
int main()
{
    char a[7],b[7];
    int i,c,d,e,f,g,h;
    scanf("%s",&a);
    scanf("%s",&b);
    if(((b[4]-48)*10)+(b[5]-48)<((a[4]-48)*10)+(a[5]-48))
    {
        printf("EXP before MFG");
    }
    else
    {
        c=32-(((b[0]-48)*10)+(b[1]-48))-(((a[0]-48)*10)+(a[1]-48));
        d=15-(((b[2]-48)*10)+(b[3]-48))-(((a[2]-48)*10)+(a[3]-48));
        e=1-(((b[4]-48)*10)+(b[5]-48))+(((a[4]-48)*10)+(a[5]-48));
        printf("%d %d %d",c,d,e);
    }
    return 0;
}
