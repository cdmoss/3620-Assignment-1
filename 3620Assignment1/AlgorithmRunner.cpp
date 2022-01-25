#include "AlogrithmRunner.h"
#include <ctime>
#include <functional>

AlgorithmRunner::AlgorithmRunner(function<int(int)> algorithm, std::string label) : algorithm(algorithm), label(label) {}

double AlgorithmRunner::getPrevRunningTime() {
	return 0.0;
}

double AlgorithmRunner::runSnippet()
{
	// start the clock, run the algorithm, then end the click
	double runningTime = clock();
	this->algorithm(10);
	this->prevRunningTime = clock() - runningTime;

	return this->prevRunningTime;
}

std::string AlgorithmRunner::getLabel()
{
	return std::string();
}
