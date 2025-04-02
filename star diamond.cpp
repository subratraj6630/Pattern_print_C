#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter a no:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
//	int x=n;
//	for(int y=1;y<=n;y++){
//			for(int k=1;k<=y-1;k++){
//			printf(" ");
//		}
//		for(int l=1;l<=2*x-1;l++){
//			printf("*");
//		}
//		printf("\n");
//		x--;
//	}
int x=n-1;
	for(int y=1;y<=n-1;y++){
			for(int k=1;k<=y;k++){
			printf(" ");
		}
		for(int l=1;l<=2*x-1;l++){
			printf("*");
		}
		printf("\n");
		x--;
	}
	return 0;
}
