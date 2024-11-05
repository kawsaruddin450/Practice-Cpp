#include<iostream>
using namespace std;

class Stove{
    private:
        int temperature = 100;

    public:
        int getTemperature(){
            return temperature;
        }
        void ssetTemperature(int temperature){
            this -> temperature = temperature;
        }
};

int main(){
    Stove stove;

    stove.ssetTemperature(10000000);

    cout << stove.getTemperature() << endl;

    return 0;
}
