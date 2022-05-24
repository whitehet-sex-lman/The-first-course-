#pragma once
#include<ostream>
class ArrayList
{
private:
	int* data;
	int capacity;
	int count;
	void expand(int count = 1);
	void swap(int posi, int posj);
	int ind(int index);

public:
	ArrayList(int capacity = 10);
	ArrayList(const ArrayList& list);
	~ArrayList();

	void pushend(int element);
	void pushbegin(int element);
	void insert(int element, int position);
	int extractbegin();
	int extractend();
	int extract(int position);

	int& operator[](int pos);

	void sort(int begin = 0, int end = 0);

	friend std::ostream& operator<<(std::ostream& stream, ArrayList& list);
};