
class CSM
{
public:
    CSM(int mod)
        : val_(0)
        , mod_(mod)
    {
    }
    int operator+=(int v)
    {
        val_ += v % mod_;
    }

    int get()
    {
        return val_ % mod_;
    }

private:
    int val_, mod_;
};

#include <iostream>
using namespace std;
int main()
{
    CSM csm(19);
    csm += 123;
    csm += 121;
    csm += 13;
    csm += 12;

    cout << csm.get() << endl;
}
