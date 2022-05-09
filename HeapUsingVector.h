#pragma once

void minHeap()
{

}

void maxHeap()
{

}

//Precondition:none
//PostCondition:displays the main menu
int mainMenuOption()
{
    cout << endl << "1> Heap using vector";
    cout << endl << "==========================================";
    cout << endl << "1> Min heap";
    cout << endl << "2> Max heap";
    cout << endl << "==========================================";
    cout << endl << "Exit 0";
    cout << endl << "==========================================" << endl;
    int options = inputInteger("Options: ", 0, 3);
    cout << endl << endl << endl;
    return options;
}
void heapUsingVector()
{
    do
    {
        switch (mainMenuOption())
        {
        case 0: return; break;
        case 1: minHeap(); break;
        case 2: maxHeap(); break;
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);
}