#pragma once
#include <vector>
#include "AlogrithmRunner.h"

class AlgorithmTester {
private: 
	vector<AlgorithmRunner*> algorithms;
public:
	AlgorithmTester() {};
	void performTests();
	void addAlgorithm(AlgorithmRunner* alg);
	void saveResultsToCsv();
};