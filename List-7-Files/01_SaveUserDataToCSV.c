#include <stdio.h>

struct UserData {
    char name[50];
    int age;
    float salary;
};

int main() {
    FILE *csvFile;
    csvFile = fopen("user_data.csv", "w");

    if (csvFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int numUsers;
    printf("Enter the number of users: ");
    scanf("%d", &numUsers);

    struct UserData user;

    fprintf(csvFile, "Name,Age,Salary\n");

    for (int i = 0; i < numUsers; ++i) {
        printf("\nEnter details for user %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", user.name);
        printf("Age: ");
        scanf("%d", &user.age);
        printf("Salary: ");
        scanf("%f", &user.salary);

        fprintf(csvFile, "%s,%d,%.2f\n", user.name, user.age, user.salary);
    }

    fclose(csvFile);
    printf("Data written to user_data.csv successfully.\n");

    return 0;
}
