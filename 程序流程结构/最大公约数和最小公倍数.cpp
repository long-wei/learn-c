#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(n>m){
		int a=n;
		n=m;
		m=a;
	}
	int a = int(sqrt(n))+1;
	for(int k=a;k>0;k--)
	{
		if(n%k==0 and m%k==0){
			cout<<k<<endl;
			int min_n = n/k;
			int min_m = m/k; 
			cout<<k*min_n*min_m<<endl;
			break; 
		}
	}
	cout<<endl;
	system("pause");
	return 0;
 } 
