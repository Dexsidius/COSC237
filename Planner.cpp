#include "Planner.h"

Planner::Planner()
{
	num_of_tasks = 0;
	tasks = {};
}

void Planner::display_greeting()
{
	ifstream FILE(greetFile.c_str());
	string line;
	if (FILE.is_open()){
		while (getline(FILE, line)){
			cout << line << endl;
		}
		FILE.close();
	}
}

int Planner::get_number_of_tasks()
{
	return num_of_tasks;
}

string Planner::get_random_task()
{
	srand(time(nullptr));
	int i = int(rand() % (get_number_of_tasks() - 1));
	string r = tasks[i];
	tasks.erase(tasks.begin() + i);
	return r;
}

void Planner::add_tasks(string t)
{
	tasks.push_back(t);
	num_of_tasks += 1;
}

void Planner::get_tasks_from_file(string file)
{
	ifstream FILE(file.c_str());
	string line;
	if (FILE.is_open()) {
		while (getline(FILE,line)) {
			add_tasks(line);
		}
		FILE.close();
	}
}
