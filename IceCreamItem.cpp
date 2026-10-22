#include "IceCreamItem.h"

#include <stdexcept>

IceCreamItem::IceCreamItem(std::string itemSize)
    : price(0.0), size(itemSize) {
    if (size != "small" && size != "medium" && size != "large") {
        throw std::invalid_argument("Invalid ice cream size");
    }
}
