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
using namespace std;

class Planner {
public:
	Planner();
	void display_greeting();
	int get_number_of_tasks();
	string get_random_task();
	void add_tasks(string task);
	void get_tasks_from_file(string file = "tasks.txt" );
private:
	string greetFile = "greeting.txt";
	int num_of_tasks;
	vector<string> tasks;
};


#endif 


