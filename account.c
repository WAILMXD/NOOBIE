#include <stdio.h>
#include <string.h>
void orders();
void inscreption(char u[100], long b);
char u[100][100];
long b[100];
int count = 0;
int main()
{
    int Orders;
start:
    printf("What do you want to do ?\n");
    orders();
    scanf("%d", &Orders);
    getchar();

    switch (Orders)
    {
    case 1:
    {
        printf("Full name : ");
        fgets(u[count], sizeof(u[count]), stdin);
        u[count][strcspn(u[count], "\n")] = '\0';
        printf("Enter your balance : ");
        scanf("%ld", &b[count]);
        getchar();
        inscreption(u[count], b[count]);
        count++;
    }
    break;
    case 2:
    {
        char name[100];
        int found = 0;
        printf("Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        FILE *file = fopen("account.csv", "r");
        if (file == NULL)
        {
            printf("No accounts registered yet.\n");
            goto start;
        }

        char line[200];
        while (fgets(line, sizeof(line), file))
        {
            char file_name[100];
            long file_balance;
            // Parse line: expects "name [balance]"
            if (sscanf(line, "%99[^[] [%ld]", file_name, &file_balance) == 2)
            {
                // Remove trailing space from file_name if present
                size_t len = strlen(file_name);
                if (len > 0 && file_name[len - 1] == ' ')
                    file_name[len - 1] = '\0';

                if (strcmp(name, file_name) == 0)
                {
                    printf("your balance: %ld\n", file_balance);
                    found = 1;
                    break;
                }
            }
        }
        fclose(file);

        if (!found)
        {
            printf("You are not registered.\nYou must register.\n");
            goto start;
        }
    }
    break;
    case 3:
    {
        printf("We're working on it...\n");
    }
    break;
    case 4:
    {
        printf("Exiting...\n");
    }
    break;
    default:
    {
        printf("invalide choice\n");
        goto start;
    }
    }
}

void orders(void)
{
    printf("1-Registration.\n\n");
    printf("2-See my balance.\n\n");
    printf("3-Delete my account.\n\n");
    printf("4-exit;\n\n");
}

void inscreption(char u[100], long b)
{
    FILE *file = fopen("account.csv", "a");
    if (file == NULL)
    {
        printf("Error opening file :(\n");
        return;
    }

    fprintf(file, "%s [%ld]\n", u, b);
    fclose(file);
    printf("Your account have saved successfully!\n");
}
