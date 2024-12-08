#include "college_management.h"

Grade gradeRecords[MAX_STUDENTS];
int gradeCount = 0;

void recordGrade()
{
    printf("Enter Student ID: ");
    scanf("%d", &gradeRecords[gradeCount].studentId);
    printf("Enter Course ID: ");
    scanf("%d", &gradeRecords[gradeCount].courseId);
    printf("Enter Grade (0.0 - 4.0 scale): ");
    scanf("%f", &gradeRecords[gradeCount].grade);

    gradeCount++;
    printf("Grade recorded successfully!\n");
}

void calculateGPA()
{
    int studentId, totalCourses = 0;
    float totalGradePoints = 0.0;

    printf("Enter Student ID to calculate GPA: ");
    scanf("%d", &studentId);

    for (int i = 0; i < gradeCount; i++)
    {
        if (gradeRecords[i].studentId == studentId)
        {
            totalCourses++;
            totalGradePoints += gradeRecords[i].grade;
        }
    }

    if (totalCourses == 0)
    {
        printf("No grades available for the given Student ID.\n");
    }
    else
    {
        float gpa = totalGradePoints / totalCourses;
        printf("GPA for Student ID %d: %.2f\n", studentId, gpa);
    }
}

void manageGrades()
{
    int choice;

    while (1)
    {
        printf("\n--- Grading System ---\n");
        printf("1. Record Grade\n");
        printf("2. Calculate GPA\n");
        printf("3. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            recordGrade();
            break;
        case 2:
            calculateGPA();
            break;
        case 3:
            return;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
