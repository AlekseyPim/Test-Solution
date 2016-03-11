// DBB_test_task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
    if (EncryptFileToFile("C-small-practice.in", "C-small-results.out"))
        cout << "Small dataset encrypt Done!\n";

    if (EncryptFileToFile("C-large-practice.in", "C-large-results.out"))
        cout << "Large dataset encrypt Done!\n";

    //int N = 0;
    //int i = 0;
    //string text;
    //string result;
    //CEncryptToKeybord obj_encrypt_keybord;

    //ifstream fin("C-small-practice.in");
    //ofstream fout("C-small-results.out");

    //getline(fin, text);
    //N = atoi(text.c_str());

    //while(i < N)
    //{
    //    getline(fin, text);
    //    fout << "Case #" << i + 1 << ": ";
    //    result = obj_encrypt_keybord.Encrypt(text);
    //    fout << result;
    //    fout << "\n";
    //    i++;
    //}
    //fin.close();
    //fout.close();
    //cout << "Small dataset encrypt Done!\n";

    //i = 0;
    //ifstream fin2("C-large-practice.in");
    //ofstream fout2("C-large-results.out");

    //getline(fin2, text);
    //N = atoi(text.c_str());

    //while (i < N)
    //{
    //    getline(fin2, text);
    //    fout2 << "Case #" << i + 1 << ": ";
    //    result = obj_encrypt_keybord.Encrypt(text);
    //    fout2 << result;
    //    fout2 << "\n";
    //    i++;
    //}
    //fin2.close();
    //fout2.close();
    //cout << "Large dataset encrypt Done!\n";

    return 0;
}

