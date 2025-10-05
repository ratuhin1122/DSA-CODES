#include <iostream>
using namespace std;

int fractionalKnapsack(float wt[], float itemPrice[], int n, int capacity) {    
    int index[n];
    for (int i = 0; i < n; i++)
    {
        index[i] = i;

       
        
    }
     // Sort Items by price / weight in desc order
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                /* code */
                float r1 = itemPrice[index[i]] / wt[index[i]];
                float r2 = itemPrice[index[j]] / wt[index[j]];
                if (r1 < r2)
                {
                    swap(index[i], index[j]);
                }
            }
            
        }
        float totalProfit = 0.0;
        for (int i = 0; i < n && capacity > 0; i++)
        {
           
            int item = index[i];
            if (wt[item] <= capacity)
            {
                capacity -= wt[item];
                totalProfit += itemPrice[item];
                cout << item << " " << wt[item] << " " << itemPrice[item] << endl;
            }
            else
            {
                float fraction = capacity / wt[item];
                totalProfit += fraction * itemPrice[item];
                capacity = 0;
                cout << item << " " << wt[item] << " " << itemPrice[item] << endl;
            }
            
        }

        cout << "Total Profit: " << totalProfit << endl;
        return totalProfit;
        
}
int main (){
    int cap = 50;
    float itemPrice[] = {60, 100, 120};
    float wt[] = {10, 20, 30};
    int n = sizeof(itemPrice) / sizeof(itemPrice[0]);

    cout << fractionalKnapsack(wt, itemPrice, n, cap);

    return 0;
}