#include "TaskManager.h"
#include <iostream>
#include <string>

using namespace std;

// TODO: implementoi useamman prioriteetti tason luominen
// TODO: implementoi task-listan j‰rjest‰minen id ja prioriteetin mukaan. 
int main()
{
	TaskManager Manager;	// luodaan manager olio
	Task task1("Testi", "19.9.1999", 11, 2);	// lis‰t‰‰n taski
	for (int i = 0; i < 9; i++) {				// lis‰t‰‰n 10 taskia (testaus)
		string str = to_string(i);
		Task *ptr;
		ptr = new Task("Task" + str, "12.12.199" + str, i, 2);
		Manager.taskList.push_front(ptr);
		cout << flush;
	}
	
	Manager.taskList.push_front(&task1);	// lis‰t‰‰n task1 task deque-containeriin
											// ottaa osoitteen, koska tietotyyppi on task pointteri. 
	

	cout << "*** Tervetuloa task manageriin ***" << endl;
	cout << "*******************************" << endl;

	Manager.start();

	return 0;
}