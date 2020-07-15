#include "SinglyLinkedList.h"

using namespace std;

void PrintDefaultList(SinglyLinkedList& list);

int main()
{
	int n = 0;
	int element;

	SinglyLinkedList list;

	cout << "\nHow many elements do you want to push on List?";
	cout << "\n\n>>> ";
	cin >> n;
	cout << "\n";

	for (int i = 0; i < n; ++i)
	{
		/*cout << i + 1 << endl;
		cin >> element;
		list.push_front(element);*/

		list.push_back(rand() % 101);
	}

	system("cls");

	PrintDefaultList(list);

	cout << "======================================" << endl;

	list.Average();

	system("pause");
	return 0;
}

void PrintDefaultList(SinglyLinkedList& list)
{
	SinglyLinkedList temp_list;

	while (!list.empty())
	{
		cout << list.back() << endl;
		temp_list.push_front(list.back());
		list.pop_back();
	}

	while (!temp_list.empty())
	{
		list.push_front(temp_list.back());
		temp_list.pop_back();
	}
}