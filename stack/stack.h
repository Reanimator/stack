#pragma once
#include <iostream>
#include <fstream>


template <typename T>
class Tstack
{
private:
	T *mass;
	size_t all;
	size_t used;
public:
	Tstack() :all(0), used(0){
		mass = 0;
		mass = 0;
	};
	Tstack(size_t size) :used(0),all(size)
	{
		this->mass = new T[size];
	}
	void push(const T& elem)
	{
		if (this->used == this->all) // Не переполнен ли стек?
			throw 1;
		
		this->mass[this->used++] = elem;
	}
	void writeTop(String& filename)
	{
		std::ofstream file(filename);
		file << back();
		file.close();

	}
	T pop()//Возвращает и вырезает последний
	{
		if (this->used == 0) // Не переполнен ли стек?
			throw 2;

		return this->mass[--this->used];
	}
	T back()
	{
		if (this->used == 0) // Не переполнен ли стек?
			throw 2;

		return this->mass[this->used-1];
	}

	void resize(size_t newSize)
	{
		T *tmp;
		size_t tmpMS = all;
		if (used > newSize)
			throw 10;
		all = newSize;
		tmp = new T[all];
		for (size_t i = 0; i < all && i < tmpMS; i++)
			tmp[i] = mass[i];
		

		delete[] mass;
		mass = tmp;
	}

};