#include <iostream>
int* getDivisors(int n, int& count)
{
    // đếm xem n có bao nhiêu ước
    count = 0;
    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
            count++;
    // cấp phát bấy nhiêu chỗ trống cho mảng a
    int* a = new int[count];
    // copy các ước đó vào mảng a
    for (int i = 1, j = 0; i <= n; ++i)
        if (n % i == 0)
            a[j++] = i;
    return a;
}

int main()
{
    int  count;
    int* a = getDivisors(10, count);
    for (int i = 0; i < count; ++i)
        std::cout << a[i] << " ";

    // nhớ phải giải phóng a sau khi xài xong
    delete[] a;
}