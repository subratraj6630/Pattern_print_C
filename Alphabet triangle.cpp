#include<stdio.h>
int main(){
	int j,m,i;
	printf("Enter no. of rows:");//no of lines
	scanf("%d",&m);
	int n=1;
    for(i=1;i<=m;i++){
    	int a=65;
		for(j=1;j<=n;j++){
			char ch = (char)a;
			printf("%c ",ch);
			a++;
		}
		printf("\n");
		n++;
	}
	return 0;
} 
