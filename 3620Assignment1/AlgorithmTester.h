#pragma once
#include <vector>
#include "AlogrithmRunner.h"

class AlgorithmTester {
private: 
	vector<AlgorithmRunner*> algorithms;
public:
	AlgorithmTester() {};
	void performTests(int n);
	void addAlgorithm(AlgorithmRunner* alg);
	void saveResultsToCsv();
};