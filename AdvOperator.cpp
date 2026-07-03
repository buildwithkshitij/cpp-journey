/* # 📘 C++ Operators

Operators are special symbols that perform operations on one or more operands (variables or values).

```cpp
int a = 10;
int b = 5;

int sum = a + b;
```

- **Operands:** `a`, `b`
- **Operator:** `+`

---

# 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

| Operator | Description | Example |
|----------|-------------|---------|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Modulus (Remainder) | `a % b` |

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    return 0;
}
```

**Output**

```
Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3
Modulus: 1
```

> **Note:** When both operands are integers, `/` performs integer division.

---

# 2. Relational (Comparison) Operators

These operators compare two values and return either **true (1)** or **false (0)**.

| Operator | Meaning |
|----------|---------|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

### Example

```cpp
int a = 10;
int b = 20;

cout << (a == b) << endl;
cout << (a < b) << endl;
cout << (a != b) << endl;
```

**Output**

```
0
1
1
```

---

# 3. Logical Operators

Logical operators are used to combine multiple conditions.

| Operator | Meaning |
|----------|---------|
| `&&` | Logical AND |
| `||` | Logical OR |
| `!` | Logical NOT |

### Example

```cpp
int age = 20;

cout << (age >= 18 && age <= 60) << endl;
cout << (age < 18 || age > 60) << endl;
cout << !(age == 20) << endl;
```

### Truth Table

#### AND (`&&`)

| A | B | Result |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

#### OR (`||`)

| A | B | Result |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

#### NOT (`!`)

| A | Result |
|---|--------|
| 0 | 1 |
| 1 | 0 |

---

# 4. Assignment Operators

Assignment operators assign or update the value of a variable.

| Operator | Example | Equivalent |
|----------|---------|------------|
| `=` | `a = 5` | Assign value |
| `+=` | `a += 2` | `a = a + 2` |
| `-=` | `a -= 2` | `a = a - 2` |
| `*=` | `a *= 2` | `a = a * 2` |
| `/=` | `a /= 2` | `a = a / 2` |
| `%=` | `a %= 2` | `a = a % 2` |

### Example

```cpp
int a = 10;

a += 5;
cout << a << endl;

a *= 2;
cout << a << endl;
```

**Output**

```
15
30
```

---

# 5. Increment and Decrement Operators

These operators increase or decrease a variable by **1**.

| Operator | Description |
|----------|-------------|
| `++` | Increment |
| `--` | Decrement |

## Pre-Increment

```cpp
int a = 5;

cout << ++a;
```

**Output**

```
6
```

The value is incremented **before** it is used.

---

## Post-Increment

```cpp
int a = 5;

cout << a++ << endl;
cout << a;
```

**Output**

```
5
6
```

The value is used **first**, then incremented.

---

## Pre-Decrement

```cpp
int a = 5;

cout << --a;
```

**Output**

```
4
```

---

## Post-Decrement

```cpp
int a = 5;

cout << a-- << endl;
cout << a;
```

**Output**

```
5
4
```

---

# 6. Bitwise Operators

Bitwise operators work directly on the binary representation of numbers.

| Operator | Meaning |
|----------|---------|
| `&` | Bitwise AND |
| `|` | Bitwise OR |
| `^` | Bitwise XOR |
| `~` | Bitwise NOT |
| `<<` | Left Shift |
| `>>` | Right Shift |

### Example

```cpp
int a = 5;
int b = 3;

cout << (a & b) << endl;
cout << (a | b) << endl;
cout << (a ^ b) << endl;
```

---

# 7. Ternary Operator (`?:`)

The ternary operator is a shorthand for `if...else`.

### Syntax

```cpp
condition ? expression1 : expression2;
```

### Example

```cpp
int age = 20;

string result = (age >= 18) ? "Adult" : "Minor";

cout << result;
```

**Output**

```
Adult
```

---

# 8. sizeof Operator

The `sizeof` operator returns the size of a data type or variable in bytes.

### Example

```cpp
cout << sizeof(int) << endl;
cout << sizeof(char) << endl;
cout << sizeof(double) << endl;
```

---

# 9. Comma Operator

The comma operator evaluates multiple expressions from left to right and returns the value of the last expression.

### Example

```cpp
int a = (2, 4, 6);

cout << a;
```

**Output**

```
6
```

---

# 10. Operator Precedence

Operator precedence determines the order in which operations are evaluated.

| Priority | Operators |
|----------|-----------|
| Highest | `()` |
| | `++ --` |
| | `* / %` |
| | `+ -` |
| | `< <= > >=` |
| | `== !=` |
| | `&&` |
| | `||` |
| Lowest | `=` |

### Example

```cpp
int x = 2 + 3 * 4;

cout << x;
```

**Output**

```
14
```

Because multiplication (`*`) has higher precedence than addition (`+`).

---

# 📝 Summary

- Arithmetic Operators → `+ - * / %`
- Relational Operators → `== != > < >= <=`
- Logical Operators → `&& || !`
- Assignment Operators → `= += -= *= /= %=`
- Increment & Decrement → `++ --`
- Bitwise Operators → `& | ^ ~ << >>`
- Ternary Operator → `?:`
- `sizeof` → Returns the size of a data type or variable.
- Comma Operator → Returns the last expression.
- Operator Precedence → Determines the order of evaluation.

---

*/