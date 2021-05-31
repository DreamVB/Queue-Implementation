# Queue-Implementation
A Genetic queue algorithm using linked list.

# Queue Operations

| Function | Description |
| ------------- | ------------- |
| enqueue  | push a value on the queue.  |
| dequeue  | Return a value of the queue and remove.  |
| peek  | Return the top value on the queue.  |
| empty  | Tell us if the queue is empty or not.  |

# Using the Queue

```cpp
#include "LQue.h"
using namespace std;

int main(){

	LQueue<int> q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	//Display the items in the queue that were added.
	while (!q.empty()){
		//Output item on que
		std::cout << q.dequeue() << endl;
	}

	return EXIT_SUCCESS;
}
```
