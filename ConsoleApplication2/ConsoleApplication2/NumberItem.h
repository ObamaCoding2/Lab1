#pragma once
#include "ListItem.h"
class NumberItem : public ListItem {
private:
	double number;
public:
	explicit NumberItem() = default;
	//std::string toString() const override;
};

