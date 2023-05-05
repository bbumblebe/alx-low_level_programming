Title: Bit Manipulation in C

## Introduction
Bit manipulation is the process of manipulating individual bits within a byte or a larger data structure. In C programming language, bit manipulation can be performed using bitwise operators.

## Bitwise Operators in C
C provides six bitwise operators that can be used for bit manipulation:

- `&` (Bitwise AND)
- `|` (Bitwise OR)
- `^` (Bitwise XOR)
- `~` (Bitwise NOT)
- `<<` (Left shift)
- `>>` (Right shift)

## Examples
Here are some examples of how to use these operators in C:

### Bitwise AND (`&`)
The `&` operator compares each bit of two integers. If both bits are 1, the corresponding result bit is set to 1. Otherwise, the result bit is set to 0.

Example:
```
   0x89 & 0x01 = 0x01
```

### Bitwise OR (`|`)
The `|` operator performs a bitwise logical OR operation between its two operands. It produces a result that has a 1 in each bit position where at least one of the corresponding bits in the operands is 1.

Example:
```
   0x44 | 0x22 = 0x66
```

### Bitwise XOR (`^`)
The `^` operator performs a bitwise logical XOR operation between its two operands. It produces a result that has a 1 in each bit position where the corresponding bits in the operands are different.

Example:
```
   0x89 ^ 0x01 = 0x88
```

### Bitwise NOT (`~`)
The `~` operator performs a bitwise logical NOT operation on its operand. It produces a result that has each bit inverted (i.e., 1s become 0s and 0s become 1s).

Example:
```
   ~0x98 = 0x67
```

### Left shift (`<<`)
The `<<` operator shifts the bits of its first operand to the left by a number of positions specified by its second operand. Zeros are shifted in from the right.

Example:
```
   0x13 << 1 = 0x26
```

### Right shift (`>>`)
The `>>` operator shifts the bits of its first operand to the right by a number of positions specified by its second operand. The sign bit is shifted in from the left for signed types, and zeros are shifted in from the left for unsigned types.

Example:
```
   0x89 >> 3 = 0x11
```

## Conclusion
Bit manipulation is a powerful tool in C programming language that allows us to perform operations on individual bits within a data structure. Understanding bitwise operators and their use cases is essential for any programmer who works with low-level programming.
