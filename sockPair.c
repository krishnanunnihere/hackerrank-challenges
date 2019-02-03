#include<stdio.h>
int main()
{
	int ar[500],n,pair=0,i,flag,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]==0)
			continue;
		flag=0;
		for(j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			pair=pair+1;
			ar[i]=0;
			ar[j]=0;
		}
	}
	printf("%d",pair);
}
		
	
