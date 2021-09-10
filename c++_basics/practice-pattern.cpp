#include<iostream>

using namespace std;

int main(){

  //floyds triangle

  int n,count=1;
  cout<< "enter the no. of rows ";
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<count <<" ";
      count++;
    }
    cout<<endl;
  }


  // half pyramid using no. of rows
  // int n;
  // cout<<"enter the no of rows: ";
  // cin>>n;

  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<i;
  // }
  // cout<<endl;
  // }

// pyramid pattern
//   int n;
// cout<<"enter the no. of rows: ";
// cin>>n;

//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//       if (j<=n-i)
//       {
//         cout<<" ";

//       }
//       else
//       {
//         cout<<"*";
//       }
//     }
    
//      cout<<endl;
//   }



// inverted half pyramid 
// int n;
// cin>>n;
// for (int i=n;i>=1;i--){
//   for(int j=1;j<=i;j++){ 
//     cout<<"*";
//   }
//   cout<<endl;

// }


// hollow reactangle pattern 
// for (int i=1;i<=row;i++){
//   for (int j=1;j<=col;j++){
//     if (i==1 || i==row || j==1 || j==col){
//       cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//   }
//   cout<<endl;
// }


// rectange pattern 
// for (int i=1;i<=row;i++){
//   for(int j=1;j<=col;j++){
//     cout<<"*";
//     }
//     cout<<endl;
// } 

 return 0;
}