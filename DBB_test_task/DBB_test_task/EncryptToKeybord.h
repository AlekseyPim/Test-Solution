#pragma once
#include "stdafx.h"

class CEncryptToKeybord
{
private:
    int last_key_numb;
public:
    CEncryptToKeybord();
    CEncryptToKeybord(const CEncryptToKeybord &);

    string Encrypt(string text_in);

    CEncryptToKeybord operator=(const CEncryptToKeybord&);
    virtual ~CEncryptToKeybord();
};

