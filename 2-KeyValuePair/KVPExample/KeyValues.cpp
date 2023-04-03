#include "KeyValues.h"

KeyValues::KeyValues(int n)
{
	this->keyValues = new KeyValue * [n];
	this->count = 0;
}

KeyValues::~KeyValues()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->keyValues[i];
	}

	delete[] this->keyValues;
}

KeyValue* KeyValues::Create(int k, double v)
{
	KeyValue * newKv = new KeyValue(k, v);
	this->keyValues[this->count] = newKv;
	this->count++;
	return newKv;
}

KeyValue* KeyValues::Find(int k)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyValues[i]->GetKey() == k)
		{
			return this->keyValues[i];
		}
	}
	return nullptr;
}

KeyValue* KeyValues::Remove(int k)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyValues[i]->GetKey() == k)
		{
			KeyValue* kv = this->keyValues[i];
			this->count--;
			this->keyValues[i] = this->keyValues[this->count];
			this->keyValues[this->count] = nullptr;

			for (int j = 0; j < this->count; j++)
			{
				this->keyValues[j] = this->keyValues[j + 1];
				this->keyValues[j + 1] = nullptr;
			}
			return kv;
		}
	}

	return nullptr;
}

int KeyValues::GetCount()
{
	return this->count;
}
