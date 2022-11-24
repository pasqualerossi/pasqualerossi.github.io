#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ifstream myfile ("gamefeed.xml");
    if (myfile.is_open())
    {
        while (getline(myfile,line))
		{
			if (line.find("<url>") != string::npos && line.find("</url>") != string::npos)
			{
				for (int i = 0; i < 11; i++)
					line.erase(line.begin());
				for (int i = 0; i < 6; i++)
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