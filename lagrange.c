#include <stdio.h>

int main() {
	int i,j,n;
	float x[20],y[20],X,l=1,f=0;
	printf("How many data values do you want to enter? ");
	scanf("%d",&n);
	printf("Enter the x and f(x) values: \n");
	for(i=0;i<n;i++) {
		scanf("%f %f",&x[i],&y[i]);
	}
	printf("Enter the required x: ");
	scanf("%f",&X);

	for(i=0;i<n;i++) {
		for(j=0,l=0;j<n;j++) {
			if(i==j) continue;
			l*=(X-x[j])/(x[i]-x[j]);
		}
		f+=y[i]*l;
	}

	printf("f(%f) = %f",X,f);

	return 0;
}
