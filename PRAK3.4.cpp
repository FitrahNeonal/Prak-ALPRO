
#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Masukkan angka pertama: ";
	cin>>a;
	cout<<"Masukkan angka kedua: ";
	cin>>b;
	cout<<"Masukkan batas: ";
	cin>>c;
	cout<<a<<endl;
	cout<<b<<endl;
	for(int i=0;i<=c;i++){
		i=i+1;
		int d=a+b;
		cout<<d<<endl;
		a=b;
		b=d;
	}
}
