/** @file  */

/*
Fundamentals of Computer Programming
Cycle
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#include<iostream>
#include<sstream>
#include<string>
#include<tuple>


#include "Cycl.h"

/**Main function that saves from input file all import data and after that, calls functions to detect cycles
@param input input file from which we take the graph
@param output output file
@return 1 if input file could not be oppened
@return 0 if everything has ended correctly*/
int create(std::string& input, std::string& output);

/**Function or to be more precisfoul a class template that takes the input switches
@param arg input from console
@return input and output files as strings */
tuple<string, string> files(char **arg);


/**Function to insert the numbers from input file to the graph represantation as a map
@param input input file
@param Graph the graph as a map
@return 1 if could not open file
@return 0 if everything went correctly*/
int insert(std::string& input, Graph& grap);
#endif
