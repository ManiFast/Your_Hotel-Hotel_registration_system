#include "Module.h"

using namespace std;

void sum()
{
  Beep(1000, 50);
}

int SaveToFile(bool vip, String^ NamePerStr)
{
  ofstream fout;
  fout.open("../Data.txt", ofstream::app);

  if (!fout.is_open())
  {
    // error
  }
  else
  {
    fout << "==============================";

    switch (vip)
    {
    case 1:
      fout << "| VIP |==============================" << endl;
      break;

    case 0:
      fout << "=====================================" << endl;
      break;
    }

    std::wstring aaa = marshal_as<std::wstring>(NamePerStr);

    Console::WriteLine(NamePerStr);


    //cout << aaa;

    //Console::WriteLine(inform[0]);


    /*for (int i = 0; i < vec.size(); i++)
    {
      cout << vec[i] << endl;
    }*/

    fout.close();
  }

  return 0;
}

void giveSound()
{
  Beep(400, 10);
}