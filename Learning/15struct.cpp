#include <iostream>
#include <cstring>

using namespace std;

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main(){

    Books book1;
    Books book2;

    strcpy(book1.title, "rowenci");
    strcpy(book1.author, "rowenci");
    strcpy(book1.subject, "rowenci");
    book1.book_id = 1;

    // 输出 Book1 信息
    cout << "第一本书标题 : " << book1.title <<endl;
    cout << "第一本书作者 : " << book1.author <<endl;
    cout << "第一本书类目 : " << book1.subject <<endl;
    cout << "第一本书 ID : " << book1.book_id <<endl;

    return 0;

}