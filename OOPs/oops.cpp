#include<iostream>
using namespace std;


int count = 0;

class Box{
	private:
		int x;
		int size;
		int * items;
		
	public:
		Box(int newx, int size){
			x = newx;
			this->size = size;
			init();
		}
	
	// deep copy	
	Box(Box &b)
	{
		this->x = b.x;
		this ->size = b.size;
		
		this -> items = new int[size];	
		
		for(int i=0;i<size;i++){
			items[i] = b.items[i];
		}
		
		//b.items = this -> items;
		
	}
		
		
	void init(){
		items = new int[size];
		
		for(int i=0;i<size;i++){
			items[i] = count++;
		}
	}
	
	void print(){
		cout << "x:" << x << endl;
		cout << "size: " << size << endl;
		
		
		cout << "Items in box: ";
		for(int i=0;i<size;i++){
			cout << items[i] << endl;
		}
	}
		
		
	~Box(){
		cout << "Destructor Called" << endl;
		
	}
		
	
	
};
int main()
{
	Box box1(11,5); // intstanciating this object 
	box1.print();
	
	
	Box* box2 = new Box(12 ,3);
	
	box2->print();
	
	
	//Box* box3 = box2;
	
	Box box3 = box1;
	box3.print();
	
	
	

	return 0;
	
	
}

