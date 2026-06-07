#include <iostream>
#include <cstring>
using namespace std;


void printName (char name[5][25] , int n ){
    cout << "====> Student Name <====" << endl;
    for(int i = 0 ; i < n ; i++){
        cout<< i+1<< name[i] << endl;
    }
    cout<<"===============> end" <<endl;
}
int searchName (char name[5][25], int n , char target []){
    for(int i =0 ; i < n ; i++){
        if(strcmp(name[i] , target)){
            return i;
        }
    }
    return -1;
}

int main() {
    cout <<"2025F-BCE-226"<<endl;
    int n ;
    cout<< "Enter n => ";
    cin >> n;
    cin.ignore();
    char studentName[5][25];
    
    
    for(int i = 0; i < n ; i++){
        cout<<"Enter Name "<< i+1;
        cin.getline(studentName[i] , 25);
    }
    
    printName(studentName , n );
    
    char target[25];
    cout<<"enter name to search =>" ;
    cin.getline(target , 25);
    
    int position = searchName(studentName , n , target);
    
    if(position != -1){
        cout<<"Name Found " << endl;
    }else{
        cout <<"Not Found" << endl;
    }
    return 0;
}-