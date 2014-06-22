#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) (x*x*x-21*x+3500)
#define g(x) (3*x*x-21)
#define err 0.001

int main(int argc,char **argv)
{
	float x0,x1,e;
	if(argc==2) x0=atoi(argv[1]);
	else 
	{
		printf("Enter the initial guess: ");
		scanf("%f",&x0);
	}
	printf("x1\tf(x1)\tf'(x1)\tx2f\n");
	do
	{
		x1=x0-(f(x0)/g(x0));
		printf("%.4f\t%.4e\t%.4e\t%.4f\t\n",x0,f(x0),g(x0),x1);
		e=fabs(f(x1)-f(x0));
		x0=x1;
	}
	while(e>err);
	printf("The root is %.4f\n",x1);

	return 0;
}
