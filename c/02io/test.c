#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//	一个水分子的质量大于是3.0e-23g，一夸脱水大约有950壳，编写一个程序要求从终端输入水的夸脱数，然后显示输出包含的水分子数目。

#define WEIGHT 	3.0e-23
#define KQ	 	950

static void water()
{
	float num,sum;
	
	printf("please in put for num:");
	
	scanf("%f",&num);
	if(num <= 0)
	{
		fprintf(stderr, "Input error \n");
		exit(1);
	}

	sum=num * KQ / WEIGHT;

	printf("total is %e \n",sum);
}

//	从终端输入三角形的三边长，求三角形面积
//	s = (a + b + c) / 2
//	area = sqrt(s * (s - a) * (s - b) * (s - c))

static void area()
{
	float a, b, c;
	float s, area;

	printf("please in put for a,b,c:");
	scanf("%f%f%f",&a,&b,&c);

	if((a + b <= c) || (b + c <= a) || (a + c <= b))
	{
		fprintf(stderr, "Input error \n");
		exit(1);
	}
	
	// printf("a = %f \t b = %f \t c = %f\n",a,b,c);
	
	s = (a + b + c) / 2.0;
	// printf("s = %f\n",s);

	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("area = %.2f\n",area);

}

//  从终端输入a,b,c的值，求方程的根
// ax^2 + bx +c =0  b * b - 4 * a * c > 0
// x1=(-b + sqrt(b * b - 4 * a * c)) / (2 * a)
// x2=(-b - sqrt(b * b - 4 * a * c)) / (2 * a)

static void root()
{
	float a, b, c;
	
	printf("please in put for a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	
	float delta = b * b - 4 * a * c; 
	
	if(delta < 0)
	{
		fprintf(stderr, "Input error \n");
		exit(1);
	}
	
	float x1,x2;

	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	
	printf("x1 = %.2f, x2 = %.2f\n",x1,x2);
}

int main()
{
	// water();
	// area();
	root();	
	exit(0);
}
