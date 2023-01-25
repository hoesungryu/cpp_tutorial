# include <iostream>

using namespace std;

int main(){
    char res; 
    
    cout <<"당신은 남성입니가?" << endl;
    cin >> res;
    /*
    &&: 모두 참일때 참
    ||: 모두 거짓일때 거짓 
    */
    if (res == 'Y' || res == 'y') { 
        cout << "당신은 남자이군요!" << endl; 
    }
    else if (res == 'N' || res == 'n') {

    }
    else{
        cout << "Y or y or N or n " << endl;
    }
        
    int age; 
    cout <<"당신의 나이를 입력해주세요" << endl;
    cin >> age; 

    if (age < 0 || age > 100 ) {
        cout <<"Invalid 거짓말하시면 안됩니다."<< endl;
    }
    else if (age >=20 && age <=29 ) {
        cout << "20 대시군요!!" << endl;
    }
    else
        cout << "20대는 아니시군요" << endl; 
    

    return 0;
}
