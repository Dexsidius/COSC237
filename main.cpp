#include "Planner.h"
#include <stdlib.h>
using namespace std;

//Displays tasks
void display_tasks(Planner planner){

	while(planner.get_number_of_tasks() != 0){
		cout << "Press Any Key For Task..." << endl;
		cin.ignore();
		cout << planner.get_random_task() << endl;
	}
}

//Gets User's Tasks and inputs them into class's 'task' attribute
void get_tasks(Planner planner) {
	string answer;
	int number_of_tasks = 0;
	cin >> answer;
	cout << endl;
	if (answer == "f") {
		cout << "Enter the file name (press enter or type 'default' for the default file): " ;
		cin >> answer;
		if ((answer == "") || (answer == "default")) planner.get_tasks_from_file();
		else planner.get_tasks_from_file(answer);
	}
	else if (answer == "i") {
		cout << "How many tasks do you want to add?: ";
		cin >> number_of_tasks;
		string task;
		//For loop collecting user inputs
		for (int i = 0; i < number_of_tasks; i++) {
			cout << endl;
			cout << "Task #" << i + 1 << "\n:: ";
			cin >> task;
			cout << endl;
			planner.add_tasks(task);
		}
	}
	else {
		cout << "Invalid answer, answer with a 'f' for file, or 'i' for input: ";
		get_tasks(planner);
	}
	display_tasks(planner);
}


int main() {
	system("clear");
	Planner planner;
	planner.display_greeting();
	cout << "Do You want to use a file or input your tasks now? (f, i): ";
	get_tasks(planner);
	display_tasks(planner);
	return 0;
}
