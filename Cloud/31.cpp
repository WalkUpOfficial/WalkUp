#include<bits/stdc++.h>

using namespace std;

int main(){
	int y,m,d,answer1,answer2,answer3;
	cin>>y>>m>>d;
	answer1 = y+2;
	answer2 = m+9;
	answer3 = d-4;
	while(1){
		if (answer2>12){
			answer1 += 1;
			answer2 -= 12;
		}else{
			break;
		}
	}
	
	if (answer3<0){
		answer2 -= 1;
		if (answer2%2==0){
			if (answer2==2){
				if ((answer1%400==0)||(answer1%4==0&&answer1%100!=0)){
					answer3 += 29;
				}else{
					answer3 += 28;
				}
			}else{
				answer3 += 30;
			}
		}else{
			if (answer2==1 && answer2==3 && answer2==5 && answer2==7 && answer2==8 && answer2==10 && answer2==12){
				answer3 += 31+2;
			}else{
				answer3 += 28+2;
			}
		}
	}
	cout<<answer1<<' '<<answer2<<' '<<answer3;
	
	return 0;
}
