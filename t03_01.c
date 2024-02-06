// 12SS23009 - DINA SIAGIAN

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int smallest, largest;
    char input[20]; 


    int n = 0;
    while (1) {
        scanf("%s", input);
        
        if (strcmp(input, "---") == 0) {
            break;
        }

        arr[n] = atoi(input);
        n++;
        
        if (n >= MAX_SIZE) {
            printf("Batas array tercapai. Mengakhiri masukan nilai.\n");
            break;
        }
    }

    if (n == 0) {
        printf("Tidak ada nilai yang dimasukkan.\n");
        return 0;
    }

    smallest = largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("%d\n", smallest);
    printf("%d\n", largest);

    return 0;
}
