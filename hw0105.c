#include<stdio.h>
#include<stdint.h>
int main()
{
	int32_t num=0;
	int A[9];
	char B[7]={'A','B','C','D','E','F','\0'};
	
	printf("Please enter an integer: ");
	scanf("%d",&num);
	
	printf("%d: ",num);
	
	int8_t negative=0;
	if (num<0)
	{
		num*=(-1);
		negative=1;
	}
	
	int32_t i=0;
	while(num!=0)
	{
		A[i]=num%16;
		//printf("%d\n",A[i]);
		num/=16;
		i++;
	}
	
	if(negative) printf("-");
	
	for(int k=7;k>=i;k--)
	{
		printf("0");
	}
	for(int k=i-1;k>=0;k--)
	{
		if(A[k]<=9)
		{
			printf("%d",A[k]);
		}
		else
		{
			int32_t q=A[k]-0-9;
			printf("%c",B[q-1]);
		}
	}
	printf("\n");
	
	return 0;
}
