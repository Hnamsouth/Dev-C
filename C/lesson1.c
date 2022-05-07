#include <stdio.h>
int main()
{  
    char pheptinh;
    double n1,n2;
    printf("nhap phep tinh(+,-,*,/):");
    scanf("%c", &pheptinh);
    printf(" nhap 2 so ngau nhien:");
    scanf("%lf %lf", &n1 , &n2);

        switch (pheptinh)
        {
            case '+':
                printf(" %.1lf + %.1lf = %.1lf", n1 , n2, n1+n2);
                break;
            case '-':
                printf(" %.1lf - %.1lf = %.1lf", n1 , n2, n1-n2);
                break;
            case '*':
                printf(" %.1lf * %.1lf = %.1lf", n1 , n2, n1*n2);
                break;
            case '/':
                printf(" %.1lf / %.1lf = %.1lf", n1 , n2, n1/n2);
                break;
            default:
                printf("phep tinh khong hop le");
                break;
        }


}