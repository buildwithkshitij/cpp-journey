# C++ Data Types

## What is a Data Type?

A **data type** specifies the type of data a variable can store. It tells the compiler:

* What kind of value the variable will hold.
* How much memory should be allocated.
* What operations can be performed on the variable.

---

# Types of Data Types in C++

C++ data types are classified into **three main categories**:

1. Fundamental (Built-in) Data Types
2. Derived Data Types
3. User-Defined Data Types

---

# 1. Fundamental (Built-in) Data Types

These are the basic data types provided by C++.

| Data Type | Description                               | Typical Size | Example                     |
| --------- | ----------------------------------------- | -----------: | --------------------------- |
| `int`     | Stores whole numbers                      |      4 bytes | `int age = 20;`             |
| `float`   | Stores decimal numbers (single precision) |      4 bytes | `float pi = 3.14f;`         |
| `double`  | Stores decimal numbers (double precision) |      8 bytes | `double salary = 25000.50;` |
| `char`    | Stores a single character                 |       1 byte | `char grade = 'A';`         |
| `bool`    | Stores `true` or `false`                  |       1 byte | `bool isPassed = true;`     |
| `void`    | Represents no value or no return type     |      0 bytes | `void display();`           |

> **Note:** The exact size of data types may vary depending on the compiler and system architecture.

---

# Integer Data Types

Used to store **whole numbers**.

```cpp
int age = 21;
```

Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks = 95;

    cout << marks;

    return 0;
}
```

Output

```
95
```

---

# Floating-Point Data Types

Used to store **decimal values**.

## float

```cpp
float price = 99.99f;
```

Example

```cpp
float temperature = 36.5f;
```

---

## double

Provides higher precision than `float`.

```cpp
double pi = 3.14159265358979;
```

Example

```cpp
double distance = 12345.6789;
```

---

# Character Data Type (`char`)

Stores **a single character** enclosed in single quotes.

```cpp
char grade = 'A';
```

Example

```cpp
char letter = 'K';
```

---

# Boolean Data Type (`bool`)

Stores only two values:

* `true`
* `false`

Example

```cpp
bool isStudent = true;
```

```cpp
bool lightOn = false;
```

---

# Void Data Type

`void` means **no value**.

Commonly used in functions that do not return any value.

Example

```cpp
void display() {
    cout << "Hello";
}
```

---

# 2. Derived Data Types

Derived data types are created from fundamental data types.

Examples:

* Arrays
* Pointers
* References
* Functions

Example

```cpp
int marks[5];
```

```cpp
int *ptr;
```

---

# 3. User-Defined Data Types

These data types are created by the programmer.

Examples:

* `class`
* `struct`
* `union`
* `enum`
* `typedef`
* `using`

Example

```cpp
struct Student {
    string name;
    int age;
};
```

---

# Data Type Modifiers

Modifiers change the range or behavior of a data type.

| Modifier   | Purpose                                |
| ---------- | -------------------------------------- |
| `short`    | Smaller integer type                   |
| `long`     | Larger integer type                    |
| `signed`   | Can store positive and negative values |
| `unsigned` | Stores only non-negative values        |

Example

```cpp
short int a = 10;
long int b = 100000;
unsigned int c = 50;
```

---

# Common Data Type Ranges

| Data Type | Typical Size | Typical Range                               |
| --------- | -----------: | ------------------------------------------- |
| `bool`    |       1 byte | `true` or `false`                           |
| `char`    |       1 byte | -128 to 127 (signed) or 0 to 255 (unsigned) |
| `int`     |      4 bytes | -2,147,483,648 to 2,147,483,647             |
| `float`   |      4 bytes | Approximately ±3.4 × 10³⁸                   |
| `double`  |      8 bytes | Approximately ±1.7 × 10³⁰⁸                  |

---

# Example Program

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float height = 5.8f;
    double salary = 45000.75;
    char grade = 'A';
    bool isStudent = true;

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << isStudent << endl;

    return 0;
}
```

Output

```
Age: 20
Height: 5.8
Salary: 45000.8
Grade: A
Student: 1
```

---

# Key Points to Remember

* A **data type** defines the type of data a variable can store.
* C++ data types are classified into **Fundamental**, **Derived**, and **User-Defined**.
* `int` stores whole numbers.
* `float` and `double` store decimal numbers.
* `double` provides more precision than `float`.
* `char` stores a single character.
* `bool` stores either `true` or `false`.
* `void` represents the absence of a value.
* Derived data types include **arrays, pointers, references, and functions**.
* User-defined data types include **classes, structures, unions, enumerations, and type aliases**.
* The size of data types can vary depending on the compiler and operating system.

---

# Interview Questions

1. What is a data type in C++?
2. What are the three categories of data types?
3. What is the difference between `float` and `double`?
4. Why is `char` enclosed in single quotes?
5. What values can a `bool` variable store?
6. What is the purpose of the `void` data type?
7. What are derived data types? Give examples.
8. What are user-defined data types?
9. What is the difference between `signed` and `unsigned`?
10. Why are data types important in programming?
