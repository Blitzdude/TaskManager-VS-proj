#include "TaskManager.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	TaskManager Manager;
	Task task1("Testi", "19.9.1999", 11, 2);
	
	Manager.taskList.push_front(&task1);
	

	cout << "*** Tervetuloa task manageriin ***" << endl;
	cout << "*******************************" << endl;

	Manager.start();

	return 0;
}