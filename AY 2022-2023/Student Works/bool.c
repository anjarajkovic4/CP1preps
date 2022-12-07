#include<stdio.h>
int main(){
	
	int num;

	printf("\nEnter number: ");
	scanf("%d", &num);

	//digits
	int d1 = num / 10;
	int d2 = num % 10;

	if(d1 && !d2){
		printf("\nBazinga\n\n");
	}
	else if(!d1 && d2){
		printf("\nBooyeah\n\n");
	}
	else {
		printf("\nAlakazam\n\n");
	}

	return 0;

}//end main
