#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

int leapyear(int32_t year)
{
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0) return 1;
			else            return 0;
		}
		else   return 1;
	}
	else   return 0;
}

int input(int year,int month,int date)
{
	if(year<0)		
		return 1;
	else if(month<1||month>12) 
		return 1;
	else if(date<1||date>31)
		return 1;
	else if(month==2&&date>29)
		return 1;
	else if(month==2&& leapyear(year)!=1 && date==29)
		return 1;
	else if(month==4||month==6||month==9||month==11)
	{
		if(date>30)	return 1;
		else 		return 0;
	}
	else  
		return 0;
}

int main()
{
	int A[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	long day=0;

	printf("Date Format: YYYY/MM/DD\nStart Date: ");
	int32_t year,month,date;

	while ( scanf("%d/%d/%d",&year,&month,&date)!=3 )
	{
		printf("Wrong Input\n");
		return 0;
	}
	if( input(year, month, date) )
	{
		printf("Wrong Input\n");
		return 0;
	}
		
	printf("End Date: ");
	int32_t y,m,d;
	while ( scanf("%d/%d/%d",&y,&m,&d)!=3 )
	{
		printf("Wrong Input\n");
		return 0;
	}
	if( input(y, m, d) )
	{
		printf("Wrong Input\n");
		return 0;
	}
	
	if ( (y<year)||(y==year&&month>m)||(y==year&&month==m&&date>d) )
	{
		printf("Wrong Input\n");
		return 0;
	}
	
	
	
	if(year==y&&month==m)
	{
		day+=d-date;
			
	}
	else if(year==y)
	{	
		if( leapyear(y) && month<=2 && m>2)
		{
			day++;
		}
		day+=A[month-1]-date;
		while( (month+1)!=m )
		{
			day+=A[month];
			month++;
		}
		day+=d;
		}
	/*else if( (year+1)==y )
	{	
		day+=A[month-1]-date;
		month++;
		while(month<=12)
		{
			day+=A[month-1];
			month++;
			if( leapyear(year)&&month==2 )
			{
				day++;
			} 
		}
		month=1;
		while(month<m)
		{
			day+=A[month-1];
			month++;
			if( leapyear(y)&&month==2 )
			{
				day++;
			} 
		}
		day+=d;
	}*/
	else
	{
		while( (year+1)<y )
		{
			day+=365;
			if( leapyear(year) )
			{
				day++;
			}
			year++;
		}
		day+=A[month-1]-date;
		month++;
		while(month<=12)
		{
			day+=A[month-1];
			month++;
			if( leapyear(year)&&month==2 )
			{
				day++;
			} 
		}
		month=1;
		while(month<m)
		{
			day+=A[month-1];
			month++;
			if( leapyear(y)&&month==2 )
			{
				day++;
			} 
		}
		day+=d;
	}
	printf("%li \n",day);
	
	return 0;
}



