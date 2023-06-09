#include "PartnerAccount.h"


PartnerAccount::PartnerAccount(int n, Client* c, Client* p) : Account(n, c)
{
    this->partner = p;
}

PartnerAccount::PartnerAccount(int n, Client* c, Client* p, double ir) : Account(n, c)
{
    this->partner = p;
}

Client* PartnerAccount::GetPartner() {
    return this->partner;
}