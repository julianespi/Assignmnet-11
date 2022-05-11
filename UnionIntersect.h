#pragma once

#include "MinHeap.h"
#include "MaxHeap.h"

// Main menu of Union and Intersect
void mainMenuUnIn()
{
    do
    {
        cout << "\t2> Union and intersect heap";
        cout << "\n\t" << string(50, char(205));
        cout << "\n\t\tA> Union two max Heaps";
        cout << "\n\t\tB> Intersect two max Heaps";
        cout << "\n\t\tC> Union two min Heaps";
        cout << "\n\t\tD> Intersect two min Heaps";
        cout << "\n\t" << string(50, char(196));;
        cout << "\n\t\t0> Return";
        cout << "\n\t" << string(50, char(205)) << "\n";

        char option = inputChar("\n\tOption: ");
        system("cls");
        if (option == '0') break;

        cout << '\n';
        switch (option)
        {
        case 'A':
        {

            MaxHeap<int> mH1;
            MaxHeap<int> mH2;

            mH1.push(12);
            mH1.push(5);
            mH1.push(6);
            mH1.push(2);
            mH2.push(12);
            mH2.push(9);
            mH2.push(6);

            // This is for random numbers
            /*for (int i = 0; i < 5; i++)
            {
                int x = 0;
                x = (rand() % 20 + 1);
                if (!mH1.find(x))
                    mH1.push(x);
            }
            for (int i = 0; i < 3; i++)
            {
                int x = 0;
                x = (rand() % 20 + 1);
                if (!mH2.find(x))
                    mH2.push(x);
            }*/

            cout << "\tMax heap 1: " << mH1 << '\n';
            cout << "\n\tMax heap 2: " << mH2 << '\n';

            mH1.unionMax(mH1, mH2);

            cout << "\n\tMerged max heap: " << mH1 << '\n';
        } break;
        case 'B':
        {

            MaxHeap<int> mH1;
            MaxHeap<int> mH2;

            mH1.push(12);
            mH1.push(5);
            mH1.push(6);
            mH1.push(2);
            mH2.push(12);
            mH2.push(9);
            mH2.push(6);

            // This is for random numbers
            /*for (int i = 0; i < 5; i++)
            {
                int x = 0;
                x = (rand() % 20 + 1);
                if (!mH1.find(x))
                    mH1.push(x);
            }
            for (int i = 0; i < 3; i++)
            {
                int x = 0;
                x = (rand() % 20 + 1);
                if (!mH2.find(x))
                    mH2.push(x);
            }*/

            cout << "\tMax heap 1: " << mH1 << '\n';
            cout << "\n\tMax heap 2: " << mH2 << '\n';

            mH1.intersectMax(mH1, mH2);

            cout << "\n\tIntersect heap: " << mH1 << '\n';
        } break;
        case 'C':
        {

            MinHeap<int> mH1;
            MinHeap<int> mH2;

            mH1.push(12);
            mH1.push(5);
            mH1.push(6);
            mH1.push(2);
            mH2.push(12);
            mH2.push(9);
            mH2.push(6);

            // This is for random numbers
            /*for (int i = 0; i < 5; i++)
            {
                int x = 0;
                x = (rand() % 20 + 1);
                if (!mH1.find(x))
                    mH1.push(x);
            }
            for (int i = 0; i < 3; i++)
            {
                int x = 0;
                x = (rand() % 20 + 1);
                if (!mH2.find(x))
                    mH2.push(x);
            }*/

            cout << "\tMin heap 1: " << mH1 << '\n';
            cout << "\n\tMin heap 2: " << mH2 << '\n';

            mH1.unionMin(mH1, mH2);

            cout << "\n\tMerged min heap: " << mH1 << '\n';
        } break;
        case 'D':
        {

            MinHeap<int> mH1;
            MinHeap<int> mH2;

            mH1.push(12);
            mH1.push(5);
            mH1.push(6);
            mH1.push(2);
            mH2.push(12);
            mH2.push(9);
            mH2.push(6);

            // This is for random numbers
            /*for (int i = 0; i < 5; i++)
            {
                int x = 0;
                x = (rand() % 20 + 1);
                if (!mH1.find(x))
                    mH1.push(x);
            }
            for (int i = 0; i < 3; i++)
            {
                int x = 0;
                x = (rand() % 20 + 1);
                if (!mH2.find(x))
                    mH2.push(x);
            }*/

            cout << "\tMin heap 1: " << mH1 << '\n';
            cout << "\n\tMin heap 2: " << mH2 << '\n';

            mH1.intersectMin(mH1, mH2);

            cout << "\n\tIntersect heap: " << mH1 << '\n';
        } break;
        default: cout << "\tERROR - Invalid option. Please re-enter.\n"; break;
        }
        cout << '\n';
    } while (true);
}