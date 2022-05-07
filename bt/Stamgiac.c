#include <stdio.h>
#include <math.h>
// diện tích tam giác theo CT heron: S = sqrt(p(p-a)(p-b)(p-c))
//  p là nửa chu vi tam giác có CT là  : p = (a+b+c)/2
int main()
{
		float a, b, c, p;		// khai báo dữ liệu của 3 cạnh tam giác
		int Stg;
		printf("nhap chieu dai 3 canh tam giac\n" );
	do{
		scanf("%f %f %f", &a, &b, &c);  // nhập dữ liệu từ ng dùng và gán giá trị cho biến đã khai báo
		printf("canh a=%.2f , canh b=%.2f , canh c=%.2f \n", a, b, c);
		p = ((a+b+c)/2);
		printf("nua chu vi cua tam giac = %.2f\n",p );
		if ((a+b > c )|| ( b+c > a )|| (c +a> b))  // dieu kien 3 canh cua tam giac
		{
			Stg = (p*(p-a)*(p-b)*(p-c));
			printf("Dien tich tam giac = %.2f\n",sqrt(Stg) );
		}
		else
		{
			printf("khong thoa man dk (a,b,c)>0");
		}
		return (0);
	}while(a,b,c > 0);
}

