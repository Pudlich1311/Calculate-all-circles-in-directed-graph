/** @file  */

/*
Fundamentals of Computer Programming
Cycle
*/
#ifndef STRUCTURES_H
#define STRUCTURES_H


#include<vector>
#include<memory>

using namespace std;

/** 3 different stages for a node*/
enum class state { unvisited, visited, analysed };

/** Struct that contains all edges for a given Vertice */
struct Node
{
   
    state my_state; ///< different states for an edge, used in the dfs function
	vector<int> neighbours;   ///< vector containing all neighbours for a given vertice
}; 



#endif
