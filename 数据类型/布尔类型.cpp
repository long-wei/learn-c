#include<iostream>
using namespace std;
int main()
{
	//布尔数据类型true和false，占一个字节本质为1和0 
	bool flag = true;
	cout<<flag<<' '<<sizeof(flag)<<endl;
	
	flag = false;
	cout<<flag<<' '<<sizeof(flag)<<endl;
	system("pause");
	return 0;
 } 
