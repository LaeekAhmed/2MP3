#include <stdio.h>

int main() {
   // Define a 3x3 matrix as a 2D array
   int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
   };

   // modify :
   matrix[1][1] = 45;
   // Access and print elements of the matrix
   printf("Matrix elements:\n");
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         printf("%d\t", matrix[i][j]);
      }
      printf("\n");
   }

   int num1, num2;

   // Ask the user to type two numbers
   printf("Type two numbers separated by a space: \n");

   // Get and save the two numbers the user types
   scanf("%d %d", &num1, &num2);

   printf("You entered: %d and %d\n", num1, num2);

   // Access and print a specific element based on user input (e.g., element at row 2, column 1)
   int element = matrix[num1][num2];

   // Use printf for dynamic string formatting
   printf("Element at row %d, column %d: %d\n", num1, num2, element);
   
   return 0;
}

