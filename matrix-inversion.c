#include <stdio.h>

int main()
{
	float a[10][20],p;
	int i,j,k,n;

	printf("No of varialbles?: ");
	scanf("%d",&n);

	printf("Enter the matrix:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%f",&a[i][j]);
		}
	}

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			a[i][j+n] = (i==j)?1:0;
		}
	}

	for(i=0;i<n;i++) {
		for(j=0;j<2*n;j++) {
			printf("%9.3f",a[i][j]);
			if(j==n-1) printf("\t|\t");
		}
		printf("\n");
	}


	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j) continue;
			p=a[j][i]/a[i][i];
			for(k=0;k<2*n;k++) {
				a[j][k]-=a[i][k]*p;
			}
		}
	}

	for(i=0;i<n;i++) {
		a[i][i+n]/=a[i][i];
		a[i][i]/=a[i][i];
	}

	printf("The matrices are:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<2*n;j++) {
			printf("%9.3f",a[i][j]);
			if(j==n-1) printf("\t|\t");
		}
		printf("\n");
	}

	return 0;
}
