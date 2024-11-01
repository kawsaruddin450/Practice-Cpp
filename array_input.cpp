#include<iostream>
using namespace std;

int main(){
    string foods[5];
    int size = 5;

    for(int i=0; i<size; i++){
        cout << "Enter a food you like: ";
        cin >> foods[i];
    }

    for(string food: foods){
        cout << food << endl;
    }
}