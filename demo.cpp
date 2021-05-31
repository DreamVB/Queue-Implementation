//Simple Genetic Queue class using a linked list.
//if you like this see my stack Implementation
//https://github.com/DreamVB/LStack

#include <iostream>
#include "LQue.h"
using namespace std;

int main(){

	LQueue<int> q;
	int myint;;

	std::cout << "Please enter some integers (enter 0 to end):" << std::endl;
	do {
		std::cin >> myint;
		q.enqueue(myint);
	} while (myint);

	//Display the items in the queue that were added.
	while (!q.empty()){
		//Output item on que
		std::cout << q.dequeue() << endl;
	}

	return EXIT_SUCCESS;
}
