#include<stdio.h>
int main(){
	int i,n,m,x;
	printf("Enter an odd no:");
	scanf("%d",&n);
	while(x<=n){
			if(x!=(n+1)/2){
				for(int j=1;j<(2*n)/2;j++){
					printf(" ");
				}
				printf("*");
			}
			else if(x==(n+1)/2){	
			for(i=1;i<=n;i++){
				printf("* ");
		}
			}
		x++;
			printf("\n");
	}
	return 0;
}
