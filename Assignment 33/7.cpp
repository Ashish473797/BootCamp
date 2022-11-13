/*Create a base class called Matrix. Use this class to store 4 int type values that could be used to calculate 
determinants and create matrices. Create class calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix.*/
#include<iostream>
using namespace std;
class Matrix
{
    protected:
        int matrix[4];
    public:
        Matrix()
        {
            cout<<"Enter 2*2 Matrix: -"<<endl;
            for(int i=0; i<4; i++)
            cin>>matrix[i];
        }

};
class Determinant : public Matrix
{
    public:
    void showDeterminant()
    {
        cout<<"Determinant is "<<matrix[0]*matrix[3] - matrix[1]*matrix[2]<<endl;
    }
};
int main()
{
    Determinant d1;
    d1.showDeterminant();
    return 0;
}