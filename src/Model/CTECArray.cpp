/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: ftha4681
 */

#include "CTECArray.h"
using namespace std;

template<class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;
	// TODO Auto-generated constructor stub
	if(size <= 0)
	{
		cerr << "That is not allowed!" << endl;
	}
}

CTECArray::~CTECArray() {
	// TODO Auto-generated destructor stub
}

