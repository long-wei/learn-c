#include<iostream>、
#include<String>
using namespace std;
/*
静态成员变量：所有对象共享一份数据，
			  在编译阶段分配内存，
			  类内声明，类外初始化。
静态成员函数：所有对象共享一个函数，
			  静态成员函数只能访问静态成员变量。
*/
class student {
public:
	static string county;
	static void addition() {
		name = "JQ";
		int a = 10;
		cout << "static void addition调用, name = " <<name<< endl;
	}
private:
	int a;
	static string name;
};

string student::county = "中国";
string student::name = "sk";

void test1() {
	//1.通过对象进行访问
	student p1;
	cout << p1.county << endl;
	student p2;
	p2.county = "china";
	cout << p1.county << endl;
	p2.addition();
	//2.通过类名进行访问
	cout << student::county << endl;
	student::addition();
	//student::name  私有成员和函数不可以访问
}
int main()
{
	test1();
	return 0;
}