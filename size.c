#include <stdio.h>

int main() {
    char charArray[] = {'A', 'B', 'C', 'D', 'E'};
    int intArray[] = {1, 2, 3, 4, 5};

    printf("Addresses of elements in the character array:\n");
    for (int i = 0; i < sizeof(charArray) / sizeof(charArray[0]); i++) {
        printf("Element %d: %p\n", i, &charArray[i]);
    }

    printf("\nAddresses of elements in the integer array:\n");
    for (int i = 0; i < sizeof(intArray) / sizeof(intArray[0]); i++) {
        printf("Element %d: %p\n", i, &intArray[i]);
    }

    return 0;
}