/*Adrian Castillo
Calculate the Product of two numbers WITHOUT using the * operator. You must use while()*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, multip, count=0, product=0;
	printf("This program will give you the product of two numbers. Give me the numbers:\n");
	scanf_s("%i", &num);
	scanf_s("%i", &multip);
	while (count < multip){
		product += num;
		count++;
	}
	printf("The product of %i * %i is: %i\n", num, multip, product);
	system("pause");
	return 0;
}