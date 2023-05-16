#include<iostream>
#include<vector>
using namespace std;
int main (){
int m;
cout<<"enter row of 1st matrix :";
cin>>m;
int n;
cout<<"enter column of 1st matrix :";
cin>>n;
cout<<endl;
int p;
cout<<"enter rows of 2nd matrix :";
cin>>p;
int q;
cout<<"enter columns of 2nd matrix :";
cin>>q;
cout<<endl;
if(n==p){
    int a[m][n];
    cout<<"enter element of 1st matrix :";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           cin>>a[i][j];
        }

    }
    int b[p][q];
      cout<<"enter element of 2nd  matrix :";
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
           cin>>b[i][j];
        }

    }
    cout<<endl;
    // resultant matrix 
    int res[m][q];
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            res[i][j]  =0;
            // res[i][j] = a[i][0]*b[0][i] + a[i][1]*b[1][j ]
            for(int k=0; k<p; k++){
                res[i][j] += a[i][k]*b[k][j];
            }

        }
    }
    cout<<endl;
    //print

     for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
           cout<<res[i][j]<<" ";
        }

    cout<<endl;
    }    

    

}
else{// n!= p
    cout<<"matrix can not be multiplied ";
}

  



}