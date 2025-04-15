#include <iostream>
#include <cctype> // for isspace


using namespace std;

// Write a function
// int count_words(string str)
// that returns a count of all words in the string str. Words are separated by spaces. For
// example, count_words("Mary had a little lamb") should return 5.

int count_words(string str){
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (isspace(c)) {
            inWord = false; // End of a word
        } else {
            if (!inWord) {
                count++; // Start of a new word
                inWord = true;
            }
        }
    }

    return count;
}

int main(){
    string str = "Mary had a little lamb";
    int wordCount = count_words(str);
    cout << "The number of words in the string is: " << wordCount << endl;

    return 0;
}