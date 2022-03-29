#include<stdio.h>
#include<inttypes.h>
#include<complex.h>

void typesize();
void escape();

int main(void) {

	//demo_1
	/*
	int a = 15, b = 011, c = 0x9;
	char beep = '\a';

	printf("a=%d,	b=%o,	c=%0x\n", a, a, a);
	printf("a=%d,	b=%d,	c=%d\n", a, b, c);
	printf("%c", beep);
	scanf_s("%d", &a);
	printf("a=%ul\n", a);
	printf("%c", beep);
	scanf_s("%d", &a);
	printf("%c", beep);
	*/

	//demo_2
	/*
	int32_t me32;

	me32 = 456461361;
	printf("me32 = %d\n", me32);
	printf("me32 = %" PRId32 "\n", me32);
	printf("ni" "hao" "\n" "hello" "world");
	*/

	//demo_3
	/*
	double abet = 2.14e9;
	
	printf("**:%f\n**:%e\n", abet, abet);
	printf("*****************");
	*/

	//demo_4
	/*
	float a, b;

	a = 2.0e20f + 1.0f;
	b = a - 2.0e20f;
		printf("a = 2.0e20 + 1 = %f\tb= a - 2.0e20 = %f\n", a, b);

	a = 2.0e4f + 1.0f;
	b = a - 2.0e4f;
	printf("a = 2.0e4 + 1 = %f\tb= a - 2.0e4 = %f\n", a, b);
	*/

	//demo_5	复数
	/*
	Complex  a = 2.0 + 5.0*I;

	printf(a);
	*/

	//demo_6  数据类型所占空间
	///*
	typesize();
	//*/

	//demo_7	转译字符
	/*
	escape();
	*/

	//demo_8  刷新缓冲区
	/*
	printf("fflush.");
	*/
}


void typesize() {
	double a = 1.123456789012345678901234567890123456789;
	long double b = 1.123456789012345678901234567890123456789;

	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type float has a size of %zd bytes.\n", sizeof(float));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));
	printf("Type long double has a size of %zd bytes.\n",
		sizeof(long double));
	printf("f:%.20f\nlf:%.30lf", a, b);
}

void escape(void) {
	float salary;

	printf("\ayour desired salary:");
	printf("$________\b\b\b\b\b\b\b");
	scanf_s("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");
}