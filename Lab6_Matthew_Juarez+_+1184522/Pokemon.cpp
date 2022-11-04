#include "Pokemon.h"

String^ Pokemon::getName() {
	return name;
}

String^ Pokemon::getGeneration() {
	return this->generation;
}

String^ Pokemon::getNumber() {
	return number;
}

void Pokemon::setName(String^ _name) {
	this->name = _name;
}

void Pokemon::setGeneration(String^ _generation) {
	this->generation = _generation;
}

void Pokemon::setNumber(String^ _number) {
	this->number = _number;
}