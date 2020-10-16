#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

int main()
{
	long   salary=0.0;
	printf("Gross salary: ");
	while( scanf("%li",&salary)!=1 )
	{
		printf("wrong input\n");
		return 0;
	}
	
	int32_t married;
	printf("Married? (0/1): ");
	while( scanf("%d",&married)!=1 )
	{
		printf("wrong input\n");
		return 0;
	}
	if( married!=0 && married!=1 ) 
	{
		printf("wrong input\n");
		return 0;
	}
	if(married)
	{
		salary-=240000;
	}
	else 
	{
		salary-=120000;
	}
	
	int32_t people;
	printf("How many people are there in your family: ");
	while( scanf("%d",&people)!=1 )
	{
		printf("wrong input\n");
		return 0;
	}
	salary-=88000*people;
	
	int32_t moneypeople;
	printf("How many people in your family have income: ");
	while( scanf("%d",&moneypeople)!=1 )
	{
		printf("wrong input\n");
		return 0;
	}
	if(moneypeople>people)
	{
		printf("wrong input\n");
		return 0;
	}
	salary-=200000*moneypeople;
	
	int32_t SI;
	printf("Special Deduction for Savings and Investgation: ");
	while( scanf("%d",&SI)!=1 )
	{
		printf("wrong input\n");
		return 0;
	}
	if(SI>0)	salary-=270000;
	
	int32_t tuition;
	printf("Special Deduction for Tuition: ");
	while( scanf("%d",&tuition)!=1 )
	{
		printf("wrong input\n");
		return 0;
	}
	salary-=25000*tuition;
	
	int32_t child;
	printf("How many preschool children: ");
	while( scanf("%d",&child)!=1 )
	{
		printf("wrong input\n");
		return 0;
	}
	salary-=120000*child;
	
	int32_t disabled;
	printf("How many disabled people: ");
	while( scanf("%d",&disabled)!=1 )
	{
		printf("wrong input\n");
		return 0;
	}
	salary-=200000*disabled;
	
	if(married&&people<=1)
	{
		printf("wrong input\n");
		return 0;
	}
	
	
	
	float s=salary;
	if(s<540000)
	{
		s*=0.05;
	}
	else if(salary<1210000)
	{
		s*=0.12;
		s-=37800;
	}
	else if(salary<2420000)
	{
		s*=0.20;
		s-=134600;
	}
	else if(salary<4530000)
	{
		s*=0.30;
		s-=376600;
	}
	else 
	{
		s*=0.40;
		s-=829600;
	}
	
	int32_t sa=s;
	printf("Total tax: %d\n",sa);
	

	
	return 0;
}

