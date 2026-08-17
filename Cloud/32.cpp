#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,d,e;
	cin>>a>>b;
	d += a/100%10*1;
	d += a/10%10*10;
	d += a/1%10*100;
	
	e += b/100%10*1;
	e += b/10%10*10;
	e += b/1%10*100;
	
	if (d>=e){
		cout<<d;
	}else{
		cout<<e;
	}
	
	return 0;
}
