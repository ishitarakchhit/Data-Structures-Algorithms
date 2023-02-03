/*
3
44
555
6666
555
44
3
*/

#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size of fancy pattern: ";
    cin>>n;
    
    //loops for printing the upper part of pattern
    for (int row = 0; row < n; row++)
    {   int count=row+3;

        //loop for prinitng the pattern
        for (int col = 0; col < row+1; col++)
        {
            cout<<count;
        }
        cout<<endl;
    }
    
    //loops for printing the lower part of pattern
    for (int row = 1; row < n; row++)
    {   int count= n-row+2;
    
        //loop for printing the pattern
        for (int col = 0; col < n-row; col++)
        {
            cout<<count;
        }
        cout<<endl;
        
    }
    
    


}
