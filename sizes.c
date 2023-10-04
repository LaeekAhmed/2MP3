// Include the standard input/output library
#include <stdio.h>

// Function to increment the value pointed to by a pointer
void increment(int *ptr) {
   (*ptr)++; // Increment the value at the memory location pointed to by ptr
}

int main() {
   // Declare and initialize a character array
   char charArray[] = {'A', 'B', 'C', 'D', 'E'};

   // Print the size of the character array
   printf("size of the string = %ld\n", sizeof(charArray));

   // Print addresses of elements in the character array
   printf("Addresses of elements in the character array:\n");
   for (int i = 0; i < sizeof(charArray) / sizeof(charArray[0]); i++) {
      printf("Element %d: %p\n", i, &charArray[i]);
   }

   // Declare and initialize two character arrays
   char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
   char greetings2[] = "Hello World!";

   printf("\nstring = %s", greetings);
   printf("\nstring = %s", greetings2);

   // Check if the two character arrays are the same
   printf("\n\nsame string ? %d\n", greetings2 == greetings);
   // strcmp returns 0 if the strings are same ie. 0 differences
   printf("same string value ? %d\n", strcmp(greetings, greetings2));

   // Declare and initialize an integer array
   int intArray[] = {11, 51, 63, 84, -8};

   // Print the size of the integer array
   printf("\nsize of the array = %ld\n", sizeof(intArray));

   // Print addresses of elements in the integer array
   printf("\nAddresses of elements in the integer array:\n");
   for (int i = 0; i < sizeof(intArray) / sizeof(intArray[0]); i++) {
      printf("Element %d: %p\n", i, &intArray[i]);
   }

   // Check if the array name and the address of its first element are the same
   printf("same address ? %d\n", intArray == &intArray[0]);

   /*
   Adding 1 to a pointer in C typically moves it by the size of the data type it points to.
   In the case of an `int` which is typically 4 bytes,
   adding 1 to the pointer will move it 4 bytes forward.
   So, for `&intArray[0] + 1`, the pointer will be 4 bytes away from `&intArray[0]`.
   */  
   printf("\nele = %d", *(&intArray[0] + 1));

   // Call the increment function to increment the value pointed to by a pointer
   increment(&intArray[2]);

   // Print the modified element and its address
   printf("\n\nElement %d: %d, its address : %p\n", 2, *&intArray[2], &intArray[2]);   

   return 0;
}
