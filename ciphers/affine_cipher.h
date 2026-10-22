#include <bits/stdc++.h>
using namespace std;

int check_number(const string&);  //to check that key is a number
int menu_check(int choice, const string& menu);
bool continue_or();

class Affine_Cipher
{
public:
    void run();
    void cipher();
    void decipher();
};

int check_number(char entered)
{
    if (entered>='0' && entered<='9')
        return 1;
    else
    {
        cout << "Please enter a valid number." << endl;
    }
}

