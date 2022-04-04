#include <bits/stdc++.h>
using namespace std;

struct line{
    int number;
    string word;
};

bool isPrime(int n){
    if(n == 0 || n == 1) return false;
    for(int i=2; i*i<=n; i++)
        if(!(n%i)) return false;
    return true;
}

int main(){
    fstream file("pary.txt");                   // 100 linii jest w pliku
    line T[100];
    for (int i=0; i<100; i++) file >> T[i].number >> T[i].word;
    for (int i=0; i<100; i++) {
        if(T[i].number % 2) continue;
        for (int j = 3; j<(T[i].number+1)/2; j++){
            if(isPrime(j) && isPrime(T[i].number-j)){
                cout << T[i].number << " " << j << " " << T[i].number-j << "\n";
                break;
            }
        }
    }

    file.close();
    return 0;
}
