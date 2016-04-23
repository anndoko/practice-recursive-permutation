#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char a[8];
int iterations = 0;

/*------ swap -------*/
void swap(char *first, char *second){
    char temp = *first;
    *first = *second;
    *second = temp;
}

/*------ perm -------*/
int perm (char *p, const int first, const int length){
    
    if (first == length - 1) { // an ending point
        for (int i = 0; i < length ;i ++)
        cout << a[i] << " ";
        cout << endl;
        iterations ++;
    }
    
    else for (int i = first; i < length; i++) {
        swap(&p[first], &p[i]);
        perm(p, first + 1, length);
        swap(&p[first], &p[i]);
        // return to original configuration
    }

    return iterations;
}


/*------ MAIN -------*/
int main(){
    
    strcpy(a,"ABC");
    int n = perm(a, 0, 3);
    cout<< "The number of permutations: " << n << endl; // the number of all possible permutations is length!
    
    return 0;
}
