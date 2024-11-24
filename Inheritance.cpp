#include <iostream>

using namespace std;

class Vehicle {
public:
Vehicle() {
cout << "Vehicle created." << endl;
}
void start() {
cout << "Vehicle has started." << endl;
}
};

class Car : public Vehicle {
public:
Car() {
cout << "Car created." << endl;
}
void honk() {
cout << "Car honking: Beep Beep!" << endl;
}
};
int main() {

Car myCar;

myCar.start(); 

myCar.honk(); 
return 0;
}