#include "KeyValue.h"

void KeyValue::SetKey(int key)
{
	this->key = key;
}

int KeyValue::GetKey()
{
	return this->key;
}

void KeyValue::SetValue(double value)
{
	this->value = value;
}

double KeyValue::GetValue()
{
	return this->value;
}
