#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isArmstrongNumber(int number){

	int temp = number;
	int temp2 = number;
	int count = 0;
	int breakdown = 0;
	int total = 0;
	int sum = 0;
			
	
	if (temp <= 9){
		return 1;
	}
	if (temp < 10 && temp < 99){
		return 0;
	}
	while (temp != 0){
		temp = temp / 10;
		count = count + 1;
	}
	while (number != 0){
		printf("number: %d\ncount: %d\n", number, count);
		breakdown = number % 10;
		number = number / 10;
		printf("breakdown: %d\n", breakdown);
		total = pow(breakdown, count);
		printf("total: %d\n", total);
		sum = sum + total;
		printf("sum: %d\n", sum);
	}
	if (sum == temp2){
		return 1;
	}
	if (sum != temp2){
		return 0;
		}
	return 0;
}
