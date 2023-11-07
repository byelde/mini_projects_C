# include <stdio.h>
# include <string.h>
# include <stdlib.h>

float increaseSalary (float salary, float percent) {
    return salary*(1+(percent/100));
}

struct employerData {
    char name[51];
    float lastSalary;
    float newSalary;
};

typedef struct employerData employerData;
int main () {

    float percentIncrease;
    employerData employer;

    system("cls");

    printf("Increase %%");
    scanf("%f", &percentIncrease);
    fflush(stdin);

    puts("\nEMPLOYER DATA ------------------------\n");

    printf("Name: ");
    scanf("%50[^\n]s", employer.name);
    fflush(stdin);

    printf("Salary (in U$): ");
    scanf("%f", &employer.lastSalary);
    fflush(stdin);

    employer.newSalary = increaseSalary(employer.lastSalary, percentIncrease);

    system("cls");

    puts("\nEMPLOYER DATA ------------------------\n");
    printf("Name: %s\n", employer.name);
    printf("Current Salary: U$%.2f\n", employer.lastSalary);
    printf("New Salary: U$%.2f\n", employer.newSalary);

}