#pragma once

#include <iostream>
#include <exception>

class SinglyLinkedList
{
public:
	struct Node
	{
		Node() : data(0), next(nullptr)
		{}
		Node(int data) : data(data), next(nullptr)
		{}
		Node(int data, Node* nextNode) : data(data), next(nextNode)
		{}

		int data;

		Node* next;
	};

	SinglyLinkedList() : _head(nullptr), _tail(nullptr), _size(0)
	{}

	void push_front(int);
	void push_back(int);
	void pop_front();
	void pop_back();
	int& front();
	int& back();
	int size();
	bool empty();

	void Average();

private:
	Node* _head;
	Node* _tail;

	int _size;
};

