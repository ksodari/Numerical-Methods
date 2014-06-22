#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define e 0.001

float f(float x)
{
//	return (cos(x)-3*x+1);
	return (x*tan(x)+1);
}

int main(int argc, char **argv)
{
	float x0,x1,x2,err;
	x1=atoi(argv[1]);
	x2=atoi(argv[2]);

	printf("x1\tx2\tf(x1)\tf(x2)\tx0\tf(x0)\n");
	do
	{
		x0=x1-((f(x1)*(x2-x1))/(f(x2)-f(x1)));
		printf("%.4f\t%.4f\t%.4e\t%.4e\t%.4f\t%.4e\n",
		x1,x2,f(x1),f(x2),x0,f(x0));
		err=fabs(x0-x2);
		if(f(x0)*f(x1)<0) x1=x0;
		else x2=x0;
	}
	while(err>e);

	printf("%e",x0);

	return 0;
}
