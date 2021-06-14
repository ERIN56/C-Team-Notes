int main() {
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(10);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);
    lt.push_back(10);

    for(list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
        cout<<*iter<<" ";           // 10 20 30 10 40 50 10 10 
    cout<<endl;

    lt.remove(10);      // 10 원소의 노드들 모두 제거
    for(list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
        cout<<*iter<<" ";          // 20 30 40 50
    cout<<endl;
}