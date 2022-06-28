#pragma once

class Vehicle
{
protected:
	static int s_id;
	int id;
	string vendor;
	string model;
	Engine engine;

	Vehicle() : id(), vendor(), model(), engine() {}

	Vehicle(string _vendor, string _model, Engine _engine)
	{
		id = ++s_id;
		vendor = _vendor;
		model = _model;
		engine = _engine;
	}
	
	void print()
	{
		cout << "ID : " << id << endl;
		cout << "Vendor : " << vendor << endl;
		cout << "Model : " << model << endl << endl;
		cout << "Engine info  \n" << engine << endl ;
	}
};

int Vehicle::s_id = 0;
