/*
 * main.c
 *
 *  Created on: Mar 22, 2024
 *      Author: Seif
 */
/**
 * @author 	: Seif Hany
 * @Date 	: 22/3/2024
 * @brief	: Unit_2_lesson_3_Homework(2)_Solution
 */
#include "stdio.h"
void main()
{
	int Exercise_number;
	printf("Enter Exercise number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Exercise_number);
	if(Exercise_number == 1)
	{
		static int number_to_check ;
		printf("\n Enter a number to check if even or odd :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number_to_check);
		if(number_to_check % 2 == 0)
		{
			printf("%d is even",number_to_check);
		}
		else
		{
			printf("%d is odd",number_to_check);
		}
	}
	if(Exercise_number == 2)
	{
		static char char_to_check ;
		printf("\n Enter a char	 to check if vowel or consonant :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&char_to_check);
		char index = 0;
		char vowel_array[10]= {'a','e','i','o','u','A','E','I','O','U'};
		for(index=0 ; index <=9 ;index++ )
		{
			if(vowel_array[index] == char_to_check)
			{
				printf("\n %c is a vowel",char_to_check);
				break;
			}
		}
		if(index == 10)
		{
			printf("\n %c is a consonant",char_to_check);
		}
	}
	if(Exercise_number == 3)
	{
		static float value_a , value_b , value_c ;
		printf("\n Enter 3 numbers to get their largest :");
		fflush(stdin);fflush(stdout);
		scanf("%f %f %f",&value_a , &value_b , &value_c);
		printf("\n largest value = %f", ((value_a > value_b) ? ((value_a >value_c) ? value_a :value_c) : ((value_b>value_c)? value_b : value_c))) ;

	}

	if(Exercise_number == 4)
	{
		static  float number  ;
		printf("\n Enter a value to check whether +ve or -ve :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&number);
		if(number > 0)
		{
			printf("\n %f is positive",number);
		}
		else if(number < 0)
		{
			printf("\n %f is negative",number);
		}
		else
		{
			printf("\n %f is zero",number);
		}
	}
	if(Exercise_number == 5)
	{
		static  char character  ;
		printf("\n Enter a char to check whether alphabet or not :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&character);
		int ascii_code = character;
		printf("\n ascii code of %c is %d",character ,ascii_code);
		if(ascii_code >= 97 && ascii_code <= 172)
		{
			printf("\n%c is alphabet",character);
		}
		else
		{
			printf("\n%c is not alphabet", character);
		}
	}
	if(Exercise_number == 6)
	{
		static  int number;
		printf("\n Enter a number to calculate sum until it :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number);
		int sum = 0;
		for(int i = 1 ;i <= number ; i++)
		{
			sum += i;
		}
		printf("\n Sum = %d",sum);

	}
	if(Exercise_number == 7)
	{
		static  int number;
		printf("\n Enter a number to calculate its factorial :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number);
		int factorial = 1;
		if(number < 0)
		{
			printf("you entered a negative value !!");
		}
		else if(number == 0)
		{
			printf("factorial of 0 = %d",factorial);
		}
		else
		{
			for(int i = number ;i >= 1 ; i--)
			{
				factorial *= i;
			}
			printf("\n factorial = %d",factorial);
		}
	}
	if(Exercise_number == 8)
	{
		static  int operand_1 , operand_2 , result=0;
		static char operation;
		printf("\n Enter operation you need :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&operation);
		printf("\n Enter operands :");
		fflush(stdin);fflush(stdout);
		scanf("%d %d",&operand_1 ,&operand_2);
		switch(operation)
		{
		case '+':
		{
			result = operand_1 + operand_2;
			break;
		}
		case '-':
		{
			result = operand_1 - operand_2;
			break;
		}
		case '*':
		{
			result = operand_1 * operand_2;
			break ;
		}
		case '/':
		{
			result = operand_1 / operand_2;
			break;
		}
		default:
			printf("you entered wrong operation !!");
		}
		printf("result of operation = %d",result);

	}
}

