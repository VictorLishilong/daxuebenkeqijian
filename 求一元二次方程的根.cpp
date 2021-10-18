#include<stdio.h>
#include<math.h>
int main()
{
	double d; int a=0 , b=0 , c=0 ;
	scanf("%d %d %d",&a,&b,&c);
	if ((a==0)&&(b==0)){
	   printf("Input error!\n");
	   return 0 ; 
    }
	if ((a==0)&&(b!=0)&&(c==0)){
		printf("x=0.000000\n");
	    return 0 ;
	}	
	if((a==0)&&(b!=0)&&(c!=0)){
		printf("x=%.6lf\n",(-c)/(double)b);
		return 0 ;
	}
	d=(-b)/(2.0*a);  
	if (b*b>4*a*c) {
		printf("x1=%.6lf\nx2=%.6lf\n", (-b + sqrt(b*b-4*a*c))/(2*a), (-b - sqrt(b*b-4*a*c))/(2*a));
	    return 0;
	}
	else if(b*b<4*a*c) {
		if ((fabs(b)==fabs(2*a))||(b==0)){
			printf("x1=%.6lfi\nx2=-%.6lfi\n",sqrt(4*a*c-b*b) / (2*a),sqrt(4*a*c-b*b) / (2*a));	
		}
		else printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%.6lfi\n",d,sqrt(4*a*c-b*b) / (2*a),d,sqrt(4*a*c-b*b) / (2*a));
		return 0 ;
	}
	else {
		printf("x1=x2=%.6lf\n",d);
	}
 
	return 0; 
 } 
