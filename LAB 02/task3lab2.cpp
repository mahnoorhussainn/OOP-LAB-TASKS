#include <iostream>
using namespace std;

bool hasSubsetSum(int arr[], int size, int targetSum) {

    if (targetSum == 0) return true; 
    if (size == 0) return false; 

    
    if (arr[size - 1] > targetSum) {
        return hasSubsetSum(arr, size - 1, targetSum);
    }

    return hasSubsetSum(arr, size - 1, targetSum) ||
           hasSubsetSum(arr, size - 1, targetSum - arr[size - 1]);
}
int main(){

    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    
    int size=10;
    int arr[size],targetSum;
    cout<< "Enter elements of the array "<<endl;
    
    for(int i=0;i<10;i++){
        cin>> arr[i];
    }

    cout<< "Array elements are "<<endl;
    
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Enter target sum ";
    cin>>targetSum;

    if (hasSubsetSum(arr, size, targetSum)) {
        cout << "Subset with sum " << targetSum << " exists." << endl;
    } else {
        cout << "No subset with sum " << targetSum << " exists." << endl;
    }

}
