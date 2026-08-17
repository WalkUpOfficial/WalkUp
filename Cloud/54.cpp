#include<iostream>

using namespace std;

int main(){
	int chinese,math,english,c=0;
	cin>>chinese>>math>>english;
	if (chinese < 60) c++;
	if (math < 60) c++;
	if (english < 60) c++;
	if (c == 1){
		cout<<1;
	}else{
		cout<<0;
	}
	
	return 0;
}
