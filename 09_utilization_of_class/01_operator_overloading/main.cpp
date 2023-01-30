
/*
연산자 오버로딩 
사용자 정의에 확대시키고 싶다. 
Ex) 
* : 포인터 값 or 곱하기 ... s
*/

#include<iostream>
#include"time.h"
using namespace std;

int main() {
	Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();

	Time total;
	// total = day1.operator+(day2);
    total = day1 + day2;
	total.show();

	return 0;
}