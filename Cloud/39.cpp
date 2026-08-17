#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string text;
	int leftk, rightk;
	cin>>text;
	leftk = count(text.begin(), text.end(), '(');
	rightk = count(text.begin(), text.end(), ')');
	if (leftk == rightk){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	return 0;
}
