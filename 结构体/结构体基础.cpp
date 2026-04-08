#include<iostream>
using namespace std;
// 结构体可以自行定义数据类型，用于存储不同的数据类型 
struct student{
	string name;
	int ID;
	int age;
	int sore;
}s0;
int main()
{
	// 1.结构体 变量名 = {...} ； (struct可以省略)
	student s1 = {"Ak", 1, 18, 100};
	cout<<s1.name<<' ' <<s1.ID<<' '<<s1.age<<' '<<s1.sore<<endl;
	// 2.结构体 变量名； 
	struct student s2;	
	s2.name = "Ac";
	s2.ID = 2;
	s2.age = 19;
	s2.sore = 100;
	cout<<s2.name<<' ' <<s2.ID<<' '<<s2.age<<' '<<s2.sore<<endl;
	//3.定义结构体时创建结构体变量 
	s0.name = "Ad";
	s0.ID = 3;
	s0.age = 20;
	s0.sore = 100;
	cout<<s0.name<<' ' <<s0.ID<<' '<<s0.age<<' '<<s0.sore<<endl;
	system("pause");
	return 0;
}
