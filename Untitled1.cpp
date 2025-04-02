#include<iostream>

{
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	if(n%5==0 || n%3==0){
		if(n%5==0){
			if(n%15==0){
				printf("divisible by 5 and 15");
			}
		}
		if(n%3==0){
			if(n%15==0){
				printf("divisible by 3 and 15");
			}
		}
	}
	else{
		printf("not divisible 3 or 5");
	}
	return 0;
}

