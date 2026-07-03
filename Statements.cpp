/*
========================================
C++ Conditional Statements & Loops
========================================
*/

#include <iostream>
using namespace std;

int main()
{
    // ========================================
    // 1. IF Statement
    // ========================================
    int age = 18;

    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }

    // ========================================
    // 2. IF-ELSE Statement
    // ========================================
    int number = 5;

    if (number % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }

    // ========================================
    // 3. ELSE-IF Ladder
    // ========================================
    int marks = 85;

    if (marks >= 90)
    {
        cout << "Grade A+" << endl;
    }
    else if (marks >= 75)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade B" << endl;
    }
    else
    {
        cout << "Grade C" << endl;
    }

    // ========================================
    // 4. SWITCH Statement
    // ========================================
    int day = 2;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    default:
        cout << "Invalid Day" << endl;
    }

    // ========================================
    // 5. FOR Loop
    // ========================================
    cout << "\nFOR LOOP\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    // ========================================
    // 6. WHILE Loop
    // ========================================
    cout << "\nWHILE LOOP\n";

    int i = 1;

    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }

    cout << endl;

    // ========================================
    // 7. DO-WHILE Loop
    // ========================================
    cout << "\nDO-WHILE LOOP\n";

    int j = 1;

    do
    {
        cout << j << " ";
        j++;
    }
    while (j <= 5);

    cout << endl;

    // ========================================
    // 8. BREAK Statement
    // ========================================
    cout << "\nBREAK EXAMPLE\n";

    for (int k = 1; k <= 10; k++)
    {
        if (k == 5)
            break;

        cout << k << " ";
    }

    cout << endl;

    // ========================================
    // 9. CONTINUE Statement
    // ========================================
    cout << "\nCONTINUE EXAMPLE\n";

    for (int k = 1; k <= 5; k++)
    {
        if (k == 3)
            continue;

        cout << k << " ";
    }

    cout << endl;

    return 0;
}