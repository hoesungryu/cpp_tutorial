#include "struct.h"

int main() { 
    MyStruct HoeSung = {
        "HoeSung",
        32,
    };
    display(HoeSung);
    return 0;
};

void display(MyStruct& temp) {
    cout << "Name " << temp.name << endl; // 구조체 맴버 (.)  
    cout << "Age " << temp.age << endl;
};


