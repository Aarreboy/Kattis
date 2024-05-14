#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> getInput();

int main(void)
{
    vector<string> sentences = getInput();
    size_t j = 0;
    size_t k = 0;
    string pattern = "welcome to code jam";

    while(j < sentences[0].length() && k < pattern.length())
    {
        if(pattern[k] == sentences[0][j]){
            ++k;
            ++j;
        }
        else{
            ++j;
        }
    }

    if(k == pattern.length())
    {
        cout << "Pattern Found\n";
    }
    else
    {
        cout << "Pattern not Found\n";
    }


    return 0;
}


vector<string> getInput()
{
    int n;
    cin >> n ;
    cin.ignore();

    vector<string> sentences;

    for( int i = 0 ; i < n ; ++i){
        string sentance;
        getline(cin, sentance);
        sentences.push_back(sentance);

    }
    return sentences;
}

    // cout << "Input sentences:\n";
    // for (const auto& sentence : sentences) {
    //     cout << sentence << '\n';
    // }
