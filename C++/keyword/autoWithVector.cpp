#include <iostream>
#include <vector>

std::vector<int> divisors(int n)
{
    std::vector<int> a;
    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
            a.push_back(i);
    return a;
}

int main()
{
    // keyword: "auto " la se tu xac dinh kdl cua gia tri : vd: auto a=10; == int a=10;
    auto a = divisors(10);
    for (int x : a) std::cout << x << ' ';

    //hoặc dài dòng hơn
    std::vector<int> a = divisors(10);
    for (int i = 0; i < a.size(); ++i)
        std::cout << a[i] << ' ';
}