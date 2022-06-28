#pragma once

class Airplane : public Vehicle
{
	short engineCount;
	size_t passengerCapacity;

public:

	Airplane() : engineCount(), passengerCapacity() {}

	Airplane(string _vendor, string _model, Engine _engine, short _engineCount, size_t _passengerCapacity)
		:Vehicle(_vendor, _model, _engine)
	{
		engineCount = _engineCount;
		passengerCapacity = _passengerCapacity;
	}

	void print()
	{
		Vehicle::print();
		cout << "Engine count : " << engineCount << endl;
		cout << "Passenger capacity : " << passengerCapacity << endl << endl;
	}

};

