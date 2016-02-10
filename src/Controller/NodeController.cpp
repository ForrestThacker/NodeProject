






#include "NodeController.h"
#include <iostream>

using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController::start()
{
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (index *  23));
	}

	for(int index = notHipsterInts->getSize(0-1; index >= 0; index--)
	{
			cout <<
	}
}
