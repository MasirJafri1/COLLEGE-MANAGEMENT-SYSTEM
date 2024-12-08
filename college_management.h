#ifndef COLLEGE_MANAGEMENT_H
#define COLLEGE_MANAGEMENT_H

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define MAX_NAME_LEN 50
#define MAX_COURSES 10
#define MAX_STUDENTS 100

// Structures
typedef struct
{
    int courseId;
    char courseName[MAX_NAME_LEN];
    int credits;
    char instructor[MAX_NAME_LEN];
} Course;

typedef struct
{
    int studentId;
    char name[MAX_NAME_LEN];
    int age;
    char course[MAX_NAME_LEN];
    int year;
    char contact[MAX_NAME_LEN];
} Student;

typedef struct
{
    int facultyId;
    char name[MAX_NAME_LEN];
    char department[MAX_NAME_LEN];
    char position[MAX_NAME_LEN];
    char contact[MAX_NAME_LEN];
} Faculty;

typedef struct
{
    int studentId;
    int courseId;
    int attendance;
} Attendance;

typedef struct
{
    int studentId;
    int courseId;
    float grade;
} Grade;

// Function Prototypes
void manageCourses();
void manageStudents();
void manageFaculty();
void manageAttendance();
void manageGrades();

#endif // COLLEGE_MANAGEMENT_H
