#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) (x*x*x*x*x-3*x*x*x-1)
#define err 0.0001

int main(int argc, char **argv)
{
	float x0,x1,x2,e;

	if(argc==3)
	{
		x0=atoi(argv[1]);
		x1=atoi(argv[2]);
	}
	else
	{
		printf("Enter initial guesses: ");
		scanf("%f %f",&x0,&x1);
	}

	printf("x1\tx2\tf(x1)\tf(x2)\tx3\n");
	do
	{
		x2=x1-((f(x1)*(x1-x0))/(f(x1)-f(x0)));
		printf("%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n",x0,x1,f(x0),f(x1),x2);
		e=fabs(x2-x1);
		x0=x1;
		x1=x2;
	}
	while(e>err);

	printf("The root is %.4f\n",x2);

	return 0;
}
