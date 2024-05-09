#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignore the newline character after N
    vector<string> phrases;

    // Read N lines
    for (int i = 0; i < N; i++) {
        string phrase;
        getline(cin, phrase);
        
        phrases.push_back(phrase);
    }

    vector<bool> letters(26, false);

    for (int i = 0 ; i < N ; i++){
        letters.assign(26, false);
        int used = 0;
        for(char& c : phrases[i])
        {
            int letter_value = tolower(c) - 'a';
            if(letter_value < 26 && letter_value >= 0 && !letters[letter_value])
            {
                letters[letter_value] = true;
                used++;
            }
        }
        if (used == 26){
            cout << "pangram\n";
        }
        else
        {
            cout << "missing ";
            for(int i = 0; i < 26 ; i++)
            {   
                if(!letters[i])
                {
                char letter = char (i + 'a');
                cout << letter;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
