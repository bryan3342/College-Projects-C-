#include <iostream>
using namespace std;

 bool Queen(int a[], int Column){
        
    for(int i=0;i < Column;i++){ 
        
     if((a[i] == a[Column]) || (abs(a[Column] - a[i]) == (Column - i))) {
        
       return false;
        
            }
       
        }
        return true;
    }
   
   void backtrack(int &Column){
       
        Column--;
       
        if(Column == -1) exit(1);
      
    }

    
   void print(int board[]) {
    string ws = "⬛️";
    string bs = "⬜️"; 
    string wq = "♕";  

    string newBoard[8][8];
    
    static int count =0;
    
       count++;
    
    cout<<"\nAttempt - # " << count << "\n" << endl;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                newBoard[i][j] = ws;
            }
            else {
                newBoard[i][j] = bs;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        int row = board[i];
        if ((i + row) % 2 == 0) {
            newBoard[row][i] = wq;
        } else {
        	newBoard[row][i] = wq;
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << newBoard[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                newBoard[i][j] = ws;
            }
            else {
                newBoard[i][j] = bs;
            }
        }
    }
}
    int main(){
    
      int a[8]; a[0] =0;
    
      int c=1;
      
      bool FalseBacktrack=false;
      
      while(1){
    
        while(c<8){ 
    
         if(!FalseBacktrack) 
    
          a[c]=-1;  
    
            FalseBacktrack=false;
    
              while(a[c]<8){ 
    
                a[c]++;
                  
                 
                    while(a[c]==8){
    
                      backtrack(c);
    
                       a[c]++;
                                  
                     }
               
                  if(Queen(a, c))
    
                     break;
                                   
              }
    
          c++; 
     }
     
      
     print (a); 
     
     backtrack(c);
     
     FalseBacktrack = true;
     
     cout << "\n====================" << endl;
     
   
    }
   
   
}
             
