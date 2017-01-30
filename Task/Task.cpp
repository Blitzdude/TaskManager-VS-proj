#include "Task.h"
#include <iostream>

// konstruktori
Task::Task(std::string _name, std::string _deadline, int _id, int _priority) 
	: name(_name), deadline(_deadline), id(_id), priority(_priority)
{
	std::cout << "Task constructor called: " << std::endl;
}

Task::~Task() {}

void Task::print(){
	// printtaa kaikki attribuutit.
	std::cout << "Työn Nimi: " << getName() << ", deadline: " << getDeadline() << ", id: "
		<< getId() << ", Tärkeys: " << getPriority() << std::endl;
}