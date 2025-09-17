#include "./Network.h"
#include "./Layer.h"

#include <cstdlib>

Network::Network(int layerCount, int* layerSizes) {
	size = layerCount;
	layers = (Layer*)malloc( sizeof(Layer) * layerCount );
	
	for (int i = 0; i < layerCount; i++) {
		layers[i] = Layer( layerSizes[i] );
	}
}

Network::~Network() {
	free( (void*)layers );
}