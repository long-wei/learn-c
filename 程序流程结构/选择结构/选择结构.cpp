#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,c,t;
	cin>>a>>b>>c; 
	if(a<b){
		t = a;
		a = b;
		b = t;
		if(b<c){
			t = b;
			b = c;
			c = t;
			if(a<b){
				t = a;
				a = b;
				b = t;
			}
		}
	}else{
		if(b<c){
			t = b;
			b = c;
			c = t;
			if(a<b){
				t = a;
				a = b;
				b = t;
			}
		}
	}
	if(a>=b+c){cout<<"Not triangle";}
	else{
		if(a*a==b*b+c*c){
		cout<<"Right triangle"<<endl;
		}else if(a*a<b*b+c*c){
			cout<<"Acute triangle"<<endl;
		}else{
			cout<<"Obtuse triangle"<<endl;
		}
		if(a==b || b==c){
			cout<<"Isosceles triangle"<<endl;
			if(a==c){
				cout<<"Equilateral triangle";
			}
		}
	}
	system("pause");
	return 0;
}
