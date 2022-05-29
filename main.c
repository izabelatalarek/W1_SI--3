#include<stdio.h>
#include <stdlib.h>


int numberToChoose = 0;
float grades[7]; 
float sum = 0;
float average;


void finallGrade(float average)
{
	if (average <= 50) {
		printf("Your finall grade: F\n");
	}
	if (average > 50 && average <= 60) {
		printf("Your finall grade: E\n");
	}
	if (average > 60 && average <= 70) {
		printf("Your finall grade: D\n");
	}
	if (average> 70 && average <= 80) {
		printf("Your finall grade: C\n");
	}
	if (average > 80 && average <= 90) {
		printf("Your finall grade: B\n");
	}
	if (average > 90 && average <= 100) {
		printf("Your finall grade: A\n");
	}
}

void bubble_sort(float grades[]) 
{
	int i = 0, j = 0, tmp;
	for (i = 0; i < 7; i++) 
	{
		for (j = 0; j < 7 - i - 1; j++) 
		{ 
			if (grades[j] > grades[j + 1]) 
			{  
				tmp = grades[j];
				grades[j] = grades[j + 1];
				grades[j + 1] = tmp;
			}
		}
	}	
}

int main()
{

	while (numberToChoose != 7)
	{
		printf("\n");
		printf("\nMenuChoice\n\n");
		printf("1.Harper Eland\n");
		printf("2.Celement Hayes \n");
		printf("3.Belinsa Jacobs \n");
		printf("4.Cedric Santos \n");
		printf("5.Fiona Wilcher \n");
		printf("6.Stats \n");
		printf("7.Exit\n\n");

		printf("Choose number to start: \n");
		scanf_s("%d", &numberToChoose);

		if (numberToChoose > 0 && numberToChoose < 6)
		{
			printf("Give 7 grades in percents: \n");

			for (int i = 0; i < 7; i++)
			{
				scanf_s("%g", grades + i);

				sum += grades[i];
			}

			average = sum / 7;
			printf("Average of grades: %.1f\n", average);

			finallGrade(average);
			bubble_sort(grades);

			float s = (grades[6] + grades[5] + grades[4]) / 3;
			if (s > 95)
			{
				printf("Eligible for scholarship\n");
			}
			else
			{
				printf("Not eligible for scholarship\n");
			}
		}


		if (numberToChoose == 6)

		{
			printf("The average of the first subject: B\n");
			printf("The lowest note of the first subject is: A\n");
			printf("The highest note of the first subject is: B\n");
			printf("\n\n");
			printf("The average of the second subject: C\n");
			printf("The lowest note of the second subject is: B\n");
			printf("The highest note of the second subject is: C\n");
			printf("\n\n");
			printf("The average of the third subject: B\n");
			printf("The lowest note of the third subject is: A\n");
			printf("The highest note of the third subject is: E\n");
			printf("\n\n");
			printf("The average of the fourth subject: C\n");
			printf("The lowest note of the fourth subject is: A\n");
			printf("The highest note of the fourth subject is: D\n");
			printf("\n\n");
			printf("The average of the fifth subject: D\n");
			printf("The lowest note of the fifth subject is: B\n");
			printf("The highest note of the fifth subject is: D\n");
			printf("\n\n");
			printf("The average of the sixth subject: A\n");
			printf("The lowest note of the sixth subject is: A\n");
			printf("The highest note of the sixth subject is: B\n");
			printf("\n\n");
			printf("The average of the seventh subject: C\n");
			printf("The lowest note of the seventh subject is: C\n");
			printf("The highest note of the seventh subject is: E\n");
			printf("\n\n");
			printf("Only 2 students have a scholarship\n");
		
		}

		if (numberToChoose == 7)
		{
			exit(0);
		}

		else
		{
			printf("There is no such option. Try again with another one.\n");
		}
	}
}
