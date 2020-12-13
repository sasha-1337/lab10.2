#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string get_word(istream& t) {
    string w;
    t >> w;
    return w;
}

string search() 
{
    ifstream t("t.txt");
    if (!t) {
        cerr << " Error! " << endl;
    }

    string word, min_word;
    size_t len, min_len = 1000;

    while (t) {
        word = get_word(t);
        if (word.length() == 0)
            break;

        len = word.length();

        if (len < min_len) {
            min_len = len;
            min_word = word;
        }
    }
    return min_word;
}

int main()
{
    string min_word = search();
    cout << " Count of symbols: " << min_word.length() << endl;
    cout << " The shortest word: " << min_word << endl;

    return 0;
}