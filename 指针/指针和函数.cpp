#include<iostream>
using namespace std;
void swap(int *p1, int *p2)
{
	int temp = *p2;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int a = 10;
	int b = 11;
	//地址传递，可以修饰实参 （如果是值传递则不能修改实参） 
	swap(&a,$b);
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl; 
	system("pause");
	return 0;
 } 

