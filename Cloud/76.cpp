#include<iostream>

using namespace std;

int a[10010];

int main(){
	int n,x, f=-1;
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	cin>>x;
	for (int i=0;i,n;i++){
		if (a[i]==x){
			f=i;
			break;
		}
	}
	cout<<f;
	
	return 0;
}
