#include<stdio.h>

int main(void) 
{
  float n1, n2, n3;
  printf("nhap 3 so:");   // dk nhap phai la so thuc or so nguyen
  scanf("%f%f%f",&n1,&n2,&n3);
  if (n1,n2,n3)
    printf(" nhap lai");
  }else
    if ((n1>n2) && (n1>n3))
      printf(" max =%.2f",n1);
    else if ((n2>n1) && (n2>n3))
      printf(" max =%.2f",n2);
    else
      printf(" max =%.2f",n3);

  // char pheptinh;
  // double n1,n2;
  // printf("nhap phep tinh ( + - * /)");
  // scanf("%c", &pheptinh);
  // printf(" nhap 2 so ngau nhien:");
  // scanf("%f%f", n1, n2 );
  // printf("%.f %.f", n1, n2);
  // if (pheptinh == '+' )
  //   printf("%.1f + %.1f = %.1f ", n1, n2, n1+n2);
  // if (pheptinh == '*')
  //   printf("%.1f * %.1f = %.1f ", n1, n2, n1*n2); 
  // if (pheptinh == '-')
  //   printf("%.1f - %.1f = %.1f ", n1, n2, n1-n2); 
  // if (pheptinh == '/')
  // {
  //   printf("%.1f / %.1f = %.1f ", n1, n2, n1/n2); 
  // }
  // else
  //   printf(" phep tinh khong hop le");
  // return 0;


}
