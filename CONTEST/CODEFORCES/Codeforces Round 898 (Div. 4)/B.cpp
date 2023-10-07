#include<iostream>
using namespace std;

int main() {
    int loop;
    cin >> loop;
    while (loop--) {
        int n;
        cin >> n;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int max_product = 0;
        
        for (int i = 0; i < n; i++) {
            int product = 1;
            
            for (int j = 0; j < n; j++) {
                if (j == i) {
                    product *= (a[j] + 1);
                } else {
                    product *= a[j];
                }
            }
            
            max_product = max(max_product, product);
        }
        
        cout << max_product << endl;
    }
    return 0;
}
