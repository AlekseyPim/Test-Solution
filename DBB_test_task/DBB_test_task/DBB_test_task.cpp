// DBB_test_task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
    if (EncryptFileToFile("C-small-practice.in", "C-small-results.out"))
        cout << "Small dataset encrypt Done!\n";

    if (EncryptFileToFile("C-large-practice.in", "C-large-results.out"))
        cout << "Large dataset encrypt Done!\n";

    return 0;
}

