#include <stdio.h>
#include <string.h>
// Define a structure for employee details
struct Employee {
    int empID;
    char empName[50];
    char designation[50];
    char department[50];
    float salary;
    char mobileNumber[15];
};
int main() {
    struct Employee employees[10];
    int i;
    
    // Accept details for 10 employees
    for (i = 0; i < 10; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        
        printf("Employee ID: ");
        scanf("%d", &employees[i].empID);
        
        printf("Employee Name: ");
        scanf("%s", employees[i].empName);
        
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        
        printf("Department: ");
        scanf("%s", employees[i].department);
        
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        
        printf("Mobile Number: ");
        scanf("%s", employees[i].mobileNumber);
        
        printf("\n");
    }
    
    // Find the highest-paid employee
    int highestPaidIndex = 0;
    float highestSalary = employees[0].salary;
    
    for (i = 1; i < 10; i++) {
        if (employees[i].salary > highestSalary) {
            highestSalary = employees[i].salary;
            highestPaidIndex = i;
        }
    }
    
    // Display details of the highest-paid employee
    printf("Details of the highest-paid employee:\n");
    printf("Employee ID: %d\n", employees[highestPaidIndex].empID);
    printf("Employee Name: %s\n", employees[highestPaidIndex].empName);
    printf("Designation: %s\n", employees[highestPaidIndex].designation);
    printf("Department: %s\n", employees[highestPaidIndex].department);
    printf("Salary: %.2f\n", employees[highestPaidIndex].salary);
    printf("Mobile Number: %s\n", employees[highestPaidIndex].mobileNumber);

    return 0;
}
