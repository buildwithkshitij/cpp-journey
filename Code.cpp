/*
========================================
C++ Basics Notes
========================================
*/

#include <iostream>
using namespace std;

int main()
{
    // -----------------------------
    // Variables
    // -----------------------------
    int age = 18;              // Integer
    float height = 5.9f;       // Decimal number
    double pi = 3.14159265;    // More precise decimal
    char grade = 'A';          // Single character
    bool isStudent = true;     // true or false
    string name = "Kshitij";   // Text

    // -----------------------------
    // Output Variables
    // -----------------------------
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << isStudent << endl;

    // -----------------------------
    // Arithmetic Operators
    // -----------------------------
    int a = 10, b = 3;

    cout << "\nArithmetic Operators\n";
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus

    // -----------------------------
    // Assignment Operators
    // -----------------------------
    int x = 5;

    x += 2; // x = x + 2
    cout << "\nAfter x += 2: " << x << endl;

    x -= 1; // x = x - 1
    cout << "After x -= 1: " << x << endl;

    // -----------------------------
    // Comparison Operators
    // -----------------------------
    cout << "\nComparison Operators\n";
    cout << (a == b) << endl; // Equal
    cout << (a != b) << endl; // Not Equal
    cout << (a > b) << endl;  // Greater Than
    cout << (a < b) << endl;  // Less Than

    // -----------------------------
    // Logical Operators
    // -----------------------------
    bool condition1 = true;
    bool condition2 = false;

    cout << "\nLogical Operators\n";
    cout << (condition1 && condition2) << endl; // AND
    cout << (condition1 || condition2) << endl; // OR
    cout << (!condition1) << endl;              // NOT

    // Integer data types
    int myInt = 10;                     // 4 bytes
    short myShort = 5;                  // 2 bytes
    long myLong = 1000000;              // 8 bytes
    long long myLongLong = 10000000000; // 8 bytes

    // Floating-point data types
    float myFloat = 3.14f;                                         // 4 bytes
    double myDouble = 3.141592653589793;                           // 8 bytes
    long double myLongDouble = 3.1415926535897932384626433832795L; // 16 bytes

    // Character data type
    char myChar = 'A'; // 1 byte

    // Boolean data type
    bool myBool = true; // 1 byte

    // Output the values and sizes of the data types
    cout << "Integer: " << myInt << " (Size: " << sizeof(myInt) << " bytes)" << endl;
    cout << "Short: " << myShort << " (Size: " << sizeof(myShort) << " bytes)" << endl;
    cout << "Long: " << myLong << " (Size: " << sizeof(myLong) << " bytes)" << endl;
    cout << "Long Long: " << myLongLong << " (Size: " << sizeof(myLongLong) << " bytes)" << endl;

    cout << "Float: " << myFloat << " (Size: " << sizeof(myFloat) << " bytes)" << endl;
    cout << "Double: " << myDouble << " (Size: " << sizeof(myDouble) << " bytes)" << endl;
    cout << "Long Double: " << myLongDouble << " (Size: " << sizeof(myLongDouble) << " bytes)" << endl;

    cout << "Character: '" << myChar << "' (Size: " << sizeof(myChar) << " byte)" << endl;
    cout << boolalpha; // Print boolean values as true/false
    cout << "Boolean: " << myBool << " (Size: " << sizeof(myBool) << " byte)" << endl;


    return 0;
}