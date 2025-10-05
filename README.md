🧮 Implicit Conversion: Addition of Integer and Double in C
📖 Overview

This program demonstrates implicit type conversion (also called type promotion and demotion) in the C programming language.
It shows how an int value is promoted to double during an arithmetic operation, and then how the result is converted back to int when stored in an integer variable.
💡 Concept

In C, when performing arithmetic between an int and a double,
the int is first promoted to double to ensure consistent precision during calculation.
However, if the result is stored in an int variable, the value is implicitly converted back to integer — the decimal part is lost.
example:
int a = 5;
double b = 2.5;
int result = a + b; // 'a' is promoted to double, then the result is converted back to int
output:
Result = 7
(The decimal part .5 is truncated because result is of type int.)
