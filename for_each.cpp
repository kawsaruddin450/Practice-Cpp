#include<iostream>
using namespace std;

int main(){
    string students[] = {"Bob", "John", "Dekk", "David"};
    
    for(string student : students){
        cout << student << endl;
    }
    return 0;
}