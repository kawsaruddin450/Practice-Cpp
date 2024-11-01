#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char user, char computer);

int main()
{
    char user, computer;
    srand(time(NULL));

    cout << "*******************************************************\n";
    cout << "                  Rock Paper Scissor                   \n";
    cout << "*******************************************************\n";

    do
    {
        user = getUserChoice();
        if(user == 'x'){
            cout << "Thanks for playing.";
            break;
        }
        cout << "Your choice: ";
        showChoice(user);

        computer = getComputerChoice();

        cout << "Computer's choice: ";
        showChoice(computer);

        chooseWinner(user, computer);

        cout << "****************************************************\n";
    }while(user != 'x');

    return 0;
}

// function to take input from user
char getUserChoice()
{
    char choice;
    do
    {
        cout << "Enter your choice: " << endl;
        cout << "r for Rock." << endl;
        cout << "p for pater." << endl;
        cout << "s for scissor." << endl;
        cout << "x for exit" << endl;
        cin >> choice;
    } while (choice != 'r' && choice != 'p' && choice != 's' && choice != 'x');

    return choice;
}

// show user choice function
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock" << endl;
        break;
    case 'p':
        cout << "Paper" <<endl;
        break;
    case 's':
        cout << "Scissor" << endl;
        break;

    default:
        break;
    }
}


// randomly genarate a choice of computer
char getComputerChoice()
{
    srand(time(0));

    int randNum = (rand() % 3) + 1;

    switch (randNum)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    default:
        break;
    }
}

//choosing the winner
void chooseWinner(char user, char computer){
    if(user == 'r'){
        if(computer == 'r'){
            cout << "Draw";
        }
        else if(computer == 'p'){
            cout << "Computer wins!";
        }else{
            cout << "You win!";
        }
    }
    else if(user == 'p'){
        if(computer == 'r'){
            cout << "You win!";
        }
        else if(computer == 'p'){
            cout << "Draw.";
        }else{
            cout << "Computer wins!";
        }
    }
    else{
        if(computer == 'r'){
            cout << "Computer wins!";
        }
        else if(computer == 'p'){
            cout << "You win!";
        }
        else{
            cout << "Draw.";
        }
    }
    cout << endl;
}