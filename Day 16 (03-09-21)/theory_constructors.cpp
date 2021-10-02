/*

CASE 1
Class A: public B {
    Order of execution --> B(), then A();
};

CASE 2
Class A: public B, public C {
    Order of execution --> B(), C(), then A();
};

CASE 3
Class A: public B, virtual public C {
    order of execution --> C(), B(), then A();
};
*/