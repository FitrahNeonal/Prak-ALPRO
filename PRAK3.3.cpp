#include<iostream>
using namespace std;

int main(){
	int i,j,space;
	int n=5;
	
	for(i=1;i<=n;i++){
		for(space =1;space<=n-i;space++){
			cout<<" ";
		}
	}
	
	for(j=1;j<=(2*i-1);j++){
		if(j== 1||j==(2*i-1)){
			cout<<"*";
		}else{
			cout<<" ";
		}
	}cout<<endl;
	
	for(i=n-1;i>=1;i--){
		for(space =1;space<=n-i;space++){
			cout<<" ";
		}
	}
	
	for(j=1;j<=(2*i-1);j++){
		if(j== 1||j==(2*i-1)){
			cout<<"*";
		}else{
			cout<<" ";
		}
	}cout<<endl;
	return 0;

}
