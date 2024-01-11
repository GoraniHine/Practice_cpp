#include <iostream>
using namespace std;

class SoSimple
{
    private:
        int num;

    public:
        SoSimple(int n): num(n){}
        
        SoSimple& AddNum(int n)
        {
            num += n;

            return *this;
        }

        void ShowData() const
        {
            cout << "num: " << num << endl;
        }
};

int main(void)
{
    const SoSimple obj(7);
    // 0bj.AddNum(20); const 사용으로 에러발생
    obj.ShowData();

    return 0;
}