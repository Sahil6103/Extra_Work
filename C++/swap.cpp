// Write a program of to swap the two values using template

#include <iostream>
using namespace std; // library file

template <typename swap> // template creation

class swaping // class creation
{

public:
    swaping(swap a, swap b) // constructor with template
    {
        int c;
        c = a;
        a = b;
        b = c;
        cout << endl
             << "Value of a : " << a;
        cout << endl
             << "Value of b : " << b;
    }
};

int main()
{
    int a, b; // variable
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    swaping<int> swp(a, b); // functino calling with template
    return 0;
}