#include<stdio.h>
int main(){
	
	int a, b, multiplication = 0, count, division = 0;

	//user input numbers
	printf("Enter the number 1: ");
	scanf("%d", &a);
	printf("Enter the number 2: ");
	scanf("%d", &b);

	//multiplication
	for(int i=0; i<b; i++){
		multiplication += a;
	}

	//division
	count = a;
	for(int i=1; i<a; i++){
		count = count - b;
		division++;
		if(count==0){
			break;
		}
	}

	printf("\nMultiplication: %d", multiplication);
	printf("\nDivision: %d\n", division);

	return 0;

}//end main
