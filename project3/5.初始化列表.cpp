#include<iostream>
using namespace std;
class student {
public:
	//初始化列表，用来初始化属性
	student(string a, int b, int c):name(a), age(b), hight(c){}
	void Cout(const student& p) {
		cout << p.name << p.age << p.hight << endl;
	}
private:
	string name;
	int age;
	int hight;
};

int main()
{
	student one("ww", 18, 178);
	one.Cout(one);
	return 0;
}