//This is the 1st mathod to reverse the string

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string main_str="Ajay Singhadiya";//Initialising the string
    string auxilari_str="";//same
    int i,j;

    for(i=0;main_str[i]!='\0';i++)
    {

    }//updating the value of the variable i
    i=i-1;//Final update of i from the last element of the string
    for( j=0;i>=0;j++,i--)
    {
        auxilari_str+=main_str[i];//Adding the elements into the auxilary str of the main str
    }

    // auxilari_str[j]='\0';No need to do this stap because string adds this stap by itself

    cout<<"The reversed string is :"<<auxilari_str<<endl;
    return 0;
}
