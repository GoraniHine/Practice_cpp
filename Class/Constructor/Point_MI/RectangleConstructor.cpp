#include <iostream>
#include "Point.h"
#include "Point.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"
using namespace std;

int main(void)
{
    Rectangle rec(1, 1, 5, 5);
    rec.ShowRecInfo();

    return 0;
}