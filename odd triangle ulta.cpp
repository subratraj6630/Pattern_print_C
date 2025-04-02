#include<stdio.h>
int main(){
	int j,m,i;
	printf("Enter no. of rows:");//no of lines
	scanf("%d",&m);
	int n=m;
    for(i=1;i<=m;i++){
    	int a=1;
		for(j=1;j<=n;j++){
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
		n--;
	}
	return 0;
}
