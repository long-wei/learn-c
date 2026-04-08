#include<iostream>
using namespace std;
/*返回值类型 函数名（参数列表）
 {函数体；
  return 表达式；
  }
*/
int add (int num1,int num2)
{
	int num = num1 +num2;
	return num;
}

// 如果函数不需要返回值，声明的时候可以写void
void swap(int num1, int num2)
{
	if(num1>num2){
		int num = num2;
		num2 = num1;
		num1 = num;
	}
	cout<<num1<<' '<<num2<<endl;
	//return; 返回值不需要时，可以不写return 
 } 
 
int main()
{
	int a=11;
	int b=12;
	int c=add(a, b); //函数调用 
	cout<<c<<endl;
	swap(a, b);
	system("pause");
	return 0; 
}
