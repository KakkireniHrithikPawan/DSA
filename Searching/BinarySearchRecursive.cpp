#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int x, int l, int h){
	if(l>h){
		return -1;
	}
	int mid = (l+h)/2;
	if(arr[mid] == x){
		return mid;
	}
	else if(arr[mid] > x){
		return binarySearch(arr,x,l,mid-1);
	}
	else{
		return binarySearch(arr,x,l+1,h);
	}
}
int main(){
	
	return 0;
}