#include<iostream>
using namespace std;
class Person {
public:
	//构造函数，创建对象时自动调用
	//*没有返回值， *函数名与类名相同，*有参数可以发生重载
	Person(){
		cout << "person构造函数调用" << endl;
	}
	//析构函数，释放对象前自动调用
	//*没有返回值，*类名前加~，*不可以有参数不能发生重载
	~Person() {
		cout << "person析构函数调用" << endl;
	}
};
//构造和析构都是必须有的，若我们没有创建，编译器会提供空实现的构造和析构
void test0() {
	Person p; //在栈上的数据，函数执行完后释放对象
}

int main()
{
	test0();
	return 0;
}

