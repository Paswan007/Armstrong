#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int count=0,n,rem=0,t,k,l;
	float  s=0.0;
	printf("Enter the number");
	scanf("%d",&n);
	t=n;
	k=n;

	while(n!=0)
	{
		count++;
		n=n/10;
	}

	while(t!=0)
	{
		rem=t%10;
		s=s+pow(rem,count);
		t=t/10;
	}
	printf("%f",s);
	if(k==s)
	{printf("Armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
}
