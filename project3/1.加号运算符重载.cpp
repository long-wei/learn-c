#include<iostream>
using namespace std;
//运算符重载：对已有的运算重新定义，赋予其另一种功能，以适应不同的数据类型
class Person {
public:
	//1.成员函数重载+号
	Person operator+(Person &p) {
		Person temp;
		temp.M_A = this->M_A + p.M_A;
		temp.M_B = this->M_B + p.M_B;
		return temp;
	}
	int M_A;
	int M_B;
};
//2.全局函数重载+号
Person operator+(const Person& p1,const Person& p2) {
	Person temp;
	temp.M_A = p1.M_A + p2.M_A;
	temp.M_B = p1.M_B + p2.M_B;
	return temp;
}
Person operator+(const Person& p1, int num) {
	Person temp;
	temp.M_A = p1.M_A + num;
	temp.M_B = p1.M_B + num;
	return temp;
}
void test0()
{
	Person p1;
	p1.M_A = 10;
	p1.M_B = 11;
	Person p2;
	p2.M_A = 10;
	p2.M_B = 13;
	Person p3 = p1 + p2;
	//成员函数本质
	//Person p3 = p1.operator+(p2);
	//全局函数本质：
	//Person p3 = operator+(p1, p2);
  	cout << "p3.M_A = " << p3.M_A << endl;
	cout << "p3.M_B = " << p3.M_B << endl;
	//运算符重载 也可以发生重载函数
	Person p4 = p1 + 10;
	cout << "p4.M_A = " << p4.M_A << endl;
	cout << "p4.M_B = " << p4.M_B << endl;
}
int main()
{
	test0();
	return 0;
}