#indef _XML_H
#define _XML_H


/* xml.h - structures and functions for handling xml stuff */



/* xmlElement defines a standard xml element.  
        name - the name of the element
        attributes - an array of attributes
        children - an array of child elements
*/ 
struct xmlElememt {

     char name[256];
     xmlAttribute attributes[256];

};
typedef struct xmlElement xmlElement;


/* xmlAttribute defines an attribute of an element
        name - the name of the attribute
        value - the value of the attribute
*/
struct xmlAttribute {

     char name[256];
     char value[256];

};
typedef struct xmlAttribute xmlAttribute;





#endif
