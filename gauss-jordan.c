#include <stdio.h>

int main()
{
	float a[10][10],ratio;
	int i,j,k,n;

	printf("Enter the no. of variables: ");
	scanf("%d",&n);

	printf("Enter the matrix:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n+1;j++) {
			scanf("%f",&a[i][j]);
		}
	}

	for(i=0;i<n;i++) {
		for(j=0;j<n+1;j++) {
			printf("%5.3f ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j) continue;
			ratio=a[j][i]/a[i][i];
			for(k=0;k<n+1;k++) {
				a[j][k]-=a[i][k]*ratio;
			}
		}
	}

	for(i=0;i<n;i++) {
		a[i][n]/=a[i][i];
		a[i][i]/=a[i][i];
	}


	printf("The output matrix is:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n+1;j++) {
			printf("%5.3f ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}


