#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; 
    
    string CA101 = "A B B A D C C A B D C C A B D"; 
    string CA102 = "A C C A B C D D B B C D D B B"; 
    
    while (t--) {
        int cauhoi = 15; 
        double diem = 0.0;
        
        int n;
        cin >> n;
        
        cin.ignore();
        string thisinh;
        getline(cin, thisinh);
        
        string CA;
        if (n == 101) {
            CA = CA101;
        } else if (n == 102) {
            CA = CA102;
        }
        for (int i = 0; i < CA.size(); i+=2) {
            if (CA[i] == thisinh[i]) {
                diem++; 
            }
        }
        double maxpoint = cauhoi;
        double point = (diem / maxpoint ) * 10.0; 
        cout << fixed << setprecision(2) << point << endl;
    }
    
    return 0;
}



