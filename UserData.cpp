#include "UserData.h"
#include <iostream>
#include <string.h> //memset() include

using namespace std;

CUserData::CUserData(void):pNext(nullptr)
{
    memset(szName,0,sizeof(szName));
    memset(szPhone,0,sizeof(szPhone));

    nUserDataCounter++;
}
CUserData::~CUserData(void )
{
    nUserDataCounter--;
}


