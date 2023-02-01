#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cout <<"The following program gets the age mean and median respectively\n";
    vector<double>ages;
    cout<<"place the ages below\n";
    for(double age;cin>>age;){
        ages.push_back(age);//the following reads and stores the ages in the vector

        //finding the mean
        double sum = 0;
        for(int x:ages){
            sum +=x;
            double t_mean = sum/ages.size();
            cout<<"mean is "<<t_mean;
        }
        //finding the median
        sort(ages.begin(),ages.end());
        for(int i = 0;i<ages.size();++i){
            cout<<"The median is "<<ages[ages.size()/2]<<endl;
        }


    }
}