#pragma once
class KeyValue
{
private:
	int key;
	double value;

public:
	void SetKey(int key);
	int GetKey();
	void SetValue(double value);
	double GetValue();
};

