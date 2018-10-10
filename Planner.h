#ifndef PLANNER_H
#define PLANNER_H

#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include <vector>
#include <cmath>

using namespace std;

class Planner {
public:
	Planner();
	int get_number_of_tasks();
	string get_task(string, int);
	void add_tasks(string task);
private:
	int num_of_tasks;
	vector<string> tasks;
};


#endif 


