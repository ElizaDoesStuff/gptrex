#ifndef LAYER_H
#define LAYER_H

#include "Network.h"
#include "Neuron.h"

class Network;
class Neuron;

class Layer {
	public:
		Neuron* 	neurons		= nullptr;
		int 		size		= 0;
		int 		index		= 0;
		Network* 	network		= nullptr;
		Layer*		previous	= nullptr;

		// Constructor & Destructor //
		Layer(Network*, int, int);
		~Layer();

		// Evaluation function //
		void evaluate();
};

#endif