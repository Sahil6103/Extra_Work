// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
#include <string.h>
using namespace std; // library file

class matrix // creation of class
{
public:
    // data member
    int s1[5];
    int i;

    // member function
    void get()
    {
        cout << "Enter array elements : ";
        for (i = 1; i <= 5; i++)
        {
            cin >> s1[i];
        }
    }

    // operator overloading
    matrix operator+(matrix &m2)
    {
        matrix m3;
        int add[5];
        for (int i = 1; i <= 5; i++)
        {
            add[i] = s1[i] + m2.s1[i];
        }

        cout << "Addition : ";
        for (int i = 1; i <= 5; i++)
        {
            cout << " " << add[i];
        }
    }
};

int main()
{
    matrix M1, M2, M3; // object creation
    M1.get();          // function call
    M2.get();          // function call
    M3 = M1 + M2;      // addtion through objects
}