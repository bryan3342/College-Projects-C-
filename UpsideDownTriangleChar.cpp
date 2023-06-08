#include <iostream>
#include <fstream>
using namespace std;


void printPyramid(int n) {
    
        char alphabet;
        
        char counter = 'A';
        
        ofstream file;
    
        file.open("output.txt");
    
    if(n < 1 || n > 26) {
        
        cout << "Error. Invalid Output for n." << endl;
        
        file.close();
    
        
    }
    
    
     for(int i = n; i >= 1; i--) {
    
       for(int j = 1; j <= i; ++j){
           
           alphabet = counter + (j-1);
           
           file << alphabet << " ";
            
           
       }
            counter ++;
            
            file << "\n";
         
     }
     
     file << endl;
     
     cout << "\nSuccessfully stored in output.txt. Thank you!" << endl;
     
     file.close();

}

int main(){
    
    int n, rows;
    
    cout << "Please input a positive value less than 26" << endl;
    
    cin >> n;
    
    printPyramid(n);
   
    
    return 0;
}