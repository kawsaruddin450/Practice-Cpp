#include<iostream>
using namespace std;

int main(){
    char op;
    float a, b;

    cout << "************************** CALCULATOR **********************************" << endl;

    cout << " Enter any one of them: + - X / : ";
    cin >> op;

    cout << "Enter #1: ";
    cin >> a;
    cout << "Enter #2: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case 'X':
        cout << a * b;
        break;
    case 'x':
        cout << a * b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    
    default:
        cout << "You've selected a wrong operator";
        break;
    }

    cout << endl << "************************************************************************";
    return 0;
}