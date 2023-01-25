#include <iostream> 

using namespace std;


/*
lambda 같은 거네~ 
조건 ? 참 이면 : 거짓이면 
*/

int main() {
    
    char res; 
    string ans; 

    cout <<"당신은 남성입니가?" << endl;
    cin >> res;


    ans = (res == 'Y' || res == 'y') ? "당신은 남자이군요!" : "여자이군요";

    cout << ans << endl; 


    return 0;
 }