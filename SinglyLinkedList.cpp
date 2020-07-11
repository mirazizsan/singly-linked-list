#include "SinglyLinkedList.h"

void SinglyLinkedList::push_front(int data)
{
	Node* temp = new Node(data);

	if (_size == 0)
	{
		_tail = temp;
		_head = temp;
	}
	else
	{
		_head->next = temp;
		_head = temp;
	}
	_size++;
}

void SinglyLinkedList::push_back(int data)
{
	Node* temp = new Node(data);

	if (_size == 0)
	{
		_tail = temp;
		_head = temp;
	}
	else
	{
		temp->next = _tail;
		_tail = temp;
	}
	_size++;
}

void SinglyLinkedList::pop_front()
{
	try
	{
		if (_size == 0)
			throw std::out_of_range("ERROR: Singly Linked List is empty!");

		Node* temp = _tail;

		while (temp->next->next == nullptr)
		{
			temp = temp->next;
		}
		_head = temp;

		delete _head->next;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void SinglyLinkedList::pop_back()
{
	try
	{
		if (_size == 0) {
			throw std::out_of_range("ERROR: Singly Linked list is empty!");

			Node* temp = _tail;
			_tail = _tail->next;

			delete temp;

			_size--;

		}
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int SinglyLinkedList::size()
{
	return _size;
}

bool SinglyLinkedList::empty()
{
	return _size == 0 ? true : false;
}


void SinglyLinkedList::Average()
{
	try
	{
		if (!_size == 0)
			throw std::out_of_range("ERROR: Singly Linked List is empty!");

		int average = 0;

		Node* temp;
		temp = _tail;

		while (temp != nullptr)
		{
			average += temp->data;
			temp = temp->next;
		}
		average = average / _size;
		std::cout << average << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
