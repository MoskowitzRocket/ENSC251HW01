//
// Created by kaleb on 2024-10-03.
//

#include "ShippingContainer.h"

ShippingContainer::ShippingContainer() = default;

int ShippingContainer::getContainerIDNumber() const{
    return containerIDNumber;
}
void ShippingContainer::setContainerIDNumber(int newContainerIDNumber) {
    this->containerIDNumber = newContainerIDNumber;
}

/*
string ShippingContainer::getManifest() {
    return "";
}
*/


