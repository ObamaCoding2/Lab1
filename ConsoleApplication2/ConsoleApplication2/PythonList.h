#pragma once
#include<vector>
#include "ListItem.h"
class PythonList{
private:
	std::vector<ListItem*> list;
public:
	PythonList() = default;
	PythonList(const PythonList& other);

	~PythonList();
	friend std::ostream& operator<<(std::ostream & os, const PythonList& other);
	PythonList operator=(const PythonList& other);
	PythonList operator+(const PythonList& other);

};

