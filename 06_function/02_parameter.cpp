#include <iostream>

using namespace std;

void helloCPP(int, int); // type hit 만 주어도 되는구나? 

int main(){

    int times, times2;
    cout << "정수를 입력하십시오. \n";
    cin >> times;
    cout << "정수를 한번 더 입력하십시오. \n";
    cin >> times2;
    helloCPP(times, times2);
    
    return 0;
}

void helloCPP(int n, int m){
    for(int i = 0; i < n; i++)
        cout << "Hello\n";

    for(int i = 0; i < m; i++)
        cout << "C++\n"; 
}