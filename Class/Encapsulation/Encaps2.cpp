#include <iostream>
using namespace std;

class SinivelCap
{
    public:
        void Take() const
        {
            cout << "콧물이 싹~ 납니다." << endl;
        }
};

class SneezeCap
{
    public:
        void Take() const
        {
            cout << "재채기가 멎습니다." << endl;
        }
};

class SnuffleCap
{
    public:
        void Take() const
        {
            cout << "코가 뻥 뚫립니다." << endl;
        }
};

class CONTA600
{
    private:
        SinivelCap sin;
        SneezeCap sne;
        SnuffleCap snu;

    public:
        void Take() const
        {
            sin.Take();
            sne.Take();
            snu.Take();
        }
};

class ColdPatient
{
    public:
        void TakeCONTA600(const CONTA600 &cap) const
        {
            cap.Take();
        }
};

int main(void)
{
    CONTA600 cap;
    ColdPatient SnuffleCap;
    SnuffleCap.TakeCONTA600(cap);
    return 0;
}