#include <iostream>
#include <string>
#include <array>
using namespace std;

int IndexInArray(string arr[], string ValueToFind){
    int count = 0;

    bool found = false;

    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == ValueToFind) {
            return i;
            found = true;
        }
    }
    
    if (found == false) {
        cout << "IndexinArray() could not find the word's index to print the definition" << endl;
    }

    return -1;


// I need to plan everything here

string LatinWords[] = {"a", "ab", "abs", "a-", "ab-", "abs-", "abactor", "abactus", "abactus"};

class Dict{

    private:

    int Dict_len;
    string Words[10];
    string Meanings[10];

    public:

    Dict(int len) {
        Dict_len = len;
    };

    void printDefinition(string wordToDefine) {

        int WordIndex = IndexInArray(Words, wordToDefine);

        if (WordIndex == -1) {
            cout << "No word was found in the dictionary as you typed it ... By the way contact SYUMJOBA, the creator of this, at syumjoba@gmail.com if you think this is an error, and take a picture at your screen, sending it" << endl;
        }
        else {
            cout << Meanings[WordIndex];
        }

    }
};

