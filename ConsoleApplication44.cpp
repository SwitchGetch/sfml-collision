#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
using namespace std;
using namespace filesystem;

void allFolders(path p)
{
    for (auto& element : directory_iterator(p))
    {
        if (is_directory(element))
        {
            cout << element.path() << endl;

            allFolders(element);
        }
    }
}

int main()
{
    path p = "C:/Program Files (x86)";

    allFolders(p);
}
