#include <iostream>
using namespace std;
#define N 10
int main (){
int arrayNums [N] =  {0, 12, 5, 6, 2, 11, 7, 4, 0, 3};
int aux;
for (int j=0; j<(N-1); j++) {
for (int i = 0; i < N; i++) {
    if (arrayNums [i] < arrayNums [i+1]) {
        aux = arrayNums [i+1];
        arrayNums [i+1] = arrayNums [i];
        arrayNums [i] = aux;
        }
    }
}

for (int i = 0; i < N; i++) {
    // cout << "\n #" << (i+1) << " = " << arrayNums [i];
    cout << "\n" << arrayNums[i];
}
cout << "\n *******   F I M   ******";
return 0;
}
