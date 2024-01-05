#include <iostream>
#include <math.h>
using namespace std;

template <class T>

T Addition(T No1, T No2)
{
    T Sum;
    Sum = No1 + No2;
    return Sum;
}

template <class T>
T Substraction(T No1, T No2)
{
    T Sub;
    Sub = No1 - No2;
    return Sub;
}

template <class T>
T Multiplication(T No1, T No2)
{
    T Mul;
    Mul = No1 * No2;
    return Mul;
}

template <class T>
T Division(T No1, T No2)
{
    T Div;
    Div = No1 / No2;
    return Div;
}

template <class T>
T SqrtRoot(T No1)
{
    T sqrRoot;
    sqrRoot = sqrt(No1);
    return sqrRoot;
}

template <class T>
T Power(T No1, int iPow)
{
    T Ans;
    Ans = powl(No1, iPow);
    return Ans;
}

template <class T>
T Cal_Percentage(T No1, T Percent)
{
    T Ans;
    Ans = (No1 * Percent) / 100;
    return Ans;
}

uint64_t Factorial(int No)
{
    uint64_t Result = 1;
    cout << sizeof(Result) << endl;
    for (int i = 2; i <= No; i++)
    {
        Result *= i;
    }
    return Result;
}

template <class T>
T Trigo_Calculation(T Degree, int iType)
{
    T angle_radian = Degree * M_PI / 180.0;

    if (iType == 1)
    {
        T sin_value = sin(angle_radian);
        return sin_value;
    }
    else if (iType == 2)
    {
        T cos_value = cos(angle_radian);
        return cos_value;
    }
    else if (iType == 3)
    {
        T tan_value = tan(angle_radian);
        return tan_value;
    }
}
// ENTRY POINT
int main()
{
    cout << endl
         << "----------WELCOME TO BASIC CALCULATOR----------\n"
         << endl;
    while (1)
    {
        int iValue1 = 0;
        int iValue2 = 0;
        float fValue1 = 0.0f;
        float fValue2 = 0.0f;

        int iRet = 0;
        float fRet = 0.0f;
        uint64_t iiRet = 0;
        double dRet = 0.0;

        int iChoice = 0;
        int type = 0;
        cout << "1. Addition\t\t2. Substraction\n3. Multiplication\t4. Division\n5. Square_Root\t\t6. Power\n7. Percentage\t\t8. Factorial\n9. Trogonometry\t\t10. Exit\n\nEnter Your Choice: \n";
        cin >> iChoice;

        switch (iChoice)
        {
        case 1:

            cout << "Which typed of Addition you want?\n1. Integer\n2. Float" << endl;
            cin >> type;
            if (type == 1)
            {
                cout << "Enter the number 1: " << endl;
                cin >> iValue1;
                cout << "Enter the number 2: " << endl;
                cin >> iValue2;
                iRet = Addition(iValue1, iValue2);
                cout << "Addition is: " << iRet << endl
                     << endl;
            }
            else if (type == 2)
            {
                cout << "Enter the number 1: " << endl;
                cin >> fValue1;
                cout << "Enter the number 2: " << endl;
                cin >> fValue2;
                fRet = Addition(fValue1, fValue2);
                cout << "Addition is: " << fRet << endl
                     << endl;
            }
            else
            {
                cout << "You Entered Wrong Choice..!!!\n\n";
            }
            break;
        case 2:

            cout << "Which typed of Subtraction you want?\n1. Integer\n2. Float" << endl;
            cin >> type;
            if (type == 1)
            {
                cout << "Enter the number 1: " << endl;
                cin >> iValue1;
                cout << "Enter the number 2: " << endl;
                cin >> iValue2;
                iRet = Substraction(iValue1, iValue2);
                cout << "Substraction is: " << iRet << endl
                     << endl;
            }
            else if (type == 2)
            {
                cout << "Enter the number 1: " << endl;
                cin >> fValue1;
                cout << "Enter the number 2: " << endl;
                cin >> fValue2;
                fRet = Substraction(fValue1, fValue2);
                cout << "Substraction is: " << fRet << endl
                     << endl;
            }
            else
            {
                cout << "You Entered Wrong Choice..!!!\n\n";
            }
            break;

        case 3:

            cout << "Which typed of Multiplication you want?\n1. Integer\n2. Float" << endl;
            cin >> type;
            if (type == 1)
            {
                cout << "Enter the number 1: " << endl;
                cin >> iValue1;
                cout << "Enter the number 2: " << endl;
                cin >> iValue2;
                iRet = Multiplication(iValue1, iValue2);
                cout << "Multiplication is: " << iRet << endl
                     << endl;
            }
            else if (type == 2)
            {
                cout << "Enter the number 1: " << endl;
                cin >> fValue1;
                cout << "Enter the number 2: " << endl;
                cin >> fValue2;
                fRet = Multiplication(fValue1, fValue2);
                cout << "Multiplication is: " << fRet << endl
                     << endl;
            }
            else
            {
                cout << "You Entered Wrong Choice..!!!\n\n";
            }
            break;

        case 4:

            cout << "Which typed of Division you want?\n1. Integer\n2. Float" << endl;
            cin >> type;
            if (type == 1)
            {
                cout << "Enter the number 1: " << endl;
                cin >> iValue1;
                cout << "Enter the number 2: " << endl;
                cin >> iValue2;
                iRet = Division(iValue1, iValue2);
                cout << "Division is: " << iRet << endl
                     << endl;
            }
            else if (type == 2)
            {
                cout << "Enter the number 1: " << endl;
                cin >> fValue1;
                cout << "Enter the number 2: " << endl;
                cin >> fValue2;
                fRet = Division(fValue1, fValue2);
                cout << "Division is: " << fRet << endl
                     << endl;
            }
            else
            {
                cout << "You Entered Wrong Choice..!!!\n\n";
            }
            break;

        case 5:

            cout << "Enter the number : " << endl;
            cin >> fValue1;
            fRet = SqrtRoot(fValue1);
            cout << "Square Root : " << fRet << endl
                 << endl;
            break;

        case 6:
            cout << "Enter the number: " << endl;
            cin >> fValue1;
            cout << "Enter a power to be calculate: " << endl;
            cin >> fValue2;
            fRet = Power(fValue1, fValue2);
            cout << "Power is : " << fRet << endl
                 << endl;
            break;

        case 7:
            cout << "Enter the number: " << endl;
            cin >> fValue1;
            cout << "Enter the how much percentage to be calculate: " << endl;
            cin >> fValue2;
            fRet = Cal_Percentage(fValue1, fValue2);
            cout << "Percentage is : " << fRet << endl
                 << endl;
            break;

        case 8:
            cout << "Enter a number: " << endl;
            cin >> iValue1;

            iiRet = Factorial(iValue1);
            cout << "Factorial is : " << iiRet << endl
                 << endl;
            break;

        case 9:
            cout << "Enter the which trigo you want to find: \n1. SIN\n2. COS\n3. TAN\n";
            cin >> iValue1;
            if (iValue1 > 3)
            {
                cout << "YOU ENTERED WRONG CHOICE..." << endl
                     << endl;
                break;
            }
            cout << "Enter the Degree: " << endl;
            cin >> fValue1;

            dRet = Trigo_Calculation(fValue1, iValue1);
            cout << "The Final Answer: "
                 << dRet << endl
                 << endl;
            break;

        default:
            if (iChoice == 10)
            {
                break;
            }
            else
            {
                cout << "YOU ENTERED WRONG CHOICE PLEASE ENTER A CHOICE AGAIN...\n";
            }
        }

        if (iChoice == 10)
        {
            cout << "THANK YOU FOR USING CALCULATOR...\n";
            cout << "WE ARE UPDATING OUR CACLULATOR AND TRYING TO MAKE MORE FUNCTIONABLE\n";
            cout << "VISIT AGAIN...\n";
            break;
        }
    }

    return 0;
}