#include <iostream>
#include <vector>

using namespace std;

#include "Engine.h"
#include "Vehicle.h"
#include "Car.h"
#include "Airplane.h"
#include "Ship.h"
#include "VehicleDepo.h"




int main()
{
    Engine e("Company", 2.2);
    Engine e1("Company1", 2.3);
    Engine e2("Company2", 2.4);
    Engine e3("Company3", 2.5);
    Engine e4("Company4", 2.6);
    Engine e5("Company5", 2.7);

    Car c1("model1", "vendor1", e, false);
    Car c2("model2", "vendor2", e1, true);
    Car c3("model3", "vendor3", e2, false);
    Car c4("model4", "vendor4", e3, true);

    vector<Car> cars;
    cars.push_back(c1);
    cars.push_back(c2);
    cars.push_back(c3);
    cars.push_back(c4);

    Airplane a1("mod1", "ven1", e1, 2, 250);
    Airplane a2("mod2", "ven2", e2, 4, 150);
    Airplane a3("mod3", "ven3", e3, 2, 450);
    Airplane a4("mod4", "ven4", e4, 3, 350);


    vector<Airplane> airplanes;
    airplanes.push_back(a1);
    airplanes.push_back(a2);
    airplanes.push_back(a3);
    airplanes.push_back(a4);

    Ship s1("m1", "v1", e5, true);
    Ship s2("m2", "v2", e4, true);
    Ship s3("m3", "v3", e3, false);
    Ship s4("m4", "v4", e2, false);

    vector<Ship> ships;
    ships.push_back(s1);
    ships.push_back(s2);
    ships.push_back(s3);
    ships.push_back(s4);

    VehicleDepo depo(cars, airplanes, ships);
    depo.showAllVehicle();
}
