#include"swap.h" //告诉编译器是与swap.h是配套的 
void swap(int a,int b)
{
	a = max(a, b);
	b = min(a, b);
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}
