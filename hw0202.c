#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
int main()
{
	 float a,b,c,d,aa,bb,cc,dd;
	 
	 printf("Please enter the first line: ");
	 char w;
	 scanf("%c",&w);
	 if(w!='('){ printf("Wrong Input\n");
	 	     return 0;		}
	 	      
	 scanf("%f",&a);
	 
	 scanf("%c",&w);
	 if(w!=','){ printf("Wrong Input\n");
	 	     return 0;		}
	 
	 scanf("%f",&b);
	 
	 scanf("%c",&w);
	 if(w!=')'){ printf("Wrong Input\n");
	 	     return 0;		}
	 scanf("%c",&w);
	 if(w!=','){ printf("Wrong Input\n");
	 	     return 0;		}
	 scanf("%c",&w);
	 if(w!='('){ printf("Wrong Input\n");
	 	     return 0;		}
	 
	 scanf("%f",&c);
	 
	 scanf("%c",&w);
	 if(w!=','){ printf("Wrong Input\n");
	 	     return 0;		}
	 
	 scanf("%f",&d);
	 
	 scanf("%c",&w);
	 if(w!=')'){ printf("Wrong Input\n");
	 	     return 0;		}
	 
	 
	 //second
	 printf("Please enter the second line: ");
	
	 scanf("%c",&w);
	 scanf("%c",&w);
	 //printf("%c\n",w);
	 if(w!='('){ printf("Wrong Input\n");
	 	     return 0;		}
	 	      
	 scanf("%f",&aa);
	 
	 scanf("%c",&w);
	 if(w!=','){ printf("Wrong Input\n");
	 	     return 0;		}
	 
	 scanf("%f",&bb);
	 
	 scanf("%c",&w);
	 if(w!=')'){ printf("Wrong Input\n");
	 	     return 0;		}
	 scanf("%c",&w);
	 if(w!=','){ printf("Wrong Input\n");
	 	     return 0;		}
	 scanf("%c",&w);
	 if(w!='('){ printf("Wrong Input\n");
	 	     return 0;		}
	 
	 scanf("%f",&cc);
	 
	 scanf("%c",&w);
	 if(w!=','){ printf("Wrong Input\n");
	 	     return 0;		}
	 
	 scanf("%f",&dd);
	 
	 scanf("%c",&w);
	 if(w!=')'){ printf("Wrong Input\n");
	 	     return 0;		}
	 
	 //a line?
	 if(a==c&&b==d)//not a line
	 {
	 	printf("The first line does not exist. \n");
	 	return 0;
	 }
	 else if(aa==cc&&bb==dd)
	 {
	 	printf("The second line does not exist. \n");
	 	return 0;
	 }
	 
	 
	 //function
	 float g=0,f=0,gg=0,ff=0;
	 float x=0.0,y=0.0;
	 g=(b-d)/(a-c);//y=gx+f
	 f=b-a*g;
	 gg=(bb-dd)/(aa-cc);//y=ggx+ff
	 ff=bb-aa*gg;
	 //printf("y=%fx+%f\n",g,f);
	 //printf("y=%fx+%f\n",gg,ff);
	 
	 if(g!=gg)
	 {
	 	x=(ff-f)/(g-gg);
	 	y=g*x+f;
	 	
	 }
	 else 
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 
	 //printf("Intersection: (%f,%f)\n",x,y);
	 //if the result is on the line
	 //1
	 if( (a>=c)&&(x>a||x<c) )
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 else if( (a<=c)&&(x<a||x>c) )
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 else if( (b>=d)&&(y>b||y<d) )
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 else if( (b<=d)&&(y<b||y>d) )
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 //2
	 if( (aa>=cc)&&(x>aa||x<cc) )
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 else if( (aa<=cc)&&(x<aa||x>cc) )
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 else if( (bb>=dd)&&(y>bb||y<dd) )
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 else if( (bb<=dd)&&(y<bb||y>dd) )
	 {
	 	printf("The intersection does not exist. \n");
	 	return 0;
	 }
	 
	 
	 printf("Intersection: (%f,%f)\n",x,y);
	
	return 0;
}
