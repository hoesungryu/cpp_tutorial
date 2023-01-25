#include <iostream> 

using namespace std;



/*
switch 문은 if else 문을 더욱 간결하게 만든다.
if 구분이 3개가 넘어가게되면 일반적으로 switch 가 더 좋다. 


switch 조건이 안맞으면 그냥 지나치게된다. 
그래서 default 를 선언하게 된다. 

*/
int main() {
    char grade; 
    cout << "학점을 입력학세요 (A, B, C)" << endl;
    cin >> grade;

    switch (grade) {
        case 'A':
            cout <<"우수합니다." << endl;
            break;
        case 'B':
            cout <<"보통입니다" << endl;
            break;
        case 'C':
            cout <<"낮습니다" << endl;
            break;
        default:
            cout << "A,B,C중 하나를 입력하십시오" << endl;
    }

    return 0;
 }