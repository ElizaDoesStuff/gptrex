#include <string>

#include "../Dependencies/Prettiest Print/prettiest.h"

#include "Network.h"
#include "Layer.h"
#include "Neuron.h"

int main() {
	int layerSizes[] = { 16, 16, 16, 16 };
	Network network(4, layerSizes);

	log( "Network size: " + std::to_string(network.size) );
	for (int i = 0; i < network.size; i++) {
		log( "Layer " + std::to_string(i + 1) + " size: " + std::to_string(network.layers[i].size) );
	}
}