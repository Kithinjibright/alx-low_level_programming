C language programming

More Malloc

Casts are evil. I see so many cast in code just as a result of bad coding practice. Whenever you need to insert one the first thing you should ask yourselves is " what is wrong here" . Is everything declared as it should be ? If it is no cast would be needed so something is declared wrong. If you really do need to do some low level stuff on individual bytes in an int or so consider a union to access them. That'll declare them just fine. As a rule of thumb do not insert them unless the compiler complains. Then avoid them. This example will not complain. void pointer will promote to any type.
