#include<stdio.h>
int main()
{
    long int n,k,bill[100001],b,i,sum=0,c,p;
    scanf("%ld",&n);
    scanf("%ld",&k);
    
    for(i=0;i<n;i++)
    {
        scanf("%ld",&bill[i]);
    }
    scanf("%ld",&c);
    b=bill[k];
    for(i=0;i<n;i++)
    {
        if(bill[i]!=b)
        {
            sum=sum+bill[i];
            //printf("\t%ld\n",sum);
        }
    }
    sum=sum/2;
    //printf("%ld",c);
    
    //printf("%ld",sum);
    p=c-sum;
    if(c!=sum)
        printf("%ld",p);
    else
        printf("Bon Appetit");
}
    
    
    
        
