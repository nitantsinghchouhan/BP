%{

//#include "parser.h"  /* Include the token definitions generated by yacc */
#include "y.tab.h"

extern int yylex();

%}

D			[0-9]
L			[a-zA-Z_\$]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
RB                      }

%{

#define YY_NO_UNPUT

%}

/* use pointer instead of array*/
%pointer

/* Prevent the need for linking with -lfl */
%option noyywrap
%option yylineno

%s comment

%%

"/*"         			BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             
<comment>"*"+"/"        BEGIN(INITIAL);

"//"[^\n]+\n            

"{"[^ }\n]+"}"          { 
#ifdef HUUUU
                          bplval.str = strdup(bptext);
#endif
                          return(IDENTIFIER); }

"return"		{ return(RETURN); }
"goto"		        { return(GOTO); }
"skip"		        { return(SKIP); }
"dead"			{ return(DEAD); }
"dfs"			{ return(DFS); }
"do"			{ return(DO); }
"od"			{ return(OD); }
"else"			{ return(ELSE); }
"elsif"			{ return(ELSIF); }
"if"			{ return(IF); }
"then"			{ return(THEN); }
"fi"			{ return(FI); }
"decl"		        { return(DECL); }
"while"			{ return(WHILE);} 
"begin"			{ return(BEG); }
"end"			{ return(END); }
"bool"			{ return(BOOL); }
"void"			{ return(VOID); }
"assert"		{ return(ASSERT); }
"assume"		{ return(ASSUME); }
"print"		        { return(PRINT); }
"enforce"               { return(ENFORCE); }
"constrain"             { return(CONSTRAIN); }
"schoose"		{ return(CHOOSE); }
"abortif"       { return(ABORTIF); }
"start_thread"	{ return(START_THREAD); } // boppo concurrency
"end_thread"	{ return(END_THREAD); } // boppo concurrency
"sync"	        { return(SYNC); } // boppo concurrency
"atomic_begin"	{ return(ATOMIC_BEGIN); } // boppo concurrency
"atomic_end"	{ return(ATOMIC_END); } // boppo concurrency
"*"			{ return(NONDET); }
"?"		   	{ return(TERNARY); }
"_"			{ 
#ifdef HUUUU
bplval.str = strdup(bptext); 
#endif
return(IDENTIFIER); }
({D})+                  { 
#ifdef HUUUU
bplval.number = atoi(bptext); 
#endif
return(INTEGER); }
{L}({L}|{D})*	        { 
#ifdef HUUUU
bplval.str = strdup(bptext); 
#endif
return(IDENTIFIER); }
":="		        { return(ASSIGN); }
"="			{ return(EQ_OP); }
"!="		        { return(NE_OP); }
"=>"		        { return(IMPLIES); }
";"			{ return(';'); }

"'"                     { return('\''); }
","			{ return(','); }
":"			{ return(':'); }
"("			{ return('('); }
")"			{ return(')'); }
"["			{ return('['); }
"]"			{ return(']'); }
"&"			{ return(AND); }
"&&"			{ return(AND); }
"!"			{ return('!'); }
"~"			{ return('~'); }
"^"			{ return('^'); }
"|"			{ return(OR); }
"||"			{ return(OR); }
"<"			{ return('<'); }
">"			{ return('>'); }

[ \t\v\n\f]		{ }
.			{ /* ignore bad characters */ }

%%

