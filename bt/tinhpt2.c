#include <stdio.h>
#include <math.h>
int main()
{
		float x1, x2, x3;
		int a, b, c;
		// int delta;
		printf("nhap 3 tham so :");
	do{
		scanf("%d%d%d", &a, &b, &c);
		printf("%d %d %d\n",a,b,c);

		if (a != 0)
		{
			int delta =((b*b) - (4*a*c));
			if (delta > 0)
			{
				x1 = (-b + sqrt(delta))/(2*a);
				printf("pt co nghiem 1 la:%f\n",x1);
				x2 = (-b - sqrt(delta))/(2*a);
				printf("pt co nghiem  2 la:%f\n",x2);
			}
			else if (delta < 0)
			{
				printf("pt vo nghiem\n");
			}
			else
			{
				x3 = (-b/(a*2));
				printf("pt co nghiem kep x1=x2=%f\n",x3);
			}
		}
		else
		{
			printf("chay lai chuong trinh: nhap a != 0\n ");
		}
	}
	while(a != 0);
}
