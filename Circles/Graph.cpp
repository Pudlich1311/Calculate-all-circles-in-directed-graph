/** @file  */

/*
Fundamentals of Computer Programming
Cycle
*/
#include "Graph.h"

void Graph::add(int vertex, int nei)
{
	graph[vertex].neighbours.push_back(nei);

}

void Graph::print()
{
	for (auto it = graph.begin(); it != graph.end(); ++it)
	{
		std::cout << it->first << "->";
		for (auto it2 = it->second.neighbours.begin(); it2 != it->second.neighbours.end(); ++it2)
		{
			std::cout << *it2 << " ";
		}
		std::cout << endl;
	}
}
