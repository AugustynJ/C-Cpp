#include <bits/stdc++.h>
using namespace std;

struct line{
    string instruction;
    char letter;
};

int main(){
    ifstream file("instrukcje.txt");
    ofstream output("output.txt");
    int maxxx = 0, counter = 1;
    string maxxx_instr = "";
    line T[2000];
    for (int i = 0; i<2000; i++) file >> T[i].instruction >> T[i].letter;
    for (int i = 1; i<2000; i++){
        // cout << T[i-1].instruction  << " " << " " << counter << "\n";
        if(T[i].instruction != T[i-1].instruction){
            if(counter > maxxx){
                maxxx = counter;
                maxxx_instr = T[i-1].instruction;
            }
                counter = 1;
        }
        else if(T[i-1].instruction == T[i].instruction) counter ++;
    }
    cout << maxxx << " " << maxxx_instr;
    return 0;
}