/** @file  */

/*
Fundamentals of Computer Programming
Cycle
*/
#ifndef CYCL_H
#define CYCL_H
#include <algorithm>
#include<fstream>
#include<map>
#include<vector>
#include<map>
#include <stack>
#include<unordered_map>
#include<iostream>

#include "structures.h"
#include "Graph.h"


/**Class to detect Cycles in the given graph ans also save it in a file, it inherits from Graph*/
class Cycl : public Graph
{
public:

	

	/** Variable that stores founded cycles*/
	vector<vector<int>> allCycles;


	/*Constructor, inheritance of the map from Graph class*/
	Cycl()
	{}

	/** Main function of finding a cycle in the graph, it calss other subfunctions to detect them */
	void Cycle();


	/** Depth First Search function for given graph */
	void dfs(stack<int> x);


	/**Function to save all cycles, or none to the output file
	@param output name of output file
	@return 1 if could not open file
	@return 0 if everything ended correctly*/
	int out(std::string& output);

	/**Function for printing founded cycle and saving it in a vector of vectors*/
	void printcycle(stack<int> x, int v);

	/*Destructor*/
	~Cycl() {}

};

#endif