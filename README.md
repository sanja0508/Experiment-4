# Experiment-4
Aim: To study and implement Bitwise Operators in C++.

Software Required: Visual Studio

Theory: In C++, bitwise operators allow direct manipulation of bits within integer data types. These operators treat values as sequences of binary digits (bits) rather than decimal or hexadecimal numbers. Bitwise operations are crucial in low-level programming, system-level tasks, memory-efficient applications, embedded systems, and performance optimization.

Below are the commonly used bitwise operators in C++:

Bitwise AND (&) Performs a bit-by-bit comparison of two integers. A bit in the result is set to 1 only if both corresponding bits in the operands are 1. Otherwise, it is 0. Example: 5 & 3 → 0101 & 0011 = 0001 (decimal 1)

Bitwise OR (|) Compares each corresponding bit of two integers. If at least one bit is 1, the result bit is 1. Otherwise, it is 0. Example: 5 | 3 → 0101 | 0011 = 0111 (decimal 7)

Bitwise XOR (^) Returns 1 if the bits in the corresponding position are different, otherwise returns 0. Example: 5 ^ 3 → 0101 ^ 0011 = 0110 (decimal 6)

Bitwise NOT (~) Inverts all the bits of a number. 0 becomes 1 and 1 becomes 0. Example: ~5 → ~00000101 = 11111010 (in two's complement representation)

Left Shift (<<) Shifts the bits of a number to the left by a specified number of positions. This is equivalent to multiplying the number by 2^n, where n is the number of shifted positions. Example: 5 << 1 → 101 << 1 = 1010 (decimal 10)

Right Shift (>>) Shifts the bits of a number to the right by a specified number of positions. This is equivalent to dividing the number by 2^n. Example: 8 >> 2 → 1000 >> 2 = 0010 (decimal 2)

Implementation: To understand the practical use of bitwise operators in C++, two programs were implemented:

Program 1: Basic Bitwise Operations Objective: To perform and display the results of various bitwise operations using two predefined integers.

Steps:

Start

Declare and initialize two integers: a = 3, b = 7

Perform operations:

bitwise_and = a & b

bitwise_or = a | b

bitwise_xor = a ^ b

bitwise_not = ~a

Perform shifts:

leftshift = a << 2

rightshift = 3 >> a

Display all results using cout

End

Program 2: Setting and Resetting Bits Objective: To modify a predefined integer by setting and resetting specific bits based on user input.

Steps:

Start

Initialize integer: i = 80

Ask user to enter a bit position to set

Read input into bit_to_be_set

Set bit using: set = i | (1 << bit_to_be_set)

Ask user to enter a bit position to reset

Read input into bit_to_be_reset

Reset bit using: reset = i & ~(1 << bit_to_be_reset)

Display the result after setting

Display the result after resetting

End

Conclusion: This experiment explored the various types of bitwise operators available in C++. Through hands-on implementation, I gained insight into how bit-level operations can be used for data manipulation, setting and clearing bits, and performing efficient calculations within a program.
