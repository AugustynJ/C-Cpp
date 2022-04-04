#include <bits/stdc++.h>
using namespace std;

struct line{
    int number;
    string word;
};

int main(){
    fstream file("pary.txt");                   // 100 linii jest w pliku
    line T[100];
    for (int i=0; i<100; i++) file >> T[i].number >> T[i].word;
    for (int i=0; i<100; i++){
        int max_length = 1, length = 1;
        char letter = T[i].word[0];
        for (int j=1; j<T[i].word.size(); j++){
            if(T[i].word[j] != T[i].word[j-1] || j == T[i].word.size()-1){
                if(length > max_length){
                    letter = (char)(T[i].word[j-1]);
                    max_length = length;
                    length = 1;
                }
            }
            else length++;
        }
        for(int j=0; j < max_length; j++) cout << letter;
        cout << " " << max_length << "\n";
    }

    file.close();
    return 0;
}