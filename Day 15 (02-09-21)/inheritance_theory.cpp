/*
+ OVERVIEW:
- Reusability is a very important feature of OOP.
- In C++ we can reuse a class and add additional features to it.
- Reusing classes saves time and money.
- Reusing already tested and debugged class will save a lot of effort of developing.
  and debugging the same thing again.  

+ TERMINOGIES:
- BASE CLASS --> The Original Class or already existing class from which properties
                  are going to be inherited.
- DERIVED CLASS --> The New Inherited Class.

+ FORMS OF INHERITANCE:
1) Single Inheritance (One base class, One derived Class)
2) Multiple Inhertance (One derived class, multiple base classes)
3) Hierarchical Inheritance (One base class, multiple derived classes)
4) Multilevel Inhertance (Deriving a class from already a derived class)
5) Hybird Inheritance (Combination of Multiple and Multilevel Inheritance)

+ SYNTAX OF A DERIVED CLASS:
class DERIVED_CLASS_NAME : VISIBILITY_MODE BASE_CLASS_NAME {
  Statements....;
}

+ VISIBILITY MODES:
PUBLIC: Public members of the base class will remain public members in the derived class.
PRIVATE: Public & Protected memebrs of the base class will become private memebers of the base class.
PROTECTED: Public members will become protected members of the derived class, and proteced will remain protected.

+ NOTE:
- Default visibility mode is private (When you dont mention anything)
- Private members of a base class are never inherited
*/ 
