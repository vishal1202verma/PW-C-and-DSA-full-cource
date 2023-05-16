 #include<iostream>
 using namespace std;
 int main(){
 int arr[3][3] = {1, 2, 3, 7, 5, 6, 7, 8, 9 };
 for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
                                          
    }
    cout<<endl;
 }

// print the transpose matrix 
  for(int j=0; j<3; j++){
    for(int i=0; i<3; i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
// // swap the colum of matrix
//     for(int i=0; i<3; i++){
//         for(int j = 0; i<3; i++){
//             int temp =arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
    // printing the roated matrix by reverseing the array 90  degree 
    // we reverse each row of transpose matrix
    for (int k=0; k<3; k++){
        int i=0; 
        int j= 2;
        while(i<=j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
 
    
 }
    
