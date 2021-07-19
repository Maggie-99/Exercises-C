// Write a program to print the corresponding Celsius to Fahrenheit.//


#include <stdio.h>

int main()
{	
	printf("Celsius to Fahreheit:\n");
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;  
	upper = 300; 
	step = 20;  


	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * (9.0 / 5.0))+ 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;

	}

}

