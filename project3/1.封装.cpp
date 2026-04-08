#include<iostream>
using namespace std;
/*
  若没有声明权限，默认是私有权限
*/
class Person {
public: 
	//公共权限
	string Myname; //名字
protected: 
	//保护权限（子类可以访问）
	string Mycar; // 汽车
private:
	//私有权限（子类不可以访问）
	int Mypassword; //银行卡密码
public:
	void func() {
		Myname = "zhang";
		Mycar = "布加迪威龙";
		Mypassword = 123456;
	}
	void Print() {
		cout <<"名字："<< Myname << endl;
		cout <<"车：" << Mycar << endl;
		cout <<"密码： " << Mypassword << endl;
	}
};


int main()
{
	Person p;
	p.func();
	p.Print();
	p.Myname = "洒家";
	p.Print();
	return 0;
}

