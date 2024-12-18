#include "ListItem.h"
std::ostream& operator<<(std::ostream& greg, const ListItem& obj) {
	greg << obj.toString();
	return greg;
}

std::string ListItem::toString() const {
	return "boob";
}
