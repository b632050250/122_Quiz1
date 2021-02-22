#include<stdio.h>
int main()
{
    int x,i,n=0,j=2,l=0,m,k=2,y,z;
    scanf("%d",&x);
    y=x-1;
    z=x+1;
    for(i=2; x>i; i++)
    {
        if(x%i==0)
        {
            n++;
        }
    }
    if(n>0)
    {
        while(j<y)
        {
            if(y%j==0)
            {
                l++;
                if(l>0)
                {
                    y--;
                    l=0;
                    j=1;
                }
            }
            j++;
        }
        while(k<z)
        {
            if(z%k==0)
            {
                m++;
                if(m>0)
                {
                    z++;
                    m=0;
                    k=1;
                }
            }
            k++;
        }
        printf("%d %d",y,z);
    }
    else
    {
        printf("%d",x);
    }
    return 0;
}
