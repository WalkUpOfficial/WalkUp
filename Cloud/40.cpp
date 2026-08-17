#include<iostream>

using namespace std;

int main(){
	int day, km=0;
	cin>>day;
	for (int i=1;i<=day;i++){
		if (not i%6==0 & not i%7==0){
			km += 250;
		}else{
			continue;
		}
	}
	
	return 0;
}
