//matrix-vector multiplication
#include<iostream>
using namespace std;
class matrix;
class vector
{
    int e_[3], n_;
    public:
    vector(int n): n_(n)
    {
        for (int i=0; i<n_; ++i)
        {
            e_[i]=i+1;
        }
    }
    void clear()
    {
        for (int i=0; i<n_; ++i)
        {
            e_[i]=0;
        }
    }
    void show()
    {
        for (int i=0; i<n_; ++i)
        {
            cout<<e_[i]<<" ";
        }
        cout<<endl<<endl;
    }
    friend vector prod(matrix *pM, vector *pV);
};
class matrix
{
    int e_[3][3], m_, n_;
    public:
    matrix(int m, int n): m_(m), n_(n)
    {
        for (int i=0; i<m_; ++i)
        {
            for (int j=0; j<n_; ++j)
            {
                e_[i][j]=i;
            }
        }
    }
    void show()
    {
        for (int i=0; i<m_; ++i)
        {
            for (int j=0; j<n_; ++j)
            {
                cout<<e_[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    friend vector prod(matrix *pM, vector *pV);
};
vector prod(matrix *pM, vector *pV)
{
    vector v(pM->m_); v.clear();
    for (int i=0; i<pM->m_; i++)
    {
        for (int j=0; j<pM->n_; j++)
        {
            v.e_[i]+=(pM->e_[i][j])*(pV->e_[j]);
        }
    }
    return v;
}
int main()
{
    matrix M(2, 3);
    vector V(3);
    vector pv=prod(&M, &V);
    M.show();
    V.show();
    pv.show();
}