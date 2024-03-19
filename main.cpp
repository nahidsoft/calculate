#include<iostream>

using namespace std;
int main(){
double a,b;
char choice;
cout<<"Enter your first and  digit :";
cin>>a;
cout<<"Enter your 2nd digit :";
cin>>b;
cout<<"Enter your operation(+,-,*,/,%) :";
cin>>choice;
if(choice=='+'){
    double sum=a+b;
    cout<<"result is :"<<sum<<endl;
}
else if(choice=='-'){

    double sub=a-b;
    cout<<"result is :"<<sub<<endl;
}
else  if(choice=='*'){

    double mul=a*b;
    cout<<"result is :"<<mul<<endl;
}

else  if(choice=='%'){

    double m=a%b;
    cout<<"result is :"<<m<<endl;
}
else if(choice=='/'){
    if(b != 0){
    double div=(double)a/b;
    cout<<"result is :"<<div<<endl;
    }
    else{
        cout<<"can not divite by zero"<<endl;
    }
}
else{
    cout<<"not the number ";
}




return 0;
}
