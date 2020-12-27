#include<stdio.h>

int main(){
	
	printf("**********Factor Finder**********\n\n");
	int factor=1;
	int number;
	printf("Enter the number to find factors of: ");
	scanf("%d", &number);
	printf("\nFactors of %d are: ", number);
	while(factor<=number/2){
		if(number%factor==0)
			printf("%d ", factor);
			factor++;
	}

	return 0;
}
