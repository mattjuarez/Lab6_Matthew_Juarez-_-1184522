#pragma once

using namespace System;

ref class Pokemon
{
private:
	String^ name;
	String^ generation;
	String^ number;

public:
	String^ getName();
	String^ getGeneration();
	String^ getNumber();
	void setName(String^ _name);
	void setGeneration(String^ _generation);
	void setNumber(String^ _number);
};