//Ballyyev Eziz ballyev.006@gmail.com
//hello world project

#include <iostream>
#include "greetWord.h"

using namespace std;

int main() {
   greetWord("World");
    string word;
    while (true) {
        cout << "Input: ";
        getline(cin, word);
        greetWord(word);
    }
    return 0;
}
