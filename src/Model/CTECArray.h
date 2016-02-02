/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: ftha4681
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include "ArrayNode.h"

class CTECArray
{
private:
	int size;
	ArrayNode<Type> * head;
public:
	CTECArray();
	virtual ~CTECArray();
	int getSize();
	void set( int position, Type value);
	Type get(int position);
};

#endif /* MODEL_CTECARRAY_H_ */
