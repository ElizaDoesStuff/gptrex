#ifndef NETWORK_H
#define NETWORK_H

#include "./Layer.h"

class Network {
	public:
		Layer* layers;
		int size;

		Network(int,int*);
		~Network();
};

#endif