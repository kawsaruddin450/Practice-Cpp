#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "How many grades you want to enter? ";
    cin >> size;

    char *pGrade = NULL;
    pGrade = new char[size];

    for(int i=0; i<size; i++){
        cout << "Enter grade #" << i+1;
        cin >> pGrade[i];
    }
    for(int i=0; i<size; i++){
        cout << "Grade #" << i << ": " << pGrade[i] << endl;
    }

    delete[] pGrade;    // delete the array from the memory.

    return 0;
}