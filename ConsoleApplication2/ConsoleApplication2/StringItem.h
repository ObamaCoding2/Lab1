#pragma once
#include "ListItem.h"
class StringItem : public ListItem{
private:
	std::string value;
public:
	explicit StringItem() = default;
	//std::string toString() const override;
};

