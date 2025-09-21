#include "Neuron.h"

#include "../Dependencies/Prettiest Print/prettiest.h"
#include <string>
#include <cstdlib>

Neuron::Neuron(Layer* thisLayer_) {
	thisLayer = thisLayer_;
	if (thisLayer->previous == nullptr) { log("This is an input neuron."); return; }
	log("This is not an input neuron.");
	
	weights = (float*)malloc( sizeof(float) * thisLayer->previous->size );
	
	for (int i = 0; i < thisLayer->previous->size; i++) {
		weights[i] = 1.0;
	}
}

void Neuron::evaluate() {
	if (thisLayer->previous == nullptr) {
		error("Trying to evaluate input neuron???");
		return;
	}
	
	float sum = 0;
	
	for (int i = 0; i < thisLayer->previous->size; i++) {
		log("Test");
		sum += weights[i] * thisLayer->previous->neurons[i].value;
	}
	value = sum + bias;
}

Neuron::~Neuron() {
	free(weights);
}