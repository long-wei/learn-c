#include<iostream>
#include<cmath>
#include<string>
using namespace std;

struct student{
	string name;
	int sore;
};

struct teacher{
	string name;
	struct student s[5];
};

void Printf(int a,struct teacher *p)
{
	for(int i=0;i<a;i++)
	{
		cout<<"老师名字："<<p->name<<endl;
		struct student *p0 = p->s;
		for(int k=0;k<5;k++)
		{
			cout<<"学生"<<k<<"： "<<p0->name<<" 分数："<<p0->sore<<endl;
			p0++;
		}
		p++;
	}
}

int main()
{
	int a;
	cin>>a;
	struct teacher t[a];
	for(int i=0;i<a;i++)
	{
		cin>>t[i].name;
		for(int k=0;k<5;k++)
		{
			cin>>t[i].s[k].name>>t[i].s[k].sore;
		}
	}
	Printf(a,t);
	system("pause");
	return 0;
 } 
