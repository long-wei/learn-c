#include<iostream>
using namespace std;
//运算符重载：对已有的运算重新定义，赋予其另一种功能，以适应不同的数据类型
class Person {
	friend ostream& operator<<(ostream& cout, Person& p);
	friend void test0();
	friend void test1();
public:
	//重置前置++运算符 返回引用为了可以一直对一个数据进行递增操作
	Person& operator++() 
	{
		M_A++;
		return *this;
	}
	//重置后置++运算符
	Person& operator++(int) //int代表占位参数，可以用于区分前置和后置递增
	{
		//先记录当时结果
		Person temp = *this;
		//后递增
		M_A++;
		//最后返回记录的结果
		return temp;
	}
private:
	int M_A;
};
//只能利用全局函数重载左移运算符
ostream& operator<<(ostream& cout, Person& p) //本质 operator<<(cout, p) 简化cout<<p
{
	cout << "M_A = " << p.M_A;
	return cout;
}
void test0()
{
	Person p1;
	p1.M_A = 10;
	cout << p1 << endl; //链式编程
	cout << ++p1 << endl;
}
void test1()
{
	Person p;
	p.M_A = 0;
	cout << p << endl; //链式编程
	cout << p++ << endl;
	cout << p << endl;
}
int main()
{
	//test0();
	test1();
	return 0;
}