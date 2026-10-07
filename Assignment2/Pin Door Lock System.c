#include <stdio.h>
#include <windows.h>   /* for Sleep() */

int main()
{
    int correctPin = 1234;
    int pin, choice, i, attempt;
    int granted = 0;

    while (granted == 0)
    {
        /* 3 attempts */
        for (attempt = 1; attempt <= 3; attempt++)
        {
            printf("Enter 4-digit PIN: ");
            scanf("%d", &pin);

            if (pin < 1000)
                printf("PIN is too short (must be 4 digits)\n");
            else if (pin > 9999)
                printf("PIN is too long (must be 4 digits)\n");
            else
                printf("PIN is exactly 4 digits\n");

            if (pin == correctPin)
            {
                granted = 1;
                break;
            }
            printf("Wrong PIN. Remaining attempts: %d\n\n", 3 - attempt);
        }

        /* locked out */
        if (granted == 0)
        {
            printf("System locked! Wait for 5 seconds...\n");
            for (i = 5; i >= 1; i--)
            {
                printf("%d... ", i);
                Sleep(1000);
            }
            printf("\nYou can try again now.\n\n");
        }
    }

    /* menu */
    do
    {
        printf("\n=== Device Menu ===\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Access granted. Door unlocked\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
