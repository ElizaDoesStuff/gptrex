#include "./Layer.h"

#include <cstdlib>

Layer::Layer(int neuronCount) {
	size = neuronCount;
	neurons = (Neuron*)malloc( sizeof(Neuron) * neuronCount );

	for (int i = 0; i < neuronCount; i++) {
		neurons[i] = Neuron();
	}
}

Layer::~Layer() {
	free((void*)neurons);
}