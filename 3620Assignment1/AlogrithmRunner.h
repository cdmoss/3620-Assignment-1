#pragma once
#include <functional>
#include <string>

using namespace std;

class AlgorithmRunner {
private:
	function<int(int)> algorithm;
	std::string label;
	int size;
	double prevRunningTime;

public:
	AlgorithmRunner(function<int(int)> algorithm, std::string label);
	double getPrevRunningTime();
	double getPrevSize();
	double runSnippet(int n);
	std::string getLabel();
};