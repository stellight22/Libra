#include <iostream>

using namespace std;
int main() {
    const int ARRAY_SZ = 6;
    int Nums[] = {4,8,3,1,6,4};
    cout << "Common errors arrays" << endl;

    /*
     // cout or cin entire array
     cout<<Nums<<endl;
     cin>>Nums;
    */


    /*
     // one off error
     for (int i=1;i<=ARRAY_SZ; i++)
        cout<<Nums[i]<<endl;

     for (int i=0;i<=ARRAY_SZ; i++)
        cout<<Nums[i]<<endl;
    */


    /*
     // range based loop uses copy of array element
     for (int &n : Nums)
       cin>>n;

    for (int n : Nums)
        cout<<n<<endl;
    */

/*
     // array element vs array value
     int i=0;
     cout<<"Nums["<<i<<"]="<<Nums[i]<<endl;
     Nums[i] = Nums[++i];
     cout<<"Nums["<<i<<"]="<<Nums[i]<<endl;

     cout<<"Nums["<<i<<"]="<<Nums[i]<<endl;
     Nums[i] = ++Nums[i];
     cout<<"Nums["<<i<<"]="<<Nums[i]<<endl;
*/


/*
     //copy 1 array to another array

     int NewArray[ARRAY_SZ];
     NewArray=Nums;
*/

    return 0;
}