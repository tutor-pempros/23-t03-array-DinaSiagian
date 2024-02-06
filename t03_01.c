// 12SS23009 - DINA SIAGIAN

#include <stdio.h>

int main() {
    int num, smallest, largest;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

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

    printf("%d\n", smallest);
    printf("%d\n", largest);

    return 0;
}
