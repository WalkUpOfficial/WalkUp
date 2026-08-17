#include <iostream>	

using namespace std;

int main(){
	int n,q=1,c=1,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=c;
        q--;
        if(q==0){
			c++;
			q=c;
		}
    }
    cout<<sum;
    return 0;
}
