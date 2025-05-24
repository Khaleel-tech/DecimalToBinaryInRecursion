ans = 0  # This will store our final binary number as an integer (e.g., 1100 for 12)
pow = 1  # This keeps track of the current place value in binary (1, 10, 100, ...)

def DecToBin(num):
    global ans, pow  # Use the global variables so their values persist through recursion
    if num == 0:
        # Base case: when num reaches 0, return the accumulated binary number
        return ans
    rem = num % 2     # Get the remainder when dividing by 2 (binary digit: 0 or 1)
    num //= 2         # Integer divide num by 2 to move to the next binary digit
    ans += (rem * pow)  # Add the remainder * current power to the final answer
    pow *= 10         # Move power to the next place (1, 10, 100, ...)
    return DecToBin(num)  # Recursive call with the reduced number
print(DecToBin(24))  # Example call; should output binary representation of 24 as an integer
