#include "Network.h"

#include "../Dependencies/Prettiest Print/prettiest.h"
#include <string>
#include <cstdlib>

Network::Network(int size_, int* layerSizes) {
	size = size_;
	layers = (Layer*)malloc( sizeof(Layer) * size );
	
	for (int i = 0; i < size; i++) {
		layers[i] = Layer( this, layerSizes[i], i );
	}
}

Network::~Network() {
	free( (void*)layers );
}

void Network::evaluate() {
	for (int i = 0; i < size; i++) {
		log("Evaluating layer " + std::to_string(i+1));
		layers[i].evaluate();
	}
}