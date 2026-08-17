#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if (n % 2 == 1){
        cout<<"odd";
    }else if(n == 0){
        cout<<"zero";
    }else{
        cout<<"even";
    }
    
    return 0;
}
