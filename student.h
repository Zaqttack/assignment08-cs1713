#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student_struct {
	int id;
    char fName[10];
    int age;
    double gpa;
} Student;

/*
	Function: getStudentInformation
	-------------------
	Uses a file pointer to scan in the given .txt and sort the student information into an array 
	
	Student: struct to hold student information
	FILE: a file pointer to the opened .txt from main
	int: the size of the array for number of students stored
	
	Returns: VOID
*/
void getStudentInformation(Student[], FILE*, int);
Student searchStudent(Student[], int, int);

#endif

