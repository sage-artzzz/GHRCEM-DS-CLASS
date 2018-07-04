#include <stdio.h>

// Function prototype
void add();
void sub();
void mul();
void div();

int main()
{
	int ch;

	// Take choice
	printf("Press 1(add), 2(sub), 3(multiply), 4(divide)\n");
	scanf("%d", &ch);

	switch(ch)
	{
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:
			div();
			break;
		default:
			printf("Wrong choice!\n");
			break;
	}

	return 0;

	add();
	sub();
	mul();
	div();
}

void add()
{
	int a = 5, b = 6, c;

	printf("A = %d || B = %d\n", a, b);

	c = a + b;
	printf("Addition = %d\n", c);
}

void sub()
{
	int a = 5, b = 6, c;

	printf("A = %d || B = %d\n", a, b);

	c = a - b;
	printf("Sub = %d\n", c);
}


void mul()
{
	int a = 5, b = 6, c;

	printf("A = %d || B = %d\n", a, b);

	c = a* b;
	printf("Multiply = %d\n", c);
}

void div()
{
	int a = 5, b = 6, c;

	printf("A = %d || B = %d\n", a, b);

	c = a / b;
	printf("Division = %d\n", c);
}

/*

Output:

Press 1(add), 2(sub), 3(multiply), 4(divide)
1
A = 5 || B = 6
Addition = 11


*/