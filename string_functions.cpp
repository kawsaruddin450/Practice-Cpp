#include<iostream>
using namespace std;

int main(){
    string name;

    cout << "Enter your name please: ";
    getline(cin, name);

    if(name.empty()){
        cout << "You didn't enter a name." <<endl;
    }
    else{
        cout << "You entered a name" << endl;
    }

    cout << "Length of your name: " << name.length() << endl;

    name.append("@gmail.com");
    cout << name;
    return 0;
}