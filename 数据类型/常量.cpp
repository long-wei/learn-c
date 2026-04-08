#include<iostream>
using namespace std;
/*常量的定义方式(不可修改，会报错)
1. #define 宏常量
2. const修饰的变量 
*/

//1. #define宏常量
#define day 7
 
int main()
{
	//day =  14 ; 错误，day是常量，有一旦修改则会报错  
	cout<<"一个星期有"<<day<<"天"<< endl;
	
	const int month = 12;
	// month = 24；错误，const修饰的变量也称为常量 
	cout<<"一个月有"<<month<<"天"<<endl; 
	system("pause");
	return 0;
 } 
