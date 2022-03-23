#include<iostream>
using namespace std; 
 
 int main()
 {
 
 char phrase[24], phraseCodee[24];
 int cpt, nbre;
 
 if (phrase[cpt]>='A'&&phrase[cpt]<='Z')
            phraseCodee[cpt]=(((phrase[cpt]-65)+nbre)%26)+65;
        else if( phrase[cpt]>='a'&&phrase[cpt]<='z')
            phraseCodee[cpt]=(((phrase[cpt]-97)+nbre)%26)+97;
return 0;
 }