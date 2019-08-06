#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct  review{
    string title;
    int rating;
};
void show(const review & r1);
bool operator<(const review & r1,const review & r2){
    if(r1.title < r2.title){
        return true;
    }else if (r1.title == r2.title && r1.rating < r2.rating){
        return true;
    }else {
        return false;
    }
}

bool worseThan(const review&r1,const review &r2){
    if(r1.rating < r2.rating){
        return true;
    }else{
        return false;
    }
}
int main(){
    vector<review> books;
    books.push_back(review{"c",4});
    books.push_back(review{"a",1});
    books.push_back(review{"d",3});
    books.push_back(review{"e",5});
    //#1.  print only
    for_each(books.begin(),books.end(),show);
    //#2.sort operator<
    cout<<"after sort operator<"<<endl;
    sort(books.begin(),books.end());
    for_each(books.begin(),books.end(),show);

    //#3. sort worsethan
    cout<<"after sort worsethan"<<endl;
    sort(books.begin(),books.end(),worseThan);
    for_each(books.begin(),books.end(),show);

    //#4.random_shuffle
    cout<<"after randoms shuffle"<<endl;
    random_shuffle(books.begin(),books.end());
    for_each(books.begin(),books.end(),show);
}

void show(const review & r1){
    cout<<"title: "<<r1.title<<"  rating:"<<r1.rating<<endl;
}