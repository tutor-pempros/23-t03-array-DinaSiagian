// 12S23009 - DINA SIAGIAN

#include <stdio.h>
#include <math.h>

int main() {
    int num, smallest, largest;
    int total = 0; // variable to store the total of all numbers
    int count = 0; // variable to count the number of inputs

    for (int i = 0; i < 9; i++) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        total += num; // add the number to the total
        count++; // increment the count

        if (i == 0) {
            smallest = num;
            largest = num;
        } else {
            if (num < smallest) {
                smallest = num;
            }
            if (num > largest) {
                largest = num;
            }
        }
    }

    if (count > 0) {
        double average = round((double)total / count * 100) / 100; // calculate the average
        printf("%d\n", smallest);
        printf("%d\n", largest);
        printf("%.2f\n", average); // print the average
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}