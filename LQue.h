#include <iostream>
using namespace std;

template <typename T>
class LQueue{

protected:
	class node
	{
	public:
		T data;
		node*next;
	};

public:
	node*front;
	node*back;

	LQueue(){
		//Init front and back of Queue
		front = NULL;
		back = NULL;
	}

	~LQueue(){
		//This will clean up the Queue
		while (front != NULL){
			node *temp = front;
			front = front->next;
			//Delete the node
			delete(temp);
		}
		back = NULL;
	}

	const void enqueue(T data){
		node*new_node = new node();
		//Set data and next node
		new_node->data = data;
		new_node->next = NULL;

		if (front == NULL){
			//Set front and back to new_node
			front = new_node;
			back = new_node;
		}
		else{
			back->next = new_node;
			back = new_node;
		}
	}

	const bool empty() const{
		//Check if front and back are null
		if (front == NULL && back == NULL){
			return true;
		}
		else{
			return false;
		}
	}

	const T peek() const{
		T x = 0;
		//Get the node
		node*temp = front;
		//Pop of the data in temp node
		x = temp->data;
		//Delete the temp node we do not need it since the data is stored in x
		delete(temp);
		//Return data
		return x;
	}

	const T dequeue(){
		node*temp = NULL;

		if (empty()){
			std::cerr << "Queue is empty" << std::endl;
			return -1;
		}
		else{
			if (front == back){
				temp = front;
				front = NULL;
				back = NULL;
				return temp->data;
			}
			else{
				temp = front;
				front = front->next;
				return temp->data;
			}
		}
	}
};
