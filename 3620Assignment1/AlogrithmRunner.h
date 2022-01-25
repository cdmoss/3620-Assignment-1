#pragma once
#include <functional>
#include <string>

using namespace std;

class AlgorithmRunner {
private:
	function<int(int)> algorithm;
	std::string label;
	double prevRunningTime;

public:
	AlgorithmRunner(function<int(int)> algorithm, std::string label);
	double getPrevRunningTime();
	double runSnippet();
	std::string getLabel();
};