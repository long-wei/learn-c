#include<iostream>
using namespace std;
// 浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作
class Person{
public:
	int age;
	int *MyHight;
	Person() {
		cout << "person无参构造函数调用" << endl;
	}
	Person(int a, int Hight) {
		age = a;
		MyHight = new int(Hight);
		cout << "person有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p) {
		age = p.age;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		MyHight = new int(*p.MyHight);
		cout << "person拷贝构造函数调用" << endl;
	}
	~Person() {
		cout << "person析构函数调用" << endl;
		if (MyHight != NULL) {
			delete MyHight;
			MyHight = NULL;
		}
	}
};
//调用
void test0() {
	Person p2(18, 180);
	cout << "p2的年龄为：" << p2.age <<"身高为："<<*p2.MyHight<< endl;
	Person p3(p2);
	cout << "p3的年龄为：" << p3.age << "身高为：" << *p2.MyHight << endl;
}

int main()
{
	test0();
	return 0;
}

