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
    std::cout << "Hello, World!" << std::endl;
    return 0;
}