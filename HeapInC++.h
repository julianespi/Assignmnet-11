#pragma once

//Precondition: takes in a vector by refrecne 
//Postcondition: add the specifed number of random ints
void createArray(vector<int> &v1)
{
    int size = inputInteger("Enter the size of the dynamic array: ", 0, true);
    //v1.resize(size);

    for (int i = 0; i < size; i++)
    {
        v1.push_back(rand() % 100 + 1);
    }
}

//Precondition: takes in a vector by refrecne 
//Postcondition: adds an element to the vector
void PushbackanElement(vector<int> &v1)
{
    v1.push_back(inputInteger("Enter number you want to add to vector: ", 0, true));
}

//Precondition:takes in a vector by refrecne 
//Postcondition: turns the vector into a heap
void makeHeap(vector<int> &v1)
{
    make_heap(v1.begin(), v1.end());
}

//Precondition:takes in a vector
//Postcondition: disaplys the front value.
void displayfront(vector<int> v1)
{

    cout << "The maximum element of heap is : ";
    cout << v1.front() << endl;
}

//Precondition:takes in a vector by refrecne 
//Postcondition: adds a value to the heap
void pushheap(vector<int> &v1)
{
    v1.push_back(inputInteger("Enter number you want to add to heap: ", 0, true));
    push_heap(v1.begin(), v1.end());
}

//Precondition:takes in a vector by refrecne 
//Postcondition: takes a the top value from the heap
void popHeap(vector<int> &v1)
{
    pop_heap(v1.begin(), v1.end());
    v1.pop_back();
}

//Precondition:takes in a vector by refrecne 
//Postcondition: sorts the heap
void sortHeap(vector<int> &v1)
{
    sort_heap(v1.begin(), v1.end());
}

//Precondition: takes in a vector
//Postcondition: checks if its a heap 
void isHeap(vector<int> v1)
{
    if (is_heap(v1.begin(), v1.end()))
        cout << "vector is heap ";
    else 
        cout << "vector is not heap";
    cout << endl;
}

//Precondition: takes in a vector
//Postcondition: checks what values are in the head
void isHeapUntil(vector<int> v1)
{
    vector<int>::iterator it1;
    auto it = is_heap_until(v1.begin(), v1.end());
    cout << "The heap elements in container are : ";
    for ( it1 = v1.begin(); it1 != it; it1++)
        cout << *it1 << " ";
}

//Precondition: takes in a vector
//Postcondition: disaplys the heap or vector
void display(vector<int> v1)
{
    cout << "The heap elements are : ";
    for (int& x : v1)
        cout << x << " ";
    cout << endl;

}

//Precondition:none
//PostCondition:displays the main menu
int HeapInCMenuOption()
{
    cout << endl << "2> Union and intersect heap";
    cout << endl << "==========================================";
    cout << endl << "1>  create a dynamic array";
    cout << endl << "2>  push_back() an element";
    cout << endl << "3>  make_heap()";
    cout << endl << "4>  front()";
    cout << endl << "5>  push_heap()";
    cout << endl << "6>  pop_heap()";
    cout << endl << "7>  sort_heap()";
    cout << endl << "8>  is_heap()";
    cout << endl << "9>  is_heap_until()";
    cout << endl << "10> display";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 10);
    cout << endl << endl << endl;
    return options;
}

//Precondition: none
//Postcondition: decides what function to use
void HeapInC()
{
    vector<int> v1;

    do
    {
        switch (HeapInCMenuOption())
        {
        case 0: return; break;
        case 1: createArray(v1); break;
        case 2: PushbackanElement(v1); break;
        case 3: makeHeap(v1); break;
        case 4: displayfront(v1); break;
        case 5: pushheap(v1); break;
        case 6: popHeap(v1); break;
        case 7: sortHeap(v1); break;
        case 8: isHeap(v1); break;
        case 9: isHeapUntil(v1); break;
        case 10: display(v1); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}

