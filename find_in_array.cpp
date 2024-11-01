#include<iostream>
using namespace std;

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = -1, myNum;

    cout << "Enter a number to search for: ";
    cin >> myNum;

    for(int i=0; i < sizeof(numbers)/sizeof(int); i++){
        if(numbers[i] == myNum){
            index = i;
        }
    }

    if(index == -1){
        cout << "The element is not in the array.";
    }else{
        cout << "The element is at index: " << index;
    }
    
    return 0;
}