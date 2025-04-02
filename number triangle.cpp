#include<stdio.h>
int main(){
	int j,m,i;
	printf("Enter no. of rows:");//no of lines
	scanf("%d",&m);
	int n=1;
    for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d ",j);
		}
		printf("\n");
		n++;
	}
	return 0;
} 
