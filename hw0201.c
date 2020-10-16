#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
int main()
{
	float a=0.0,b=0.0,c=0.0,A[5];
	printf("Please enter a quadratic polynomial (a,b,c): ");
	
	for(int i=0;i<5;i++)
	{
		if(i%2==0)
		{
			float x;
			while( scanf("%f",&x)!=1 )
			{
				printf("Wrong Input \n");
			   	return 0;
			}
			A[i]=x;
		}
		else
		{
			char w;
			scanf("%c",&w);
			if(w!=','){
			   printf("Wrong Input \n");
			   return 0;}
		}
	}
	
	a=A[0];
	b=A[2];
	c=A[4];
	
	//printf("%d,%d,%d\n",a,b,c);
	
	int32_t D=b*b-4*a*c;
	if(D==0)	printf("One real root. \n");
	else if(D>0)	printf("Two distinct real roots. \n");
	else 		printf("No real roots. \n");
	
	return 0;
}



