#include<iostream>、
#include<String>
using namespace std;

class Phone {
public:
	string Pname;
	Phone(string Pname) :Pname(Pname) {
		cout << "Phone的构造函数" << endl;
	}
	~Phone() {
		cout << "Phone的析构函数" << endl;
	}
};

class student {
public:
	student(string name, string P_name) :name(name), Pname(P_name) {
		cout<<"student的构造函数" << endl;
	}
	string name;
	Phone Pname;	//隐式转换法Phone Pname = Pname;
	~student() {
		cout << "student的析构函数" << endl;
	}
};

//构造时先构造类对象，再构造自身；先析构自身，再析构类对象。
void test1() {
	student p("sdj", "华为mate60");
	cout <<"学生名字：" << p.name << endl;
	cout << "佩戴手机：" << p.Pname.Pname << endl;
}

int main()
{
	test1();
	return 0;
}