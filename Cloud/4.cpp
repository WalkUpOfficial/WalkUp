#include<bits/stdc++.h>

using namespace std;

int main(){
	int year,month,day,answer,temp;
	int year_,month_,day_,_day;year_ = 1000 / 365;month_ = 1000 / 365 / 12;day_ = 1000 / 365 / 12 / 31,_day = 1000 / 365 / 12 / 29;  // 格式化
	cin>>year>>month>>day;
	if (year % 400 != 0 || year % 4 != 0){
		// 平年
		year += year_;
		month += month_;
		day += day_;
	}else{
		// 闰年
		year += year_;
		month += month_;
		day += _day;
	}
	cout<<year<<" "<<month<<" "<<day;
}
