/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: ftha4681
 */

#include "CTECArray.h"

#include <assert.h>

using namespace std;

CTECArray<Type>::CTECArray(int size)


template<class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for (int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}

		delete deleteMe;
		deleteMe = head;

	}
	delete head;
}

template<class Type>
void CTECArray<Type>::set(int position, cost Type& value)
{
}


template<class Type>
Type CTECArray<Type>::get(int position)
{
assert(position < size && position >= 0);

ArrayNode<Type> * current = head;
for (int spot = 0; spot <= position; spot++)
{
	if (spot != position)
	{
		current = current->getNext();
	}
	else
	{
		return current-getValue();
	}

}

