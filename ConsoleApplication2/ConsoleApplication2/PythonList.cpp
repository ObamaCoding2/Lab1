#include "PythonList.h"

PythonList::PythonList(const PythonList& other) {
	for (const auto& item : other.list) {
		list.push_back(item->copy());
	}
}

PythonList::~PythonList() {
	for (const auto& item : list) {
		delete item;
	}
	list.clear();
}

std::ostream& operator<<(std::ostream& os, const PythonList& other) {
	for (const auto& item : other.list) {
		os << item->toString();
	}
	return os;

}
PythonList PythonList::operator=(const PythonList& other) {
	if (this == &other) {
		return *this;
	}
	for (const auto& items : list) {
		delete items;
	}
	list.clear();
	for (const auto& items : other.list) {
		list.push_back(items->copy());
	}

	return *this;
}

PythonList PythonList::operator+(const PythonList& other)
{
	PythonList l1{};
	for (const auto& items : list) {
		l1.list.push_back(items->copy());
	}
	for (const auto& items : other.list) {
		l1.list.push_back(items->copy());
	}
	return l1;
}

PythonList PythonList::operator+(ListItem* item) {
	list.push_back(item->copy());
}
