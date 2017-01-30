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
public:
	std::deque<Task*> taskList;
};

