#include<iostream>
using namespace std;
//运算符重载：对已有的运算重新定义，赋予其另一种功能，以适应不同的数据类型
class Person {
public:
	int M_A;
	int M_B;
};
//只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout, Person &p) //本质 operator<<(cout, p) 简化cout<<p
{
	cout << "M_A = " << p.M_A << " M_B = " << p.M_B;
	return cout;
}
void test0()
{
	Person p1;
	p1.M_A = 10;
	p1.M_B = 11;
	cout << p1 << " hello world" << endl; //链式编程
}
int main()
{
	test0();
	return 0;
}