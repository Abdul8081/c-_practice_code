#include<iostream>
#include<vector>
using namespace std;
int partion_mid(vector<int> &v, int si, int ei){
    int pivot_element = v[(si+ei)/2];
    int count = 0;
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(v[i]<=pivot_element) count++;
    }

    int pivot_index = si + count;

    swap(v[pivot_index], pivot_element);

    int i = si;
    int j = ei;
    while(i<pivot_index and j>pivot_index){
        if(v[i]<=pivot_element) i++;
        else if(v[j]>pivot_element) j--;
        else if(v[i]>pivot_element and v[j]<=pivot_element){
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    return pivot_index;
}
void quick_sort(vector<int> &v, int si, int ei){
    if(si>=ei) return;
    int pi = partion_mid(v, si, ei);
    quick_sort(v, si, pi-1);
    quick_sort(v, pi+1, ei);
}
int main(){
    vector<int> v = {7, 8, 2, 1, 0, 9};
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    quick_sort(v, 0, v.size()-1);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}