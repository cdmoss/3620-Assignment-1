#include "AlgorithmTester.h"
#include <iostream>

void AlgorithmTester::addAlgorithm(AlgorithmRunner* alg) {
	for (int i = 0; i < algorithms.size(); i++)
	{
		if (alg->getLabel() == algorithms[i]->getLabel())
		{
			std::cout << "Error: duplicate label detected on algorithms";
			return;
		}
	}

	algorithms.push_back(alg);
}

void AlgorithmTester::performTests() {
	for (int i = 0; i < algorithms.size(); i++)
	{
		algorithms[i]->runSnippet();
	}
}

void AlgorithmTester::saveResultsToCsv() {

}