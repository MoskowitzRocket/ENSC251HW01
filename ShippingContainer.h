//
// Created by kaleb on 2024-10-03.
//
#pragma once
#include <string>
#ifndef SHIPPINGCONTAINER_H
#define SHIPPINGCONTAINER_H

using namespace std;


class ShippingContainer{
public:
  ShippingContainer();


  int getContainerIDNumber() const;

  void setContainerIDNumber(int newContainerIDNumber);

  virtual string getManifest() = 0;

private:
  int containerIDNumber{};

};

class ManualShippingContainer : public ShippingContainer {
public:
  ManualShippingContainer();
string setManifest(string newManifest);
private:
string manifest;

};


#endif //SHIPPINGCONTAINER_H
