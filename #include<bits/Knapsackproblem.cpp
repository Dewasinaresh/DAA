#include<bits/stdc++.h>
using namespace std;
struct Item{
	int value,weight;
	Item(int value,int weight){
	this->value=value;
	this->weight=weight;
	}
};
bool comp(Item a,Item b )
{
	double r1=(double)a.value/(double)a.weight;
	double r2=(double)b.value/(double)b.weight;
	return r1/r2;
}
//main greedy method to solve pb
double fractionalknapsack(int W,struct Item array[],int N)
{
	sort(array,array+N,comp);
	
	double final_value=0.0;
	for(int i=0;i<N;i++)
	{
		if(array[i].weight<=W)
		{
			W-=array[i].weight;
			final_value+=array[i].value;
		}
		else
		{
			final_value+=array[i].value*((double)W/(double)array[i].weight);
			break
		 } 
	
	}
	return final_value;
}
int main()
{
	int W=50;
	Item array[]={{60,10},{100,20},{120,30}};
	
	int N=sizeof(array)/sizeof(array[0]);
	cout<<fractionalknapsac(W,array,N)
	return 0;
}
