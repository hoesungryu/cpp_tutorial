/*
다형: 함수가 처해지는 상황에서 다르게 동작하게 하는 것 . 
*/
#include<iostream>
#include"time.h"
using namespace std;

int main() {
	Time temp1(30, 2);
	NewTime temp2(3, 30, 2);
	
	temp1.show();
	temp2.show();

	return 0;
}

