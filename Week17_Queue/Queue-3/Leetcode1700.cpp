// Number of student unable to eat lunch
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
 int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int ans = 0;
        queue<int>q;
        // q is ready
        for( int i=0; i<n; i++){
              q.push(students[i]);
        } 
        // now will matches the preferences of students with sandwiches if macthes not correct then 
        //  we will push back student until matches correct
        int i = 0; // to  travrse the sandewiches vector
        int count = 0;
        while( q.size() >0 && count!= q.size()){
            int x = q.front();
            if( x == sandwiches[i]){
                count =0; // vvimp
                q.pop();
                i++;
            }
            else{
                q.push(x);
                q.pop();
                count++;
            
            }
        } 
        return q.size();        

    }
    int main (){
    //  Input: students = [1,1,0,0], sandwiches = [0,1,0,1]
    //  Output: 0 
    vector<int>students;
    students.push_back(1);
    students.push_back(1);
    students.push_back(0);
    students.push_back(0);
    vector<int>sandwiches;
    sandwiches.push_back(0);
    sandwiches.push_back(1);
    sandwiches.push_back(0);
    sandwiches.push_back(1);
    cout<<countStudents(students, sandwiches);
    

    }