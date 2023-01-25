#include <iostream>

using namespace std;

const int SIZE = 8;


// 일반적 코딩 
// int sumArr(int arr[], int n){
//     int total = 0;
//     for (int i = 0; i < n; i ++)
//         total += arr[i];
//     return total;
// }

// int main(){

//     int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
//     // arr == &arr 이기 때문에 에러가 없었다 . 

//     int sum = sumArr(arr, SIZE);
//     cout << "함수의 " << SIZE << "까지의 합은 " << sum << "입니다.\n";

//     return 0;
// }

// 원론적 
int sumArr(int* begin, int* end) { 
    // 배열의 시작과 끝을 알려주고 
    int total = 0;
    int* pt; // 포인터 선언 

    for (pt = begin; pt != end; pt++) // 포인터에는 시작 주소를 넣고 끝주소가 되면 끝
        total += *pt; // 포인터가 지시한 값을 누적 저장 
    return total;
}

int main(){

    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    // arr == &arr 이기 때문에 에러가 없었다 . 

    int sum = sumArr(arr, arr+SIZE);
    cout << "함수의 " << SIZE << "까지의 합은 " << sum << "입니다.\n";

    sum = sumArr(arr, arr+3);
    cout << "함수의 " << "세번째 인덱스 까지의 합은 " << sum << "입니다.\n";
    return 0;
}
