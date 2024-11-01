#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int num, guess, tries = 0;

    srand(time(NULL));
    num = (rand() % 10) + 1;

    cout << "************************* NUMBER GUESSING GAME ************************************\n";

    do{
        cout << "Guess a number within 1 to 10: ";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "You're too high! Try again." << endl;
        }else if(guess < num){
            cout << "You're too low, try again!" << endl;
        }else{
            cout << "Correct!! You won after " << tries << " tries." <<endl;
        }
    }while(guess != num);

    cout << "**************************************************************************************";
    return 0;
}