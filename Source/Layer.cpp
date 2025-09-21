#include "Layer.h"

#include "../Dependencies/Prettiest Print/prettiest.h"
#include <string>
#include <cstdlib>

Layer::Layer(Network* network_, int size_, int index_) {
	network = network_;
	size = size_;
	index = index_;

	if (index != 0) {
		previous = &(network->layers[index - 1]);
		if (previous == nullptr) error("Previous is nullptr???");
	}
	
	neurons = (Neuron*)malloc( sizeof(Neuron) * size );
	for (int i = 0; i < size; i++) {
		neurons[i] = Neuron(this);
	}

}

Layer::~Layer() {
	free((void*)neurons);
}

void Layer::evaluate() {
	for (int i = 0; i < size; i++) {
		log("Evaluating neuron " + std::to_string(i+1));
		neurons[i].evaluate();
	}
}