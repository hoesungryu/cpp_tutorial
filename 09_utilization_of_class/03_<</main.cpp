#include <iostream>
#include "time.h"
using namespace std;

int main() {
	Time day2(2, 30);
	

	// Time new_day = 3 * day2; 
    Time new_day = operator*(3, day2);
	// new_day.show();

    cout << new_day << endl;

	return 0;
}