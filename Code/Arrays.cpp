#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // static arrays

     int numbers[5]={10,20,30,40,50};

     string foods[3]={"pizza","burger","coke"};

     char alphabets[3]={'a','b','c'};

     cout<<numbers<<endl;

     cout<<numbers[4]<<endl;

     numbers[2]=25;

     for(int val:numbers){
         cout<<val<<" ";
     }


    //dynamic arrays

     int size;

     cout<<"enter the size of the array:";

     cin>>size;

    int* numbers1=new int[size];

    for(int i=0;i<size;i++){
         cout<<"enter element"<<i<<":";
         cin>>numbers1[i];
    }

    for(int i=0;i<size;i++){
         cout<<numbers1[i]<<" ";
    }


    vector<int> numbers2={10,20,30,40,50};

    numbers2.push_back(60);

    numbers2.push_back(70);

    numbers2.insert(numbers2.begin()+3,45);

    for(int i=0;i<numbers2.size();i++){
        cout<<numbers2[i]<<" ";
    }

    cout<<endl;

    numbers2.erase(numbers2.begin()+3);


    for(int i=0;i<numbers2.size();i++){
        cout<<numbers[i]<<" ";
    }
    











    return 0;
}