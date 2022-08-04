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

    cout << "“Á’è‚Ì”NŒŽ“ú‚Ì—j“ú‚ð‹‚ß‚½Œ‹‰Ê‚ð,ˆÈ‰º‚ÉŽ¦‚·.\n" << endl;

 

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
                cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "“ú—j“ú‚Å‚ ‚é." << endl;
            }

            else if (w == *it + 1) {
                cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "ŒŽ—j“ú‚Å‚ ‚é." << endl;   
            }

            else if (w == *it + 2) {
                cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "‰Î—j“ú‚Å‚ ‚é." << endl;   
            }

            else if (w == *it + 3) {
                cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "…—j“ú‚Å‚ ‚é." << endl;    
            }

            else if (w == *it + 4) {
                cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "–Ø—j“ú‚Å‚ ‚é." << endl;   
            }

            else if (w == *it + 5) {
                cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "‹à—j“ú‚Å‚ ‚é." << endl;    
            }

            else if (w == *it + 6) {
                cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "“y—j“ú‚Å‚ ‚é." << endl;   
            }


       else if (w == 7) {
          cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "—LŒø”ÍˆÍŠO‚Å‚ ‚é‚½‚ß‹‚ß‚ç‚ê‚È‚¢." << endl;
       }
    
       else if (w == 8) {
          cout << v[i].getYear() << "”N" << v[i].getMonth() << "ŒŽ" << v[i].getDay() << "“ú‚Í," << "‘¶Ý‚µ‚È‚¢." << endl;
       }
    }
}   