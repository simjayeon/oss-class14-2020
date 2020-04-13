#include <stdio.h>

int substract(int a, int b)
{
	return(a-b);
}

int add(int a, int b)
{
	return a+b;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a =b*;
	*b = temp;
	return;
}

<<<<<<< HEAD
int main()
{
	printf("hello!!!!!!!!!!\n");
=======
int main(){
	printf("hello world!!!\n");
>>>>>>> lab1

	int a=3, b=20;
	printf("a+b=%d\n", add(a,b));

	return 0;
}
