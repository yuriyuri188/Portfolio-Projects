# Variadic Function Utilities in C

This C program demonstrates the use of **variadic functions** to compute the sum, minimum, and maximum of a variable number of positive integer arguments. It includes automated test cases to verify correctness.

## 🧠 Functions Implemented

- `m_sum(int count, ...)`  
  Returns the sum of all arguments.

- `m_min(int count, ...)`  
  Returns the minimum value among the arguments.

- `m_max(int count, ...)`  
  Returns the maximum value among the arguments.

These functions are implemented using the `stdarg.h` library in C.

## 🧪 Testing

The program includes test routines that:

- Randomly generate sets of **3, 5, and 10 positive integers**
- Compute the expected sum, minimum, and maximum manually
- Compare expected results to the values returned by the variadic functions

If all checks pass, the output is:
Correct Answer

Otherwise, the output is:
Wrong Answer



