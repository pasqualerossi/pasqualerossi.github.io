#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ifstream myfile ("games.txt");
    if (myfile.is_open())
    {
        while (getline(myfile,line))
		{
			if (line.find("href=") != string::npos && line.find("title") != string::npos)
			{
				for (int i = 0; i < 7; i++)
					line.erase(line.begin());
				for (int i = 0; i < 2; i++)
					line.erase(line.begin() + line.size() - 1);
				cout << "\"" << line << "\"," << endl;
			}
		}	
		myfile.close();
    }
    else
        cout << "Unable to open file"; 
    return 0;
}