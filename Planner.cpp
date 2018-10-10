#include "Planner.h"

Planner::Planner()
{
	num_of_tasks = 0;
	tasks = {};
}

string Planner::display_greeting()
{
	return "";
}

int Planner::get_number_of_tasks()
{
	return num_of_tasks;
}

string Planner::get_random_task()
{
	srand(1000);
	return tasks[int(rand() % get_number_of_tasks())];
}

void Planner::add_tasks(string t)
{
	tasks.push_back(t);
	num_of_tasks += 1;
}
