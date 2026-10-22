#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"

#include <map>
#include <string>

class CustomItem : public IceCreamItem {
public:
    explicit CustomItem(std::string size);
    virtual ~CustomItem();

    void addTopping(std::string topping);
    std::string composeItem() override;
    double getPrice() override;

private:
    std::map<std::string, std::size_t> toppings;
};

#endif
