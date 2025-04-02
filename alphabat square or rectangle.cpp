#include<stdio.h>
int main(){
	int a,i,n,m,x;
	printf("Enter no. of coloumns:");//no of stars
	scanf("%d",&n);
	printf("Enter no. of rows:");//no of lines
	scanf("%d",&m);
	x=1;
	while(x<=m){
		a=65;//65 is ascii value of A
		for(i=1;i<=n;i++){
			printf("%c ",a);
			a++;
		}
		printf("\n");
		x++;
	}
	return 0;
}
