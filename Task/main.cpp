#include "TaskManager.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	TaskManager Manager;
	Task task1("Testi", "19.9.1999", 11, 2);
	for (int i = 0; i < 9; i++) {
		string str = to_string(i);
		Task *ptr;
		ptr = new Task("Task" + str, "12.12.199" + str, i, 2);
		Manager.taskList.push_front(ptr);
		cout << flush;
	}
	
	Manager.taskList.push_front(&task1);
	

	cout << "*** Tervetuloa task manageriin ***" << endl;
	cout << "*******************************" << endl;

	Manager.start();

	return 0;
}