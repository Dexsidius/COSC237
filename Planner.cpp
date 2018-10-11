#include "Planner.h"

Planner::Planner()
{
	num_of_tasks = 0;
	tasks = {};
}

//Reads the greeting.txt file to display greeting
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
//Returns the number of tasks in vector
int Planner::get_number_of_tasks()
{
	return num_of_tasks;
}
//Decreases the number of tasks by 1
void Planner::decrease_num_of_tasks()
{
	num_of_tasks -= 1;
}
//Returns a random task from the vector and decrease the number of tasks
string Planner::get_random_task()
{
<<<<<<< HEAD
	if (tasks.size() == 0) {
		return "There are no more tasks!";
	}
	srand(time(nullptr));
	int i = int(rand() % get_number_of_tasks());
	string temp = tasks[i];
	tasks[i] = tasks[int(tasks.size() - 1)];
	tasks[int(tasks.size() - 1)] = temp;
	string r = tasks.back();
	tasks.pop_back();
	num_of_tasks -= 1;
=======
	int i = int(rand() % (get_number_of_tasks()));
	string r = tasks[i];
	tasks.erase(tasks.begin() + i);
	decrease_num_of_tasks();
>>>>>>> 5b499c385ce4e42a5b4feb1769495ac80f16301a
	return r;
}
//Adds User input task into task vector
void Planner::add_tasks(string t)
{
	tasks.push_back(t);
	num_of_tasks += 1;
}
//*Future Implementation* File input Task
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
