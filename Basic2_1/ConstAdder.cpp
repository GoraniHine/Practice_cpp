#include <iostream>
using namespace std;

int Adder(const int &num1, const int &num2)
{
    int temp;
    temp = num1 + num2;
    return temp;
}

int main(void)
{
    cout << Adder(3, 4);
}