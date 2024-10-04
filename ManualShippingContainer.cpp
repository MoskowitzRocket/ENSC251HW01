#include "ShippingContainer.h"
//
// Created by kaleb on 2024-10-03.
//
ManualShippingContainer::ManualShippingContainer() = default;

string ManualShippingContainer::setManifest(string newManifest){
    manifest = newManifest;
}

string ManualShippingContainer::getManifest() {
    return manifest;
}



