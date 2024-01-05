#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){

    double sum = 0;

    for(int i = 0; i < N ; i++){

        sum += A[i];

    }

    B[0] = sum/N;

    double eueisum = 0;

    for(int i = 0; i < N ; i++){

        double euei = (A[i] - B[0]);

        double wow = pow(euei,2);

        eueisum += wow; 

    }

    double parepueng = eueisum/N;
    
    B[1] = sqrt(parepueng);

    double summuply = 1;

    for(int i = 0; i < N ; i++){

        summuply *= A[i];

    }

    B[2] = pow(summuply, 1.0/N);

    double sumsouth = 0;

    for(int i = 0 ; i < N ; i++){

        sumsouth += 1/A[i];

    }

    B[3] = N/sumsouth;

    double Max = A[0];

    for(int i = 1 ; i < N+1 ; i++){

        if(Max < A[i-1]){

            Max = A[i-1];

        }
    }

    B[4] = Max;

    double Min = A[0];
    for(int i = 1 ; i < N+1 ; i++){

        if(Min > A[i-1]){

            Min = A[i-1];


        }

    }

    B[5] = Min;


}