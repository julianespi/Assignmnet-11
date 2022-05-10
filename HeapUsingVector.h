#pragma once

void minimumHeap()
{
    MinHeap<int> mH;
	do
	{
		system("cls");
		cout << "\n\t\tA> Max Heap";
		cout << "\n\t\t" << string(70, char(205));
		cout << "\n\t\t\t1. size";
		cout << "\n\t\t\t2. empty";
		cout << "\n\t\t\t3. push";
		cout << "\n\t\t\t4. front";
		cout << "\n\t\t\t5. pop";
		cout << "\n\t\t\t6. display";
		cout << "\n\t\t" << string(70, char(196));
		cout << "\n\t\t\t0. return";
		cout << "\n\t\t" << string(70, char(205)) << '\n';

		switch (inputInteger("\t\t\tOption: ", 0, 6))
		{
		case 0: return;
		case 1:
			cout << "\n\t\t\tSize of the heap: " << mH.size() << '\n';
			break;
		case 2:
			cout << "\n\t\t\tThe heap is " << (mH.empty() ? "empty." : "not empty.") << '\n';
			break;
		case 3:
			cout << '\n';
			int x;
			do
			{
				x = inputInteger("\t\t\tEnter an integer element to push onto the heap: ");
				if (!mH.find(x))
					break;
				else
					cout << "\t\t\tERROR: the element, " << x << ", already existed in the heap. Please re-specify.\n\n";
			} while (true);
			mH.push(x);
			break;
		case 4:
			if (!mH.empty())
				cout << "\n\t\t\tThe first element of the heap: " << mH.front() << '\n';
			else
				cout << "\n\t\t\tThe heap is empty.\n";
			break;
		case 5:
			if (!mH.empty())
			{
				cout << "\n\t\t\tThe first element, " << mH.front() << ", of the heap has been removed.\n";
				mH.pop();
			}
			else
				cout << "\n\t\t\tThe heap is empty.\n";

			break;
		case 6:
			cout << "\n\t\t\t" << mH << "\n";
			break;
		}

		cout << '\n';
		system("pause");
	} while (true);
}

void maximumHeap()
{
	//change to maxheap
	MaxHeap<int> mH;
	do
	{
		system("cls");
		cout << "\n\t\tA> Max Heap";
		cout << "\n\t\t" << string(70, char(205));
		cout << "\n\t\t\t1. size";
		cout << "\n\t\t\t2. empty";
		cout << "\n\t\t\t3. push";
		cout << "\n\t\t\t4. front";
		cout << "\n\t\t\t5. pop";
		cout << "\n\t\t\t6. display";
		cout << "\n\t\t" << string(70, char(196));
		cout << "\n\t\t\t0. return";
		cout << "\n\t\t" << string(70, char(205)) << '\n';

		switch (inputInteger("\t\t\tOption: ", 0, 6))
		{
		case 0: return;
		case 1:
			cout << "\n\t\t\tSize of the heap: " << mH.size() << '\n';
			break;
		case 2:
			cout << "\n\t\t\tThe heap is " << (mH.empty() ? "empty." : "not empty.") << '\n';
			break;
		case 3:
			cout << '\n';
			int x;
			do
			{
				x = inputInteger("\t\t\tEnter an integer element to push onto the heap: ");
				if (!mH.find(x))
					break;
				else
					cout << "\t\t\tERROR: the element, " << x << ", already existed in the heap. Please re-specify.\n\n";
			} while (true);
			mH.push(x);
			break;
		case 4:
			if (!mH.empty())
				cout << "\n\t\t\tThe first element of the heap: " << mH.front() << '\n';
			else
				cout << "\n\t\t\tThe heap is empty.\n";
			break;
		case 5:
			if (!mH.empty())
			{
				cout << "\n\t\t\tThe first element, " << mH.front() << ", of the heap has been removed.\n";
				mH.pop();
			}
			else
				cout << "\n\t\t\tThe heap is empty.\n";

			break;
		case 6:
			cout << "\n\t\t\t" << mH << "\n";
			break;
		}

		cout << '\n';
		system("pause");
	} while (true);
}

//Precondition:none
//PostCondition:displays the main menu
int heapUsingVectorMenuOption()
{
    cout << endl << "1> Heap using vector";
    cout << endl << "==========================================";
    cout << endl << "1> Min heap";
    cout << endl << "2> Max heap";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 2);
    cout << endl << endl << endl;
    return options;
}

//
void heapUsingVector()
{
    do
    {
        switch (heapUsingVectorMenuOption())
        {
        case 0: return; break;
        case 1: minimumHeap(); break;
        case 2: maximumHeap(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");
    } while (true);
}