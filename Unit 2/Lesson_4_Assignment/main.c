/*
 * main.c
 *
 *  Created on: Mar 25, 2024
 *      Author: Seif
 */
#include"stdio.h"
#include"string.h"
void main()
{
	int Exercise_number;
	printf("Enter Exercise number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Exercise_number);
	if(Exercise_number == 1)
	{
		static int matrix_a[2][2];
		static int matrix_b[2][2];
		static int matrix_sum[2][2];
		int row_index=0;
		int column_index=0;
		printf("\n Now Enter Matrix A !");
		for(int row_index = 0 ;row_index < 2 ;row_index ++)
		{
			for(column_index = 0 ; column_index <2 ;column_index++)
			{
				printf("\nEnter index a%d%d ",row_index+1,column_index+1);
				fflush(stdin);fflush(stdout);
				scanf("%d",&(matrix_a[row_index][column_index]));
			}
		}
		printf("\n Now Enter Matrix B !");
		for(int row_index = 0 ;row_index < 2 ;row_index ++)
		{
			for(column_index = 0 ; column_index <2 ;column_index++)
			{
				printf("\nEnter index b%d%d ",row_index+1,column_index+1);
				fflush(stdin);fflush(stdout);
				scanf("%d",&(matrix_b[row_index][column_index]));
			}
		}
		for(int row_index = 0 ;row_index < 2 ;row_index ++)
		{
			for(column_index = 0 ; column_index <2 ;column_index++)
			{
				matrix_sum[row_index][column_index] = matrix_a[row_index][column_index] + matrix_b[row_index][column_index];
			}
		}
		printf("\nSummation of two matrices is : ");
		for(int row_index = 0 ;row_index < 2 ;row_index ++)
		{
			printf("\n");
			for(column_index = 0 ; column_index <2 ;column_index++)
			{
				printf("%d  ",matrix_sum[row_index][column_index]);
			}
		}
	}
	if(Exercise_number == 2)
	{
		static float data_Array[20];
		static int number_of_data;
		printf("Please Enter the number of data !");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number_of_data);
		for(int i = 0 ;i<number_of_data;i++)
		{
			printf("\n %d. Enter number : ",i+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&data_Array[i]);
		}
		static float sum = 0;
		for(int i = 0 ;i<number_of_data;i++)
		{
			sum += data_Array[i];
		}
		static float average ;
		average= sum / number_of_data;
		printf("\n Average of these data = %f",average);
	}
	if(Exercise_number == 3)
	{
		static int number_of_rows;
		static int number_of_columns;
		static int row_index = 0;
		static int column_index = 0;
		printf("\nPlease Enter the number of rows !");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number_of_rows);
		printf("\nPlease Enter the number of columns !");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number_of_columns);
		static int matrix_A [20][20];
		static int matrix_B [20][20];
		printf("\n Now Enter Matrix A !");
		/* user enters the data of matrix A*/
		for( row_index = 0 ;row_index < number_of_rows ;row_index ++)
		{
			for( column_index = 0 ; column_index <number_of_columns ;column_index++)
			{
				printf("\nEnter index a%d%d ",row_index+1,column_index+1);
				fflush(stdin);fflush(stdout);
				scanf("%d",&(matrix_A[row_index][column_index]));
			}
		}
		/*Display the matrix entered by the user*/
		printf("\n You Entered this matrix A :\n");
		for( row_index = 0 ;row_index < number_of_rows ;row_index ++)
		{
			printf("\n");
			for( column_index = 0 ; column_index <number_of_columns ;column_index++)
			{
				printf("%d  ",matrix_A[row_index][column_index]);
			}
		}
		/*Create matrix B as transpose of Matrix A*/

		for( row_index = 0 ;row_index < number_of_rows ;row_index ++)
		{
			for( column_index = 0 ; column_index <number_of_columns ;column_index++)
			{
				matrix_B[column_index][row_index]=matrix_A[row_index][column_index];
			}
		}
		printf("\n Transpose of Matrix entered is :\n");
		for( row_index = 0 ;row_index < number_of_columns ;row_index ++)
		{
			printf("\n");
			for( column_index = 0 ; column_index <number_of_rows ;column_index++)
			{
				printf("%d  ",matrix_B[row_index][column_index]);
			}
		}

	}
	if(Exercise_number == 4)
	{
		static int elements_array[20];
		static int number_of_elements ;
		static int new_element;
		static int new_index ;
		printf("\nPlease Enter the number of elements !");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number_of_elements);
		for(int index = 0 ;index < number_of_elements ;index++)
		{
			elements_array[index]=index+1;
		}
		for(int index = 0 ;index < number_of_elements ;index++)
		{
			printf("%d",elements_array[index]);
		}
		printf("\nPlease Enter the new element !");
		fflush(stdin);fflush(stdout);
		scanf("%d",&new_element);
		printf("\nPlease Enter the new index !");
		fflush(stdin);fflush(stdout);
		scanf("%d",&new_index);
		for(int index = 0 ;index < number_of_elements ;index++)
		{
			if(index == new_index)
			{
				for(int sub_index = number_of_elements ; sub_index>new_index ; sub_index--)
				{
					elements_array[sub_index] = elements_array[sub_index-1];
				}
			}
		}
		elements_array[new_index] = new_element;
		for(int index = 0 ;index < number_of_elements+1 ;index++)
		{
			printf("%d",elements_array[index]);
		}

	}
	if(Exercise_number == 5)
	{
		static int elements_array[20];
		static int number_of_elements ;
		static int number_to_check;
		static int index;
		printf("\nPlease Enter the number of elements !");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number_of_elements);
		for( index = 0 ;index < number_of_elements ;index++)
		{
			elements_array[index]=(index+1)*11;
		}
		for( index = 0 ;index < number_of_elements ;index++)
		{
			printf("%d ",elements_array[index]);
		}
		printf("\nPlease Enter the number to search for !");
		fflush(stdin);fflush(stdout);
		scanf("%d",&number_to_check);
		for( index = 0 ;index < number_of_elements ;index++)
		{
			if(elements_array[index]==number_to_check)
			{
				printf("\n number is found at index %d",index);
				break;
			}

		}
		if(index == number_of_elements)
			printf("number is not found in the array");
	}

	/*STRINGS ASSIGNMENT*/
	if(Exercise_number == 6)
	{
		static char sentence[20];
		static char char_to_search;
		static int frequency = 0;
		printf("Enter a sentence ! ");
		fflush(stdin);fflush(stdout);
		gets(sentence);
		printf("\n Your sentence is  :  ");
		puts(sentence);
		printf("\n Enter a character !");
		fflush(stdin);fflush(stdout);
		scanf("%c",&char_to_search);
		for(int index = 0 ; index < strlen(sentence) ;index++)
		{
			if(sentence[index] == char_to_search)
			{
				frequency++;
			}
		}
		printf("This character is found %d times",frequency);
	}
	if(Exercise_number == 7)
	{
		static char sentence[20]="C Programming";
		static int length = 0;
		for (int index = 0 ;sentence[index] != 0;index ++)
		{
			length ++;
		}
		printf("length = %d",length);
	}
	if(Exercise_number == 8)
	{
		static char sentence[20];
		static char sentence_reversed[20];
		printf("Enter a sentence ! ");
		fflush(stdin);fflush(stdout);
		gets(sentence);
		printf("\n Your sentence is  :  ");
		puts(sentence);
		for(int index=0 ; index <strlen(sentence) ; index++)
		{
			sentence_reversed[strlen(sentence)-index-1] = sentence[index];
		}
		printf("\n reversed sentence is :");
		for(int index=0 ; index <strlen(sentence) ; index++)
		{
			printf("%c",sentence_reversed[index]);
		}
	}
}

