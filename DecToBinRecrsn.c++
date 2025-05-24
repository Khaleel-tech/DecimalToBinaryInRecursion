#include <bits/stdc++.h>
using namespace std;

// Global variables to store the binary answer and the current power of 10
int ans = 0;     // This will store the final binary number as an integer (e.g., 1010)
int power = 1;   // Used to multiply the binary digit by 10^position (1, 10, 100, ...)

string DecToBin(int num) {
    // Base case: when number is zero, return the accumulated answer as a string
    if (num == 0) {
        string temp = to_string(ans);  // Convert integer ans to string
        ans = 0;       // Reset global variable for next calls
        power = 1;     // Reset power to 1 for next calls
        return temp;   // Return the binary representation as string
    }
    int rem = num % 2;   // Get the remainder (binary digit)
    num /= 2;            // Divide number by 2 to process next bit
    ans += (rem * power); // Add remainder multiplied by current power of 10 to ans
    power *= 10;          // Increase power of 10 for next digit (move left in binary)
    return DecToBin(num); // Recursive call with reduced number
    
}

int main() {
    int ExNum = 10;  // Decimal number to convert
    cout << DecToBin(ExNum) << endl;  // Print binary representation of ExNum
    return 0;
}
