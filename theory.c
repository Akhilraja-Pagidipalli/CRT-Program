variable:
	
	a=10 // integer 2 bytes -32,768 to +32,767 %d
	b=12.5// float 4 bytes 3.4 e-34 to 3.4 e+34 %f
	c=12.56749999999 // double 8 bytes 3.4 e-308 to 3.4 e+308 %lf
	c='a'; // 1 byte -128 to 127 %c
	str[10]="gitamhyd";
	///9
	/// 10 bytes
	%s
	long,short,signed,unsigned
	int 2 bytes
	long int 4 bytes
	-2146473648 to +2146473647
	unsigned int 0 to 65535
	unsigned char 0 to 255
	%u -- unsigned integer
	ASCII
	256 values
	A=65,,,,,,,,,,,,Z=90
	a=97,,,,,,,,,,,,z=122
	0=48,,,,,,,,,,,,,9=57
	space=' '=32
	int a=015; //(015)base8
	printf("%o",a);
	printf("%d",a); // decimal equalent of 15
	int b=0x17;
	printf("%x",b); //(17)base 16
	
	
Operators:
	1. Arthematic operators
	    +,-,*,/ and %
	a=10,b=3;
	a/b=3;
	a%b=1
	2. Logical operator
	and &&
	or ||
	not |
exp1 exp2 exp1&&exp2 exp1||exp2 |exp1
T     T      T          T        F
T     F      F          T        F
F     T      F          T        T
F     F      F          F        T
3. Relational operators
< <= > >= !=
4. Assignment operators
=
+=,-=,*=,%= // Compound assignments
a+=b ---- a=a+b
5. sizeof()
used to find the size of datatype/literals/variables
6. Conditional operator or Ternary operator
exp1?exp2:exp2;
----
if(exp1)
exp2;
else
exp3;
7. increment operators
a=10;
++a //Pre increment
a++ //Post increment
--a //pre decrcrment
a-- //post decrement
8. Bitwise operators
& and
| or
^ xor
~ complement
<< left shift
>> right shift

a b a&b a|b a^b
0 0 0   0   0
0 1 0   1   1
1 0 0   1   1
1 1 1   1   0
9. comma (,)


Control statements:(decision making statements)
(selective statemnets)
1. simple if statement
2. if else statement
3. nested if statement
4. else if ladder
5. switch statement

syntax:
	1.if(exp)
	statement;
	
	or
	
	if(exp);
	{
		st1;
		st2;
		............stn
	}
2. if-else
if(exp)
true-block-statemenets;
else
false-block-statements;

3.Nested if-else
if(exp1)
{
	if(exp2)
	st1;
	else
	st2;
}
else
st3;

4. else-if ladder
if(exp1)
st1;
else if(exp2)
st2;
elseif(exp3)
st3;
else
st4;

5.Switch
switch(exp)
{
	case exp1
	st1;
	break;
	case exp2
	st2;
	break;
	........
	....
	...
	case expn
	stn;
	break;
	default;
	st;
	break;
}



