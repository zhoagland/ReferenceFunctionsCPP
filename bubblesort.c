//Bubble Sort Problem
//Created By Zachary Hoagland
//Object-Oriented Programming
//5/10/19

#include <stdio.h>
#include <string.h>

int A[10] = { 25, 10, 61, 13, 12, 56, 41, 42, 65, 2};
int swapped;
int i;

void main()
{
	
	do {
		//Flag Reset			
		swapped = 0; 

		//repeats for size of array
		for (i = 1; i <10; ++i)
		{
			if (A[i - 1] > A[i])
			{
				//swaps variables
				int temp = A[i - 1];
				A[i - 1] = A[i];
				A[i] = temp;
				
				swapped = 1;
			}

		}
	}while (swapped ==1);

	for (int Avalue = 0; Avalue < 10; Avalue++)
		printf("%d ", A[Avalue]);

}

