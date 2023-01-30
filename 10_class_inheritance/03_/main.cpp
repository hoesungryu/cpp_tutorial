


/*
서로 다른 것을 배열로 저장 하고 싶지만 
데이터형이 다 같아야 되므로 일반적인 방법으로는 사용할수없다. 

그래서 포인터를 저장하면 된다. !!! --> 오.... 
*/

#include <iostream>
#include "time.h"
using namespace std;

const int MAX = 3;

int main() {

	Time* times[MAX];
	int day;
	int hours;
	int mins;

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 원소를 정의합니다." << endl;
		cout << "시간을 입력하십시오." << endl;
		cin >> hours;
		cout << "분을 입력하십시오." << endl;
		cin >> mins;
		char check;
		cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오." << endl;
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins);
		else {
			cout << "일을 입력하십시오." << endl;
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 정보입니다." << endl;
		times[i]->show();
	}

	for (int i = 0; i < MAX; i++) {
		delete times[i];
	}

	return 0;
}