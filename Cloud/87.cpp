#include<iostream>

using namespace std;

int main(){
	int arr[2]={0};
	cin>>arr[0]>>arr[1];
	if (arr[0] <= arr[1]) cout<<"OK";
	else cout<<arr[0]-arr[1];
	
	return 0;
}
