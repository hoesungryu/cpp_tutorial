#include <iostream>

using namespace std; 


/*
new operator 
어떤 데이터형을 원하는지 new연산자에게 알려주면, 
연산자는 그에 맞는 크기의 메모리 블록을 찾아내고 
그 블록의 주소를 리턴 합니다. 
*/

/*
delete operator
환수된 메모리는 재할당 가능 
*/
int main(){
    
    int *b = new int; // c++ 장점, 4byte 주소로 포인터를 할당 
    *b = 3; 
    cout <<"b = " << *b << endl;

    
    int* ps = new int;
    delete ps; // new 를 사용했다면 바로 주소를 지워줘서 메모리누수를 막아야된다. 
    /*
    delete사용규칙 
    1. new로 대입하지 않은 메모리는 delete로 해제할수없다. 
    2. 같은 메모리 블록을 연달아 두번 delete로 해제할수없다. 
    3. new[] 로 할당 햇다면 delete[] 로 해제 
    4. 대괄호 없다면 없이 해제 
    */
   double *p3 = new double[3];// p3 에 3개를 저장할수있는 공간이 할당 됨 
   p3[0]=0.2;
   p3[1]=0.5;
   p3[2]=0.7;

   for (int i=0; i<3; i++){
    cout << "Previous " << i << " "<< p3[i] << endl;
   };
   
   
   p3 = p3+1;  // 배열 주소를 하나 올라가게 되는구나!@#$

   for (int i=0; i<3; i++){
    cout << "After " << i << " " << p3[i] << endl;
   };

   p3 -= 1; // 올렸으면 빼줘야 에러가 안나는구나 
   delete[] p3;

    return 0;
}