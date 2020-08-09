#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <regex>
using namespace std;

int chart(int year, int month, int day) {//関数の定義
    int h = (day + (26*(month+1)/10)+(year%100)+((year%100)/4)-(year/50)+(year/400))%7;
    return h;
    }

int main() {//年月日の指定
    int year1 = 2020;
    int month1 = 10;
    int day1 = 20;
    int h1 = (day1 + (26*(month1+1)/10)+(year1%100)+((year1%100)/4)-(year1/50)+(year1/400))%7;
    
    int year2 = 2020;
    int month2 = 8;
    int day2 = 10;
    int h2 = (day2 + (26*(month2+1)/10)+(year2%100)+((year2%100)/4)-(year2/50)+(year2/400))%7;
    

    if (h1 == 0) {//数字での出力を曜日に変換
        cout << "h1は土曜日\n";
    } else if (h1 == 1) {
        cout << "h1は日曜日\n";
    }else if (h1 == 2) {
        cout << "h1は月曜日\n";
    }else if (h1 == 3) {
        cout << "h1は火曜日\n";
    }else if (h1 == 4) {
        cout << "h1は水曜日\n";
    }else if (h1 == 5) {
        cout << "h1は木曜日\n";
    }else if (h1 == 6) {
        cout << "h1は金曜日\n";
    }
    
    if (h2 == 0) {
        cout << "h2は土曜日\n";
    } else if (h2 == 1) {
        cout << "h2は日曜日\n";
    }else if (h2 == 2) {
        cout << "h2は月曜日\n";
    }else if (h2 == 3) {
        cout << "h2は火曜日\n";
    }else if (h2 == 4) {
        cout << "h2は水曜日\n";
    }else if (h2 == 5) {
        cout << "h2は木曜日\n";
    }else if (h2 == 6) {
        cout << "h2は金曜日\n";
    }
    
    vector<int> v{ 20201020, 20200810};//vectorに格納
    sort(v.begin(), v.end());
    for(auto i : v) cout << i << "," ;
    
    ofstream outfile ("chart.txt"); //ファイル出力
    size_t s = v.size();
    for (size_t i = 0; i < s; ++i) {
        outfile << v[i] << endl;
    }
            
        }
        
