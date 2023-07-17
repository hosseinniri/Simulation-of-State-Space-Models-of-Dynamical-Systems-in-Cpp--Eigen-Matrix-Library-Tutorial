#include <iostream>
#include<Eigen/Dense>
#include<tuple>
#include <fstream>
#include <chrono> //used to time the code

#include "SimulateSystem.h"

using namespace Eigen;
using namespace std;

int main(int argc, char const *argv[])
{
    SimulateSystem Simulation3;
	Simulation3.openFromFile("AFile.csv ", "BFile.csv", "CFile.csv", "x0File.csv", "inputFile.csv");
    
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	Simulation3.runSimulation();
	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[micro seconds]" << std::endl;
	Simulation3.saveData("AFileOutput.csv", "BFileOutput.csv", "CFileOutput.csv", "x0FileOutput.csv", "inputSequenceFileOutput.csv", "simulatedStateSequenceFileOutput.csv", "simulatedOutputSequenceFileOutput.csv");
	
    
    return 0;
}
