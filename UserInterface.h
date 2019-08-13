#include <iostream>

class CMylist;

class CUserInterface
{
public:
    CUserInterface(CMylist& rList);
    CUserInterface(void);
    ~CUserInterface(void);
    void Add(void);

protected:
    CMylist &m_List;

public:
    void Search();
    void Remove();
    int PrintUI();
    int Run();
};