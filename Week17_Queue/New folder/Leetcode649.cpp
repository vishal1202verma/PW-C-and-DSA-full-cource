#include<iostream>
#include<vector>
#include<queue>
using namespace std;
string predictPartyVictory(string senate) {
        int n = senate.length();
        // queue-1 in this we will store all string's index
        queue<int>q;
        for( int i=0; i<n; i++){
            q.push(i);
        }
        // queue-2 in this we will stores R char index 
        queue<int>r;
        for( int i=0; i<n; i++){
            if( senate[i] == 'R'){
                r.push(i);
            }
        }
        // queue-3 in this we will sotre D char index 
        queue<int>d;
        for( int i=0; i<senate.length(); i++){
            if( senate[i] == 'D'){
                d.push(i);
            }
        }

        // now we will solve this question using these three queues
        while( q.size()>1){
            if( senate[q.front()] == 'X') q.pop(); // agge badhna hain q se
            else if ( senate[q.front()] == 'R'){ // then check for vectory or retrive on d queue
             // check for vectory
             if( d.size() == 0) return "Radiant"; 
             else{ // take rights the next d
                senate[d.front()] = 'X';
                d.pop();
                // work is done
                q.push(q.front());
                q.pop();
                r.push(r.front());
                r.pop();
             }

            }
            else{ //senate[q.front() == 'D']
              // check for vectory
             if( r.size() == 0) return "Dire"; 
             else{ // take rights the next R
                senate[r.front()] = 'X';
                r.pop();
                // work is done
                q.push(q.front());
                q.pop();
                d.push(d.front());
                d.pop();
             }



            }
        }
        if( senate[q.front()] == 'R') return "Radiant";
        else return "Dire";


    }
    int main (){
    //  Input: senate = "RD"
    // Output: "Radiant"
     string senate = "RDRRDR";
     cout<<predictPartyVictory(senate);
     


    }