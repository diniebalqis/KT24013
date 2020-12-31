#include <iostream>

using namespace std;

class Queu{
	private:
		
		//constructor
		int  queueArr[5];
		int  rear;
		int front;
	
	public:
		
		//default constructor
		Queu(){
			rear = -1;
			front = -1;
			for(int i=0; i<5; i++){
				queueArr[i]=0;
			}
		}
		
		bool isEmpty(){
			if(front==-1 && rear==-1){
				return true;
			}
			else{
				return false;	
			}
		}
		
		bool isFull(){
			if(rear==4){ //rear==4
				return true;
			}
			else{
				return false;
			}	
		}
		
		void insert_value(int val){
			if(isFull()){
				cout << "\n Queu is full " << endl;
				return;
			}
			else if(isEmpty()){
				rear=0;
				front=0;
				queueArr[rear]=val;
			}
			else{
				rear++;
				queueArr[rear]=val;
			}
		}
		
		int delete_value(){
			int q;
			if(isEmpty()){
				cout << "\n Queu is empty " << endl;
				return 0; //will return to value(0) because type:int
			}
			//if only 1 value in queu & to be deleted
			else if (front==rear){
				q=queueArr[front]; //temporary
				queueArr[front]=0;
				rear=-1;
				front=-1;
				return q; //will be deleted
			}
			//if have more than 1 value in queu & to be deleted
			else{
				q=queueArr[front]; //temporary
				queueArr[front]=0;
				front++;
				return q;				
			}
		}
		
		void display_delete(){
			for (int i=0; i<5; i++){
				cout << queueArr[i] << " ";
			}
			cout << endl;	
		}

		void display(){
			cout << " All values in the Queu are: ";
			for (int i=0; i<5; i++){
				cout << queueArr[i] << " ";
			}	
		}		
};


int main(){
	
	cout << "Nur Dinie Balqis Binti Abdul Yazid\nBI19110029" << endl;
	cout << "Lab Assignment 4 - Part1 Exercise 2\n" << endl;
	
		cout << " ====================== " << endl;
		cout << " ||NO.||   OPERATION || " << endl;
		cout << " ====================== " << endl;
		cout << " || 1 ||   Insert    || " << endl;
		cout << " || 2 ||   Delete    || " << endl;
		cout << " || 3 ||   Display   || " << endl;
		cout << " ====================== " << endl;
	
	Queu x;
	int opt, value;
	
	do{
		cout << " What operation do you want to perform? Select option number (Enter -1 to exit): " ;
		cin >> opt;
		
		switch(opt){
			case 0:
				break;
			case 1:
				cout << " Insert Value: ";
				cin >> value;
				x.insert_value(value);
				break;
			case 2:
				cout << " After Delete Value: ";
				x.delete_value();
				x.display_delete();
				break;
			case 3:
				x.display();
				cout << endl;
				break;
			default:
				cout << " Enter Proper Option Number [1-4] " << endl;
		}
		
	}while(opt!=-1);
	
	return 0;
}

