#include "iostream"
#include "map"

typedef std::map<const char*, void*> ROUTERTABLE;
typedef std::pair<const char*, void*> ROUTERTABLEITEM;
static ROUTERTABLE routerTable;

void addUrlToRouter(const char* url, void* func)
{
	// url 格式错误
	if(url[0] != '/') return;
	// url 已存在
	if(routerTable.find(url) != routerTable.end()) return;
	
	ROUTERTABLEITEM tableItem = ROUTERTABLEITEM(url, func);
	routerTable.insert(tableItem);
}

void* getFuncPointer(const char* url)
{
	auto findIter = routerTable.find(url);
	return findIter->second;
}

void func1(){
    std::cout << "func1" << std::endl;
}

void func2(int a, int b){
    std::cout << "func2 : " << a << " " << b << std::endl;
}

void test()
{
	
}

int main(){
    void (*f1)() = func1;
    void (*f2)(int, int) = func2;
    (*f1)();
    (*f2)(1, 2);

    void (*test)();
	routerTable.insert(ROUTERTABLEITEM("hello", test));

    ROUTERTABLEITEM item1 = ROUTERTABLEITEM("/hello/func1", f1);
    ROUTERTABLEITEM item2 = ROUTERTABLEITEM("/hello/func2", f2);
    routerTable.insert(item1);
    routerTable.insert(item2);
    return -1;
}