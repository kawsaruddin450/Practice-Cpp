#include<iostream>
using namespace std;

int main(){
    string name = "Kawsar";
    int age = 21;

    string *pName = &name;
    int *pAge = &age;

    cout << *pName << endl;
    cout << pAge << endl;
    return 0;
}