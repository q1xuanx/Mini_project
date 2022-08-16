#include<bits/stdc++.h>
using namespace std;
bool login (){
    string username, password, un, pw;
    cout << "\nEnter username: ";
    cin >> username;
    cout << "\nEnter password: ";
    cin >> password;
    ifstream read("C:/Visual_Code_CP/\\" + username + ".txt");
    getline(read,un);
    getline(read,pw);
    if (un == username and pw == password){
        return true;
    }else {
        return false;
    }
}
int main(){
    int choice;
    cout << "1.Register\n2.Login\nYour choice: ";
    cin >> choice;
    if (choice == 1){
        string username, passwd;
        cout << "Selected username: "; cin >> username;
        cout << "Selected password: "; cin >> passwd;
        ofstream file;
        file.open("C:/Visual_Code_CP/\\" + username + ".txt");
        file << username << endl << passwd;
        file.close();
        main();
    }
    if (choice == 2){
        bool status = login();
        if (status){
            cout << "Login succes !" << "\n";
            return 1;
            
        }else {
            cout << "Login failed !" << "\n";
            return 0;
        }
    }
}
