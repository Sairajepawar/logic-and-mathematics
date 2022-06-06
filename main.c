#include<stdio.h>
long long int result(long long int n)
{
	long long int ans=1;
	for(int i=1;i<=n;i++)
	{
		ans*=2;
	}
	return ans;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("\n");
	long long int a[100];
	long long int inc=1;
	long long int difference;
	do
	{
		for(int i=0;i<n;i++)
		{
			a[i]=i+inc;
		}
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
		}
		inc++;
		difference=result(n)-sum;
	}while(difference>a[n-1]);
	for(int i=0;i<n;i++)
	{
		if(difference==a[i])
		{
			a[n]=a[i];
		}
	}
	for(int i=0;i<=n;i++)
	{
		printf("%lld",a[i]);
		printf("\n");
	}
	return 0;
}
