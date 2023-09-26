#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void delay(int msec)
{
    clock_t goal = msec + clock();
    while (goal > clock())
        ;
}

int main()
{
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
    string name, res;
    cout << "Enter word: ";
    getline(cin, name);

    for (int i = 0; i < name.size(); i++)
        for (int j = 0; j <= str.find(name[i]); j++)
        {
            cout << res << str[j] << endl;
            // call delay function
            delay(2 * 100);
        }

    res += name[i];
}

return 0;
}
