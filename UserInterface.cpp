#include "UserInterface.h"
using namespace std;

void CUserInterface::Add()
{
    char szName[32]={0};
    char szPhone[32]={0};

   // std::cout << "이름을 넣으시오"<<std::endl;
    //cin << szName ;


    //    this->m_List.AddNewNode()
}
int CUserInterface::Run()
{
    int nMenu = 0;

    while(  (nMenu = PrintUI() ) !=0)
    {
        switch(nMenu)
        {
        case 1:
            Add();
            break;

        case 2:
            Search();
            break;

        case 3:
            PrintUI();
            break;

        case 4:
            Remove();
            break;

        }
    }

    return nMenu;
}

int CUserInterface::PrintUI()
{
    int nInput = 0;
    system("clear");
    cout <<"[1] Add\t[2]Search\t[3]Print All\t[4]Remove\t[5]Exit\n";
    cin>>nInput;    
    return nInput;
}
