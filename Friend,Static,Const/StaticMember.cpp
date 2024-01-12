#include <iostream>
using namespace std;

class SoSimple
{
    private:
        static int simObjCnt;

    public:
        SoSimple()
        {
            simObjCnt++;
            cout << simObjCnt << "번쨰 SoSimple 객체" << endl;
        }
};

int SoSimple::simObjCnt = 0; // static 멤버변수의 초기화 문법은 다음과 같이 별도로 정의되어 있음

class SoComplex
{
    private:
        static int cmxObjCnt;
    
    public:
        SoComplex()
        {
            cmxObjCnt++;
            cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
        }

        SoComplex(SoComplex &copy)
        {
            cmxObjCnt++;
            cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
        }
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex cmx1;
    SoComplex cmx2 = cmx1;
    SoComplex();

    return 0;
}