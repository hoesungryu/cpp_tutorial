#include <iostream>

using namespace std;


// int main(){
//     int a[6] = {0,1,2,3,4,5};
    
//     for (int i = 0; i < 6; i++){
//         cout << a[i];
//     }
//     cout << "\n";

//     // 간단하게 배열 접근하는 방법 ... 하지만 전부 출력하게 되어있다. 

//     for (int i :a ){
//         cout << i;
//     }
//     cout << "\n";

//     return 0;
// }

// 2d-array
int main(){
    int temp[4][5] ={
        {1,2,3,4,5},
        {11,22,33,44,55},
        {11,22,33,44,55},
        {11,22,33,44,55},
    }; //4-by-5 array

    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            cout << temp[i][j] << " ";
        }
    cout << "\n";
    }





    return 0;
}