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
		fscanf(infp, "%s %d %lf", s[i].fName, &s[i].age, &s[i].gpa);
	}
}

Student searchStudent() {
	
}