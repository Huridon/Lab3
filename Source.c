
#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>

#include <stdio.h>

#include <stdlib.h>

#define _USE_MATH_DEFINES

#include <math.h>
#define D 2.54
#define P 2.32166
#define S 2.7076

int main()

{

	system("chcp 1251");
	nums();
	dymes();
	tabl();

	return 0;

}

int nums()
{
	int num;
	int num2;
	puts("введите число\n");
	scanf("%d", &num);
	printf("¬ведено число %d\n", num);
	puts("введите число\n");
	scanf("%d", &num2);
	printf("¬ведено число %d\n", num2);
	printf("—умма %d, разность %d, произведение %d, отстаток %d\n", num + num2, num - num2, num * num2, num2 % num);
	return 0;
}

int dymes()
{
	int dym;
	float result;
	printf("¬ведите данные дл€ расчета\n");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d английских дюймов Ц это %.1f см\n", dym, result);
	result = P * dym;
	printf("%d испанских дюймов Ц это %.1f см\n", dym, result);
	result = S * dym;
	printf("%d старолитовских дюймов Ц это %.1f см\n", dym, result);
	return 0;
}
int tabl()
{
	int a, b;
	puts("введите число a\n");
	scanf("%d", &a);
	puts("введите число b\n");
	scanf("%d", &b);
	printf("-----------------------------------\n");
	printf("|%7s   |%7s   |%7s   |\n", "a*b", "a+b", "a-b");
	printf("-----------------------------------\n");
	printf("|%5d*%-4d|%5d+%-4d|%5d-%-4d|\n", a, b, a, b, a, b);
	printf("-----------------------------------\n");
	printf("|%7d   |%7d   |%7d   |\n", a*b, a+b, a-b);
	return 0;
}

