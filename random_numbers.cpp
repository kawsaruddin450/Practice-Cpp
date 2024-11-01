#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(NULL));

    int number = (rand() % 10) + 1;
    cout << number;

    return 0;
}