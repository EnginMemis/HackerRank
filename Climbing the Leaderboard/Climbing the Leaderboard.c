#include<stdio.h>
#include<string.h>

int main()
{
    
    int ranked[100000],player[100000],a[100000];
    int n,m,i,j,t=0;
    int rank=1;
    scanf("%d",&n);
    
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&ranked[i]);
    }
    
    scanf("%d",&m);
    
    for(i=0 ; i<m ; i++)
    {
        scanf("%d",&player[i]);
    }
    
    j=0;
    
    for(i=m-1 ; i>=0 ; i--)
    {
        while(player[i] < ranked[j] && j<n)
        {
            if(ranked[j] != ranked[j+1])
            {
                rank++;
            }
            j++;
        }
        a[t]=rank;
        t++;
    }
    
    for(i=t-1 ; i>=0 ; i--)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}
