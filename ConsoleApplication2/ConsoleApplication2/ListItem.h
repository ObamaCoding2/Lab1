#pragma once
#include<string>
#include<iostream>

class ListItem
{
public:
	//virtual std::string toString() const = 0;
	std::string toString() const;
	//friend std::ostream& operator<<(std::ostream& greg, const ListItem& obj);
};

std::ostream& operator<<(std::ostream& greg, const ListItem& obj);
