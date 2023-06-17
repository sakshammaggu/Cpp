/*
Create a class called 'Matrix' containing constructor that initializes the number of rows and the number
of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.
*/
#include<iostream>
using namespace std;
class matrix
{
    private:
    int no_of_rows, no_of_columns;

    public:

    //to get number of rows
    int get_number_of_rows()
    {
        return no_of_rows;
    }
    void set_number_of_rows(int no_of_rows )
    {
        this->no_of_rows=no_of_rows;
    }

    //to get number of columns
    int get_number_of_columns()
    {
        return no_of_columns;
    }
    void set_number_of_columns(int no_of_columns )
    {
        this->no_of_columns=no_of_columns;
    }

    //assigning position to elements
    void assigning_position()
    {
        int mat[no_of_rows][no_of_columns];
        for (int i=0; i<no_of_rows; i++)
        {
            for (int j=0; j<no_of_columns; j++)
            {
                cout<<"Enter element ["<<i<<"]"<<"["<<j<<"] :"<<endl;
                cin>>mat[i][j];
            }
        }
        cout<<endl;
        for (int i=0; i<no_of_rows; i++)
        {
            for (int j=0; j<no_of_columns; j++)
            {
                cout<<"Element at ["<<i<<"]"<<"["<<j<<"] :"<<mat[i][j]<<endl;
            }
        }
    }
    
    //adding two matrices
    void adding_two_matrices()
    {
        int mat1[no_of_rows][no_of_columns], mat2[no_of_rows][no_of_columns];
        for (int i=0; i<no_of_rows; i++)
        {
            for (int j=0; j<no_of_columns; j++)
            {
                cout<<"Enter element of matrix 1 at ["<<i<<"]"<<"["<<j<<"] :"<<endl;
                cin>>mat1[i][j];
            }
        }
        cout<<endl;
        for (int i=0; i<no_of_rows; i++)
        {
            for (int j=0; j<no_of_columns; j++)
            {
                cout<<"Enter element of matrix 2 at ["<<i<<"]"<<"["<<j<<"] :"<<endl;
                cin>>mat2[i][j];
            }
        }
        cout<<endl;
        for (int i=0; i<no_of_rows; i++)
        {
            for (int j=0; j<no_of_columns; j++)
            {
                cout<<"Element at ["<<i<<"]"<<"["<<j<<"] of added matrix:"<<mat1[i][j]+mat2[i][j]<<endl;
            }
        }
    }

    //subtracting two matrices
    void subtracting_two_matrices()
    {
        int mat1[no_of_rows][no_of_columns], mat2[no_of_rows][no_of_columns];
        for (int i=0; i<no_of_rows; i++)
        {
            for (int j=0; j<no_of_columns; j++)
            {
                cout<<"Enter element of matrix 1 at ["<<i<<"]"<<"["<<j<<"] :"<<endl;
                cin>>mat1[i][j];
            }
        }
        cout<<endl;
        for (int i=0; i<no_of_rows; i++)
        {
            for (int j=0; j<no_of_columns; j++)
            {
                cout<<"Enter element of matrix 2 at ["<<i<<"]"<<"["<<j<<"] :"<<endl;
                cin>>mat2[i][j];
            }
        }
        cout<<endl;
        for (int i=0; i<no_of_rows; i++)
        {
            for (int j=0; j<no_of_columns; j++)
            {
                cout<<"Element at ["<<i<<"]"<<"["<<j<<"] of subtracted matrix:"<<mat1[i][j]-mat2[i][j]<<endl;
            }
        }
    }
};
int main()
{
    int x, y;
    cout<<"Enter number of rows: "<<endl;
    cin>>x;
    cout<<"Enter number of columns: "<<endl;
    cin>>y;
    matrix m;
    m.set_number_of_rows(x); m.set_number_of_columns(y);
    cout<<endl;
    cout<<"Number of rows: "<<m.get_number_of_rows()<<endl;
    cout<<"Number of columns: "<<m.get_number_of_columns()<<endl;
    cout<<endl;
    m.assigning_position();
    cout<<endl;
    cout<<"***ADDING TWO MATRICES***"<<endl;
    cout<<"__________________________"<<endl;
    m.adding_two_matrices();
    cout<<endl;
    cout<<"***SUBTRACTING TWO MATRICES***"<<endl;
    cout<<"________________________________"<<endl;
    m.subtracting_two_matrices();
    return 0;
}