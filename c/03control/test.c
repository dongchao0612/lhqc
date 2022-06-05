#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

// 1、投资问题：A以每年10%的单利息投资了100美元，B以每年5%的复合利息投资了100美元。编写一程序，计算需要多少年B的投资总额才会超过A，并且显示出那个时刻两个人的各自的资产总额。
static void test1()
{


}
// 2、从终端读入数据，直到输入0值为止。计算出其中的偶数的个数及平均值和奇数的个数及平均值。

// 3、从终端输入若干字符，对其中的元音字母进行统计。(q退出)

// 4、写出fibinacci数列的前40项（不能用数组实现）。(1, 1, 2, 3, 5, 8, 13...)

// 5、输出九九乘法表。

// 6、百钱买百鸡：鸡翁一，值钱五；鸡母一，值钱三；三鸡雏，值钱一。百钱买百鸡，问鸡翁，鸡母，鸡雏各几只。
static void test6()
{
	int i,j,k;
	
	for(i = 0;i < 100 / 5; i++)
	{
		for(j = 0;j < 100 / 3;j++)
		{
			k = 100 - i - j;
			if(k % 3 == 0 && (5 * i + 3 * j + k / 3) == 100)
				printf("i = %d, j = %d, k = %d \n",i,j,k);

			#if 0
				for(k = 0;k < 100;k++)
				{
					if((i+j+k) == 100 && (5 * i + 3 * j + k / 3) == 100)
					{
						printf("i = %d, j = %d, k = %d \n",i,j,k);
					}
				}
			#endif
		}
	}
	
}
// 7、求出1000以内的水仙花数：153 = 1^3 + 5^3 + 3^3
static void test7()
{
	int i;
	int bai,shi,ge;
	for(i = 100;i < 1000;i++)
	{
		bai = i / 100;
		shi = i % 100 /10;
		ge = i % 10;

		if(bai * bai *bai + shi * shi *shi + ge * ge * ge == i)
		{		
			printf("i = %d \n",i);
		}
	}

}
// 8、求出1000以内的所有质数：2, 3, 5, 7, 11, 13, 17...
static void test8()
{
	int i, j;

	for (i = 1; i <= 1000; i++)
	{	
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)//判断i取余j是否等于0，如果等于则有公因数
			{
				break;
            }
        }
       if (i == j)//如果公因数为自己本身则此数出自己外无其他公因数
        {
            printf("i = %d\n", i);//输出符合条件的数字
        }
    }

}
// 9、在终端上实现如下输出：
//	ABCDEF
//	BCDEF
//	CDEF
//	DEF
//	EF
//	F
//
//	包括钻石型：
//  	   *
// 	 	  ***
// 	     *****
//	    *******
//       ****
//  	  ***
//  	   *

static void test9()
{
	int l=6,i,chars=6;
	char ch;
	for(i=0;i<l;i++)
	{
		for(ch='A'+i;ch<'A'+chars;ch++)
		{	
			printf("%c",ch);
		}
		printf("\n");

	}
}
static void test9_2()
{
	int i,k,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");

	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=7-2*i;k++)
		{
			printf("*");
		}
		printf("\n");

	}

}
// 10、从终端输入n个数（以字母q/Q终止），求和。
static void test10()
{

	int num;
	int sum = 0;

	printf("please enter a integer number(q to quit): \n");
	while(scanf("%d", &num) == 1)
	{
		sum += num;
		printf("please enter the next number(q to quit): \n");
	}

	printf("sum = %d\n", sum);
}
// 11、输出从半径1开始的圆的面积，直到面积大于100为止。
static void test11()
{

	float area;
	int r = 1;
	for(i=0;;i++)
	{
		area=PI*r*r;
		if(area>100)
			break;
		prinrf("area = %f\n",area);

	}
}

int main()
{
	// test1();
	// test2();
	// test3();
	// test4();
	// test5();
	// test6();
	// test7();
	// test8();
	// test9();
	// test9_2();
	// test10();
	test11();

	exit(0);
}
