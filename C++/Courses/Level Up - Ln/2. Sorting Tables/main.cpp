#include <iostream>

void print_tab(int *tab, int n);
void merge(int *tab_a, int *tab_b, int i, int j);
void merge_sort(int *tab_a, int *tab_b, int n);

int main(){
    int n = 10;
    int test_tab[10] = {1,2,3,4,5,6,7,8,9,10};
    print_tab(test_tab, n);
    std::cout<<std::endl;
    merge_sort(test_tab, 0, n);


    std::cout<<std::endl<<std::endl;
    return 0;
}

// tab - array, n - size
void merge_sort(int *tab_a, int *tab_b, int n){
    if(n == 1) 
        merge(tab_a, 0, n, tab_b);
    else {
        // Shrink
        tab_a = new int [n/2];
        tab_b = new int [n-(n/2)];
    }

    // Split tab_a to 2 tabs -> tab_a = left, tab_b = right
    for(int i=0;i<n;i++) {
        if(i<n/2) tab_a[i] = tab_a[i];
        else tab_b[i] = tab_a[i];
    }


}

void print_tab(int *tab, int n){
    for(int i=0;i<n;i++) {
        std::cout<<"Tab["<<i<<"] = "<<tab[i]<<std::endl;
    }
}

void merge(int *tab_a, int *tab_b, int i, int j) {
    int k = i + j;
    for(int i=0;i<k;i++) {

    }
}