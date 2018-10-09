#ifndef PLANNER_H
#define PLANNER_H

#include <iostream>
#include <string>
#include <random>
#include <cmath>

using namespace std;

class Planner {
public:
	void shuffle_tasks(string[], int);

private:
	int num_of_tasks;
	string tasks[num_of_tasks];
};


#endif 


