#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"

/*
	Function: getStudentInformation
	-------------------
	Uses a file pointer to scan in the given .txt and sort the student information into an array 
	
	Student: struct to hold student information
	FILE: a file pointer to the opened .txt from main
	int: the size of the array for number of students stored
	
	Returns: VOID
*/
void getStudentInformation(Student s[],FILE *infp, int N) {
	int i;
	
	for ( i = 0; i < N; i++) {
		fscanf(infp, "%d %s %d %lf", &s[i].id, s[i].fName, &s[i].age, &s[i].gpa);
	}
}

Student searchStudent(Student student[], int N, int inputID) {
	int first, middle, last, i;
	Student notFound;
	
	first = 0;
	last = N - 1;
	middle = (first + last) / 2;
	
	while (first <= last) {
		if(student[middle].id < inputID) {
			first = middle + 1;
		}
		else if(student[middle].id == inputID) {
			return student[middle];
			break;
		}
		else {
			last = middle - 1;
		}
		middle = (first + last) / 2;
	}
	if( first > last)
		return notFound;
}
	
/* example binary search

first = 0;
last = n - 1;
middle = (first + last) / 2;

while (first <= last) {
	if(array[middle] < search) 
		first = middle + 1;
	else if (array[middle] == search) {
		printf("Found");
		break;
	}
	else
		last = middle - 1;
}
if (first > last)
	printf("NOT Found");
*/