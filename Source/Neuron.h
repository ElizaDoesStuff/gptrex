#ifndef NEURON_H
#define NEURON_H

#include "Network.h"
#include "Layer.h"

class Network;
class Layer;

class Neuron {
	public:
		float 	value 		= 0.0;

		float* 	weights		= nullptr;
		float 	bias		= 0;

		Layer* 	thisLayer	= nullptr;
		
		Neuron(Layer*);
		~Neuron();

		void evaluate();
};

#endif