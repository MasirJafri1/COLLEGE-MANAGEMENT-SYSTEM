#include "college_management.h"

Faculty facultyList[MAX_COURSES];
int facultyCount = 0;

void addFaculty()
{
    if (facultyCount >= MAX_COURSES)
    {
        printf("Faculty limit reached!\n");
        return;
    }

    printf("Enter Faculty ID: ");
    scanf("%d", &facultyList[facultyCount].facultyId);
    printf("Enter Name: ");
    scanf(" %[^\n]", facultyList[facultyCount].name);
    printf("Enter Department: ");
    scanf(" %[^\n]", facultyList[facultyCount].department);
    printf("Enter Position: ");
    scanf(" %[^\n]", facultyList[facultyCount].position);
    printf("Enter Contact Info: ");
    scanf(" %[^\n]", facultyList[facultyCount].contact);

    facultyCount++;
    printf("Faculty added successfully!\n");
}

void viewFaculty()
{
    if (facultyCount == 0)
    {
        printf("No faculty members available.\n");
        return;
    }

    printf("\nRegistered Faculty:\n");
    for (int i = 0; i < facultyCount; i++)
    {
        printf("ID: %d, Name: %s, Department: %s, Position: %s, Contact: %s\n",
               facultyList[i].facultyId, facultyList[i].name,
               facultyList[i].department, facultyList[i].position,
               facultyList[i].contact);
    }
}

void manageFaculty()
{
    int choice;

    while (1)
    {
        printf("\n--- Faculty Management ---\n");
        printf("1. Add Faculty\n");
        printf("2. View Faculty\n");
        printf("3. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addFaculty();
            break;
        case 2:
            viewFaculty();
            break;
        case 3:
            return;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
