#include "college_management.h"

Course courses[MAX_COURSES];
int courseCount = 0;

void addCourse()
{
    if (courseCount >= MAX_COURSES)
    {
        printf("Course limit reached!\n");
        return;
    }

    printf("Enter Course ID: ");
    scanf("%d", &courses[courseCount].courseId);
    printf("Enter Course Name: ");
    scanf(" %[^\n]", courses[courseCount].courseName);
    printf("Enter Credits: ");
    scanf("%d", &courses[courseCount].credits);
    printf("Enter Instructor Name: ");
    scanf(" %[^\n]", courses[courseCount].instructor);

    courseCount++;
    printf("Course added successfully!\n");
}

void viewCourses()
{
    if (courseCount == 0)
    {
        printf("No courses available.\n");
        return;
    }

    printf("\nAvailable Courses:\n");
    for (int i = 0; i < courseCount; i++)
    {
        printf("ID: %d, Name: %s, Credits: %d, Instructor: %s\n",
               courses[i].courseId, courses[i].courseName,
               courses[i].credits, courses[i].instructor);
    }
}

void manageCourses()
{
    int choice;

    while (1)
    {
        printf("\n--- Course Management ---\n");
        printf("1. Add Course\n");
        printf("2. View Courses\n");
        printf("3. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addCourse();
            break;
        case 2:
            viewCourses();
            break;
        case 3:
            return;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
