// WAP to create calculator using hierarchical inheritance

#include <iostream>
using namespace std;

class calculator
{
public:
    int a, b;

    void get_num()
    {
        cout << "Enter value of a : ";
        cin >> a;
        cout << endl
             << "Enter value of b : ";
        cin >> b;
    }
};

class addition : public calculator
{
public:
    int add()
    {
        cout << "\nAddition is : " << a + b;
    }
};

class subtraction : public calculator
{
public:
    int sub()
    {
        cout << "\nSubtraction is : " << a - b;
    }
};

class multiplication : public calculator
{
public:
    int multi()
    {
        cout << "Multiplication is : " << a * b;
    }
};

class division : public calculator
{
public:
    int div()
    {
        cout << "\nDivision is " << a / b;
    }
};

class modulo : public calculator
{
public:
    int mod()
    {
        cout << "\nModulo is : " << a % b;
    }
};

int main()
{
    int choice;
    cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo";
    cout << "\nEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        addition add;
        add.get_num();
        add.add();
        break;
    case 2:
        subtraction sub;
        sub.get_num();
        sub.sub();
        break;
    case 3:
        multiplication mul;
        mul.get_num();
        mul.multi();
        break;
    case 4:
        division div;
        div.get_num();
        div.div();
        break;
    case 5:
        modulo mod;
        mod.get_num();
        mod.mod();
        break;

    default:
        cout << "Invalid Choice";
        break;
    }
    return 0;
}