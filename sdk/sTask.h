#ifndef _STASK_H__
#define _STASK_H__
#include <list>
#include <string.h>
#include <iostream>
#include "sDefine.h"

struct Task{
	std::string taskName;	
	DWORD _dwID;	
	void handle();
};




template <class T>
class sTask{
	public:
		 bool addTask(T*);
		 bool delTask(T*);
	private:	
		std::list<T*> _taskList;

};
#endif
