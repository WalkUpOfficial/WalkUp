#include<bits/stdc++.h>

using namespace std;

int main(){
	int s,maybe=0;
	cin>>s;
	
	for (int i=1;i<10;i++){
		if (i%i==0){
			maybe += 1;
		}
	}
	cout<<maybe/4;
	
	return 0;
}
