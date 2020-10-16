#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

int main()
{
	printf("Please enter 5 cards: ");
	int32_t B[5];
	while( scanf("%d %d %d %d %d",&B[0],&B[1],&B[2],&B[3],&B[4])!=5 )
	{
		printf("Wrong Input\n");
		return 0;
	}
	for(int i=0;i<5;i++)
	{
		if(B[i]>=53||B[i]<=0)
		{
			printf("Wrong Input\n");
			return 0;
		}		
	}
	
	for(int i=0;i<4;i++)
	{
		for(int k=i+1;k<5;k++)
		{
			if(B[i]==B[k])
			{
				printf("Wrong Input\n");
				return 0;
			}
		}
	}
		
	int A[5][2];
	
	for(int i=0;i<5;i++)
	{
		int32_t num=(B[i]-1)/13;
		switch(num)
		{
			case 0:
				A[i][0]=1;
				break;
			case 1:
				A[i][0]=2;
				break;
			case 2:
				A[i][0]=3;
				break;
			case 3:
				A[i][0]=4;
				break;
	
		}
		A[i][1]=( B[i]-1 )%13+1;
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(A[j][1]<A[i][1])
			{
				int x=A[i][0],y=A[i][1];
				A[i][0]=A[j][0];
				A[i][1]=A[j][1];
				A[j][0]=x;
				A[j][1]=y;
			}
		}	
	}	
	
	if(A[0][0]==A[1][0]&&A[0][0]==A[2][0]&&
	   A[0][0]==A[3][0]&&A[0][0]==A[4][0])
	{
		if(A[0][1]==A[1][1]-1&&A[0][1]==A[2][1]-2&&
		   A[0][1]==A[3][1]-3&&A[0][1]==A[4][1]-4)
		{
			printf("Straight flush\n");
			return 0;
		}
		else 
		{
			printf("flush\n");	
			return 0;
		}
	}
	else if(A[0][1]==A[1][1]-1&&A[0][1]==A[2][1]-2&&
		   A[0][1]==A[3][1]-3&&A[0][1]==A[4][1]-4)
	{
		printf("Straight\n");
		return 0;
	}
	
	int kind=0;
	for(int i=0;i<5;i++)
	{
		if(A[i+1][1]!=A[i][1])
		{
			kind++;
		}
	}
	
	/*printf("%d\n",kind);
	for(int i=0;i<5;i++)
	{
		printf("%d %d\n",A[i][0],A[i][1]);
	}*/
	
	switch(kind)
	{
		case 2:
			if( A[0][1]==A[1][1]&&A[0][1]==A[2][1]&&
			    A[0][1]==A[3][1]||A[1][1]==A[2][1]&&
			    A[1][1]==A[3][1]&&A[1][1]==A[4][1]  )
			{
				printf("Four of a kind\n");
			}
			else 
			{
				printf("Full house\n");
			}
			break;
		case 3:
			if( A[0][1]==A[1][1]&&A[0][1]==A[2][1] )
			{
				printf("Three of a kind\n");
			}
			else if( A[1][1]==A[2][1]&&A[1][1]==A[3][1] )
			{
				printf("Three of a kind\n");
			}
			else if( A[2][1]==A[3][1]&&A[2][1]==A[4][1])
			{
				printf("Three of a kind\n");
			}
			else 
			{
				printf("Two pair\n");
			}
			break;
		case 4:
			printf("One pair\n");
			break;
		case 5:
			printf("High card\n");
			break;
	}
	return 0;
}
