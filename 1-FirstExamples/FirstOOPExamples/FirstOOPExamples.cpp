#include <iostream>
#include "User.h"
#include "KeyValue.h"

int main()
{
    std::cout << "Hello World - User!\n";

    User* user1 = new User(0, "Jakub");
    auto user2 = new User(1, "Adam");
    user2->SetName("Tomas");

    std::cout << user1->ToString() << std::endl;
    std::cout << user2->ToString() << std::endl;

    delete user1, user2;

    KeyValue* kv = new KeyValue();
    kv->SetKey(1);
    kv->SetValue(0.5);

    delete kv;
}
