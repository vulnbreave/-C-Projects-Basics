#include <stdio.h>
main() {
int warranty;

printf("HELLO WELCOME  !! , This is a test to know your product is under warranty or not.\n");

printf("Enter how many years its been you bought this product ");
scanf("%d", &warranty);

if(warranty<=5){
	printf("Alright .. you'll recieve free SERVICE !!");


}

else {

	printf("SORRY ! , your product is not under warranty its been expired. . :(");

} 

}
