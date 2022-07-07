#include <stdio.h>
#include "Rectangle.h"
#include <stdlib.h>

//Functions:
void add(int* pnum, int incBy);
void swap(int* x, int* y);
void initializeRect(Rectangle* prect, int* width, int* height);
void febonachiFiller(int arr[], int length);
int fibonachi(int index);
void printArray(int arr[], int length);
void printRectangleArray(Rectangle rectangles[], int length);
void charArrCopy(char original[], int length, char copy[]);
int charArrCompare(char original[], int length, char copy[]);
void charArrSetValues(char original[], int length, char value);

int main() {
	
	char original[] = { 'a', 'b', 'c' };
	char copy[] = { 'd', 'e','g'};
	int length = sizeof(original) / sizeof(original[0]);

	charArrSetValues(original, length, 'a');
	printf("%c", original[2]);
	

	return 0;
}

void add(int* pnum, int incBy) {

	for (int i = 0; i < incBy; ++i) {
		++*pnum;
	}
}


void swap(int* x, int* y) {

	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

void initializeRect(Rectangle* prect,int* width, int* height) {
	prect->height = *height;
	prect->width = *width;
}

int fibonachi(int index) {

	if (index == 0) { return 0; }
	if (index == 1) { return 1; }
	return (fibonachi(index - 1) + fibonachi(index - 2));
}

void febonachiFiller(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = fibonachi(i);
	}
}

void printArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d, ", arr[i]);
	}
}

void printRectangleArray(Rectangle rectangles[], int length)
{
	for (int i = 0; i < length; i++) {
		printf("Rectangle Number: %d\n", i);
		printf("Height: %d\n", rectangles[i].height);
		printf("Width: %d\n\n", rectangles[i].width);
	}
}

void charArrCopy(char original[],int length, char copy[])
{
	for (int i = 0; i < length; i++) {
		copy[i] = original[i];
		printf("original : %c\n", original[i]);
		printf("copy: %c\n\n", copy[i]);
	}
}

int charArrCompare(char original[], int length, char copy[]) {
	{
		for (int i = 0; i < length; i++) {
			if (original[i] != copy[i])
			{
				return 1;
			}
		}

		return 0;
	}
}

void charArrSetValues(char original[], int length, char value) {
	for (int i = 0; i < length; i++)
	{
		original[i] = value;
	}
}



