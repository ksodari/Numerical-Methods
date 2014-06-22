#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define err 0.00001

float f(float x)
{
//	return (x*x*x-4*x-9);
//	return (x*log10(x)-1.2);
//	return (exp(x)-3*x);
	return (cos(x)-x*exp(x));
}

int main(int argc,char **argv)
{
	float x0,x1,x2;
	if(argc==3)
	{
		x0=atoi(argv[1]);
		x1=atoi(argv[2]);
	}
	else
	{
		do
		{
			printf("Enter the bracket terms: ");
			scanf("%f %f",&x0,&x1);
		}
		while(f(x0)*f(x1)>0);
	}
	
	printf("x0\t x1\t f(x0)\t\t f(x1)\t x2\t f(x2)\n");
	do
	{
		x2=(x0+x1)/2;
		printf("%.4f\t %.4f\t %.4f\t %.4f\t %.4f\t %.4f\n",
			x0,x1,f(x0),f(x1),x2,f(x2));
		if(f(x0)*f(x2)<0) x1=x2;
		else x0=x2;
	}
	while(fabs(x0-x1)>err);

	printf("Hence, the root with precision of 3 terms is: %.4f\n",x2);
	return 0;
}

