#pragma once


class Car : public Vehicle
{
	bool hasSpoiler;
public:


	Car() : Vehicle(), hasSpoiler() {}

	Car(string _vendor, string _model, Engine _engine, bool _hasSpoiler)
		:Vehicle(_vendor, _model, _engine)
	{
		hasSpoiler = _hasSpoiler;
	}

	void print()
	{
		Vehicle::print();
		cout << boolalpha << "Spoiler --> " << hasSpoiler << endl << endl;
	}
};

