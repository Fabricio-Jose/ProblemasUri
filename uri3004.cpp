#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int A[n][4];
    for (int i=0; i<n; i++){
        for (int j=0; j<4; j++){
            cin >> A[i][j];
        }
    }
    for (int i=0; i<n; i++){
        if (A[i][0] < A[i][2] && A[i][1] < A[i][3]){
            cout << "S" <<endl;
        }
        else if (A[i][0] < A[i][3] && A[i][1] < A[i][2]){
            cout << "S" <<endl;
        }
        else cout << "N" <<endl;
    }
    return 0;
}
