#include <iostream>
#include <climits> // F12 라이브러리로 갈수있음 
using namespace std;

// 정수형 ex) short < int <  long < long long 

int main(){
    short n_short = SHRT_MAX;
    

    int n_int = INT_MAX;
    unsigned int un_n_int; 

    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout<< "short: " << sizeof n_short << " 바이트" << ", 최대값:" << n_short << endl;
    cout<< "int: " << sizeof n_int << " 바이트" << ", 최대값:" << n_int << endl;
    //  귀찮다 빨리 loop 배우고 싶다... 



    unsigned short un_n_short = USHRT_MAX; // unsigned integer 이다. 
    unsigned short b = -1; // 음수 출력시 맨뒤 최대값을 같게됨.. 
    cout<< "size of unsigned short: " <<  un_n_short << endl;
    cout<< "unsigned short: " <<  b << endl;

    return 0;
}