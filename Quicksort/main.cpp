#include <iostream>
using namespace std;
void Quicksort(int* arr,int izq,int der)
{
    int i=izq,j=der,tmp;
    int p=arr[(izq+der)/2];
    while (i<=j)
    {
        while (arr[i]<p) i++;
        while (arr[j]>p)j--;
        if (i<=j)
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            i++;j--;
        }
    }
    if (izq<j) Quicksort(arr,izq,j);
    if (i<der) Quicksort(arr,i,der);
}
int main() {
    int arreglo[10]={43,23,-12,34,43,54,67,23,63,10};
    Quicksort(arreglo,0,9);
    int i=0;
    for(i;i<10;i++) cout<<arreglo[i]<<",";
    return 0;
}