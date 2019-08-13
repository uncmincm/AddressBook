class CUserData
{
public:
    CUserData();
    ~CUserData();

    const char* GetName(void) {return szName;}
    const char* GetPhoneNum(void){return szPhone;}
    const CUserData* GetNext(void) const {return pNext;}

    static int GetUserDataCounter(){return nUserDataCounter;}

protected:
    char szName[32];
    char szPhone[32];

    CUserData *pNext;

    static int nUserDataCounter;

};
