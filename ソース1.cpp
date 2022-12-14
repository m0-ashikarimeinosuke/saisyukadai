#include<iostream>
#include<fstream>
#include<vector>
using namespace std;


struct Week {
    int year;
    int month;
    int day;

    void setYear(int newYear) { year = newYear; }
    int getYear() { return year; }
    void setMonth(int newMonth) { month = newMonth; }
    int getMonth() { return month; }
    void setDay(int newDay) { day = newDay; }
    int getDay() { return day; }
};


int main() {
    ifstream infile("test.txt");
    int Year;
    int Month;
    int Day;
    int w = {};

    vector<Week>v;
    size_t s = v.size();
    int i = 0;

    cout << "特定の年月日の曜日を求めた結果を,以下に示す.\n" << endl;

 

    while (infile >> Year >> Month >> Day) {
        v.emplace_back();
        v[i].setYear(Year);
        v[i].setMonth(Month);
        v[i].setDay(Day);

      vector<int>x = { 0,1,2,3,4,5,6 };
         auto it = x.begin();

    if (v[i].getYear() < 1583) {
        w = 7;
        }
           
    else if (v[i].getMonth() < 1 || v[i].getMonth() > 12 || v[i].getDay() < 1 || v[i].getDay() > 31) {
        w = 8;
        }

    else if ((v[i].getMonth() == 4 || v[i].getMonth() == 6 || v[i].getMonth() == 9 || v[i].getMonth() == 11) && v[i].getDay() > 30) {
        w = 8;
        }

    else if (v[i].getMonth() == 2 && v[i].getYear() % 4 == 0 && v[i].getDay() > 29) {
        w = 8;
        }

    else if (v[i].getMonth() == 2 && (v[i].getYear() % 4 != 0 || (v[i].getYear() % 100 == 0 && v[i].getYear() % 400 != 0)) && v[i].getDay() > 28) {
        w = 8;
        }

   
    else if (v[i].getMonth() >= 3) {
        w = (v[i].getYear() + v[i].getYear() / 4 - v[i].getYear() / 100 + v[i].getYear() / 400 + (13 * v[i].getMonth() + 8) / 5 + v[i].getDay()) % 7;
    }

    else if (v[i].getMonth() < 3) {
        w = (v[i].getYear() - 1 + (v[i].getYear() - 1) / 4 - (v[i].getYear() - 1) / 100 + (v[i].getYear() - 1) / 400 + (13 * (v[i].getMonth() + 12) + 8) / 5 + v[i].getDay()) % 7;
    }


            if (w == *it + 0) {
                cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "日曜日である." << endl;
            }

            else if (w == *it + 1) {
                cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "月曜日である." << endl;   
            }

            else if (w == *it + 2) {
                cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "火曜日である." << endl;   
            }

            else if (w == *it + 3) {
                cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "水曜日である." << endl;    
            }

            else if (w == *it + 4) {
                cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "木曜日である." << endl;   
            }

            else if (w == *it + 5) {
                cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "金曜日である." << endl;    
            }

            else if (w == *it + 6) {
                cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "土曜日である." << endl;   
            }


       else if (w == 7) {
          cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "有効範囲外であるため求められない." << endl;
       }
    
       else if (w == 8) {
          cout << v[i].getYear() << "年" << v[i].getMonth() << "月" << v[i].getDay() << "日は," << "存在しない." << endl;
       }
    }
}   