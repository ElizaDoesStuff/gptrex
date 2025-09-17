#ifndef LAYER_H
#define LAYER_H

#include "./Neuron.h"

class Layer {
	public:
		int size;
		Neuron* neurons;
		
		Layer(int);
		~Layer();
};

#endif