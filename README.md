# ENSC251HW01

## 1. Specifications
### Question – Modelling RFID
Radio Frequency IDentification (RFID) chips are small tags that can be placed on a product.
They behave like wireless barcodes and can wirelessly broadcast an identification number to a
receiver. One application of RFID chips is to use them to aid in the logistics of shipping freight.
Consider a shipping container full of items. Without RFID chips, a human has to manually
inventory all of the items in the container to verify the contents. With an RFID chip attached to
the shipping container, the RFID chip can electronically broadcast to a human the exact contents
of the shipping container without human intervention.  
To model this application, write a base class called ShippingContainer that has a container
ID number as an integer. Include member functions to set and access the ID number. Add a
virtual function called getManifest that returns an empty string. The purpose of this function
is to return the contents of the shipping container.
Create a derived class called ManualShippingContainer that represents the manual
method of inventorying the container. In this method, a human simply attaches a textual
description of all contents of the container. For example, the description might be “4 crates of
apples. 10 crates of pears.” Add a new class variable of type string to store the manifest. Add
a function called setManifest that sets this string. Override the getManifest function so
that it returns this string.
Create a second derived class called RFIDShippingContainer that represents the RFID
method of inventorying the container. To simulate what the RFID chips would compute, create
an add function to simulate adding an item to the container. The class should store a list of all
added items (as a string) and their quantity using the data structures of your choice. For example,
if the add function were invoked three times as follows:
