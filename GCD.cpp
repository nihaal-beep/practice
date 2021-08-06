#include <iostream>

using namespace std;
int main()
{   
    int arr[5] = {10,20,30,40,45};
    int len = sizeof(arr)/ sizeof(arr[0]);
    int gcd=0;
    for (int i=1; i<arr[0];i++)
    
    {
        int gcdcheck = 0;
        for (int j =0;j<len;j++)
        {
            if (arr[j]%i==0)
            gcdcheck++;
        }
        if (gcdcheck==len)
        
        gcd = i;
    }
    cout<<gcd; 
}
