#include<iostream>
using namespace std;
int main()
{
	//goto语句可以跳转到标记位置开始执行 
	int a = 10;
	cout<<1<<endl;
	cout<<2<<endl;
	cout<<3<<endl;
	
	if(a==10){goto flag;}
	
	cout<<4<<endl;
	cout<<5<<endl;
	cout<<6<<endl;
	cout<<7<<endl;
	
	flag:
	cout<<8<<endl;
	cout<<9<<endl;
	system("pause");
	return 0;
}
