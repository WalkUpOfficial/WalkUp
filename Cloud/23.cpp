#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,ans=0;
	cin >> n >> m;
	for(int i=n;i<=m;i++)if(i%2==1) ans+=i;
	cout << ans << endl;
	return 0;
}
