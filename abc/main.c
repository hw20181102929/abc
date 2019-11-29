#include <stdio.h>
int main()
{
    int xs,zs;
    int k=0;
    int i=0;
    int a[10000],b[10000];
    while(scanf("%d %d",&xs,&zs)!=EOF)
    {
        if(zs!=0)
        {
            a[i]=xs*zs;
            b[i]=zs-1;
            k++;
            i++;
        }
        if(getchar()=='\n')
        {
            break;
        }
    }
    if(k==0)
    {
        printf("0 0");
    }
    else
    {
        for(i=0;i<k;i++)
        {
            if(i==0)
            {
                printf("%d %d",a[i],b[i]);
            }
            else
            {
                printf(" %d %d",a[i],b[i]);
            }
        }
    }
    return 0;
}
