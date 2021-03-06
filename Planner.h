#ifndef PLANNER_H
#define PLANNER_H

#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <fstream>
#include <stdlib.h>

using namespace std;

class Planner {
public:
	Planner();
	void display_greeting();
	int get_number_of_tasks();
	string get_random_task();
	void add_tasks(string task);
	void get_tasks_from_file(string file = "tasks.txt" );
	void remove_task_from_index(int index);
	void decrease_num_of_tasks();
private:
	string greetFile = "greeting.txt";
	int num_of_tasks;
	vector<string> tasks;
};


#endif 


