/*
 * main.c
 *
 *  Created on: Mar 22, 2024
 *      Author: Seif
 */
/**
 * @author 	: Seif Hany
 * @date 	: 22/3/2024
 * @brief 	: Homework(1)_Solution
 */

#include"stdio.h"
void main()
{
	int exercise_number;
	printf("Enter Exercise number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&exercise_number);
	if(exercise_number == 1)
	{
		printf("\n C programming");
	}
	else if(exercise_number == 2)
	{
		static int integer_value;
		printf("\nEnter integer number to print :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&integer_value);
		printf("\nYou Entered : %d", integer_value);
	}
	else if(exercise_number == 3)
	{
		static int integer_value_1 , integer_value_2;
		printf("\nEnter 2 integer numbers to sum :");
		fflush(stdin);fflush(stdout);
		scanf("%d %d",&integer_value_1,&integer_value_2);
		printf("\n Sum = %d", integer_value_1 + integer_value_2);
	}
	else if(exercise_number == 4)
	{
		static float float_value_1 , float_value_2;
		printf("\nEnter 2 float numbers to multiply :");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&float_value_1,&float_value_2);
		printf("\n product = %f", float_value_1 * float_value_2);
	}
	else if(exercise_number == 5)
	{
		static char input_char;
		printf("\nEnter a character to get its ASCII code :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&input_char);
		printf("\n ASCII value of %c = %d", input_char , input_char);
	}
	else if(exercise_number == 6)
	{
		static float value_a , value_b ,value_temp;

		printf("\n Enter 2 float values to swap them :");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&value_a , &value_b);
		printf("\n before swapping , a = %f while b = %f", value_a , value_b);
		value_temp = value_a;
		value_a = value_b;
		value_b = value_temp;
		printf("\n after swapping , a = %f while b = %f", value_a , value_b);
	}
	else if(exercise_number == 7)
	{
		static float value_a , value_b ,value_temp;

		printf("\n Enter 2 float values to swap them :");
		fflush(stdin);fflush(stdout);
		scanf("%f %f",&value_a , &value_b);
		printf("\n before swapping , a = %f while b = %f", value_a , value_b);
		value_a = value_a + value_b;
		value_b = value_a - value_b;
		value_a = value_a - value_b;
		printf("\n after swapping , a = %f while b = %f", value_a , value_b);
	}
}
