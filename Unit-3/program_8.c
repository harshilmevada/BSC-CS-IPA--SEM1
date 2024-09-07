#include <stdio.h>

struct employee {
    char name[50];
    float basic_pay;
    float dearness_allowance;
    float house_rent;
    float net_salary;
};


void calculate_net_salary(struct employee emp[5],int);
void print_employee_details(struct employee emp[5],int);

int main() {
    struct employee employees[5];
    int i;

    printf("Enter details for 5 employees:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", &employees[i].name);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basic_pay);
        printf("Dearness Allowance: ");
        scanf("%f", &employees[i].dearness_allowance);
        printf("House Rent: ");
        scanf("%f", &employees[i].house_rent);
    }

    calculate_net_salary(employees, 5);
    print_employee_details(employees, 5);

    return 0;
}

void calculate_net_salary(struct employee emp[5], int n) {
    for (int i = 0; i < n; i++) {
        emp[i].net_salary = emp[i].basic_pay + emp[i].dearness_allowance + emp[i].house_rent;
    }
}

void print_employee_details(struct employee emp[5], int n) {
    struct employee temp;
    int i, j;

    // Bubble sort to arrange employees in descending order of net salary
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (emp[j].net_salary < emp[j + 1].net_salary) {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    printf("Employee Details (Descending Order of Net Salary):\n");
    printf("-------------------------------------------------\n");
    printf("Name\tBasic Pay\tDearness Allowance\tHouse Rent\tNet Salary\n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", emp[i].name, emp[i].basic_pay, emp[i].dearness_allowance, emp[i].house_rent, emp[i].net_salary);
    }
}