#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int size = s.length();
    if(s[size-2]=='A'){
        string hh = s.substr(0,2);
        int h = stoi(hh);
        if(h==12){
            string newh = "00";
            string newTime = newh.append(s.substr(2,6));
            return newTime;
        }else{
            return s.substr(0,size-2);
        }
    }
    else{
        string hh = s.substr(0,2);
        int h = stoi(hh);
        if(h==12){
            return s.substr(0,size-2);
        }
        int inPM = h+12;
        string newh = to_string(inPM);
        string newTime = newh.append(s.substr(2,6));
        return newTime;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
