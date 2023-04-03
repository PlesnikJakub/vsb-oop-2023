#include <iostream>
#include "KeyValue.h"
#include "KeyValues.h"

int main()
{
    std::cout << "Hello World!\n";
    KeyValue* kv1 = new KeyValue(1, 1);
    //std::cout << kv1->GetKey() << std::endl; 
    //std::cout << kv1->GetValue() << std::endl;

    delete kv1;

    KeyValues* collection = new KeyValues(10);
    collection->Create(1, 0.2);
    collection->Create(2, 0.75);
    collection->Create(3, 0.5);

    std::cout << collection->GetCount() << std::endl;
    
    int searchKey = 2;
    KeyValue* kv = collection->Find(searchKey);

    if (kv == nullptr)
    {
        std::cout << "Item not found" << std::endl;
    }
    else
    {
        std::cout << kv->GetValue() << std::endl;
    }

    delete collection;
}
