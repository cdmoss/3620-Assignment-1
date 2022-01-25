#include "AlgorithmTester.h"
#include "utils.h"
#include <iostream>
#include <fstream>

void AlgorithmTester::addAlgorithm(AlgorithmRunner* alg) {
	for (int i = 0; i < algorithms.size(); i++)
	{
		if (alg->getLabel() == algorithms[i]->getLabel())
		{
			std::cout << "Error: duplicate algorithm label detected";
			return;
		}
	}

	algorithms.push_back(alg);
}

void AlgorithmTester::performTests(int n) {
	for (int i = 0; i < algorithms.size(); i++)
	{
		algorithms[i]->runSnippet(n);
	}
}

void AlgorithmTester::saveResultsToCsv() {
	std::ofstream resultsCsv;
	resultsCsv.open("results.csv");
	for (int i = 0; i < algorithms.size(); i++)
	{
		resultsCsv << 
			algorithms[i]->getLabel() << "," <<
			algorithms[i]->getPrevSize() << "," << 
			algorithms[i]->getPrevRunningTime() << std::endl;
	}
	resultsCsv.close();
}

