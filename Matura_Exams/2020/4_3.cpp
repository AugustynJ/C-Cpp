#include <bits/stdc++.h>
using namespace std;

struct line{
    int number;
    string word;
};

bool isSmaller(string s1, string s2){
    for (int i=0; i<=s1.size(); i++){
        if((int)s1[i] < (int)s2[i]) return true;
        else if((int)s1[i] > (int)s2[i])return false;
    }
    return false;
}

int main(){
    fstream file("pary.txt");                   // 100 linii jest w pliku
    line T[100];
    for (int i=0; i<100; i++) file >> T[i].number >> T[i].word;
    int lowest_len = 1000;
    string lowest_word="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    for (int i=0; i<100; i++) {
        if(T[i].number != T[i].word.size()) continue;
        if(T[i].number < lowest_len){
            lowest_len = T[i].number;
            lowest_word = T[i].word;
        }
        else if(T[i].number == lowest_len && isSmaller(T[i].word, lowest_word))
            lowest_word = T[i].word;
    }
    cout << lowest_len << " " << lowest_word;

    file.close();
    return 0;
}