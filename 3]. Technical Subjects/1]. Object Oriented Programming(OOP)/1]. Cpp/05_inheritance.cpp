#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    public: 
        string name;
        string model;
        int noOfTyres;

        Vehicle(string name, string model, int noOfTyres) {
            cout << "Vehicle Constructor called" << endl;
            this->name = name;
            this->model = model;
            this->noOfTyres = noOfTyres;
        }



    public:
        void start_engine() {
            cout << "Engine is starting.." << name << " " << model << endl;
        }

        void stop_engine() {
            cout << "Engine is stopping.." << name << " " << model << endl;
        }

};

class Car: public Vehicle {
    public: 
        int noOfDoors;
        string transmissionType;
        Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres) {
            cout << "Car Constructor called" << endl;
            this->noOfDoors = noOfDoors;
            this->transmissionType = transmissionType;
        }


    void startAC() {
        cout << "AC is starting.." << name << " " << model << endl;
    }
};

int main() {

    Car A("Toyota", "Camry", 4, 4, "Automatic");
    A.start_engine();
    A.startAC();
    A.start_engine();
    return 0; 
}