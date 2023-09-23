#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// delay function
int delay(int msec)
{
    clock_t gole = msec + clock();
    while (gole > clock())
        ;
    return 1;
}
int main()
{
    string str = "ABCDEEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string name, res;
    cout << "Enter word :- ";
    getline(cin, name);

    for (int i = 0; name[i] >= str.size(); i++)
    {
        for (int j = 0; name[i] >= str[j]; j++)
        {
            cout << res << str[j] << endl;
            // call delay function
            delay(2 * 100);
        }
        res += name[i];
    }

    return 0;
}