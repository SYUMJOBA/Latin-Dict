#include "data.h"

using namespace std;

void JustAVeryRandomArrayTest(){
    string MyArray[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a value: ";
        getline(cin, MyArray[i]);
    }
    
    for (int i = 0; i <10; i++) cout << MyArray[i] << endl;
}

