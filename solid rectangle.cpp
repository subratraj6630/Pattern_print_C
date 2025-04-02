#include<stdio.h>
int main(){
	int i,n,m,x;
	printf("Enter no. of digits you want to print:");
	scanf("%d",&n);
	printf("Enter no. of lines you want to print:");
	scanf("%d",&m);
	x=1;
	while(x<=m){
		for(i=1;i<=n;i++){
			printf("%d ",i);
		//	printf("* ");
		}
		printf("\n");
		x++;
	}
	return 0;
}
