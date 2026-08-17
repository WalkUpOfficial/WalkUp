#include<iostream>

using namespace std;

int main(){
	int a,b,i=0;
	cin>>a>>b;
	b += a*10;
	while(1){
		if (b>=9){
			i += 1;
			b -= 9;
		}else{
			cout<<i-6;
			break;
		}
	}
	
	return 0;
}
