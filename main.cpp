#include "SinglyLinkedList.h"

using namespace std;

void PrintDefaultList(SinglyLinkedList& list);

int main()
{
	int n = 0, element;

	SinglyLinkedList list;

	cout << "\nHow many elements do you want to push on List?";
	cout << "\n\n>>> ";
	cin >> n;
	cout << "\n";

	for (int i = 0; i < n; ++i)
	{
		list.push_back(rand() % 101);
	}

	list.Average();

	system("pause");
	return 0;
}

void PrintDefaultList(SinglyLinkedList& list)
{
	/*SinglyLinkedList* temp;
	temp = _tail;

	while (temp != nullptr)
	{
		std::cout << temp->data << std::endl;

		temp = temp->next;
	}*/
}