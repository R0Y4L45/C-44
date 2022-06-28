#pragma once

struct Engine
{
	static int eng_no;
	int engine_no;
	string company;
	float volume;

public:

	Engine() : engine_no(), company(), volume() {};

	Engine(string _company, float _volume)
	{
		engine_no = ++eng_no;
		company = _company;
		volume = _volume;
	}
};

int Engine::eng_no = 0;

ostream& operator<<(ostream& out, Engine e)
{
	out << "Engine NO : " << e.engine_no << endl;
	out << "Company : " << e.company << endl;
	out << "Volume : " << e.volume << endl;

	return out;
}