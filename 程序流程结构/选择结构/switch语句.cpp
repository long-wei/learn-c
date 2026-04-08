#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"很高兴为您服务！请你为我们的服务做出评价："<<endl; 
	cin>>a;
	switch(a)
	{
	case 0:
		cout<<"非常不满意"<<endl;
		break;
	case 1:
		cout<<"不满意"<<endl;
		break;
	case 2:
		cout<<"比较不满意"<<endl;
		break;
	case 3:
		cout<<"一般"<<endl;
		break;
	case 4:
		cout<<"比较满意"<<endl;
		break;
	case 5:
		cout<<"满意"<<endl;
		break;
	case 6:
		cout<<"非常满意"<<endl;
		break;
	default:
		cout<<"我很清高，不作评价。"<<endl; 
	}
	system("pause");
	return 0; 
}
