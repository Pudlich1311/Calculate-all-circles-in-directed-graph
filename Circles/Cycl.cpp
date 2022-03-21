/** @file  */

/*
Fundamentals of Computer Programming
Cycle
*/
#include <algorithm>

#include "Cycl.h"



void Cycl::Cycle()
{
	int n = graph.size();
	for (int v = 0; v < n; v++)
	{
		
		if (graph[v].my_state == state::unvisited)
		{
			
			stack<int> x;
			x.push(v);
			graph[v].my_state = state::visited;
			dfs(x);
			
		}
	}

}


void Cycl::dfs(stack<int> x)
{
	int y = x.top();
	
	for (auto v = graph[y].neighbours.begin(); v != graph[y].neighbours.end(); ++v)
	{
		if(graph[*v].my_state == state::visited)
		{
			printcycle(x, *v);
		}
		else if (graph[*v].my_state == state::unvisited)
		{
			x.push(*v);
			graph[*v].my_state = state::visited;
			dfs(x);
		} 
		
	}
	graph[y].my_state = state::analysed;
	x.pop();

}

void Cycl::printcycle(stack<int> x, int v)
{
	stack<int> y;
	vector<int> cycl;
	y.push(x.top());
	x.pop();
	while (y.top() != v)
	{
		y.push(x.top());
		x.pop();
	}

	int start = y.top();

	while (!y.empty())
	{
		std::cout << y.top() <<" ";
		cycl.push_back(y.top());
		x.push(y.top());
		y.pop();
	}

	std::cout << start << endl;
	cycl.push_back(start);

	allCycles.push_back(cycl);
}



int Cycl::out(std::string& output)
{
	
	std::fstream File;
	File.open(output, ios_base::out | ios_base::in);
	if (File.is_open())
	{
		if (allCycles.size() == 0)
		{
			File << "Acyclic";
			File.close();
		}

		for (int i = 0; i < allCycles.size(); i++) {
			for (int j = 0; j < allCycles[i].size(); j++)
				File << allCycles [i] [j] << " ";

			File << '\n';
		}
	}
	else
	{
		return 1;
	}
	File.close();
	return 0;
}
