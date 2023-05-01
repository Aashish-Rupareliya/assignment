//
//  main.c
//  display
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
    // Read employee information from user
    struct employee emp = read_employee();
    
    // Print employee information
    printf("\nEmployee Information:\n");
    print_employee(emp);
    
    return 0;
}
