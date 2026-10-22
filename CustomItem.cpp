#include "CustomItem.h"

#include <iomanip>
#include <sstream>

CustomItem::CustomItem(std::string itemSize)
    : IceCreamItem(itemSize) {
    if (size == "small") {
        price = 3.00;
    } else if (size == "medium") {
        price = 5.00;
    } else {
        price = 6.50;
    }
}

CustomItem::~CustomItem() {}

void CustomItem::addTopping(std::string topping) {
    ++toppings[topping];
    price += 0.40;
}

std::string CustomItem::composeItem() {
    std::ostringstream output;
    output << "Custom Size: " << size << "\n"
           << "Toppings:\n";
    for (std::map<std::string, std::size_t>::const_iterator it = toppings.begin();
         it != toppings.end(); ++it) {
        output << it->first << ": " << it->second << " oz\n";
    }
    output << "Price: $" << std::fixed << std::setprecision(2) << getPrice() << "\n";
    return output.str();
}

double CustomItem::getPrice() {
    return price;
}
