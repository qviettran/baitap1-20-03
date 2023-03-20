#include<iostream>
using namespace std;

// ham kiem tra can bac 2
int funtioncheck(int x)
{
    int left = 1;
    while (left<=x)
    {
        // tim diem giua 
        int mid = (left+x)/2;
        if (mid * mid == x){

            return mid;
        }
        if (mid*mid < x)
        {
            /* code */
            left = mid+1;
        }
        else{
            x = mid-1;
        }
        return x;
    }
    
}
int main(){
    int value;
    cout << "nhap bien value";
    cin >> value;

    // truyen bien value vao ham de tim can bac 2
    int result = funtioncheck(value);
    // hien thi ket qua ra man hinh
    cout << result << endl;
    return 0;
}