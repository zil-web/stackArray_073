#include <iostream>
#include<string>

using namespace std;
 
class stackarray {
private:
	int stack_array[5];
	int top;
public:
	//constructor
	stackarray() {
		top = -1;

	}
	void push() {
		int element;
		cout << "enter an element :";
			cin >> element;
		if (top == 4) {
			cout << "number of data execd the limit" << endl;
			return ;
		}
		top++; // step2
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

	}
	void pop() {
		if (empty()) {
			cout << "\nstack in empty. cannot pop." << endl; //1.a
			return; //1.b
		}
		cout << "\nthe pop element is :" << stack_array[top] << endl; //step 2
		top--; //1.b
	}

	//method for check if data is empty
	bool empty() {
		return(top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nstack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}

	}
	int main() 
	{
		stackarray s;
		char ch;
		while (true) {
			cout << endl;
			cout << "\n***stack menu***\n" << endl;
			cout << "1. push \n" << endl;
			cout << "2. pop \n" << endl;
			cout << "3. display \n" << endl;
			cout << "4. exit \n" << endl;
			cin >> ch;
			switch (ch) {
			case '1': {
				s.push();
				break;
			}
			case '2':
				if (s.empty()) {
					cout << "\nstack is empty." << endl;
					break;
				}
				s.pop();
				break;
			case '3':
				s.display();
				break;
			}
		}
			
			  
	}
 
};

