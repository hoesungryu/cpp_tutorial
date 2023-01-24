#include <iostream>

using namespace std;
int main(){
    
    int i = 0;
    int j = 0;
    string str = "Pandas";

    while (i<3){
        i++;
        cout <<"i: " << i << endl;
    }

    while (str[j]!='\0'){        
        cout << str[j] << endl;
        j++;
    }
 
    int k =0;
    do {
        cout << "k: " << k << endl;
        k++;
    } while (k<3);


    return 0;
}