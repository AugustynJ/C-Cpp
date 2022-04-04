#include <bits/stdc++.h>
using namespace std;

struct line{
    string instruction;
    char letter;
};

int letter[26];

int main(){
    ifstream file("instrukcje.txt");
    ofstream output("output.txt");
    line T[2000];
    for (int i = 0; i < 2000; i++) file >> T[i].instruction >> T[i].letter;
    for (int i = 0; i < 2000; i++) {
        if(T[i].instruction == "DOPISZ") letter[(int)(T[i].letter - 65)] += 1;
    }
    int maxxx = 0;
    for (int i=0; i<26; i++) maxxx = max(maxxx, letter[i]);
    for (int i=0; i<26; i++){
        if(letter[i] == maxxx){
            cout << letter[i] << " " << (char)(i+65);
            break;
        }
    }
    return 0;
}