#include "emertxe.h"
int main()
{
    // Emertxe e(123, "sanketh", "shivamogga");
    // Mentor m(456, "Pravin", "Mysore", "CPP", "Senior");
    // Candidate c(789, "Anand", "Mumbai", "ECEP", 2026);

    Emertxe *e = new Emertxe(123, "sanketh", "shivamogga");
    Emertxe *m = new Mentor(456, "Pravin", "Mysore", "CPP", "Senior");
    //Candidate c(789, "Anand", "Mumbai", "ECEP", 2026);
    e->display();
    m->display();
    //c.display();
    return 0;
}