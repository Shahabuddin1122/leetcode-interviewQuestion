#include<bits/stdc++.h>

using namespace std;

int main(){
    /*
    int m,n;
    cout<<"Enter m and n: "<<endl;
    cin>>m>>n;
    cout<<"value of m & n :"<<m<<" "<<n<<endl;
    int nums1[m+n],nums2[n];
    for(int i=0;i<m+n;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
    */
    int nums1[6] = {2,2,3,0,0,0};
    int nums2[3] = {1,5,6};
    int m=3,n=3;


    cout<<"Sorted Arrays: "<<endl;


    int last = m + n - 1;
    int mIndex = m - 1;
    int nIndex = n - 1;

    while (mIndex >= 0 && nIndex >= 0) {
        if (nums1[mIndex] > nums2[nIndex]) {
            nums1[last] = nums1[mIndex];
            mIndex--;
        } else {
            nums1[last] = nums2[nIndex];
            nIndex--;
        }
        last--;
    }
    //handle remaining item
    while(nIndex >=0){
        nums1[last]=nums2[nIndex];
        nIndex--;
        last--;
    }


    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }






    return 0;
}
