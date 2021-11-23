#include "SaveModule.h"

void voice()
{
	Beep(600, 100);
}

int save(String^ NamePerStr, bool vip)
{
	ofstream fout;
	string path = "../Data.txt";
	fout.open(path, ofstream::app);

	if (!fout.is_open())
		cout << "Error of opening file !\n";
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

		default:
			break;
		}
	}


	fout.close();
	return 0;
}
