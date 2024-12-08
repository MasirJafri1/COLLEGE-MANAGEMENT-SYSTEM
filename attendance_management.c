#include "college_management.h"

Attendance attendanceRecords[MAX_STUDENTS];
int attendanceCount = 0;

void recordAttendance()
{
    printf("Enter Student ID: ");
    scanf("%d", &attendanceRecords[attendanceCount].studentId);
    printf("Enter Course ID: ");
    scanf("%d", &attendanceRecords[attendanceCount].courseId);
    printf("Enter Attendance (Percentage): ");
    scanf("%d", &attendanceRecords[attendanceCount].attendance);

    attendanceCount++;
    printf("Attendance recorded successfully!\n");
}

void viewAttendance()
{
    if (attendanceCount == 0)
    {
        printf("No attendance records available.\n");
        return;
    }

    printf("\nAttendance Records:\n");
    for (int i = 0; i < attendanceCount; i++)
    {
        printf("Student ID: %d, Course ID: %d, Attendance: %d%%\n",
               attendanceRecords[i].studentId,
               attendanceRecords[i].courseId,
               attendanceRecords[i].attendance);
    }
}

void manageAttendance()
{
    int choice;

    while (1)
    {
        printf("\n--- Attendance Management ---\n");
        printf("1. Record Attendance\n");
        printf("2. View Attendance\n");
        printf("3. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            recordAttendance();
            break;
        case 2:
            viewAttendance();
            break;
        case 3:
            return;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
