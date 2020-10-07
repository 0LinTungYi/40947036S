#include<stdio.h>
#include<stdint.h>
int main()
{
	float g=0.0,t=0.0,v=0.0,h=0.0;
	printf("Please enter the acceleration due to gravity: ");
	scanf("%f", &g);
	
	printf("Please enter the time (s): ");
	scanf("%f", &t);
	
	v=g*t;
	h=v/2*t;
	
	printf("Final velocity: %f m/s",v);
	printf("\nThe altitude: %f m\n",h);
	
	return 0;
}
