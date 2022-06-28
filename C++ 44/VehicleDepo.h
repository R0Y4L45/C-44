#pragma once

class VehicleDepo
{
	vector<Car> cars;
	vector<Airplane> airplanes;
	vector<Ship> ships;

public:

	VehicleDepo() : cars(), airplanes(), ships() {}

	VehicleDepo(vector<Car> _cars, vector<Airplane> _airplanes, vector<Ship> _ships)
	{
		cars = _cars;
		airplanes = _airplanes;
		ships = _ships;
	}


	void showAllVehicle()
	{
		for (size_t i = 0; i < cars.size(); i++)
		{
			cars[i].print();
			cout << endl;
		}

		for (size_t i = 0; i < airplanes.size(); i++)
		{
			airplanes[i].print();
			cout << endl;
		}

		for (size_t i = 0; i < ships.size(); i++)
		{
			ships[i].print();
			cout << endl;
		}
	}
};
