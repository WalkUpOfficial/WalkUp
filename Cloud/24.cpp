#include<bits/stdc++.h>

using namespace std;

int main(){
	int year1,year2,year3;
	cin>>year1>>year2;
	for (int i=year1+1;i<=year2-1;i++){
		if (i%4==0||i%400==0||i%100==0){
			year3 = i;
		}
	}
	cout<<year3;
	
	return 0;
}
