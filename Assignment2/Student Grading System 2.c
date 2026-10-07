#include <stdio.h>

int main()
{
    int n, i, regNo, marks;
    char name[50], grade;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nStudent %d\n", i);
        printf("Registration No: ");
        scanf("%d", &regNo);
        printf("Name: ");
        scanf("%s", name);
        printf("Marks: ");
        scanf("%d", &marks);

        switch (marks / 10)
        {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
        }

        printf("\n---------------------------------\n");
        printf("       STUDENT INFORMATION\n");
        printf("---------------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        switch (grade)
        {
            case 'F':
                printf("Status: Fail\n");
                break;
            default:
                printf("Status: Pass\n");
        }
        printf("---------------------------------\n");
    }

    return 0;
}
