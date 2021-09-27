#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<string> v;

int Search(int i, int j, char ch){
    if (v[i][j]==ch) {
        v[i][j]='0';
        for (int k=-1;k<=1;k++){
            for (int l=-1;l<=1;l++){
                if (i+k<v.size() && j+l<v[0].size() && i+k>=0 && j+l>=0){
                    if (v[i+k][j+l]==ch) Search(i+k, j+l, ch);
                }
            }
        }
    }
    return 0;
}


int main(){
    int w, h;
    string str;
    cin >> w >> h;
    int greens=0, blanks=0;

    for (int i=0;i<h;i++){
        cin >> str;
        v.push_back(str);
    }

    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            if (v[i][j] == '-'){
                blanks++;
                Search(i, j, '-');
            }
            else if (v[i][j]=='G') {
                greens++;
                Search(i, j, 'G');
            }
        }
    }
    cout << greens <<' '<< blanks;
    return 0;
}
