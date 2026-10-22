#include <bits/stdc++.h>
using namespace std;

#include "ciphers/affine_cipher.h"
#include "ciphers/route_cipher.h"
#include "ciphers/atbash_cipher.h"
#include "ciphers/vigenere_cipher.h"
#include "ciphers/baconian_cipher.h"
#include "ciphers/substitution_cipher.h"
#include "ciphers/polybius_square_cipher.h"
#include "ciphers/morse_cipher.h"
#include "ciphers/xor_cipher.h"
#include "ciphers/rail_fence_cipher.h"

int main()
{
    cout << "# ==== WELCOME TO ENCRYPTION-DECRYPTION PROGRAM! ==== #" << endl;
    while(true)
    {
        int choice;
        string menu = "Select the type of cipher you want:\n\t[1] Affine Cipher\n\t [2] Route Cipher\n\t [3] Atbash Cipher\n\t [4] Vignere Cipher\n\t [5] Baconian Cipher\n\t [6] Simple Substitution Cipher\n\t [7] Polybius Square Cipher\n\t [8] Morse Cipher\n\t [9] XOR Cipher\n\t [10] Rail-Fence Cipher\n\t [11] Exit Program.\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                Affine_Cipher system;
                system.run();
                break;
            case 2:
                Route_Cipher system;
                system.run();
                break;
            case 3:
                Atbash_Cipher system;
                system.run();
                break;
            case 4:
                Vigenere_Cipher system;
                system.run();
                break;
            case 5:
                Baconian_Cipher system;
                system.run();
                break;
            case 6:
                Simple_Substitution_Cipher system;
                system.run();
                break;
            case 7:
                Polybius_Square_Cipher system;
                system.run();
                break;
            case 8:
                Morse_Cipher system;
                system.run();
                break;
            case 9:
                XOR_Cipher system;
                system.run();
                break;
            case 10:
                Rail_Fence_Cipher system;
                system.run();
                break;
            case 11:
                cout << "Thanks for using our software! BYE BYEE~";
                return 0;
                break;
            default:
                cout << "Please enter a valid choice.";
        }
    }
    

}