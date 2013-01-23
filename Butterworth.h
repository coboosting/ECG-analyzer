#pragma once
#include "ModulesMethods.h"
#include "ModulesInterfaces.h"
#include "spuc/butterworth.h"

class Butterworth
{
public:
	Butterworth();
	~Butterworth();

	SPUC::butterworth<double> spuc_butterworth(double cutoff_frequency, long order, double attenuation);
	//std::vector<std::vector<double>> filterDesign(int order, int cutoffFreq, int sampleFreq, int type);
};