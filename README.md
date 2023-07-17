# Simulation of State Space Models of Dynamical Systems in C++ Eigen Matrix Library Tutorial

This project is used to demonstrate how to simulate a state-space model of a dynamical system in C++ using the Eigen matrix library. 
We have used an object oriented design to simulate the system. The developed class can be integrated in other projects. The post explaining these codes is provided here:

https://aleksandarhaber.com/simulating-a-state-space-model-in-eigen-c-matrix-library-object-oriented-program/

The YouTube video explaining this project is provided here 

https://www.youtube.com/watch?v=Ss7vg5r05rI

The member functions of the developed class "SimulateSystem" can load and store CSV data of simulated system such that this data can be used to create an interface with other programming languages such as MATLAB or Python. 

## Description of files:
- SimulateSystem.h - the class header file 
- SimulateSystem.cpp -the class implementation file 
- ConsoleApplication11.cpp - the driver code
- main.m - is the MATLAB file used to generate the matrices that are used by the driver code
- comparions.m  - is the MATLAB file used to compare the C++ simulation results with the MATLAB simulation
- makefile used to compile c++ project code with make command


## Steps of setup this project:
- 1 - change path of eigen libe in flags of compiler in makefile
- 2 - run make command and biuld project
- 3 - generate requaierd data and matrices using run matlab script generate_matrices.m
- 4 - run executable file simulator.exe to run simulation
- 5 - run matlab script comparions.m  to compare the C++ simulation results with the MATLAB simulation


##  Aknowledgment

* thanks to @AleksandarHaber for great his grat repository
https://github.com/AleksandarHaber/Simulation-of-State-Space-Models-of-Dynamical-Systems-in-Cpp--Eigen-Matrix-Library-Tutorial



