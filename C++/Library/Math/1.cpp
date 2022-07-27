#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int x=5,y=10;
    // Hàm abs(x)
    // Trả về giá trị tuyệt đối của x.

    cout<<abs(-2);//2

    // Hàm cbrt(x)
    // Trả về giá trị căn bậc ba của x.

    cout<<cbrt(1000);//10

    // Hàm ceil(x)
    // Trả về số nguyên là giá trị làm tròn lên của x.

    cout<<ceil(2.3);//3

    cout<<ceil(2.8);//3

    // Hàm exp(x)
    // Trả về của ex.

    cout<<exp(2);//7.38906

    // Hàm expm1(x)
    // Trả về giá trị của ex -1.

    cout<<expm1(2);//6.38906

    // Hàm fabs(x)
    // Trả về giá trị tuyệt đối của số thực x.

    cout<<fabs(-2.3);//2.3

    // Hàm floor(x)
    // Trả về số nguyên là giá trị làm tròn xuống của x.

    cout<<floor(2.3);//2

    cout<<floor(2.8);//2

    // Hàm fmax(x, y)
    // Trả về giá trị lớn nhất của số thực x và y.

    cout<<fmax(2.1, 3.5);//3.5

    // Hàm fmin(x, y)
    // Trả về giá trị nhỏ nhất của số thực x và y.

    cout<<fmin(2.1, 3.5);//2.1

    // Hàm fmod(x, y)
    // Trả về phần dư của phép chia số thực x/y.

    cout<<fmod(15, 8);//7

    cout<<fmod(15.8, 8.5);//7.3

    // Hàm log(x)
    // Trả về giá trị logarit cơ số e ln(x) của x.

    cout<<log(2);//0.693147

    // Hàm pow(x, y)
    // Trả về giá trị của x lũy thừa y, tức là xy.

    cout<<pow(2, 3);//8

    // Hàm round(2.6)
    // Trả về số nguyên là giá trị làm tròn lên của x nếu phần thập phân >= 5. 
    // Trả về số nguyên là giá trị làm tròn xuống nếu phần thập phân < 5.

    cout<<round(2.3);//2

    cout<<round (2.8);//3

    // Hàm sqrt(x)
    // Trả về giá trị căn bậc 2 của x.

    cout<<sqrt(5);//2.23607

    // Hàm min và hàm max
    // Hai hàm này nằm trong không gian tên (namespace) std chứa thư viện chuẩn của C++.

    // Hàm max(x,y) sẽ tìm giá trị lớn nhất của x và y.

    cout <<max(5, 10);//10

    // Hàm min(x,y) sẽ tìm giá trị nhỏ nhất của x và y.

    cout <<min(5, 10);//5
return 0;
}
