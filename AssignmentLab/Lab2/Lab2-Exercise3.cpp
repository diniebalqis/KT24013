#include <iostream>

using namespace std;

class POSNode{
	string item;
	float value;
	POSNode *next;

	public:
	POSNode(){};
	
void setItem (string aItem){
	item = aItem;
};

void setValue (float aValue){
	value = aValue;
};

void setNext (POSNode *aNext){ 
	next = aNext; 
};

string getItem (){
	return item; 
};

float getValue (){ 
	return value; 
};

POSNode *Next (){ 
	return next; 
};
};

class POSList{
	POSNode *head;

	public:
	POSList (){ 
		head = NULL; 
	};

void addNode(string item, float value);
void print();

};

void POSList::addNode(string item, float value){
	
	// Create a new node
	POSNode *newNode = new POSNode();
	newNode->setItem(item);
	newNode->setValue(value);
	newNode->setNext(NULL);
	
	// Create a temp pointer
	POSNode *tmp = head;
	if (tmp != NULL)
	{
	// Nodes already presentin the list
	while (tmp->Next() != NULL)
	{
	tmp = tmp->Next();
	}
	// Pointthe last node to the new node
	tmp->setNext(newNode);
	}
	else
	{
	// First node in the list
	head = newNode;
	}
}

void POSList::print(){
	POSNode *p = head;
	int i = 10;
	float sum = 0.0;
	cout << "==============================================" << endl;
	cout << "BC\tITEMS\t\t\t\tPRICE" << endl;
	cout << "==============================================" << endl;
	/*printthe each elementin the list.*/
	while (p->Next() != NULL)
	{
	cout << i << "\t" << p->getItem() << "\t" << p->getValue() << endl;
	i++;
	sum = sum + p->getValue();
	p = p->Next();
	}
	sum = sum + p->getValue();
	cout << i << "\t" << p->getItem() << "\t" << p->getValue() << endl;
	cout << "===============================================" << endl;
	cout << "Total (GST Incl.)\t\t\t" << sum << endl;
	cout << "===============================================" << endl;
}

int main(){
	
	cout << " Nur Dinie Balqis Binti Abdul Yazid\n BI19110029" << endl;
	cout << " Lab Assignment 2 - Exercise 3\n" << endl;
	
	POSList l;
	l.addNode("Pagoda Gnut 110g             ", 3.49);
	l.addNode("Hup Seng Cream Cracker       ", 4.19);
	l.addNode("Yit Poh 2n1 Kopi-o           ", 7.28);
	l.addNode("Zoelife SN & Seed            ", 5.24);
	l.addNode("Gatsby S/FO Wet&Hard     ", 16.99);
	l.addNode("GB W/G U/Hold 150g           ", 6.49);
	l.print();
}
