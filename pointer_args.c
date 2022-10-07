/*
 * pointer_args.c
 *
 *  Created on: 2022/10/03
 *      Author: user01
 */
#include <stdio.h>

void func01(int *);

int main(void)
{
	int a;
	int *intptr;

	a = 10;
	intptr = &a;

	printf("a is %d\n", a);
	printf("intptr is %p\n", intptr);
	func01(intptr);
	printf("a is %d\n", a);
	printf("intptr is %p\n", intptr);

	return 0;
}

void func01(int *funcptr)
{
	printf("func01 is called!\n");
	printf("funcptr is %p\n", funcptr);
	printf("int value is %d\n", *funcptr);
	*funcptr = 20;
	printf("int value is %d\n", *funcptr);
	funcptr++; // ちょっと危険
	printf("funcptr is %p\n", funcptr);
}

