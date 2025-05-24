#include <stdio.h>
#include <string.h>

// Global variables to store the final binary number and current power of 10
int ans = 0;    // This will store the final binary number in integer form
int power = 1;  // Multiplier for each binary digit's place (1, 10, 100, ...)

void DecToBin(int num) {
    // Base case: if number is 0, print the accumulated binary number
    if (num == 0) {
        char str[20];  // Buffer to hold the converted string
        snprintf(str, sizeof(str), "%d", ans); // Convert integer to string
        ans = 0;       // Reset for next use
        power = 1;     // Reset for next use
        printf("%s\n", str);  // Print the binary result
        return;
    }

    // Recursive case: calculate remainder and update ans
    int rem = num % 2;         // Get the last binary digit (0 or 1)
    num /= 2;                  // Reduce number for next call
    ans += (rem * power);      // Place the digit in the correct position
    power *= 10;               // Move to next position (10, 100, ...)

    // Recursive call with the reduced number
    DecToBin(num);    
}

int main() {
    int ExNum = 10;         // Example decimal number
    DecToBin(ExNum);        // Call function to convert and print binary
    return 0;               // End of program
}
