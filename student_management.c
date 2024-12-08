#include "college_management.h"

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent()
{
    if (studentCount >= MAX_STUDENTS)
    {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d", &students[studentCount].studentId);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[studentCount].name);
    printf("Enter Age: ");
    scanf("%d", &students[studentCount].age);
    printf("Enter Course: ");
    scanf(" %[^\n]", students[studentCount].course);
    printf("Enter Year: ");
    scanf("%d", &students[studentCount].year);
    printf("Enter Contact Info: ");
    scanf(" %[^\n]", students[studentCount].contact);

    studentCount++;
    printf("Student added successfully!\n");
}

void viewStudents()
{
    if (studentCount == 0)
    {
        printf("No students available.\n");
        return;
    }

    printf("\nRegistered Students:\n");
    for (int i = 0; i < studentCount; i++)
    {
        printf("ID: %d, Name: %s, Age: %d, Course: %s, Year: %d, Contact: %s\n",
               students[i].studentId, students[i].name, students[i].age,
               students[i].course, students[i].year, students[i].contact);
    }
}

void manageStudents()
{
    int choice;

    while (1)
    {
        printf("\n--- Student Management ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            viewStudents();
            break;
        case 3:
            return;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
