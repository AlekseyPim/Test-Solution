// stdafx.cpp : source file that includes just the standard includes
// DBB_test_task.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

bool EncryptFileToFile(string file_name_in, string file_name_out)
{
    int N = 0;
    int i = 0;
    string text;
    string result;
    fstream fin, fout;
    CEncryptToKeybord obj_encrypt_keybord;

    fin.open(file_name_in, ios::in);
    if (fin.is_open())
    {
        fout.open(file_name_out, ios::out);
        getline(fin, text);
        N = atoi(text.c_str());

        while (i < N)
        {
            getline(fin, text);
            fout << "Case #" << i + 1 << ": ";
            result = obj_encrypt_keybord.Encrypt(text);
            fout << result;
            fout << "\n";
            i++;
        }
        fin.close();
        fout.close();
        return true;
    }
    else
    {
        cout << "Can't open " << file_name_in << endl;
        fin.close();
        return false;
    }
}