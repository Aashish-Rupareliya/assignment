//
//  main.c
//  max numm using array
//
//  Created by apple on 10/04/23.
//

#include <stdio.h>

int find_max(int arr[], int n) {
    int max_num = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i];    
        }
    }
    return max_num;
}

int main() {
    int arr[] = {4, 1, 7, 2, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_num = find_max(arr, n);
    printf("The maximum number in the array is %d\n", max_num);
    return 0;
}
