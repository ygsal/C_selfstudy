#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(void) {

	//demo_01 math.h
	/*
	const double ANSWER = 3.1415926;
	double response;

	printf("What is the value of pi?\n");
	scanf_s("%lf", &response);
	while (fabs(response - ANSWER) > 0.0001) {
		printf("Try again!\n");
		scanf_s("%lf", &response);
	}
	printf("Close enough!\n");
	*/

	//demo_02 bool
	/*
	_Bool bool=-10;
	printf("the bool value:%d\n",bool);
	printf("the bool value:%c\n", bool);
	*/

	//demo_03 getchar putchar
	/*
	const char SPACE=' ';
	char ch;

	while ((ch = getchar())!='\n'){
		if (ch==SPACE) {
			putchar(ch);
		}
		else {
			putchar(ch + 1);
		}
	}
	//putchar(ch);
	*/

	//demo_04 isprime
	/*
	unsigned long num, div;
	bool isPrime;
	while (1 == scanf_s("%lu", &num)) {
		for (div = 2, isPrime = true; div * div <= num; div++) {
			if (num % div == 0) {
				if (div * div != num) {
					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
				}
				else {
					printf("%lu is divisible by %lu.\n", num, div);
				}
				isPrime = false;
			}
		}
		if (isPrime)
			printf("%lu is Prism.\n", num);
	}
	*/

	//demo_05



	return 0;
}