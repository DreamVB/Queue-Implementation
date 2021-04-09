//Simple Queue class using a linked list
#include <iostream>
#include "LQue.h"
using namespace std;

int main(){

	LQueue q;
	int x = 100;
	//Put some items on the queue 100 to 800
	while (x <= 800){
		//Add item
		q.enqueue(x);
		//INC by 100
		x += 100;
	}
	//Display the items in the queue that were added.
	while (!q.isEmpty()){
		//Output item on que
		std::cout << q.dequeue() << endl;
	}
	//Pop one more item this will disp;ay an error messageing
	//tellings us the queue is empty
	std::cout << q.dequeue() << endl;

	system("pause");
	return 0;
}