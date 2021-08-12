
#include<stdio.h>

int main(void){

	int year = 0;

	printf("Please enter your year, example 1956: ");
	scanf("%d",&year);

	if (year % 100 == 0 && year % 400 == 0)//condición en base al residuo de la división.
	{
		printf("Tu año de nacimiento es biciesto\n");
	}else{
		printf("El año en que naciste no es biciesto\n");
	}


	return 0;
}