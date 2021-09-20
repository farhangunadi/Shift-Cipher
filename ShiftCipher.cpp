/*
Author : Farhan Gunadi (140810190009)
Padjadjaran University
*/
#include <iostream>
#include <string>

using namespace std;

void ShiftChiper(string input, int key)
{
    string enkripsi, dekripsi;
    int i;
    for (i = 0; i < input.size(); i++)
    {
        enkripsi += (input[i] - 'A' + key) % 26 + 'A';
    }
    cout << "Enkripsi : " << enkripsi << endl;
    for (i = 0; i < enkripsi.size(); i++)
    {
        dekripsi += (enkripsi[i] - 'A' - key + 26) % 26 + 'A';
    }
    cout << "Dekripsi : " << dekripsi << endl;
}
int main()
{
mulai:
    string pilih;
    int i, j, k;
    string s, t;
    int key;
    cout << "Input : ";
    cin >> s;
    cout << "Kunci : ";
    cin >> key;
    ShiftChiper(s, key);
    cout << "Apakah ingin diulang ? (Y/N) ";
    cin >> pilih;

    if (pilih == "Y" || pilih == "y")
    {
        goto mulai;
    }
    else
    {
        return 0;
    }
}