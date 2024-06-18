# Implementation of Polynomial Class in C++ with Operator Overloading for Arithmetic Operations

## Overview:
This repository contains a C++ implementation of a Polynomial class that supports arithmetic operations (+ and -) and comparison (==) using operator overloading. The Polynomial class allows users to create polynomials of varying degrees, and input coefficients, perform basic arithmetic operations, and compare polynomials for equality.

# Features:
- Dynamic Coefficient Array: Supports polynomials with dynamically allocated coefficient arrays.
- Arithmetic Operations: Overloaded operators (+, -, +=, -=) for addition and subtraction of polynomials.
- Comparison: Overloaded equality operator (==) to compare two polynomials.
- Input/Output Operations: Overloaded << and >> operators for convenient input and output of polynomial objects.
- Memory Management: Proper destructor implementation to manage dynamic memory allocation.

# Usage:
- Initialization: Create Polynomial objects using the default constructor or specify the size (degree) of the polynomial.
  #### Polynomial poly1; // Default constructor.
  #### Polynomial poly2(5); // Polynomial of degree 5.
- Input Coefficients: Use overloaded >> operator to input coefficients for a polynomial.
- Arithmetic Operations:
   - Addition: Use the + operator to add two polynomials
   - Subtraction: Use the - operator to subtract one polynomial from another.
   - Compound Assignment: Use += and -= operators for in-place addition and subtraction.
     
- Comparison: Use the == operator to check if two polynomials are equal
- Output: Use the << operator for formatted output of polynomial objects
  
# Implementations:
- Polynomial Class: Defined in polynomial.h header file and implemented in polynomial.cpp.
- Main Program: PolynomialMain.cpp demonstrates the usage of the Polynomial class with examples of input, arithmetic operations, and comparisons.
  
# Additional Notes:
- Ensure to include polynomial.h in any source file where Polynomial class objects are used.
- Properly manage dynamic memory by implementing copy constructors, assignment operators, and destructors as demonstrated in the Polynomial class.
  
