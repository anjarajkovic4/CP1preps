#include<stdio.h>
int main(){
	
	int n;

	//user input n
	printf("\nEnter n: ");
	scanf("%d", &n);

	printf("\n");

	for(int i=0; i<n; i++){

		for(int k=0; k<i; k++){
				printf(" ");
		}

		for(int j=i; j<n; j++){
			printf("*");
		}

		printf("\n");

	}

	printf("\n");

	return 0;

}//end main
