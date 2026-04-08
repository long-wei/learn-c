#include<iostream>
using namespace std;
int main()
{
	short num_0 = 9;  // 短整型2字节（-2^15 - 2^15)
	int num_1 = 10;  // 整型4字节（-2^31 - 2^31-1)
	long num_2 = 11;  // 长整型4字节（-2^31 - 2^31-1) ,有的地方是8字节
	long long num_3 = 12;  //长长整型8字节（-2^63 - 2^63-1)
	float num_4 = 10.2f;  //单精度4字节，7位有效数字
	double num_5 = 10.5;  //双精度8字节，15-16位有效数字
	//sizeof() 统计数据类型的大小
	cout << "num_0=" << num_0<< " " << sizeof(num_0) << endl;
	cout << "num_1=" << num_1<< " " << sizeof(num_1) << endl;
	cout << "num_2=" << num_2<< " " << sizeof(num_2) << endl;
	cout << "num_3=" << num_3<< " " << sizeof(num_3) << endl;
	cout << "num_4=" << num_4<< " " << sizeof(num_4) << endl;
	cout << "num_5=" << num_5<< " " << sizeof(num_5) << endl;
	
	// 科学计数法
	 float a = 2e-2;
	 int b = 2e2;
	 cout<<"a="<<a<<" "<<"b="<<b;
	 system("pause");
	return 0;
}
