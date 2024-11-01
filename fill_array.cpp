#include<iostream>
using namespace std;

int main(){
    string foods[150];

    fill(foods, foods + 150/3, "Pizza");
    fill(foods + 150/3, foods + 150/3 + 150/3, "Hamburger");
    fill(foods + 150/3 + 150/3, foods + 150, "Hotdog");

    for(string food: foods){
        cout << food << endl;
    }

    return 0;
}