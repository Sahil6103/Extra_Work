// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std; // library file

class swaping // class creation
{
    // data member
    int a, b;

public:
    // friend function creation
    friend int swp_no(swaping &obj);
};

int swp_no(swaping &obj) // friend function
{
    cout << "Enter number 1 : ";
    cin >> obj.a;
    cout << "Enter number 2 : ";
    cin >> obj.b;
    obj.a = obj.a + obj.b; // a = 10 + 20 = 30
    obj.b = obj.a - obj.b; // b = 30 - 20 = 10
    obj.a = obj.a - obj.b; // a = 30 - 10 = 20

    cout << "After swaping";
    cout << endl
         << "Number 1 : " << obj.a;
    cout << endl
         << "Number 2 : " << obj.b;
}

int main()
{
    swaping s1; // object creation
    swp_no(s1); // friend function calling
    return 0;
}