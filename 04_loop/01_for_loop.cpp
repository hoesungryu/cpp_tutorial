#include <iostream>

using namespace std;


/*
for-loop
1. 초기값 설정
2. 조건 검사
3. 반복 실시. 
*/

int main(){
    int total = 0;
    
    for (int i = 0; i < 5; i++){
        cout << i << endl;
        
        total+=i;
        
    }
    cout << "Total Sum: " << total << endl;

    


    return 0;
}