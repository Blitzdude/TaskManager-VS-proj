#pragma once
#include "Task.h"
#include <deque>
#include <iostream>
#include <string>


class TaskManager
{
public:
	TaskManager();
	~TaskManager();

	void start();

private:
	void TulostaTiedot();
	void KysyTiedot();
	void poistaTiedot(int poistId);
public:
	std::deque<Task*> taskList;
};

