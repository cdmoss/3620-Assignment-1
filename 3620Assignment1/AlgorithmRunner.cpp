#include "AlogrithmRunner.h"
#include <ctime>
#include <functional>

AlgorithmRunner::AlgorithmRunner(function<int(int)> algorithm, std::string label) : algorithm(algorithm), label(label) {}

double AlgorithmRunner::getPrevRunningTime() {
	return prevRunningTime;
}

double AlgorithmRunner::getPrevSize() {
	return size;
}

double AlgorithmRunner::runSnippet(int n)
{
	// start the clock, run the algorithm, then end the click
	double runningTime = clock();
	this->algorithm(n);
	this->prevRunningTime = clock() - runningTime;

	return this->prevRunningTime;
}

std::string AlgorithmRunner::getLabel()
{
	return std::string();
}
