#include<iostream>

using namespace  std;

string myl = "末影龙：最后的试炼，龙在天上也在心中";

int main(){
	for (char i:myl){
		cout<<i<<' ';
	}
	cout<<"\n";
	for (int i=0;;i++){
		cout<<i;
		for (char i:myl){
			cout<<i;
		}
		cout<<' '<<i<<"\n";
	}
	
	return 0;
}
