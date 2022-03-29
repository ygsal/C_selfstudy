#include<stdio.h>


int main(void) {

	//demo_01	递归
	/*
	void up_and_down(int n);

	up_and_down(1);
	*/

	//demo_02 过滤换行符
	/*
	char ch;
	while((ch=getchar())!='\n'){
		continue;
	}
	*/

	//demo_03  特殊条件num=0 
	/*
	long fact(int n);
	long rfact(int n);

	int num;

	printf("This program calculates factorials.\n");
	printf("Enter a value in the range 0-12 (q to quit):\n");
	while (scanf_s("%d", &num) == 1) {
		if (num < 0) printf("No negative numbers,please.\n");
		else if (num > 12) printf("Keep input under 13.\n");
		else {
			printf("     loop: %d factorial = %ld\n", num, fact(num));
			printf("recursion: %d factorial = %ld\n", num, rfact(num));
		}
		printf("Enter a value in the range 0-12 (q to quit):\n");
	}
	printf("BYE.\n");
	*/

	//demo_04 

	void to_binary(unsigned long);

	unsigned long num;
	printf("Enter an interger (q to quit):\n");
	while (scanf_s("%lu", &num) == 1) {
		printf("Binary equivalent:");
		to_binary(num);
		putchar('\n');
		printf("Enter an interger (q to quit):\n");
	}
	printf("Done.\n");




	return 0;
}

void up_and_down(int n) {
	printf("Level %d: n location %p\n", n, &n);
	if (n < 4) {
		up_and_down(n + 1);
	}
	printf("LEVEL %d: n location %p\n", n, &n);
}

long fact(int n) {
	long ans;

	for (ans = 1; n > 1; n--) ans *= n; //ans=1，初始化，一直会运行
	return ans;
}

long rfact(int n) {
	long ans;

	if (n > 0) ans = n*rfact(n - 1);
	else ans = 1;

	return ans;
}

void to_binary(unsigned long n) {		//decimal to binary   ****good****
	int r;

	r = n % 2;
	if (n >= 2) to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');

}