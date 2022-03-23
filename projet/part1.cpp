#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    
    string tmp_s ;
    cout<< "Entrez votre phrase svp !" << endl;
    getline(cin, tmp_s);

    string tmp_s_reversed(tmp_s);
    reverse(tmp_s_reversed.begin(), tmp_s_reversed.end());
    cout<< tmp_s_reversed << endl;

    return 0;
}