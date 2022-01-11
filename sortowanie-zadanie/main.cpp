#include <iostream>
#include <cmath>
using namespace std;

void wypisztablice(int tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}


void sortowanie_babelkowe(int tab[], int n)
{
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++)
        if(tab[j-1]>tab[j])
            swap(tab[j-1], tab[j]);
}


void sortowanie_przez_wstawianie(int tab[], int n)
{
     int pom, j;
     for(int i=1; i<n; i++)
     {
         pom = tab[i];
         j = i-1;
         while(j>=0 && tab[j]>pom)
        {
                tab[j+1] = tab[j];
                --j;
        }
        tab[j+1] = pom;
     }
}

void selection_sort(int tab[],int n)
{
    int mn_index;
    for(int i=0;i<n-1;i++)
    {
        mn_index = i;
        for(int j=i+1;j<n;j++)
            if(tab[j]<tab[mn_index])
      mn_index = j;
    swap(tab[i], tab[mn_index]);
  }
}



int main()
{
    int tab1[10]={1,6,45,3,456,45,6,3465,345,420};
    sortowanie_babelkowe(tab1, 10);
    wypisztablice(tab1, 10);
    
    int tab2[10]={1,6,45,3,456,45,6,3465,345,420};
    sortowanie_przez_wstawianie(tab2, 10);
    wypisztablice(tab2, 10);
    
    int tab3[10]={1,6,45,3,456,45,6,3465,345,420};
    selection_sort(tab3, 10);
    wypisztablice(tab3, 10);
    
    int tab4[10]={1,6,45,3,456,45,6,3465,345,420};
    sort(tab4, tab4+10);
    wypisztablice(tab4, 10);
    
    return 0;
}
