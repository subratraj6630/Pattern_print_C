#include<stdio.h>
int main(){
	int j,m,i;
//	printf("Enter no. of coloumns:");//no of stars
//	scanf("%d",&n);
	printf("Enter no. of rows:");//no of lines
	scanf("%d",&m);
	int n=m;
	//different pattern of stars triangle
    for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("* ");
		}
		printf("\n");
		n--;
	}
	return 0;
}
