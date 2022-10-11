#include<iostream>
using namespace std;
int main()
  {
    cout << "Enter number of elements of your array" << endl;
    int n;
    cin  >> n;      // to take input of no. of element in an array
    int arr[n], i, elem;
    cout<<"Enter  Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];                       // to take input of array elements
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    arr[i] = elem;                     // insertion of the element
    cout<<"\nThe New Array is:\n";     
    for(i=0; i<n+1; i++)              
        cout<<arr[i]<<"  ";            // output of new array
    cout<<endl;
    return 0;
  }
