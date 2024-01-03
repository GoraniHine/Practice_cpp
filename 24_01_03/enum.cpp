#include <iostream>

enum color {
    red,
    blue,
    green
};

int main(void)
{
    color col;
    col = blue;

    switch(col){
        case red:
            std::cout << "빨간색 입니다." << std::endl;
            break;
        case blue:
            std::cout << "파란색 입니다." << std::endl;
            break;
        case green:
            std::cout << "초록색 입니다." << std::endl;
        default:
            std::cout << "잘못된 값 입니다." << std::endl;
            break;
    }
    return 0;
}