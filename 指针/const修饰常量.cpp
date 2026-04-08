#include<iostream>
using namespace std;
int main()
{
	//1.const修饰指针（常量指针），指针指向可以改，指针指向的值不可以改
	int a = 10;
	int b = 11;
	const int * p = &a;
	*p = 20;	//报错 
	p =  &b; 
	
	//2.修饰常量（指针常量），指针指向不可以改， 指针指向的值可以改 
	int * const p2 = &a;
	*p2 = 100;
	p2 = &b;	//报错 
	
	//3.const修饰指针和常量, 指针指向和指向的值都不能改 
	const int * const p3 = &a; 
	*p3 = 100;	//报错 
	p3 = &b;	//报错 
	
	
	system("pause");
	return 0;
	
}
