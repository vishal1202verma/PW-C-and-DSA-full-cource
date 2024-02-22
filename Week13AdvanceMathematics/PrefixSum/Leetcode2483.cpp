#include<iostream>
#include<string>
using namespace std;
int bestClosingTime(string customers) {
        int maxscore = 0, score = 0, besthour = -1;
        for(int i = 0; i < customers.size(); i++) {
            score += (customers[i] == 'Y') ? 1 : -1;
            if(score > maxscore) {
                maxscore = score;
                besthour = i;
            }
        }
        return besthour + 1;
    }

int main (){
string customers = "YNYY";
cout<<bestClosingTime(customers);




}