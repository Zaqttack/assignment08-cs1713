#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"

int main(int argc, char *argv[]) {
    // Write code such that the input is taken from the file - “inputData.txt”
	Student studentFound;
	double avg;
	FILE *infp;
	int N, i;
	
	infp = fopen("inputData.txt", "r");
	if (fopen == NULL) {
		printf("Cannot Open File!\n");
		exit(0);
	}
	
	fscanf(infp, "%d", &N);			//scans the first N of the .txt to determine the length of the array
	
	Student students[N];			//creating the student array struct
	
	getStudentInformation(students, infp, N);
	
    int inputID;
    printf("Enter student id : ");
    scanf("%d", &inputID);

    // Write code to find the student information for the ‘inputID’ using binary search algorithm
	studentFound = searchStudent(students, N, inputID);
	
	if(inputID == studentFound.id) {
		// For the “studentFound” print the student information
		printf("Information of the found student is\n");
		printf("ID : %d\n", studentFound.id);
		printf("FName : %s\n", studentFound.fName);
		printf("Age : %d\n", studentFound.age);
		printf("GPA : %lf\n", studentFound.gpa);
	}
	else {
		// If the student record is not found print “No student record found for inputID”
		printf("No student record found for inputID\n");
	}
	
	fclose(infp);

    return 0;
}

