#include <stdio.h>

int main()
{
	int i,j,n;
	float x[20],y[20][20],X,f,g;

	printf("How many data do you have? ");
	scanf("%d",&n);

	printf("Enter the x and corresponding f(x):\n");
	for(i=0;i<n;i++)
	{
		scanf("%f%f",&x[i],&y[i][0]);
	}

	printf("x? ");
	scanf("%f",&X);

	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			y[j][i]=(y[j+1][i-1]-y[j][i-1])/(x[j+i]-x[j]);
			printf("%f\t",y[j][i]);
		}
		printf("\n");
	}

	f=y[0][0];
	for(i=1;i<n;i++)
	{
		g=y[0][i];
		printf("%.4f",g);
		for(j=0;j<i;j++)
		{
			g*=X-x[j];
			printf(" (%.4f - %.4f) ",X,x[j]);
		}
		printf(" + ");
		f+=g;
	}

	printf("f(x) = %f\n",f);

	return 0;
}
