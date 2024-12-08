#include "college_management.h"

void displayMenu()
{
    printf("\n======= College Management System =======\n");
    printf("1. Course Management\n");
    printf("2. Student Management\n");
    printf("3. Faculty Management\n");
    printf("4. Attendance Management\n");
    printf("5. Grading System\n");
    printf("6. Exit\n");
    printf("=========================================\n");
    printf("Enter your choice: ");
}

int main()
{
    int choice;

    while (1)
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            manageCourses();
            break;
        case 2:
            manageStudents();
            break;
        case 3:
            manageFaculty();
            break;
        case 4:
            manageAttendance();
            break;
        case 5:
            manageGrades();
            break;
        case 6:
            printf("Exiting the system. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
