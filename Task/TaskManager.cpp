#include "TaskManager.h"

using namespace std;
TaskManager::TaskManager() {
	cout << "TaskManager constructor called" << endl;
}

TaskManager::~TaskManager() {}

void TaskManager::start() {
	static char input;
	bool isDone = false;
	while (isDone == false) {

		cout << "Mit‰ haluat tehd‰? (T: tulosta kaikki, L: lis‰‰ teht‰v‰, Q: Lopeta) > ";
		cin >> input;
		if (input == 't' || input == 'T') {
			TulostaTiedot();
		}
		if (input == 'l' || input == 'L') {
			KysyTiedot();
		}
		if (input == 'q' || input == 'Q') {
			cout << "N‰kemiin" << endl;
			isDone = true;
		}
	}
}

void TaskManager::TulostaTiedot() {

	// esitell‰‰n deque iteraatori "deque_it" ja laitetaan se tasklist listan alkuun
	deque<Task*>::iterator deque_it = taskList.begin();

	while (deque_it != taskList.end()) {
		(*deque_it++)->print();	//Kutsutaan iteraattorin osoitaaman taskin print metodi. 
	}
}

void TaskManager::KysyTiedot() {
	// kysy vuorotellen tyˆn nimi, deadline, id ja t‰rkeys.
	string temp_name, temp_dl;
	int temp_id, temp_prior;

	cout << "Anna tyˆn nimi: " << endl;
	cin >> temp_name;
	cout << "Anna deadline: " << endl;
	cin >> temp_dl;
	cout << "Anna id: " << endl;
	cin >> temp_id;
	cout << "Anna t‰rkeys: " << endl;
	cin >> temp_prior;

	// tehd‰‰n uusi Task objekti ja lis‰t‰‰n se tasklist deque- listaan.
	Task *ptr = new Task(temp_name, temp_dl, temp_id, temp_prior);

	deque<Task*>::iterator deque_it = taskList.begin();

	while (deque_it != taskList.end()) {
		// implementoi useamman prioritetti tason lis‰‰minen, 
		// iteraattorilla k‰yt‰v‰ l‰pi mihin kohtaan uusi taski laitetaan
		// esim prioriteetti 3 menee prioriteetti 2 j‰lkeen. 
	}
	if (temp_prior == 1) {			// jos prioriteetti on korkeampi kuin 2, lis‰t‰‰n listan eteen. 
		taskList.push_front(ptr);
		cout << "Lis‰tty eteen" << endl;
	}
	else if (temp_prior == 2) {		// muuten listan taakse.
		taskList.push_back(ptr);
		cout << "Lis‰tty taakse." << endl;
	}
	// miksi ei delete?
}

void TaskManager::poistaTiedot(int poistId) {
	deque<Task*>::iterator deque_it = taskList.begin();

	while (deque_it != taskList.end()) {
		if ((*deque_it)->getId() == poistId) {
			taskList.erase(deque_it);
		}
		deque_it++;
	}
}

