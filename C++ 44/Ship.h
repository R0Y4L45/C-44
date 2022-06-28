#pragma once

class Ship : public Vehicle
{
	bool hasSail;

public:

	Ship() : hasSail() {}

	Ship(string _vendor, string _model, Engine _engine, bool _hasSail)
		:Vehicle(_vendor, _model, _engine)
	{
		hasSail = _hasSail;
	}

	void print()
	{
		Vehicle::print();
		cout << boolalpha << "Sail : " << hasSail << endl;
	}
};

