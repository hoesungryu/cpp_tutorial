#include <iostream>
#define SIZE 20

using namespace std;

int main(){

    char animal[SIZE];
    char* ps;

    cout << "동물 이름을 입력하십시오.\n";
    cin >> animal;

    ps = new char[strlen(animal) +1]; // 실행 할때 메모리를 할당 하는 것이 new 이구나.
    strcpy(ps, animal); // animal 값을 ps로 복사 

    cout << "입력하신 동물 이름을 복사하였습니다." << endl;
    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
    cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;
     
    delete[] ps;
    return 0;
}
