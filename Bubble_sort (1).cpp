#include<iostream>
#include<conio.h>
using namespace std;
void Bubble_sort(int arr[],int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Bubble_sort(arr,n);
    getch();
}
