/*
 * main.c
 *
 *  Created on: Apr 9, 2024
 *      Author: Seif
 */
#include "stdio.h"
struct Student
{
	char name[20];
	char roll_number;
	float marks;
};

struct sDistance
{
	int feet ;
	float inches;
};

struct sComplex_Number
{
	float real;
	float imaginary;
};
#define PI 3.14
#define Circle_Area(x) (PI*x*x)
int Exercise_number ;

int main()
{
	printf("Enter the number of Exercise :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Exercise_number);
	if(Exercise_number == 1)
	{
		static struct Student Student_1;
		printf("\nEnter the name of the student :");
		fflush(stdin);fflush(stdout);
		gets(Student_1.name);
		printf("\nEnter the roll number of the student :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&Student_1.roll_number);
		printf("\nEnter the marks of the student :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&Student_1.marks);
		printf("Displaying Information \n name : %s \n Roll : %d \n Marks : %f",
		Student_1.name,Student_1.roll_number,Student_1.marks);
	}
	if(Exercise_number == 2)
	{
		static struct sDistance sDistance_1;
		static struct sDistance sDistance_2;
		static float inches_sum;
		static int feet_sum;
		static int inches_to_feet;
		printf("\nEnter the data of Distance_1 :");
		printf("\nDistance_1.feet :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&sDistance_1.feet);
		printf("\nDistance_1.inches :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&sDistance_1.inches);

		printf("\nEnter the data of Distance_2 :");
		printf("\nDistance_2.feet :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&sDistance_2.feet);
		printf("\nDistance_1.inches :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&sDistance_2.inches);

		feet_sum = sDistance_1.feet + sDistance_2.feet;
		inches_sum = sDistance_1.inches + sDistance_2.inches;
		printf("\ninches sum = %f",inches_sum);
		inches_to_feet = (int)(inches_sum/12);
		printf("\ninches_to_feet = %f",inches_to_feet);
		if(inches_to_feet >= 1)
		{
			feet_sum += inches_to_feet;
			inches_sum = inches_sum - (inches_to_feet*12);
		}
		printf("\nSum of distances is %d feet , %f inches",feet_sum,inches_sum);
	}
	if(Exercise_number == 3)
	{
		static struct sComplex_Number Complex_1;
		static struct sComplex_Number Complex_2;
		static float real_sum = 0;
		static float imag_sum = 0;
		printf("\nEnter data of Complex_1 :");
		printf("\nreal_number = ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&Complex_1.real);
		printf("\nimag_number = ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&Complex_1.imaginary);

		printf("\nEnter data of Complex_2 :");
		printf("\nreal_number = ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&Complex_2.real);
		printf("\nimag_number = ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&Complex_2.imaginary);

		real_sum = Complex_1.real + Complex_2.real;
		imag_sum = Complex_1.imaginary + Complex_2.imaginary;
		printf("\nSum =  %1f + %1f i",real_sum,imag_sum);
	}
	if(Exercise_number == 4)
	{
		static struct Student Students_array[3];
		for(int i = 0 ;i < 3; i++)
		{
			printf("\nEnter the name of the student %d :", i+1);
			fflush(stdin);fflush(stdout);
			gets(Students_array[i].name);
			printf("\nEnter the roll number of the student %d :", i+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&Students_array[i].roll_number);
			printf("\nEnter the marks of the student %d :", i+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&Students_array[i].marks);
		}
		for (int i = 0; i< 3 ;i++)
		{
			printf("\nData of Student %d",i+1);
			printf("\n Name : %s",Students_array[i].name);
			printf("\n Roll number : %d",Students_array[i].roll_number);
			printf("\n Marks : %f",Students_array[i].marks);
			printf("\n******************************************");
		}
	}
	if(Exercise_number == 5)
	{
		static float radius;
		printf("Enter radius value :");
		fflush(stdin);fflush(stdout);
		scanf("%f",&radius);
		printf("\n area = %f",Circle_Area(radius));
	}
}

