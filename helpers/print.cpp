#include <iostream>
#include <vector>
using namespace std;


template<typename T>
void print(T a)
{
    for(const auto&c:a)
    {
        std::cout<<c<<" ";
    }
    std::cout << std::endl;
}

template<typename T>
void printMatrix(T m)
{
    for(const auto& e:m)
    {
        print(e);
    }
}
int main()
{
    vector<vector<int>> b = {{1,2,3},{4,5,6},{7,8,9}};
    printMatrix(b);
    return 0;
}
