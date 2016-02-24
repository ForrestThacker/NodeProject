/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: ftha4681
 */

#include "CTECList.h"
#include <iostream>

template<class Type>

CTECList::CTECList()
{
	// TODO Auto-generated constructor stub
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template<class Type>
CTECList<Type>::~CTECList()
{
	// TODO Auto-generated destructor stub
}

template<class Type>
Type CTECList<Type> :: removeFromFront()
{
	assert(this->size >0);
//Find the next spot.
		Type thingToRemove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
//Remove head
	delete this-> head;
//Move head to next spot.
	head = newHead;

	return thingToRemove;
}

template <class Type>
Type CTECList<Type> :: removeFromEnd()
{

}
