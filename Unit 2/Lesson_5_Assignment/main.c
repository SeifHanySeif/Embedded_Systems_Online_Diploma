/*
 * main.c
 *
 *  Created on: Mar 29, 2024
 *      Author: Seif
 */


#include "stdio.h"
#include "string.h"
void show_prime_numbers(int lower_boundary , int upper_boundary)
{
	printf("\nPrime numbers are :  ");
	for(int number = lower_boundary ; number <= upper_boundary ; number++)
	{
		char is_prime = 1;
		for(int divisor = 1 ; divisor <= number ; divisor ++)
		{
			if((divisor != number)&&(divisor != 1)&&(number % divisor == 0))
			{
				is_prime = 0;
				break;
			}
		}
		if(is_prime)
		{
			printf("%d ",number);
		}
	}
}
int factorial (int number)
{
	if(number == 0)
	{
		return 1;
	}
	else
	{
		return number * factorial(number-1);
	}
}
void reverse_sentence(char sentence[],char reversed_sentence[], int length)
{
	if(sentence[0] == 0)
	{
		return;
	}
	else
	{
		reversed_sentence[length-1] = sentence[0];
		reverse_sentence(&sentence[1],&reversed_sentence[0],length-1);
	}
}
int calculate_power(int base_number , int power_number)
{
	if(power_number == 1)
	{
		return base_number;
	}
	else
	{
		return base_number*calculate_power(base_number,power_number-1);
	}
}
int main()
{
	int Exercise_number;
	printf("Enter Exercise number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Exercise_number);
	if(Exercise_number == 1)
	{
		static int lower_boundary;
		static int upper_boundary;
		printf("Enter Interval boundaries :");
		fflush(stdin);fflush(stdout);
		scanf("%d %d",&lower_boundary,&upper_boundary);
		show_prime_numbers(lower_boundary,upper_boundary);
	}
	else if(Exercise_number == 2)
	{
		static int number;
		static int factorial_result = 0;;
		printf("Enter number to get its factorial");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number);
		factorial_result = factorial(number);
		printf("\n result = %d", factorial_result);
	}
	else if(Exercise_number == 3)
	{
		static char sentence[20];
		static char reversed_sentence[20];
		printf("Enter a sentence to reverse :");
		fflush(stdin);fflush(stdout);
		gets(sentence);
		reverse_sentence(&sentence[0],&reversed_sentence[0],strlen(sentence));
		printf("\n%s",reversed_sentence);
	}
	else if(Exercise_number == 4)
	{
		static int base_number ;
		static int power_number;
		printf("Enter base and power values :");
		fflush(stdin);fflush(stdout);
		scanf("%d %d",&base_number,&power_number);
		int power_result = calculate_power(base_number,power_number);
		printf("\n result = %d",power_result);
	}
}
