#include<iostream>
#include<math.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
float count(){
    ifstream count("score.txt");
    int i = 0;
    string sco;
    while(getline(count , sco)){
        i++;
    }
    count.close();
    return i;
}
float mean(){
    ifstream score("score.txt");
    float mean,smean = 0;
    int i = 0;
    string sc;
    while(getline(score , sc)){
        mean = atof(sc.c_str());
        smean = smean + mean;
        i++;
    }
    score.close();
    smean = smean/i;
    return smean;
}
float B(){
    ifstream B("score.txt");
    string score;
    float s,ss=0;
    int i = 0;
    while(getline(B , score)){
        s = atof(score.c_str());
        ss = ss + pow(s,2);
        i++;     
    }
    B.close();
    ss = sqrt((ss/i)-pow(mean(),2));
    return ss;
}
int main(){
    cout << "Number of data = " << count() << endl;
    cout << "Mean = " << fixed << setprecision(3) << mean() << endl;
    cout << "Standard deviation = " << fixed << setprecision(3) << B();
    return 0;
}
