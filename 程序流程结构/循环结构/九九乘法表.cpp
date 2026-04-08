#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<10;i++){
		for(int n=1;n<=i;n++){
			cout<<n<<'*'<<i<<'='<<i*n<<"\t";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
