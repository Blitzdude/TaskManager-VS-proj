#pragma once
#include <string>

class Task
{
public:
	// konstruktori / destruktori.
	Task(std::string _name, std::string _deadline, int _id, int _priority);
	~Task();

	void print();

	std::string getName() {
		return name; 
	}
	std::string getDeadline() {
		return deadline; 
	}
	int getId() {
		return id;
	}
	int getPriority() {
		return priority;
	}

private:
	std::string name;
	std::string deadline;
	int id;
	int priority;
};

