#include<bits/stdc++.h>
using namespace std;

struct Node{
    string city;
    int temp;
    int rainfall;
    int humidity;
    string time;
    Node(string c, string ti ,int tem, int r, int h) {
        city=c; time=ti; temp=tem; rainfall=r; humidity=h;
    }
};

void InsertionSort(vector <Node*> &arr){
    int i, j;
    Node* key;
    int n = arr.size();
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j]->city > key->city)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(vector <Node*> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
        cout << i+1 << ". " <<arr[i]->city << " " << arr[i]->temp << " " << arr[i]->time << " " << arr[i]->rainfall<<"  " << arr[i]->humidity <<endl;
}

int main(){

    Node* data1 = new Node("Kolkata", "00:00", 26, 50, 70);
    Node* data2 = new Node("Pune", "00,30", 22, 23, 30);
    Node* data3 = new Node();
    Node* data4 = new Node();
    Node* data5 = new Node();
    Node* data6 = new Node();
    Node* data7 = new Node();
    Node* data8 = new Node();
    Node* data9 = new Node();
    Node* data10 = new Node();
    Node* data11 = new Node();
    Node* data12 = new Node();
    Node* data13 = new Node();
    Node* data14 = new Node();
    Node* data15 = new Node();
    Node* data16 = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    Node* data = new Node();
    vector <Node*> ans;
    ans.push_back(data1);
    ans.push_back(data2);
    InsertionSort(ans);
    printArray(ans);
}
