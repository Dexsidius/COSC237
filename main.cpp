#include "Planner.h"
using namespace std;

void get_tasks(Planner planner) {
	string answer;
	int number_of_tasks = 0;
	cin >> answer;
	cout << endl;
	if (answer == "f") {
		cout << ""
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
	
	cout << "Welcome to the Magic 8-Ball Planner! \n \n Do You want to use a file or input your tasks now? (f, i): ";
	get_tasks(planner);

	return 0;
}
