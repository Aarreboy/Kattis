#include <iostream>
using namespace std;

int main(void)
{
    int n;
    string input;
    cin >> n;
    cin >> input;

    int lectures_awake = 0;
    int coffee_available = 0;

    for(char c : input)
    {
        if(c == '1'){
            lectures_awake++;
            coffee_available = 2;
        }
        if(c == '0' && coffee_available > 0){
            lectures_awake++;
            coffee_available--;
        }

    }
    cout << lectures_awake;

    return 0;

}