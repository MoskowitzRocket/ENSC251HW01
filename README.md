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
``
rfidContainer.add("crate of pears"); // Add one crate of pears  
``  
``
rfidContainer.add("crate of apples"); // Add one crate of apples
``  
``
rfidContainer.add("crate of pears"); // Add one crate of pears  
``    
At this point, the data structure should be storing a list of two items: crate of apples and crate of
pears. The quantity of apples is 1 and the quantity of pears is 2. Override the getManifest
function so that it returns a string of all items that is built by traversing the list of items. In the
example above, the return string would be “2 crate of pears. 1 crate of
apples.“  
Finally, write a main program that creates an array of pointers to six ShippingContainer
objects. Instantiate the array with three Manual-ShippingContainer objects and three
RFIDShippingContainer objects. For the ManualShippingContainer objects, you
will have to invoke setManifest to set the contents. For the RFIDShippingContainer
objects, you will have to invoke add to set the contents (although, if this were real, the contents
of the container would “add” themselves via the RFID chips instead of requiring a human to type
them in).  
Finally, write a loop that iterates through all ShippingContainer pointers and
outputs each object’s manifest along with the shipping container ID. This is the output that the
receiver of the shipping containers would like to see.
