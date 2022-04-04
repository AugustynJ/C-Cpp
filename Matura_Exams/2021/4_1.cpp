#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream file("instrukcje.txt");
    ofstream output("output.txt");
    string s="", line="";
    char letter;
    
    for (int i=0; i<2000; i++){         // Plik instrukcje.txt ma 2000 linii tekstu
        file >> line >> letter;
        if(line[0] == 'D')
            s += letter;
        else if (line[0] == 'Z')
            s[s.size()-1] = letter;
        else if (line[0] == 'U'){
            string better = "";
            for (int j=0; j<s.size()-1; j++) better += s[j];
            s = better;
        }
        else if(line[0] == 'P'){
            for (int j=0; j<s.size(); j++){
                if(s[j] == letter){
                    if(s[j] == 'Z') s[j] = 'A';
                    else s[j] = (char)(letter+1);
                    break;
                }
            }
        }
    }
    cout << s.size();

    file.close();
    output.close();
    return 0;
}
