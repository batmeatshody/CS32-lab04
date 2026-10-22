#include "PreMadeItem.h"

#include <iomanip>
#include <sstream>

PreMadeItem::PreMadeItem(std::string itemName, std::string itemSize)
    : IceCreamItem(itemSize), name(itemName) {
    if (size == "small") {
        price = 4.00;
    } else if (size == "medium") {
        price = 6.00;
    } else {
        price = 7.50;
    }
}

PreMadeItem::~PreMadeItem() {}

std::string PreMadeItem::composeItem() {
    std::ostringstream output;
    output << "Pre-made Size: " << size << "\n"
           << "Pre-made Item: " << name << "\n"
           << "Price: $" << std::fixed << std::setprecision(2) << getPrice() << "\n";
    return output.str();
}

double PreMadeItem::getPrice() {
    return price;
}
