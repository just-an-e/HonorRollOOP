#include "GetData.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{

	Student theStudent();

	theStudent.setValidFirst();
	theStudent.setValidLast();

	theStudent.setValidCourseNum();

	theStudent.setValidCourses();
	theStudent.setValidCourseGrades();

	theStudent.calcAverage();

	theStudent.getOutput();

}

/*
Justin Ecarma
11/15/2019
HonorRollLab

Program Purpose: Tell a student whether they're eligible for the Honor Roll

Known Bugs:

If an entered int is too long, it will end the program.

Requirements:

Students are eligible if they have at least a 90 average, are taking 5 or more courses, and have had no discipline infractions.

Students can take a maximum of 8 courses per semester.

Get input from the user. Full name, how many courses they're taking, and the names of those courses and the grades they have in them.

Course names cannot be longer than 20 characters.

Course grades are limited to ints.

Course Average must rounded to the nearest int.

Randomly assign a disciplinary infraction.

Error trap all inputs.

Print out all of the variables after they have been inputed.

All output should be pleasantly formatted.

Then output one of the following statements depending on whether or not the student is eligible for Honor Roll:

Eligible for honor roll:
Congratulations FIRSTNAME LASTNAME! You have made the honor roll.
Not eligible for honor roll:
I�m sorry FIRSTNAME LASTNAME but you didn�t qualify for the honor roll.

Two variations: OOP and Procedural
*/