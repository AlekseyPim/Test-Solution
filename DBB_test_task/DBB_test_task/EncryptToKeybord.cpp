#include "stdafx.h"
#include "EncryptToKeybord.h"


CEncryptToKeybord::CEncryptToKeybord() :last_key_numb(-1)
{
}

CEncryptToKeybord::CEncryptToKeybord(const CEncryptToKeybord &C)
{
    last_key_numb = C.last_key_numb;
}



string CEncryptToKeybord::Encrypt(string text_in)
{
    string crypt_text = "";

    int size_text = text_in.size();
    for (int i = 0; i < size_text; i++)
    {
        int key_number = 1, subtrahend = 3, reps = 0;
        int letter_number = (int)text_in[i];

        if ((int)text_in[i] == 32) 
        {
            if (last_key_numb == 0) //pause
            {
                crypt_text += ' ';
            }
            crypt_text += to_string(0); //space = 0
            last_key_numb = 0;
        }
        else
        {
            letter_number -= 96;//(ASCII number - 96) to find number in alphabet

            while (letter_number > 0)
            {
                key_number++;

                if (key_number == 7 || key_number == 9) // 7(PQRS)  9(WXYZ) - 4 letters
                    subtrahend = 4;
                else
                    subtrahend = 3; // 2,3,4,5,6,8 -  3 letters

                letter_number -= subtrahend;
            }
            reps = subtrahend + letter_number;
            
            if (last_key_numb == key_number)//pause
            {
                crypt_text += ' '; 
            }

            last_key_numb = key_number;

            for (int i = 0; i < reps; i++)
            {
                crypt_text += to_string(key_number);
            }
        }
    }
    last_key_numb = -1;
    return crypt_text;
}


CEncryptToKeybord CEncryptToKeybord::operator=(const CEncryptToKeybord& obj)
{
    last_key_numb = obj.last_key_numb;
    return *this;
}

CEncryptToKeybord::~CEncryptToKeybord()
{
}
