#include<stdio.h>
int main()
{
    unsigned int n,i,j,e,f,g,max;
    scanf("%u",&n);
    int c[n];
    for(i=0; i<n; i++)
    {
        scanf("%u %u %u",&e,&f,&g);
        if(e>5 || f>5 || g>5)
        {
            c[i]=0;
        }
        else
        {
            c[i]=e+f+g;
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            max=c[0];
        }
        else
        {
            if(max<c[i])
            {
                max=c[i];
                j=i;
            }
        }
    }
    printf("%u",j);
    return 0;
}
