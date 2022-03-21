/** @file  */

/*
Fundamentals of Computer Programming
Cycle
*/
#ifndef GRAPH_H
#define GRAPH_H

#include<map>
#include<iostream>
#include<unordered_map>

#include"structures.h"



/** Class to create the graph, add node to it and print it */
class Graph
{

public:

	/** Variable that stores the graph in a map*/
	std::unordered_map<int, Node> graph;

	/**Constructor*/
	Graph() {}

	/**Function to add for specific vertice a node that it is connected to
	@param vertic vertice from which is a connection to another node
	@param nei node that is connected to a vertic*/
	void add(int vertic, int nei);

	/**Function to print the graph (for the user to see better the graph*/
	void print();

	/**Destructor*/
	~Graph() {}

};

#endif