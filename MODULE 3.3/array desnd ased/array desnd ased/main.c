//
//  main.c
//  array desnd ased
//
//  Created by apple on 10/04/23.
//

#include <stdio.h>


void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void sort_array_asc(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void sort_array_desc(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr1[100], arr2[100], n1, n2, choice;
    
  
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements of the first array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
  
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements of the second array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    
    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);
    
    
    if (choice == 1) {
        sort_array_asc(arr1, n1);
    }
    else if (choice == 2) {
        sort_array_desc(arr1, n1);
    }
    else {
        printf("Invalid choice\n");
        return 1;
    }
    
   
    if (choice == 1) {
        sort_array_asc(arr2, n2);
    }
    else if (choice == 2) {
        sort_array_desc(arr2, n2);
    }
    else {
        printf("Invalid choice\n");
        return 1;
    }
    
   
    printf("The first array in sorted order is: ");
    print_array(arr1, n1);
    printf("The second array in sorted order is: ");
    print_array(arr2, n2);
    
    return 0;
}
