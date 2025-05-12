# Digit Frequency Counter in C

This C program reads a string from the user and counts how many times each digit (0–9) appears in the input. It is a simple example of string processing and character validation in C.

## 🔧 Features

- Accepts input strings containing **any characters** (letters, numbers, symbols, etc.)
- Iterates through the string and identifies all digits (`'0'` to `'9'`)
- Uses an array to keep count of digit occurrences
- Outputs the result as a space-separated list of counts for digits `0` to `9`

## 🚀 How It Works

1. **Input**  
   Reads a line of input from the user.

2. **Digit Counting**  
   Scans the input string character by character:
   - If the character is a digit (`'0'`–`'9'`), it increments the corresponding index in an array of size 10.

3. **Output**  
   Prints the frequency of each digit (from 0 to 9) separated by spaces.


