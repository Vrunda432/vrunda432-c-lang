=====>Structure:-

The ‘struct’ keyword is used to define a structure.

Every member in the structure is provided with a unique memory location.

When the value of one data member is changed, it doesn’t affect other data members in structure.

It helps initialize multiple members at once.

Total size of the structure is equivalent to the sum of the size of every data member.

It is used to store various data types.

It takes memory for every member which is present within the structure.

A member can be retrieved at a time.

It supports flexible arrays.

Following is the syntax of Structure Definition -

struct [structure tag] {
   member definition;
   member definition;
   ...
   member definition;
} [one or more structure variables];




======>Union:-

The ‘union’ keyword is used to define a union.

A memory location is shared by all of its data members.

Changing the value of one data member will affect/change the value of other data members as well.

It allows the user to initialize the first member of union only.

Total size of the union is equivalent to the size of the largest data member in the union.

It is used to store one of the multiple data types available.

It takes memory for a member that has the highest size.

Only one member can be accessed at a time.

It doesn’t support flexible arrays.

Following is the syntax of Union Definition -

union [union tag] {
   member definition;
   member definition;
   ...
   member definition;
} [one or more union variables];
