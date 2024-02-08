// 12SS23009 - DINA SIAGIAN

#include <stdio.h>

int main() {
    int n, i;
    int numbers[100]; // Array to hold the numbers

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Assume the first number is the smallest and largest
    int min = numbers[0];
    int max = numbers[0];

    // Loop through the array to find the actual min and max
    for(i = 1; i < n; i++) {
        if(numbers[i] < min) {
            min = numbers[i];
        }
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("%d\n", min);
    printf("%d\n", max);

    return 0;
} 