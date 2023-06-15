//Task4
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string get_word(istream& is) {
    string w;
    is >> w;
    return w;
}

int main()
{
    ifstream file("MyFile.txt");
    if (!file) {
        cerr << "File is don't open!" << endl;
        return 1;
    }

    string Array;
    cout << "Enter text: " << endl;
    getline(cin, Array);
    ofstream of;
    of.open("MyFile.txt", ios::trunc);
    of << Array;
    of.close();

    string word, max_word, min_word;
    int len, max_len = 0, min_len = 1000;

    while (file) {
        word = get_word(file);
        if (word.length() == 0)
            break;
        len = word.length();
        if (len > max_len) {
            max_len = len;
            max_word = word;
        }
        if (len < min_len) {
            min_len = len;
            min_word = word;
        }
    }

    file.close();

    cout << "Long word:  \"" << max_word << "\"" << endl
        << "Short word: \"" << min_word << "\"" << endl;

    return 0;
}