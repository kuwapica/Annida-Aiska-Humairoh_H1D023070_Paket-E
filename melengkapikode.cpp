#include <iostream>
#include <algorithm>

using namespace std;

//Fungsi untuk memeriksa apakah bilangan adalah bilangan prima
bool isPrime (int num) {
    if (num <= 1)
    return false;
    for(int i = 2; i * i <= num; i++) {
        if (num%i == 0)
        return false;
    }
    return true;
}

//Fungsi untuk mencari nilai di array menggunakan linear search
int linearSearch (int arr[], int n, int x) {
    {
        for (int i = 0; i < n; i++) { //nyetak array
            if (arr[i] == x){
                return i;
            }
        }
    }
    return - 1;
}

int main () {
    int n, m;
    cin >> n >> m;

    int array_A[n];
    int array_B[m];

    //input array A
    for (int i = 0; i < n; i++){
        cin >> array_A[i];
    }

    //input array B
    for (int i = 0; i < m; i++){
        cin >> array_B[i];
    }

    int results [n + m]; //menggunakan array untuk hasil
    int results_count = 0; //counter untuk hasil

    //cari nilai yang memenuhi syarat
    for (int i = 0; i < n; i++){
        
    }

    //urutkan hasil pencarian
    sort (results, results + results_count);

    //cetak hasil pencarian
    if (results_count == 0) {
        cout << "TIDAK ADA" << endl;
    } else {

    }

    return 0;
}