#include<stdio.h>
#include<stdint.h>
int main()
{
	int32_t a=0, ans=1;
	
	printf("Please enter a 5-digits integer: ");
	scanf("%d", &a);
	for(int i=0;i<=4;i++)
	{
		int32_t b=a%10;
		ans*=b;
		a/=10;
	}
	printf("Result: %d\n",ans);
	
	return 0;
}
