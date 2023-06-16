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
	int push(int element) {
		if (top == 4) {
			cout << "number of data execd the limit" << endl;
			return 0;
		}
		top++; // step2
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
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
				cout << stack_array[tmp] <<  endl;
			}
		}
	}
};
