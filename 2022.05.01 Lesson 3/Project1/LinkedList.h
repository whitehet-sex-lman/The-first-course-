#pragma once
#include<ostream>

struct Node
{
	int data;
	Node* next;
	Node(int data = 0, Node* next = nullptr) : data(data), next(next) {}
	Node(const Node& node) : data(node.data), next(nullptr) {}
	~Node()
	{
		data = 0;
		next = nullptr;
	}
	friend std::ostream& operator<<(std::ostream& stream, const Node& node);
};

class LinkedList
{
private:
	Node* head;
	Node* tail;
	int count;
	Node*& nodeByIndex(int index);

public:
	LinkedList() : head(nullptr), tail(nullptr), count(0) {}
	~LinkedList();

	int ind(int index);

	void pushHead(int element);
	void pushTail(int element);

	friend Node* mover(Node* temp, int index);
	void insert(int element, int index);
	int extract(int index);
	void swap(int index1, int index2);

	int popHead();
	int popTail();

	friend std::ostream& operator<<(std::ostream& stream, const LinkedList& list);
};