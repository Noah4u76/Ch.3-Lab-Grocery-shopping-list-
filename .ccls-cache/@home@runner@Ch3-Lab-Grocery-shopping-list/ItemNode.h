//
// File: ItemNode.h
// Description: Grocery shopping list (linked list: inserting at the end of a list)
// Created: Sun. March 5, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

/* Given main(), define an InsertAtEnd() member function in the ItemNode class that adds an element to the end of a linked list. DO NOT print the dummy head node.

Ex. if the input is:

4
Kale 
Lettuce 
Carrots 
Peanuts 
where 4 is the number of items to be inserted; Kale, Lettuce, Carrots, Peanuts are the names of the items to be added at the end of the list.

The output is:

Kale 
Lettuce 
Carrots 
Peanuts  */

#include <iostream>
#include <string>
using namespace std;

class ItemNode {
private:
	string item;
	ItemNode* nextNodeRef;

public:
	// Constructor
	ItemNode() {
		item = "";
		nextNodeRef = NULL;
	}

	// Constructor                                                                                     
	ItemNode(string itemInit) {
		this->item = itemInit;
		this->nextNodeRef = NULL;
	}

	// Constructor        
   ItemNode(string itemInit, ItemNode *nextLoc) {
      this->item = itemInit;
      this->nextNodeRef = nextLoc;
   }

	// Insert node after this node.     
   void InsertAfter(ItemNode &nodeLoc) {
      ItemNode* tmpNext;
      
      tmpNext = this->nextNodeRef;
      this->nextNodeRef = &nodeLoc;
      nodeLoc.nextNodeRef = tmpNext;
   }
	
	// TODO: Define InsertAtEnd() function that inserts a node
	//       to the end of the linked list
	void InsertAtEnd(ItemNode* currNode) {
    ItemNode * tmpNode = nullptr;
    tmpNode = this->nextNodeRef;

    while (tmpNode != nullptr) {
      tmpNode = tmpNode->GetNext();
    }
    this->nextNodeRef = currNode;
    currNode->nextNodeRef = tmpNode;
  }

	// Get location pointed by nextNodeRef                                                             
	ItemNode* GetNext() {
		return this->nextNodeRef;
	}

	void PrintNodeData() {
		cout << this->item << endl;
	}
};