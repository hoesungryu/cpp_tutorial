# include <iostream>

using namespace std;

/*
구조체 : 다른 데이터 형이 허용되는 데이터 집합 / 
cf) 비교하면.. 
배열 같은 데이터 형의 집합 
*/


int main(){

    struct MyStruct
    {
        /* data(=members) */
        // 정의하지 않으면 무조건 0으로 할당되는구나~ 
        string name;
        string position;
        float height;
        float weight;

    };

    MyStruct A;
    A.name = "Son";
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;
    /*
    MyStruct A = {
        "Son",
        "Striker",
        183,
        77
    }
    */

   // 총 갯수가 오는구나~ 
   MyStruct B[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << B[0].height << endl;


    return 0;
}