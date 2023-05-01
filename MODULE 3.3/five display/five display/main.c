//
//  main.c
//  five display
//
//  Created by apple on 01/05/23.
//

#include <stdio.h>

// Define the employee structure
struct employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to print employee information
void print_employee(struct employee emp) {
    printf("Employee No.: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

// Function to read employee information from user
struct employee read_employee() {
    struct employee emp;
    
    printf("Enter Employee No.: ");
    scanf("%d", &emp.empno);
    printf("Enter Employee Name: ");
    scanf("%s", emp.empname);
    printf("Enter Address: ");
    scanf("%s", emp.address);
    printf("Enter Age: ");
    scanf("%d", &emp.age);
    
    return emp;
}

int main()
{
    int i;
    struct employee emp_arr[5];
    
    // Read employee information from user for five employees
    for (i = 0; i < 5; i++) {
        printf("\nEnter Information for Employee %d:\n", i+1);
        emp_arr[i] = read_employee();
    }
    
    // Print employee information for all five employees
    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i+1);
        print_employee(emp_arr[i]);
    }
    
    return 0;
}
