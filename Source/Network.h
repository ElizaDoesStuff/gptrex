#ifndef NETWORK_H
#define NETWORK_H

#include "Layer.h"
#include "Neuron.h"

class Layer;
class Neuron;

class Network {
	public:
		Layer* 	layers		= nullptr;
		int 	size		= 0;

		// Constructor & Destructor //
		Network(int,int*);
		~Network();

		// Evaluation function //
		void evaluate();
};

#endif