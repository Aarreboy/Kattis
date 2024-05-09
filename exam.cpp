#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int correct_answers;
    string my_answer;
    string friend_answer;

    cin >> correct_answers;
    cin >> my_answer;
    cin >> friend_answer;

    int length_of_quiz = my_answer.length();
    int same_answer_count = 0;

    for(int i = 0 ; i < length_of_quiz ; i++){
        if(my_answer[i] == friend_answer[i]){
            same_answer_count++;
        }
    }

    int result;
    int different_answers = length_of_quiz - same_answer_count;
    if(same_answer_count >= correct_answers){
        result = correct_answers + different_answers;
    }
    else{
        result = length_of_quiz - correct_answers + same_answer_count;
    }

    cout << result;

}

