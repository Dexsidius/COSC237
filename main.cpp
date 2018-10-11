#include "Planner.h"
using namespace std;

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
}

int main() {
	Planner planner;
	planner.display_greeting();
	cout << "Do you want to use a file or input your tasks now? (f, i): ";
	get_tasks(planner);

	return 0;
}
