
#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
	if(year%4==0)
	{
		printf("12.09.%d",year);
	}
	if(year==1918)
	{
		printf("26.09.%d",year);
	}
	if(year%400=0 || (year%4==0 && year%100!=0))
	{
		printf("13.09.%d",year);
	}
	return 0;
}
