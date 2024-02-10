// Write a program to find the max number from given two numbers using friend function

#include <iostream>
using namespace std; // library file

class max_no // class creation
{
    int a, b; // data member

public:
    // creating friend function
    friend int find(max_no &obj);
};

int find(max_no &obj) // friend function
{
    cout << "Enter Value of a : ";
    cin >> obj.a;
    cout << "Enter Value of b : ";
    cin >> obj.b;

    if (obj.a > obj.b)
    {
        cout << "a is max";
    }
    else if (obj.a < obj.b)
    {
        cout << "b is max";
    }
    else if (obj.a == obj.b)
    {
        cout << "a and b both are same";
    }
}

int main()
{
    max_no max; // object
    find(max);  // function calling
    return 0;
}