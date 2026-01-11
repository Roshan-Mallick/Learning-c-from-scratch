#include <stdio.h>   // Includes standard input/output functions like printf

int main() {
    // Declare a character array to store the full name.
 
    char fullName[] = {'R','O','S','H','A','N',' ', 'M','A','L','L','I','I','C','K','\0'};     // '\0' is the null terminator which marks the end of the string.

    // Loop through the array character by character
    // The loop continues until it reaches the null terminator '\0'
    for (int i = 0; fullName[i] != '\0'; i++) {
        // Print each character one by one
        printf("%c", fullName[i]);
    }

    // End of program
    return 0;
}

