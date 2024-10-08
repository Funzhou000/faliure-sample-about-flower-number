#define _CRT_SECURE_NO_WARNINGS 1
 //#include<stdio.h>

//int main()
//{ for(int a =0;a<10000;a++)
//	
//
//
//
//	return 0;
//  }

#include <iostream>
#include <math.h>
#include <stdio.h>

//输出整数的位数和每一位的数字
//int main()
//{
//	int number;
//	int i = 0;
//	int a[10];
//	int sum ;
//	int j;
//	printf("请输入一个正整数：\n");
//	scanf("%d", &number);
//	while (number > 0)
//	{
//		a[i] = number % 10;
//		number = number / 10;
//		i++;
//	}
int main() {

	int number = 0;
	int c, d, e, f, h, set,i,g,k,l,m,n;

	//if 若为真else if 不会继续执行
	while (number < 10000) {
		number++;
		if (number < 10) {
			c = number % 10;
			 int d = pow(c, 4);
			if (d == number) {
				printf("i find it%d\n", c);
			}
			else { printf("fuck you%d\n", number); }

		}
		if (number < 100 && number >= 10) {
			c = number % 10;//个位数为c
			d = number / 10;//十位数为e
			e = d % 10;
			set = pow(c, 4) + pow(e, 4);

			if (set == number) {
				printf("fuck finaly find you%d\n", number);
			}
			else {
				printf("fuck you red flower%d\n", number);
			}
		}
		if (number < 1000 && number >= 100) {
			c = number % 10;//个位数为c
			d = number / 10;//十位数为e
			e = d % 10;//十位数的值e
			f = number / 100;
			g = f % 10;//百位数的值g
			int set = pow(c, 4) + pow(e, 4) + pow(g, 4);
		if (set == number) {
				printf("%d", number);

			}
		}
		if (number >= 1000 && number < 10000) {
			c = number % 10;//个位数为c
			d = number / 10;//十位数为e
			e = d % 10;//十位数的值e
			f = number / 100;
			g = f % 10;//百位数的值g
			h = number / 1000;
			i = h % 10;
			if (pow(c, 4) + pow(e, 4) + pow(g, 4) + pow(i, 4) == number) {
				printf("%d", number);
			}
		}




		return 0;
	}
	
}