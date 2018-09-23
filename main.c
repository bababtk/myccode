#include<stdio.h>

typedef struct Fraction {
    int numer;
    int denom;
}FRACTION;

FRACTION res,sum,a,b;
 void add_fractions (FRACTION a, FRACTION b)
{
    //FRACTION sum;
    sum.numer = (a.numer * b.denom) + (b.numer * a.denom);
    sum.denom = a.denom * b.denom;
    
}

main()
{	//FRACTION res;
	//FRACTION a,b;
	float ans;
        printf("enter the faction u want to find the sum of");
	scanf("%d %d %d %d",&a.numer,&a.denom,&b.numer,&b.denom);
	add_fractions(a,b);
	ans=(float)(sum.numer)/(float)(sum.denom);
	printf("result is\n %d/%d", sum.numer,sum.denom);
	printf("the float answer is \n %f",ans);
}

