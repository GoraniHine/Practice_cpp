#include <iostream>

union Share {
    int a;
    double b;
    char c;
};

int main(void)
{
    Share data;
    data.a = 67;

    std::cout << "data.a의 값: " << data.a << std::endl;
    std::cout << "data.b의 값: " << data.b << std::endl;
    std::cout << "data.c의 값: " << data.c << std::endl;

    std::cout << "data.a의 크기: " << sizeof(data.a) << std::endl;
    std::cout << "data.b의 크기: " << sizeof(data.b) << std::endl;
    std::cout << "data.c의 크기: " << sizeof(data.c) << std::endl;
}