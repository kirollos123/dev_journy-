#include <iostream>
using namespace std;
#include <string>

int main()
{
#include <iostream>
    using namespace std;
#include <string>
   
    
        string letters[2][4] = {
            {"A", "B", "C", "D"},
            {"E", "F", "G", "H"}
        };
        for ( int i =0 ;i<2 ;i++){
            for (int j =0 ; j<4; j++){
                cout << letters[i][j] << " ";
            }
        }
    

    return 0;
}
