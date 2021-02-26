
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winteger-overflow"
#pragma clang diagnostic ignored "-Wformat"

#include "test.h"

/* -----------------------------------------------------------------------------
** Add unit tests to this file
**
** A valid unit test is prototyped
**
**    int   foo(void)
**
** and includes a call to the function:
**
**    int    ft_printf(const char *fmt, ...)
**
** ---------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------
** unit tests that start with "nocrash_" will always pass
**     (provided it doesn't crash)
** ---------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------
** A unit test is ENABLED if it has no whitespace preceding it
** A unit test is DISABLED if it has whitespace preceding it
**
** scripts are provided to enable and disable tests by prefix
** ---------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------
** 						NO SPECIFIERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Tests with no specifiers
int nospec_no_specifier_test(void){return ft_printf("hello, world!");}
int nospec_empty_string(void){return ft_printf("");}
int nospec_some_escaped_chars(void){return ft_printf("\t\n\r\v\f\n");}
//Nospec tests with successive calls
int nospec_successive_5_5(void){return ( ft_printf("hello") + ft_printf("world"));}
int nospec_successive_2_9(void){return ( ft_printf("he") ^ ft_printf(" is alive"));}
int nospec_successive_8_3(void){return ( ft_printf("is alive") - ft_printf(" he"));}


/* -----------------------------------------------------------------------------
** 						%% PERCENTAGE TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//%% Tests
int pct_basic(void){return ft_printf("%%");}
int pct_5w(void){return ft_printf("%5%");}
int pct_5wlj(void){return ft_printf("%-5%");}
int pct_5wzp(void){return ft_printf("%05%");}
int pct_5wljzp(void){return ft_printf("%-05%");}
//Null specifier tests
int nocrash_notrequired_nullspec_basic(void){return ft_printf("%");}
int nocrash_notrequired_nullspec_5w(void){return ft_printf("%5");}
int nocrash_notrequired_nullspec_5wzp(void){return ft_printf("%05");}
int nocrash_notrequired_nullspec_5wzplj(void){return ft_printf("%-05");}
int nocrash_notrequired_nullspec_5wlj(void){return ft_printf("%-5");}


/* -----------------------------------------------------------------------------
** 						%c CHARS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Chars - Basic
int c_allprintable_combined(void){return ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}

int c_1_31_combined(void){return ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}

int c_128_255_combined(void){return ft_printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}

int c_allprintable_width(void){return ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}

int c_1_31_width(void){return ft_printf("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}

int c_128_255_width(void){return ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}

int c_allprintable_width_lj(void){return ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}

int c_1_31_width_lj(void){return ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}

int c_128_255_width_lj(void){return ft_printf("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}

int c_nullterm_basic(void){return ft_printf("%c", '\0');}
int c_nullterm_5w(void){return ft_printf("%5c", '\0');}
int c_nullterm_5wlj(void){return ft_printf("%-5c", '\0');}


/* -----------------------------------------------------------------------------
** 						%s STRING TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//String specifiers - no modifiers
int s_basic_string_expansion(void){return ft_printf("hello, %s.", "gavin");}
int s_only_string_expansion(void){return ft_printf("%s", "testing testing");}
int s_two_string_expansions(void){return ft_printf("%s%s", "hello", "world");}
int s_two_string_expansions2(void){return ft_printf("..%s stuff %s", "a", "b");}
int s_empty_string_expansion(void){return ft_printf("this %s is empty", "");}
int s_full_then_empty_string(void){return ft_printf("this %s is %s", "hello", "");}
int s_empty_then_full_string(void){return ft_printf("this %s is %s", "", "hello");}
int s_three_strings(void){return ft_printf("%s%s%s", "1", "2", "3's a charm");}
//String specifiers with field_width, space- or zero-padded
int s_space_padded_field_width(void){return ft_printf("%32s", "abc");}
int s_space_padded_field_width2(void){return ft_printf("%16s", "nark nark");}
int s_space_padded_over_field_width(void){return ft_printf("%5s", "goes over");}
//String specifiers with field_width, space- or zero-padded, left-justified
int s_space_padded_field_width_lj(void){return ft_printf("%-32s", "abc");}
int s_space_padded_field_width2_lj(void){return ft_printf("%-16s", "nark nark");}
int s_space_padded_over_field_width_lj(void){return ft_printf("%-5s", "goes over");}
//String specifiers with precision
int s_string_prec_notrunc(void){return ft_printf("%.7s", "hello");}
int s_string_prec_trunc(void){return ft_printf("%.3s", "hello");}
int s_string_prec_default(void){return ft_printf("%.s", "hello");}
int s_string_prec_zero(void){return ft_printf("%.0s", "hello");}
int s_two_strings_prec_2trunc(void){return ft_printf("%.3s%.2s", "holla", "bitch");}
int s_two_strings_prec_1trunc_a(void){return ft_printf("%.2s%.7s", "hello", "world");}
int s_two_strings_prec_1trunc_b(void){return ft_printf("%.7s%.2s", "hello", "world");}
int s_two_strings_prec_0trunc(void){return ft_printf("%.5s%7s", "yo", "boi");}
//String specifiers with both precision and field width
int s_string_prec_width_notrunc(void){return ft_printf("%7.5s", "yolo");}
int s_string_prec_width_trunc(void){return ft_printf("%7.5s", "bombastic");}
int s_string_prec_width_notrunc_lj(void){return ft_printf("%-7.5s", "yolo");}
int s_string_prec_width_trunc_lj(void){return ft_printf("%-7.5s", "tubular");}
int s_two_s_prec_width_2fit_0trunc(void){return ft_printf("%7.7s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_a_0trunc(void){return ft_printf("%3.7s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_b_0trunc(void){return ft_printf("%7.7s%3.7s", "hello", "world");}
int s_two_s_prec_width_0fit_0trunc(void){return ft_printf("%3.7s%3.7s", "hello", "world");}
int s_two_s_prec_width_2fit_1trunc_a(void){return ft_printf("%7.3s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_a_1trunc_a(void){return ft_printf("%3.3s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_b_1trunc_a(void){return ft_printf("%7.3s%3.7s", "hello", "world");}
int s_two_s_prec_width_0fit_1trunc_a(void){return ft_printf("%3.3s%3.7s", "hello", "world");}
int s_two_s_prec_width_2fit_1trunc_b(void){return ft_printf("%7.7s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_a_1trunc_b(void){return ft_printf("%3.7s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_b_1trunc_b(void){return ft_printf("%7.7s%3.3s", "hello", "world");}
int s_two_s_prec_width_0fit_1trunc_b(void){return ft_printf("%3.7s%3.3s", "hello", "world");}
int s_two_s_prec_width_2fit_2trunc(void){return ft_printf("%7.3s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_a_2trunc(void){return ft_printf("%3.3s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_b_2trunc(void){return ft_printf("%7.3s%3.3s", "hello", "world");}
int s_two_s_prec_width_0fit_2trunc(void){return ft_printf("%3.3s%3.3s", "hello", "world");}
int s_two_s_prec_width_2trunc(void){return ft_printf("%3s%3s", "hello", "world");}
//String specifiers, other tests
int s_two_strings_lj_and_rj(void){return ft_printf("%-7s%5s", "hello", "world");}
int s_two_strings_rj_and_lj(void){return ft_printf("%7s%-5s", "hello", "world");}
//String specifiers - NULL strings
int s_null_basic_string_expansion(void){return ft_printf("hello, %s.", NULL);}
int s_null_only_string_expansion(void){return ft_printf("%s", NULL);}
int s_null_space_padded_field_width(void){return ft_printf("%32s", NULL);}
int s_null_space_padded_over_field_width(void){return ft_printf("%2s", NULL);}
int s_null_space_padded_field_width_lj(void){return ft_printf("%-32s", NULL);}
int s_null_space_padded_field_width2_lj(void){return ft_printf("%-16s", NULL);}
int s_null_space_padded_over_field_width_lj(void){return ft_printf("%-3s", NULL);}
//String specifiers with precision
int s_null_string_prec_notrunc(void){return ft_printf("%.9s", "NULL");}
int s_null_string_prec_trunc(void){return ft_printf("%.3s", "NULL");}
int s_null_string_prec_default(void){return ft_printf("%.s", "NULL");}
int s_null_string_prec_zero(void){return ft_printf("%.0s", "NULL");}
//String s_hidden tests
static char *s_hidden = "hi low\0don't print me lol\0";
int s_basic_s_hidden(void){return ft_printf("%s", s_hidden);}
// width pad
int s_width_3_s_hidden(void){return ft_printf("%3s", s_hidden);}
int s_width_9_s_hidden(void){return ft_printf("%9s", s_hidden);}
// precision no width
int s_prec_no_width_s_hidden(void){return ft_printf("%.s", s_hidden);}
int s_prec_9_no_width_s_hidden(void){return ft_printf("%.9s", s_hidden);}
// precision  0 before number
int s_prec_03_no_width_s_hidden(void){return ft_printf("%.03s", s_hidden);}
int s_prec_09_no_width_s_hidden(void){return ft_printf("%.09s", s_hidden);}
int s_prec_03_no_width_s_null(void){return ft_printf("%.03s", NULL);}
int s_prec_09_no_width_s_null(void){return ft_printf("%.09s", NULL);}
int s_prec_00_no_width_s_nullchar(void){return ft_printf("%.00s", "\0");}
int s_prec_01_no_width_s_nullchar(void){return ft_printf("%.01s", "\0");}
int s_prec_03_no_width_s_nullchar(void){return ft_printf("%.03s", "\0");}
int s_prec_09_no_width_s_nullchar(void){return ft_printf("%.09s", "\0");}
// width  no precision
int s_prec_0_width_3_s_hidden(void){return ft_printf("%3.s", s_hidden);}
int s_prec_0_width_10_s_hidden(void){return ft_printf("%10.s", s_hidden);}
int s_prec_0_width_3_s_null(void){return ft_printf("%3.s", NULL);}
int s_prec_0_width_10_s_null(void){return ft_printf("%10.s", NULL);}
int s_prec_0_width_1_s_nullchar(void){return ft_printf("%1.s", "\0");}
int s_prec_0_width_2_s_nullchar(void){return ft_printf("%2.s", "\0");}
int s_prec_0_width_9_s_nullchar(void){return ft_printf("%9.s", "\0");}
// lj flag width  no precision
int s_prec_0_lj_width_3_s_hidden(void){return ft_printf("%-3.s", s_hidden);}
int s_prec_0_lj_width_8_s_hidden(void){return ft_printf("%-8.s", s_hidden);}
int s_prec_0_lj_width_3_s_null(void){return ft_printf("%-3.s", NULL);}
int s_prec_0_lj_width_8_s_null(void){return ft_printf("%-8.s", NULL);}
int s_prec_0_lj_width_1_s_nullchar(void){return ft_printf("%-1.s", "\0");}
int s_prec_0_lj_width_2_s_nullchar(void){return ft_printf("%-2.s", "\0");}
int s_prec_0_lj_width_6_s_nullchar(void){return ft_printf("%-6.s", "\0");}
// width  precision 1
int s_prec_1_width_3_s_hidden(void){return ft_printf("%3.1s", s_hidden);}
int s_prec_1_width_10_s_hidden(void){return ft_printf("%10.1s", s_hidden);}
int s_prec_1_width_3_s_null(void){return ft_printf("%3.1s", NULL);}
int s_prec_1_width_9_s_null(void){return ft_printf("%9.1s", NULL);}
// lj flag width  precision 1
int s_prec_1_lj_width_3_s_hidden(void){return ft_printf("%-3.1s", s_hidden);}
int s_prec_1_lj_width_10_s_hidden(void){return ft_printf("%-10.1s", s_hidden);}
int s_prec_1_lj_width_3_s_null(void){return ft_printf("%-3.1s", NULL);}
int s_prec_1_lj_width_9_s_null(void){return ft_printf("%-9.1s", NULL);}
int s_prec_1_lj_width_3_s_nullchar(void){return ft_printf("%-3.1s", "\0");}
int s_prec_1_lj_width_6_s_nullchar(void){return ft_printf("%-6.1s", "\0");}
// width  exact precision
int s_prec_perfect_width_3_s_hidden(void){return ft_printf("%3.6s", s_hidden);}
int s_prec_perfect_width_20_s_hidden(void){return ft_printf("%20.6s", s_hidden);}
int s_prec_perfect_width_3_s_null(void){return ft_printf("%3.6s", NULL);}
int s_prec_perfect_width_20_s_null(void){return ft_printf("%20.6s", NULL);}
int s_prec_perfect_width_3_s_nullchar(void){return ft_printf("%3.6s", "\0");}
int s_prec_perfect_width_6_s_nullchar(void){return ft_printf("%6.6s", "\0");}
// lj flag width exact precision
int s_prec_perfect_lj_width_3_s_hidden(void){return ft_printf("%-3.6s", s_hidden);}
int s_prec_perfect_lj_width_20_s_hidden(void){return ft_printf("%-20.6s", s_hidden);}
// lj flag width excess precision
int s_prec_8_lj_width_3_s_hidden(void){return ft_printf("%-3.8s", s_hidden);}
int s_prec_8_lj_width_10_s_hidden(void){return ft_printf("%-10.8s", s_hidden);}
int s_prec_8_lj_width_3_s_null(void){return ft_printf("%-3.8s", NULL);}
int s_prec_8_lj_width_10_s_null(void){return ft_printf("%-10.8s", NULL);}
// decoy lj flag
int s_prec_00_lj_s_hidden_trunc(void){return ft_printf("%-.00s", s_hidden);}
int s_prec_09_lj_s_hidden_notrunc(void){return ft_printf("%-.09s", s_hidden);}
// multiple flags diff order same width and precision
int notrequired_s_undefbehav_4_flags_diff_order_1(void){return ft_printf("%+- 06.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_2(void){return ft_printf("% 0+-6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_3(void){return ft_printf("%0 +-6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_4(void){return ft_printf("%+-0 6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_5(void){return ft_printf("%-+ 06.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_6(void){return ft_printf("% -+06.06s", s_hidden);}
// multiple flags diff order width > precision
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_1(void){return ft_printf("%+- 07.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_2(void){return ft_printf("% 0+-8.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_3(void){return ft_printf("%0 +-9.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_4(void){return ft_printf("%+-0 10.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_5(void){return ft_printf("%-+ 011.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_6(void){return ft_printf("% -+012.06s", s_hidden);}
// multiple flags diff order width > precision, truncated string
int notrequired_s_undefbehav_4_flags_as_lj_sp_zero_trunc(void){return ft_printf("%+- 06.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_as_lj_trunc(void){return ft_printf("% 0+-6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_zero_sp_as_lj_trunc(void){return ft_printf("%0 +-6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_as_lj_zero_sp_trunc(void){return ft_printf("%+-0 6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_lj_as_sp_zero_trunc(void){return ft_printf("%-+ 06.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_lj_as_trunc(void){return ft_printf("% 0-+6.04s", s_hidden);}
// multiple flags diff order width < precision, excess precision
int notrequired_s_undefbehav_4_flags_as_lj_sp_zero__pads(void){return ft_printf("%+- 06.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_as_lj__pads(void){return ft_printf("% 0+-6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_zero_sp_as_lj__pads(void){return ft_printf("%0 +-6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_as_lj_zero_sp__pads(void){return ft_printf("%+-0 6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_lj_as_sp_zero__pads(void){return ft_printf("%-+ 06.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_lj_as__pads(void){return ft_printf("% 0-+6.09s", s_hidden);}
// multi zeros
int notrequired_s_undefbehav_0_2zero(void){return ft_printf("%00s", s_hidden);}
int notrequired_s_undefbehav_0_3zero(void){return ft_printf("%000s", s_hidden);}
int notrequired_s_undefbehav_0_4zero(void){return ft_printf("%0000s", s_hidden);}
int notrequired_s_undefbehav_0_lj_2zero(void){return ft_printf("%-00s", s_hidden);}
int notrequired_s_undefbehav_0_zero_lj_zero(void){return ft_printf("%0-0s", s_hidden);}
int notrequired_s_undefbehav_0_2zero_lj(void){return ft_printf("%00-s", s_hidden);}
// zero and width
int notrequired_s_undefbehav_0_width_3(void){return ft_printf("%03s", s_hidden);}
int notrequired_s_undefbehav_0_width_9(void){return ft_printf("%09s", s_hidden);}
// as and zero flags  width
int notrequired_s_undefbehav_as_0_width_3(void){return ft_printf("%+03s", s_hidden);}
int notrequired_s_undefbehav_as_0_width_9(void){return ft_printf("%+09s", s_hidden);}
// flag cancelling
int notrequired_s_undefbehav_lj_0_width_3(void){return ft_printf("%-03s", s_hidden);}
int notrequired_s_undefbehav_lj_0_width_9(void){return ft_printf("%-09s", s_hidden);}
int notrequired_s_undefbehav_as_sp_width_3(void){return ft_printf("%+ 3s", s_hidden);}
int notrequired_s_undefbehav_as_sp_width_6(void){return ft_printf("%+ 6s", s_hidden);}


/* -----------------------------------------------------------------------------
** 						%p POINTERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Pointers - Basic
static char	a01;
static unsigned char a02;
static short a03;
static unsigned short a04;
static int a05;
static unsigned int a06;
static long a07;
static unsigned long a08;
static long long a09;
static unsigned long long a10;
static char *a11;
static void *a12;

int p_null(void){return ft_printf("%p", NULL);}

int notrequired_p_ftfc_literal_9w_prec2_undefbehav(void){return ft_printf("%9.2p\n", 1234);}
int notrequired_p_ftfc_literal_2w_prec9_undefbehav(void){return ft_printf("%2.9p\n", 1234);}
int notrequired_p_ftfc_zero_prec5_undefbehav(void){return ft_printf("%.5p", 0);}
int notrequired_p_ftfc_zero_prec0_undefbehav(void){return ft_printf("%.0p", 0);}
int p_ftfc_5w_throwswarning(void){return ft_printf("%5p", 0);}

int p_basic(void){return ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_fit(void){return ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_nofit(void){return ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_16(void){return ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_8(void){return ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_32(void){return ft_printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_fit_lj(void){return ft_printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_nofit_lj(void){return ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_16_lj(void){return ft_printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_8_lj(void){return ft_printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_32_lj(void){return ft_printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


/* -----------------------------------------------------------------------------
** 						%d INTEGER TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Signed integers - no modifers
int d_basic_pos(void){return ft_printf("this %d number", 17);}
int d_basic_neg(void){return ft_printf("this %d number", -267);}
int d_basic_zero(void){return ft_printf("this %d number", 0);}
int d_basic_onlypos(void){return ft_printf("%d", 3);}
int d_basic_onlyneg(void){return ft_printf("%d", -1);}
int d_basic_onlyzero(void){return ft_printf("%d", 0);}
int d_intmax(void){return ft_printf("%d",  2147483647);}
int d_intmin(void){return ft_printf("%d", (int)(-2147483678));}
//Signed integers with field width
int d_width_pos_fits(void){return ft_printf("%7d", 33);}
int d_width_neg_fits(void){return ft_printf("%7d", -14);}
int d_width_zero_fits(void){return ft_printf("%3d", 0);}
int d_width_pos_exactfit(void){return ft_printf("%5d", 52625);}
int d_width_neg_exactfit(void){return ft_printf("%5d", -2562);}
int d_width_pos_nofit(void){return ft_printf("%4d", 94827);}
int d_width_neg_nofit(void){return ft_printf("%4d", -2464);}
int d_width_pos_fits_lj(void){return ft_printf("%-7d", 33);}
int d_width_neg_fits_lj(void){return ft_printf("%-7d", -14);}
int d_width_zero_fits_lj(void){return ft_printf("%-3d", 0);}
int d_width_pos_exactfit_lj(void){return ft_printf("%-5d", 52625);}
int d_width_neg_exactfit_lj(void){return ft_printf("%-5d", -2562);}
int d_width_pos_nofit_lj(void){return ft_printf("%-4d", 94827);}
int d_width_neg_nofit_lj(void){return ft_printf("%-4d", -2464);}
//signed integers with precision
int d_prec_fits_pos(void){return ft_printf("%.5d", 2);}
int d_prec_fits_neg(void){return ft_printf("%.6d", -3);}
int d_prec_fits_zero(void){return ft_printf("%.3d", 0);}
int d_prec_exactfit_pos(void){return ft_printf("%.4d", 5263);}
int d_prec_exactfit_neg(void){return ft_printf("%.4d", -2372);}
int d_prec_nofit_pos(void){return ft_printf("%.3d", 13862);}
int d_prec_nofit_neg(void){return ft_printf("%.3d",-23646);}
//Signed integers with zero field width padding
int d_zp_pos_fits(void){return ft_printf("%05d", 43);}
int d_zp_neg_fits(void){return ft_printf("%07d", -54);}
int d_zp_zero_fits(void){return ft_printf("%03d", 0);}
int d_zp_pos_exactfit(void){return ft_printf("%03d", 634);}
int d_zp_neg_exactfit(void){return ft_printf("%04d", -532);}
int d_zp_neg_minus1fit(void){return ft_printf("%04d", -4825);}
//Signed integers with field width and precision
int d_prec_width_fit_fit_pos(void){return ft_printf("%8.5d", 34);}
int d_prec_width_fit_fit_neg(void){return ft_printf("%10.5d", -216);}
int d_prec_width_fit_fit_zero(void){return ft_printf("%8.5d", 0);}
int d_prec_width_nofit_fit_pos(void){return ft_printf("%8.3d", 8375);}
int d_prec_width_nofit_fit_neg(void){return ft_printf("%8.3d", -8473);}
int d_prec_width_fit_nofit_pos(void){return ft_printf("%3.7d", 3267);}
int d_prec_width_fit_nofit_neg(void){return ft_printf("%3.7d", -2375);}
int d_prec_width_nofit_nofit_pos(void){return ft_printf("%3.3d", 6983);}
int d_prec_width_nofit_nofit_neg(void){return ft_printf("%3.3d", -8462);}
//Signed integers with field width and precision, left-justified
int d_prec_width_fit_fit_pos_lj(void){return ft_printf("%-8.5d", 34);}
int d_prec_width_fit_fit_neg_lj(void){return ft_printf("%-10.5d", -216);}
int d_prec_width_fit_fit_zero_lj(void){return ft_printf("%-8.5d", 0);}
int d_prec_width_nofit_fit_pos_lj(void){return ft_printf("%-8.3d", 8375);}
int d_prec_width_nofit_fit_neg_lj(void){return ft_printf("%-8.3d", -8473);}
int d_prec_width_fit_nofit_pos_lj(void){return ft_printf("%-3.7d", 3267);}
int d_prec_width_fit_nofit_neg_lj(void){return ft_printf("%-3.7d", -2375);}
int d_prec_width_nofit_nofit_pos_lj(void){return ft_printf("%-3.3d", 6983);}
int d_prec_width_nofit_nofit_neg_lj(void){return ft_printf("%-3.3d", -8462);}
//Signed integers with field width and precision with zeropadding
int d_prec_width_ff_pos_zp(void){return ft_printf("%08.5d", 34);}
int d_prec_width_ff_neg_zp(void){return ft_printf("%010.5d", -216);}
int d_prec_width_ff_zero_zp(void){return ft_printf("%08.5d", 0);}
int d_prec_width_nf_pos_zp(void){return ft_printf("%08.3d", 8375);}
int d_prec_width_nf_neg_zp(void){return ft_printf("%08.3d", -8473);}
int d_prec_width_fn_pos_zp(void){return ft_printf("%03.7d", 3267);}
int d_prec_width_fn_neg_zp(void){return ft_printf("%03.7d", -2375);}
int d_prec_width_nn_pos_zp(void){return ft_printf("%03.3d", 6983);}
int d_prec_width_nn_neg_zp(void){return ft_printf("%03.3d", -8462);}
//Signed integers with field width and precision, left-justified with zeropadding
int d_prec_width_ff_pos_lj_zp_ignoreflag(void){return ft_printf("%0-8.5d", 34);}
int d_prec_width_ff_neg_ljzp_ignoreflag(void){return ft_printf("%0-10.5d", -216);}
int d_prec_width_ff_zero_ljzp_ignoreflag(void){return ft_printf("%0-8.5d", 0);}
int d_prec_width_nf_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.3d", 8375);}
int d_prec_width_nf_neg_ljzp_ignoreflag(void){return ft_printf("%0-8.3d", -8473);}
int d_prec_width_fn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.7d", 3267);}
int d_prec_width_fn_neg_ljzp_ignoreflag(void){return ft_printf("%0-3.7d", -2375);}
int d_prec_width_nn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.3d", 6983);}
int d_prec_width_nn_neg_ljzp_ignoreflag(void){return ft_printf("%0-3.3d", -8462);}
//Signed integers - zero precision zero value
int d_prec0val0_basic(void){return ft_printf("%.0d", 0);}
int d_prec0val0_implicit(void){return ft_printf("%.d", 0);}
int d_prec0val0_w(void){return ft_printf("%5.0d", 0);}
int d_prec0val0_w_impl(void){return ft_printf("%5.d", 0);}
int d_prec0val0_wlj(void){return ft_printf("%-5.0d", 0);}
int d_prec0val0_wlj_impl(void){return ft_printf("%-5.d", 0);}


/* -----------------------------------------------------------------------------
** 						%i INTEGER TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Signed integers - no modifers
int i_basic_pos(void){return ft_printf("this %i number", 17);}
int i_basic_neg(void){return ft_printf("this %i number", -267);}
int i_basic_zero(void){return ft_printf("this %i number", 0);}
int i_basic_onlypos(void){return ft_printf("%i", 3);}
int i_basic_onlyneg(void){return ft_printf("%i", -1);}
int i_basic_onlyzero(void){return ft_printf("%i", 0);}
int i_intmax(void){return ft_printf("%i",  2147483647);}
int i_intmin(void){return ft_printf("%i", (int)(-2147483678));}
//Signed integers  field width
int i_width_pos_fits(void){return ft_printf("%7i", 33);}
int i_width_neg_fits(void){return ft_printf("%7i", -14);}
int i_width_zero_fits(void){return ft_printf("%3i", 0);}
int i_width_pos_exactfit(void){return ft_printf("%5i", 52625);}
int i_width_neg_exactfit(void){return ft_printf("%5i", -2562);}
int i_width_pos_nofit(void){return ft_printf("%4i", 94827);}
int i_width_neg_nofit(void){return ft_printf("%4i", -2464);}
int i_width_pos_fits_lj(void){return ft_printf("%-7i", 33);}
int i_width_neg_fits_lj(void){return ft_printf("%-7i", -14);}
int i_width_zero_fits_lj(void){return ft_printf("%-3i", 0);}
int i_width_pos_exactfit_lj(void){return ft_printf("%-5i", 52625);}
int i_width_neg_exactfit_lj(void){return ft_printf("%-5i", -2562);}
int i_width_pos_nofit_lj(void){return ft_printf("%-4i", 94827);}
int i_width_neg_nofit_lj(void){return ft_printf("%-4i", -2464);}
//signed integers with precision
int i_prec_fits_pos(void){return ft_printf("%.5i", 2);}
int i_prec_fits_neg(void){return ft_printf("%.6i", -3);}
int i_prec_fits_zero(void){return ft_printf("%.3i", 0);}
int i_prec_exactfit_pos(void){return ft_printf("%.4i", 5263);}
int i_prec_exactfit_neg(void){return ft_printf("%.4i", -2372);}
int i_prec_nofit_pos(void){return ft_printf("%.3i", 13862);}
int i_prec_nofit_neg(void){return ft_printf("%.3i",-23646);}
//Signed integers with zero field width padding
int i_zp_pos_fits(void){return ft_printf("%05i", 43);}
int i_zp_neg_fits(void){return ft_printf("%07i", -54);}
int i_zp_zero_fits(void){return ft_printf("%03i", 0);}
int i_zp_pos_exactfit(void){return ft_printf("%03i", 634);}
int i_zp_neg_exactfit(void){return ft_printf("%04i", -532);}
int i_zp_neg_minus1fit(void){return ft_printf("%04i", -4825);}
//Signed integers with field width and precision
int i_prec_width_fit_fit_pos(void){return ft_printf("%8.5i", 34);}
int i_prec_width_fit_fit_neg(void){return ft_printf("%10.5i", -216);}
int i_prec_width_fit_fit_zero(void){return ft_printf("%8.5i", 0);}
int i_prec_width_nofit_fit_pos(void){return ft_printf("%8.3i", 8375);}
int i_prec_width_nofit_fit_neg(void){return ft_printf("%8.3i", -8473);}
int i_prec_width_fit_nofit_pos(void){return ft_printf("%3.7i", 3267);}
int i_prec_width_fit_nofit_neg(void){return ft_printf("%3.7i", -2375);}
int i_prec_width_nofit_nofit_pos(void){return ft_printf("%3.3i", 6983);}
int i_prec_width_nofit_nofit_neg(void){return ft_printf("%3.3i", -8462);}
//Signed integers with field width and precision, left-justified
int i_prec_width_fit_fit_pos_lj(void){return ft_printf("%-8.5i", 34);}
int i_prec_width_fit_fit_neg_lj(void){return ft_printf("%-10.5i", -216);}
int i_prec_width_fit_fit_zero_lj(void){return ft_printf("%-8.5i", 0);}
int i_prec_width_nofit_fit_pos_lj(void){return ft_printf("%-8.3i", 8375);}
int i_prec_width_nofit_fit_neg_lj(void){return ft_printf("%-8.3i", -8473);}
int i_prec_width_fit_nofit_pos_lj(void){return ft_printf("%-3.7i", 3267);}
int i_prec_width_fit_nofit_neg_lj(void){return ft_printf("%-3.7i", -2375);}
int i_prec_width_nofit_nofit_pos_lj(void){return ft_printf("%-3.3i", 6983);}
int i_prec_width_nofit_nofit_neg_lj(void){return ft_printf("%-3.3i", -8462);}
//Signed integers with field width and precision with zeropadding
int i_prec_width_ff_pos_zp(void){return ft_printf("%08.5i", 34);}
int i_prec_width_ff_neg_zp(void){return ft_printf("%010.5i", -216);}
int i_prec_width_ff_zero_zp(void){return ft_printf("%08.5i", 0);}
int i_prec_width_nf_pos_zp(void){return ft_printf("%08.3i", 8375);}
int i_prec_width_nf_neg_zp(void){return ft_printf("%08.3i", -8473);}
int i_prec_width_fn_pos_zp(void){return ft_printf("%03.7i", 3267);}
int i_prec_width_fn_neg_zp(void){return ft_printf("%03.7i", -2375);}
int i_prec_width_nn_pos_zp(void){return ft_printf("%03.3i", 6983);}
int i_prec_width_nn_neg_zp(void){return ft_printf("%03.3i", -8462);}
//Signed integers with field width and precision, left-justified with zeropadding
int i_prec_width_ff_pos_lj_zp_ignoreflag(void){return ft_printf("%0-8.5i", 34);}
int i_prec_width_ff_neg_ljzp_ignoreflag(void){return ft_printf("%0-10.5i", -216);}
int i_prec_width_ff_zero_ljzp_ignoreflag(void){return ft_printf("%0-8.5i", 0);}
int i_prec_width_nf_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.3i", 8375);}
int i_prec_width_nf_neg_ljzp_ignoreflag(void){return ft_printf("%0-8.3i", -8473);}
int i_prec_width_fn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.7i", 3267);}
int i_prec_width_fn_neg_ljzp_ignoreflag(void){return ft_printf("%0-3.7i", -2375);}
int i_prec_width_nn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.3i", 6983);}
int i_prec_width_nn_neg_ljzp_ignoreflag(void){return ft_printf("%0-3.3i", -8462);}
//Signed integers - zero precision zero value
int i_prec0val0_basic(void){return ft_printf("%.0i", 0);}
int i_prec0val0_implicit(void){return ft_printf("%.i", 0);}
int i_prec0val0_w(void){return ft_printf("%5.0i", 0);}
int i_prec0val0_w_impl(void){return ft_printf("%5.i", 0);}
int i_prec0val0_wlj(void){return ft_printf("%-5.0i", 0);}
int i_prec0val0_wlj_impl(void){return ft_printf("%-5.i", 0);}


/* -----------------------------------------------------------------------------
** 						%u UNSIGNED INTEGERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Unsigned integers - no modifers
int u_basic_pos(void){return ft_printf("this %u number", 17);}
int u_basic_zero(void){return ft_printf("this %u number", 0);}
int u_basic_onlypos(void){return ft_printf("%u", 3);}
int u_uintmax(void){return ft_printf("%u", 4294967295u);}
//Unsigned integers with field width
int u_width_pos_fits(void){return ft_printf("%7u", 33);}
int u_width_zero_fits(void){return ft_printf("%3u", 0);}
int u_width_pos_exactfit(void){return ft_printf("%5u", 52625);}
int u_width_pos_nofit(void){return ft_printf("%4u", 94827);}
int u_width_pos_fits_lj(void){return ft_printf("%-7u", 33);}
int u_width_zero_fits_lj(void){return ft_printf("%-3u", 0);}
int u_width_pos_exactfit_lj(void){return ft_printf("%-5u", 52625);}
int u_width_pos_nofit_lj(void){return ft_printf("%-4u", 94827);}
//unsigned integers with precision
int u_prec_fits_pos(void){return ft_printf("%.5u", 2);}
int u_prec_fits_zero(void){return ft_printf("%.3u", 0);}
int u_prec_exactfit_pos(void){return ft_printf("%.4u", 5263);}
int u_prec_nofit_pos(void){return ft_printf("%.3u", 13862);}
//Unsigned integers with zero field width padding
int u_zp_pos_fits(void){return ft_printf("%05u", 43);}
int u_zp_zero_fits(void){return ft_printf("%03u", 0);}
int u_zp_pos_exactfit(void){return ft_printf("%03u", 634);}
//Unsigned integers with field width and precision
int u_prec_width_fit_fit_pos(void){return ft_printf("%8.5u", 34);}
int u_prec_width_fit_fit_zero(void){return ft_printf("%8.5u", 0);}
int u_prec_width_nofit_fit_pos(void){return ft_printf("%8.3u", 8375);}
int u_prec_width_fit_nofit_pos(void){return ft_printf("%3.7u", 3267);}
int u_prec_width_nofit_nofit_pos(void){return ft_printf("%3.3u", 6983);}
//Unsigned integers with field width and precision, left-justified
int u_prec_width_fit_fit_pos_lj(void){return ft_printf("%-8.5u", 34);}
int u_prec_width_fit_fit_zero_lj(void){return ft_printf("%-8.5u", 0);}
int u_prec_width_nofit_fit_pos_lj(void){return ft_printf("%-8.3u", 8375);}
int u_prec_width_fit_nofit_pos_lj(void){return ft_printf("%-3.7u", 3267);}
int u_prec_width_nofit_nofit_pos_lj(void){return ft_printf("%-3.3u", 6983);}
//Unsigned integers with field width and precision with zeropadding
int u_prec_width_ff_pos_zp(void){return ft_printf("%08.5u", 34);}
int u_prec_width_ff_zero_zp(void){return ft_printf("%08.5u", 0);}
int u_prec_width_nf_pos_zp(void){return ft_printf("%08.3u", 8375);}
int u_prec_width_fn_pos_zp(void){return ft_printf("%03.7u", 3267);}
int u_prec_width_nn_pos_zp(void){return ft_printf("%03.3u", 6983);}
//Unsigned integers with field width and precision, left-justified with zeropadding
int u_prec_width_ff_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.5u", 34);}
int u_prec_width_ff_zero_ljzp_ignoreflag(void){return ft_printf("%0-8.5u", 0);}
int u_prec_width_nf_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.3u", 8375);}
int u_prec_width_fn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.7u", 3267);}
int u_prec_width_nn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.3u", 6983);}
//Unsigned integers - zero precision zero value
int u_prec0val0_basic(void){return ft_printf("%.0u", 0);}
int u_prec0val0_implicit(void){return ft_printf("%.u", 0);}
int u_prec0val0_w(void){return ft_printf("%5.0u", 0);}
int u_prec0val0_w_impl(void){return ft_printf("%5.u", 0);}
int u_prec0val0_wlj(void){return ft_printf("%-5.0u", 0);}
int u_prec0val0_wlj_impl(void){return ft_printf("%-5.u", 0);}


/* -----------------------------------------------------------------------------
** 						%x HEXADECIMAL LOWERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Hexadecimal lowers - no modifers
int x_basic_pos(void){return ft_printf("this %x number", 17);}
int x_basic_zero(void){return ft_printf("this %x number", 0);}
int x_basic_onlypos(void){return ft_printf("%x", 3);}
int x_hexlmax(void){return ft_printf("%x", 4294967295u);}
//Hexadecimal lowers with field width
int x_width_pos_fits(void){return ft_printf("%7x", 33);}
int x_width_zero_fits(void){return ft_printf("%3x", 0);}
int x_width_pos_exactfit(void){return ft_printf("%5x", 52625);}
int x_width_pos_nofit(void){return ft_printf("%2x", 94827);}
int x_width_pos_fits_lj(void){return ft_printf("%-7x", 33);}
int x_width_zero_fits_lj(void){return ft_printf("%-3x", 0);}
int x_width_pos_exactfit_lj(void){return ft_printf("%-5x", 52625);}
int x_width_pos_nofit_lj(void){return ft_printf("%-4x", 9648627);}
//Hexadecimal lowers with precision
int x_prec_fits_pos(void){return ft_printf("%.5x", 21);}
int x_prec_fits_zero(void){return ft_printf("%.3x", 0);}
int x_prec_exactfit_pos(void){return ft_printf("%.4x", 5263);}
int x_prec_nofit_pos(void){return ft_printf("%.3x", 938862);}
//Hexadecimal lowers with zero field width padding
int x_zp_pos_fits(void){return ft_printf("%05x", 43);}
int x_zp_zero_fits(void){return ft_printf("%03x", 0);}
int x_zp_pos_exactfit(void){return ft_printf("%03x", 698334);}
//Hexadecimal lowers with field width and precision
int x_prec_width_fit_fit_pos(void){return ft_printf("%8.5x", 34);}
int x_prec_width_fit_fit_zero(void){return ft_printf("%8.5x", 0);}
int x_prec_width_nofit_fit_pos(void){return ft_printf("%8.3x", 8375);}
int x_prec_width_fit_nofit_pos(void){return ft_printf("%2.7x", 3267);}
int x_prec_width_nofit_nofit_pos(void){return ft_printf("%3.3x", 6983);}
//Hexadecimal lowers with field width and precision, left-justified
int x_prec_width_fit_fit_pos_lj(void){return ft_printf("%-8.5x", 34);}
int x_prec_width_fit_fit_zero_lj(void){return ft_printf("%-8.5x", 0);}
int x_prec_width_nofit_fit_pos_lj(void){return ft_printf("%-8.3x", 8375);}
int x_prec_width_fit_nofit_pos_lj(void){return ft_printf("%-2.7x", 3267);}
int x_prec_width_nofit_nofit_pos_lj(void){return ft_printf("%-3.3x", 6983);}
//Hexadecimal lowers with field width and precision with zeropadding
int x_prec_width_ff_pos_zp(void){return ft_printf("%08.5x", 34);}
int x_prec_width_ff_zero_zp(void){return ft_printf("%08.5x", 0);}
int x_prec_width_nf_pos_zp(void){return ft_printf("%08.3x", 8375);}
int x_prec_width_fn_pos_zp(void){return ft_printf("%02.7x", 3267);}
int x_prec_width_nn_pos_zp(void){return ft_printf("%03.3x", 6983);}
//Hexadecimal lowers with field width and precision, left-justified with zeropadding
int x_prec_width_ff_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.5x", 34);}
int x_prec_width_ff_zero_ljzp_ignoreflag(void){return ft_printf("%0-8.5x", 0);}
int x_prec_width_nf_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.3x", 8375);}
int x_prec_width_fn_pos_ljzp_ignoreflag(void){return ft_printf("%0-2.7x", 3267);}
int x_prec_width_nn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.3x", 6983);}
//Hexadecimal lower - zero precision zero value
int x_prec0val0_basic(void){return ft_printf("%.0x", 0);}
int x_prec0val0_implicit(void){return ft_printf("%.x", 0);}
int x_prec0val0_w(void){return ft_printf("%5.0x", 0);}
int x_prec0val0_w_impl(void){return ft_printf("%5.x", 0);}
int x_prec0val0_wlj(void){return ft_printf("%-5.0x", 0);}
int x_prec0val0_wlj_impl(void){return ft_printf("%-5.x", 0);}


/* -----------------------------------------------------------------------------
** 						%X HEXADECIMAL UPPERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Hexadecimal uppers - no modifers
int X_basic_hexu_pos(void){return ft_printf("this %X number", 17);}
int X_basic_hexu_zero(void){return ft_printf("this %X number", 0);}
int X_basic_hexu_onlypos(void){return ft_printf("%X", 3);}
int X_hexumax(void){return ft_printf("%X", 4294967295u);}
//Hexadecimal uppers with field width
int X_width_pos_fits(void){return ft_printf("%7X", 33);}
int X_width_zero_fits(void){return ft_printf("%3X", 0);}
int X_width_pos_exactfit(void){return ft_printf("%5X", 52625);}
int X_width_pos_nofit(void){return ft_printf("%2X", 94827);}
int X_width_pos_fits_lj(void){return ft_printf("%-7X", 33);}
int X_width_zero_fits_lj(void){return ft_printf("%-3X", 0);}
int X_width_pos_exactfit_lj(void){return ft_printf("%-5X", 52625);}
int X_width_pos_nofit_lj(void){return ft_printf("%-4X", 9648627);}
//Hexadecimal uppers with precision
int X_prec_fits_pos(void){return ft_printf("%.5X", 21);}
int X_prec_fits_zero(void){return ft_printf("%.3X", 0);}
int X_prec_exactfit_pos(void){return ft_printf("%.4X", 5263);}
int X_prec_nofit_pos(void){return ft_printf("%.3X", 938862);}
//Hexadecimal uppers with zero field width padding
int X_zp_pos_fits(void){return ft_printf("%05X", 43);}
int X_zp_zero_fits(void){return ft_printf("%03X", 0);}
int X_zp_pos_exactfit(void){return ft_printf("%03X", 698334);}
//Hexadecimal uppers with field width and precision
int X_prec_width_fit_fit_pos(void){return ft_printf("%8.5X", 34);}
int X_prec_width_fit_fit_zero(void){return ft_printf("%8.5X", 0);}
int X_prec_width_nofit_fit_pos(void){return ft_printf("%8.3X", 8375);}
int X_prec_width_fit_nofit_pos(void){return ft_printf("%2.7X", 3267);}
int X_prec_width_nofit_nofit_pos(void){return ft_printf("%3.3X", 6983);}
//Hexadecimal uppers with field width and precision, left-justified
int X_prec_width_fit_fit_pos_lj(void){return ft_printf("%-8.5X", 34);}
int X_prec_width_fit_fit_zero_lj(void){return ft_printf("%-8.5X", 0);}
int X_prec_width_nofit_fit_pos_lj(void){return ft_printf("%-8.3X", 8375);}
int X_prec_width_fit_nofit_pos_lj(void){return ft_printf("%-2.7X", 3267);}
int X_prec_width_nofit_nofit_pos_lj(void){return ft_printf("%-3.3X", 6983);}
//Hexadecimal uppers with field width and precision with zeropadding
int X_prec_width_ff_pos_zp(void){return ft_printf("%08.5X", 34);}
int X_prec_width_ff_zero_zp(void){return ft_printf("%08.5X", 0);}
int X_prec_width_nf_pos_zp(void){return ft_printf("%08.3X", 8375);}
int X_prec_width_fn_pos_zp(void){return ft_printf("%02.7X", 3267);}
int X_prec_width_nn_pos_zp(void){return ft_printf("%03.3X", 6983);}
//Hexadecimal uppers with field width and precision, left-justified with zeropadding
int X_prec_width_ff_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.5X", 34);}
int X_prec_width_ff_zero_ljzp_ignoreflag(void){return ft_printf("%0-8.5X", 0);}
int X_prec_width_nf_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.3X", 8375);}
int X_prec_width_fn_pos_ljzp_ignoreflag(void){return ft_printf("%0-2.7X", 3267);}
int X_prec_width_nn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.3X", 6983);}
//Hexadecimal uppers - zero precision zero value
int X_prec0val0_basic(void){return ft_printf("%.0X", 0);}
int X_prec0val0_implicit(void){return ft_printf("%.X", 0);}
int X_prec0val0_w(void){return ft_printf("%5.0X", 0);}
int X_prec0val0_w_impl(void){return ft_printf("%5.X", 0);}
int X_prec0val0_wlj(void){return ft_printf("%-5.0X", 0);}
int X_prec0val0_wlj_impl(void){return ft_printf("%-5.X", 0);}


/* -----------------------------------------------------------------------------
** 							STAR TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Taken from https://github.com/cclaude42/PFT_2019
int new2019_star_1(void){return ft_printf("%*s", 32, "abc");}
int new2019_star_2(void){return ft_printf("%-*s", 32, "abc");}
int new2019_star_3(void){return ft_printf("%*s", 3, "hello");}
int new2019_star_4(void){return ft_printf("%.*s", 3, "hello");}
int new2019_star_5(void){return ft_printf("%.*s", 0, "hello");}
int new2019_star_6(void){return ft_printf("%-*.*s", 7, 3, "yolo");}
int new2019_star_7(void){return ft_printf("%*i", 4, 94827);}
int new2019_star_8(void){return ft_printf("%*i", 14, 94827);}
int new2019_star_9(void){return ft_printf("%.*i", 6, -3);}
int new2019_star_10(void){return ft_printf("%0*i", 7, -54);}
int new2019_negstar_1(void){return ft_printf("%*s", -32, "abc");}
int new2019_negstar_2(void){return ft_printf("%-*s", -32, "abc");}
int new2019_negstar_3(void){return ft_printf("%*s", -3, "hello");}
int new2019_negstar_4(void){return ft_printf("%.*s", -3, "hello");}
int new2019_negstar_5(void){return ft_printf("%-*.*s", -7, -3, "yolo");}
int new2019_negstar_6(void){return ft_printf("%*i", -4, 94827);}
int new2019_negstar_7(void){return ft_printf("%*i", -14, 94827);}
int new2019_negstar_8(void){return ft_printf("%.*i", -6, -3);}
int new2019_negstar_9(void){return ft_printf("%0*i", -7, -54);}


/* -----------------------------------------------------------------------------
** 					NO CRASH / NO SEGFAULT TESTS (NOT REQUIRED)
** ---------------------------------------------------------------------------*/
//No-crash-no-segfault test
int nocrash_notrequired_noarg_3(void){return ft_printf("% "); }
int nocrash_notrequired_noarg_5(void){return ft_printf("%-"); }
int nocrash_notrequired_noarg_6(void){return ft_printf("%+"); }
int nocrash_notrequired_noarg_9(void){return ft_printf("%23"); }
int nocrash_notrequired_noarg_10(void){return ft_printf("%."); }
int nocrash_notrequired_noarg_16(void){return ft_printf("%p"); }
int nocrash_notrequired_noarg_17(void){return ft_printf("%d"); }
int nocrash_notrequired_noarg_19(void){return ft_printf("%u"); }
int nocrash_notrequired_noarg_20(void){return ft_printf("%x"); }
int nocrash_notrequired_noarg_21(void){return ft_printf("%X"); }
int nocrash_notrequired_noarg_24(void){return ft_printf("%c"); }
int nocrash_notrequired_nullarg_2(void){return ft_printf("%0s", NULL); }
int nocrash_notrequired_nullarg_3(void){return ft_printf("% s", NULL); }
int nocrash_notrequired_nullarg_5(void){return ft_printf("%-s", NULL); }
int nocrash_notrequired_nullarg_6(void){return ft_printf("%+s", NULL); }
int nocrash_notrequired_nullarg_9(void){return ft_printf("%23s", NULL); }
int nocrash_notrequired_nullarg_10(void){return ft_printf("%.s", NULL); }
int nocrash_notrequired_nullarg_16(void){return ft_printf("%p", NULL); }
int nocrash_notrequired_nullarg_17(void){return ft_printf("%d", NULL); }
int nocrash_notrequired_nullarg_19(void){return ft_printf("%u", NULL); }
int nocrash_notrequired_nullarg_20(void){return ft_printf("%x", NULL); }
int nocrash_notrequired_nullarg_21(void){return ft_printf("%X", NULL); }
int nocrash_notrequired_nullarg_23(void){return ft_printf("%s", NULL); }
int nocrash_notrequired_nullarg_24(void){return ft_printf("%c", NULL); }
//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_dupflag_d_ljljw(void){return ft_printf("%--5d", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_c_prec_1(void){return ft_printf("%.4c", 'a');}
int nocrash_notrequired_c_prec_2(void){return ft_printf("%.c", 'a');}
int nocrash_notrequired_c_zp_1(void){return ft_printf("%05c", 'a');}
int nocrash_notrequired_c_zp_2(void){return ft_printf("%0c", 'a');}
int nocrash_notrequired_c_lj_nowidth(void){return ft_printf("%-c", 'a');}
int nocrash_notrequired_s_zp_1(void){return ft_printf("%05s", "hello");}
int nocrash_notrequired_s_zp_2(void){return ft_printf("%0s", "hello");}
int nocrash_notrequired_s_lj_nowidth(void){return ft_printf("%-s", "hello");}

static int ncm_p = 5;
int nocrash_notrequired_p_prec_1(void){return ft_printf("%.4p", &ncm_p);}
int nocrash_notrequired_p_prec_2(void){return ft_printf("%.p", &ncm_p);}
int nocrash_notrequired_p_zp_1(void){return ft_printf("%05p", &ncm_p);}
int nocrash_notrequired_p_zp_2(void){return ft_printf("%0p", &ncm_p);}
int nocrash_notrequired_p_lj_nowidth(void){return ft_printf("%-p", &ncm_p);}
int nocrash_notrequired_i_lj_nowidth(void){return ft_printf("%-i", 42);}
int nocrash_notrequired_u_lj_nowidth(void){return ft_printf("%-u", 42);}
int nocrash_notrequired_x_lj_nowidth(void){return ft_printf("%-x", 42);}


/* -----------------------------------------------------------------------------
** 							MOULINETTE TESTS - MANDATORY
** ---------------------------------------------------------------------------*/

int moul_c_1(void){return ft_printf("%c", 42);}
int moul_c_2(void){return ft_printf("Kashim a %c histoires à raconter", 1001);}
int moul_c_3(void){return ft_printf("Il fait au moins %c\n", -8000);}
int moul_c_4(void){return ft_printf("%c", -0);}
int moul_c_5(void){return ft_printf("%c", 0);}
int moul_c_5b(void){return ft_printf("%c\n", INT_MAX);}
int moul_c_6(void){return ft_printf("%c\n", 'c');}
int moul_c_7(void){return ft_printf("%c\n", '\n');}
int moul_c_8(void){return ft_printf("%c", 'l');}
int moul_c_9(void){return ft_printf("%c", 'y');}
int moul_c_10(void){return ft_printf("%c", ' ');}
int moul_c_11(void){return ft_printf("%c", 'e');}
int moul_c_12(void){return ft_printf("%c", 's');}
int moul_c_13(void){return ft_printf("%c", 't');}
int moul_c_14(void){return ft_printf("%c", ' ');}
int moul_c_15(void){return ft_printf("%c", 'f');}
int moul_c_16(void){return ft_printf("%c", 'a');}
int moul_c_17(void){return ft_printf("%c", 'n');}
int moul_c_18(void){return ft_printf("%c", 't');}
int moul_c_19(void){return ft_printf("%c", 'a');}
int moul_c_20(void){return ft_printf("%c", 's');}
int moul_c_21(void){return ft_printf("%c", 't');}
int moul_c_22(void){return ft_printf("%c", 'i');}
int moul_c_23(void){return ft_printf("%c", 'q');}
int moul_c_24(void){return ft_printf("%c", 'u');}
int moul_c_25(void){return ft_printf("%c", 'e');}
int moul_c_26(void){return ft_printf("%c\n", '!');}
int moul_c_27(void){return ft_printf("%c\n", '\r');}
int moul_c_28(void){return ft_printf("%c\n", '\t');}

int moul_s_1(void){return ft_printf(" pouet %s !!", "camembert");}
int moul_s_2(void){return ft_printf("%s !", "Ceci n'est pas un \0 exercice !");}
int moul_s_3(void){return ft_printf("%s!", "Ceci n'est toujours pas un exercice !");}
int moul_s_4(void){char *str = NULL; return ft_printf("%s!", str);}

int moul_s_5_this_ones_a_doozy(void){return ft_printf("%s",
		"Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Etalafinilla*bip*");}

int moul_d_1(void){return ft_printf("%d", 42);}
int moul_d_2(void){return ft_printf("Kashim a %d histoires à raconter", 1001);}
int moul_d_3(void){return ft_printf("Il fait au moins %d\n", -8000);}
int moul_d_4(void){return ft_printf("%d", -0);}
int moul_d_5(void){return ft_printf("%d", 0);}
int moul_d_6(void){return ft_printf("%d", INT_MAX);}
int moul_d_7(void){return ft_printf("%d", INT_MIN);}
int moul_d_8(void){return ft_printf("%d", INT_MIN - 1);}
int moul_d_9(void){return ft_printf("%d", INT_MAX + 1);}
int moul_d_10(void){return ft_printf("%%d 0000042 == |%d|\n", 0000042);}
int moul_d_11(void){return ft_printf("%%d \t == |%d|\n", '\t');}
int moul_d_12(void){return ft_printf("%%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');}

int moul_mix_1(void){int r00 = 0; return ft_printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", &r00);}

int moul_i_1(void){return ft_printf("%i", 42);}
int moul_i_2(void){return ft_printf("Kashim a %i histoires à raconter", 1001);}
int moul_i_3(void){return ft_printf("Il fait au moins %i\n", -8000);}
int moul_i_4(void){return ft_printf("%i", -0);}
int moul_i_5(void){return ft_printf("%i", 0);}
int moul_i_6(void){return ft_printf("%i", INT_MAX);}
int moul_i_7(void){return ft_printf("%i", INT_MIN);}
int moul_i_8(void){return ft_printf("%i", INT_MIN - 1);}
int moul_i_9(void){return ft_printf("%i", INT_MAX + 1);}
int moul_i_10(void){return ft_printf("%%i 0000042 == |%i|\n", 0000042);}
int moul_i_11(void){return ft_printf("%%i \t == |%i|\n", '\t');}
int moul_i_12(void){return ft_printf("%%i Lydie == |%i|\n", 'L'+'y'+'d'+'i'+'e');}

int moul_u_1(void){return ft_printf("%u", 42);}
int moul_u_2(void){return ft_printf("Kashim a %u histoires à raconter", 1001);}
int moul_u_3(void){return ft_printf("Il fait au moins %u\n", -8000);}
int moul_u_4(void){return ft_printf("%u", -0);}
int moul_u_5(void){return ft_printf("%u", 0);}
int moul_u_6(void){return ft_printf("%u", INT_MAX);}
int moul_u_7(void){return ft_printf("%u", INT_MIN);}
int moul_u_8(void){return ft_printf("%u", INT_MIN - 1);}
int moul_u_9(void){return ft_printf("%u", INT_MAX + 1);}
int moul_u_10(void){return ft_printf("%%u 0000042 == |%u|\n", 0000042);}
int moul_u_11(void){return ft_printf("%%u \t == |%u|\n", '\t');}
int moul_u_12(void){return ft_printf("%%u Lydie == |%u|\n", 'L'+'y'+'d'+'i'+'e');}

int moul_x_1(void){return ft_printf("%x", 42);}
int moul_x_2(void){return ft_printf("Kashim a %x histoires à raconter", 1001);}
int moul_x_3(void){return ft_printf("Il fait au moins %x\n", -8000);}
int moul_x_4(void){return ft_printf("%x", -0);}
int moul_x_5(void){return ft_printf("%x", 0);}
int moul_x_6(void){return ft_printf("%x", INT_MAX);}
int moul_x_7(void){return ft_printf("%x", INT_MIN);}
int moul_x_8(void){return ft_printf("%x", INT_MIN - 1);}
int moul_x_9(void){return ft_printf("%x", INT_MAX + 1);}
int moul_x_10(void){return ft_printf("%%x 0000042 == |%x|\n", 0000042);}
int moul_x_11(void){return ft_printf("%%x \t == |%x|\n", '\t');}
int moul_x_12(void){return ft_printf("%%x Lydie == |%x|\n", 'L'+'y'+'d'+'i'+'e');}

int moul_prec_1(void){return ft_printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");}
int moul_prec_3(void){return ft_printf("%%04.5i 42 == |%04.5i|\n", 42);}
int moul_prec_4(void){return ft_printf("%%04.3i 42 == |%04.3i|\n", 42);}
int moul_prec_5(void){return ft_printf("%%04.2i 42 == |%04.2i|\n", 42);}

int moul_zeropad_1(void){return ft_printf("%%04i 42 == |%04i|\n", 42);}
int moul_zeropad_2(void){return ft_printf("%%05i 42 == |%05i|\n", 42);}
int moul_zeropad_3(void){return ft_printf("%%0i 42 == |%0i|\n", 42);}
int moul_zeropad_4(void){return ft_printf("%%0d 0000042 == |%0d|\n", 0000042);}

int moul_leftjusty_1(void){return ft_printf("%%-i 42 == %-i\n", 42);}
int moul_leftjusty_2(void){return ft_printf("%%-d 42 == %-d\n", INT_MIN);}
int moul_leftjusty_3(void){return ft_printf("%%-i -42 == %-i\n", -42);}
int moul_leftjusty_4(void){return ft_printf("%%-4d 42 == |%-4d|\n", 42);}
int moul_leftjusty_5(void){return ft_printf("%%-5d -42 == |%-5d|\n", -42);}
int moul_leftjusty_6(void){return ft_printf("|%3i|%-3i|\n", 42, 42);}
int moul_leftjusty_7(void){return ft_printf("%%-4i 42 == |%-4i|\n", 42);}

int moul_star_1(void){return ft_printf("%%-*.3s LYDI == |%-*.3s|\n", 5, "LYDI");}
int moul_star_2(void){return ft_printf("%% *.5i 42 == |% *.5i|\n", 4, 42);}
int moul_star_3(void){return ft_printf("%%*i 42 == |%*i|\n", 5, 42);}
int moul_star_4(void){return ft_printf("%%*i 42 == |%*i|\n", 3, 42);}
int moul_star_5(void){return ft_printf("%%*i 42 == |%*i|\n", 2, 42);}


/* -----------------------------------------------------------------------------
** 							MIXED TESTS - MANDATORY
** ---------------------------------------------------------------------------*/
//Mix tests
static unsigned int		mx_u = 235;
static char				mx_c = 'G';
static char			   *mx_s = "Hello, World!";
static int				mx_i = 42;

int		mix_test_0(void){return ft_printf(
			"  %u    %%    %p    %x    %s    %i  ",
			mx_u, &mx_i, mx_u, mx_s, mx_i);}
int		mix_test_1(void){return ft_printf(
			"  %x    %c    %X    %s    %u    %p  ",
			mx_u, mx_c, mx_u, mx_s, mx_u, &mx_i);}
int		mix_test_2(void){return ft_printf(
			"  %%    %i    %X    %p    %c    %s  ",
			mx_i, mx_u, &mx_i, mx_c, mx_s);}
int		mix_test_3(void){return ft_printf(
			"  %u    %%    %s    %c    %x    %X  ",
			mx_u, mx_s, mx_c, mx_u, mx_u);}
int		mix_test_4(void){return ft_printf(
			"  %i    %c    %x    %u    %%    %X  ",
			mx_i, mx_c, mx_u, mx_u, mx_u);}
int		mix_test_5(void){return ft_printf(
			"  %c    %X    %i    %%    %s    %p  ",
			mx_c, mx_u, mx_i, mx_s, &mx_i);}
int		mix_test_6(void){return ft_printf(
			"  %p    %x    %i    %c    %s    %u  ",
			&mx_i, mx_u, mx_i, mx_c, mx_s, mx_u);}
int		mix_test_7(void){return ft_printf(
			"  %i    %s    %%    %u    %c    %x  ",
			mx_i, mx_s, mx_u, mx_c, mx_u);}
int		mix_test_8(void){return ft_printf(
			"  %X    %p    %s    %%    %u    %x  ",
			mx_u, &mx_i, mx_s, mx_u, mx_u);}
int		mix_test_9(void){return ft_printf(
			"  %c    %%    %u    %i    %x    %X  ",
			mx_c, mx_u, mx_i, mx_u, mx_u);}
int		mix_test_10(void){return ft_printf(
			"  %i    %p    %X    %u    %s    %x  ",
			mx_i, &mx_i, mx_u, mx_u, mx_s, mx_u);}
int		mix_test_11(void){return ft_printf(
			"  %X    %c    %p    %x    %i    %u  ",
			mx_u, mx_c, &mx_i, mx_u, mx_i, mx_u);}
int		mix_test_12(void){return ft_printf(
			"  %%    %i    %u    %s    %c    %X  ",
			mx_i, mx_u, mx_s, mx_c, mx_u);}
int		mix_test_13(void){return ft_printf(
			"  %u    %c    %x    %s    %X    %i  ",
			mx_u, mx_c, mx_u, mx_s, mx_u, mx_i);}
int		mix_test_14(void){return ft_printf(
			"  %s    %p    %X    %c    %i    %x  ",
			mx_s, &mx_i, mx_u, mx_c, mx_i, mx_u);}
int		mix_test_15(void){return ft_printf(
			"  %u    %c    %X    %x    %p    %s  ",
			mx_u, mx_c, mx_u, mx_u, &mx_i, mx_s);}
int		mix_test_16(void){return ft_printf(
			"  %c    %%    %i    %X    %u    %x  ",
			mx_c, mx_i, mx_u, mx_u, mx_u);}
int		mix_test_17(void){return ft_printf(
			"  %s    %%    %x    %X    %c    %u  ",
			mx_s, mx_u, mx_u, mx_c, mx_u);}
int		mix_test_18(void){return ft_printf(
			"  %x    %s    %X    %%    %p    %i  ",
			mx_u, mx_s, mx_u, &mx_i, mx_i);}
int		mix_test_19(void){return ft_printf(
			"  %%    %p    %i    %c    %x    %X  ",
			&mx_i, mx_i, mx_c, mx_u, mx_u);}
int		mix_test_20(void){return ft_printf(
			"  %c    %s    %%    %u    %p    %x  ",
			mx_c, mx_s, mx_u, &mx_i, mx_u);}
int		mix_test_21(void){return ft_printf(
			"  %c    %i    %u    %s    %p    %x  ",
			mx_c, mx_i, mx_u, mx_s, &mx_i, mx_u);}
int		mix_test_22(void){return ft_printf(
			"  %X    %x    %s    %c    %i    %u  ",
			mx_u, mx_u, mx_s, mx_c, mx_i, mx_u);}
int		mix_test_23(void){return ft_printf(
			"  %x    %c    %X    %p    %s    %p  ",
			mx_u, mx_c, mx_u, &mx_i, mx_s, &mx_i);}
int		mix_test_24(void){return ft_printf(
			"  %X    %%    %i    %s    %p    %x  ",
			mx_u, mx_i, mx_s, &mx_i, mx_u);}
int		mix_test_25(void){return ft_printf(
			"  %i    %p    %x    %c    %X    %p  ",
			mx_i, &mx_i, mx_u, mx_c, mx_u, &mx_i);}
int		mix_test_26(void){return ft_printf(
			"  %X    %c    %i    %u    %x    %p  ",
			mx_u, mx_c, mx_i, mx_u, mx_u, &mx_i);}
int		mix_test_27(void){return ft_printf(
			"  %i    %u    %c    %%    %X    %p  ",
			mx_i, mx_u, mx_c, mx_u, &mx_i);}
int		mix_test_28(void){return ft_printf(
			"  %s    %i    %c    %p    %x    %u  ",
			mx_s, mx_i, mx_c, &mx_i, mx_u, mx_u);}
int		mix_test_29(void){return ft_printf(
			"  %p    %%    %x    %X    %i    %c  ",
			&mx_i, mx_u, mx_u, mx_i, mx_c);}
int		mix_test_30(void){return ft_printf(
			"  %X    %i    %s    %%    %u    %p  ",
			mx_u, mx_i, mx_s, mx_u, &mx_i);}
int		mix_test_31(void){return ft_printf(
			"  %%    %u    %p    %i    %X    %c  ",
			mx_u, &mx_i, mx_i, mx_u, mx_c);}
int		mix_test_32(void){return ft_printf(
			"  %x    %X    %p    %s    %i    %c  ",
			mx_u, mx_u, &mx_i, mx_s, mx_i, mx_c);}
int		mix_test_33(void){return ft_printf(
			"  %c    %%    %s    %X    %x    %p  ",
			mx_c, mx_s, mx_u, mx_u, &mx_i);}
int		mix_test_34(void){return ft_printf(
			"  %x    %X    %p    %s    %i    %u  ",
			mx_u, mx_u, &mx_i, mx_s, mx_i, mx_u);}
int		mix_test_35(void){return ft_printf(
			"  %p    %u    %s    %X    %c    %p  ",
			&mx_i, mx_u, mx_s, mx_u, mx_c, &mx_i);}
int		mix_test_36(void){return ft_printf(
			"  %X    %s    %x    %p    %%    %i  ",
			mx_u, mx_s, mx_u, &mx_i, mx_i);}
int		mix_test_37(void){return ft_printf(
			"  %x    %s    %%    %p    %i    %c  ",
			mx_u, mx_s, &mx_i, mx_i, mx_c);}
int		mix_test_38(void){return ft_printf(
			"  %s    %u    %x    %%    %i    %c  ",
			mx_s, mx_u, mx_u, mx_i, mx_c);}
int		mix_test_39(void){return ft_printf(
			"  %p    %i    %x    %%    %u    %X  ",
			&mx_i, mx_i, mx_u, mx_u, mx_u);}
int		mix_test_40(void){return ft_printf(
			"  %%    %c    %X    %p    %u    %x  ",
			mx_c, mx_u, &mx_i, mx_u, mx_u);}
int		mix_test_41(void){return ft_printf(
			"  %u    %c    %%    %p    %i    %s  ",
			mx_u, mx_c, &mx_i, mx_i, mx_s);}
int		mix_test_42(void){return ft_printf(
			"  %%    %i    %s    %u    %c    %X  ",
			mx_i, mx_s, mx_u, mx_c, mx_u);}
int		mix_test_43(void){return ft_printf(
			"  %%    %i    %u    %s    %X    %p  ",
			mx_i, mx_u, mx_s, mx_u, &mx_i);}
int		mix_test_44(void){return ft_printf(
			"  %s    %c    %X    %%    %i    %p  ",
			mx_s, mx_c, mx_u, mx_i, &mx_i);}
int		mix_test_45(void){return ft_printf(
			"  %x    %X    %u    %i    %%    %s  ",
			mx_u, mx_u, mx_u, mx_i, mx_s);}
int		mix_test_46(void){return ft_printf(
			"  %x    %u    %s    %i    %p    %p  ",
			mx_u, mx_u, mx_s, mx_i, &mx_i, &mx_i);}
int		mix_test_47(void){return ft_printf(
			"  %X    %i    %s    %x    %u    %p  ",
			mx_u, mx_i, mx_s, mx_u, mx_u, &mx_i);}
int		mix_test_48(void){return ft_printf(
			"  %c    %i    %%    %X    %p    %u  ",
			mx_c, mx_i, mx_u, &mx_i, mx_u);}
int		mix_test_49(void){return ft_printf(
			"  %s    %u    %i    %X    %%    %c  ",
			mx_s, mx_u, mx_i, mx_u, mx_c);}
int		mix_test_50(void){return ft_printf(
			"  %%    %p    %X    %i    %s    %x  ",
			&mx_i, mx_u, mx_i, mx_s, mx_u);}
int		mix_test_51(void){return ft_printf(
			"  %i    %x    %p    %c    %u    %X  ",
			mx_i, mx_u, &mx_i, mx_c, mx_u, mx_u);}
int		mix_test_52(void){return ft_printf(
			"  %X    %c    %%    %i    %x    %s  ",
			mx_u, mx_c, mx_i, mx_u, mx_s);}
int		mix_test_53(void){return ft_printf(
			"  %x    %c    %u    %X    %p    %p  ",
			mx_u, mx_c, mx_u, mx_u, &mx_i, &mx_i);}
int		mix_test_54(void){return ft_printf(
			"  %p    %u    %c    %s    %i    %p  ",
			&mx_i, mx_u, mx_c, mx_s, mx_i, &mx_i);}
int		mix_test_55(void){return ft_printf(
			"  %x    %p    %s    %u    %%    %c  ",
			mx_u, &mx_i, mx_s, mx_u, mx_c);}
int		mix_test_56(void){return ft_printf(
			"  %%    %i    %X    %p    %u    %s  ",
			mx_i, mx_u, &mx_i, mx_u, mx_s);}
int		mix_test_57(void){return ft_printf(
			"  %%    %u    %c    %s    %i    %x  ",
			mx_u, mx_c, mx_s, mx_i, mx_u);}
int		mix_test_58(void){return ft_printf(
			"  %c    %i    %u    %x    %s    %p  ",
			mx_c, mx_i, mx_u, mx_u, mx_s, &mx_i);}
int		mix_test_59(void){return ft_printf(
			"  %c    %i    %s    %u    %x    %p  ",
			mx_c, mx_i, mx_s, mx_u, mx_u, &mx_i);}
int		mix_test_60(void){return ft_printf(
			"  %u    %%    %x    %i    %X    %c  ",
			mx_u, mx_u, mx_i, mx_u, mx_c);}
int		mix_test_61(void){return ft_printf(
			"  %x    %s    %u    %i    %c    %X  ",
			mx_u, mx_s, mx_u, mx_i, mx_c, mx_u);}
int		mix_test_62(void){return ft_printf(
			"  %%    %c    %i    %p    %s    %X  ",
			mx_c, mx_i, &mx_i, mx_s, mx_u);}
int		mix_test_63(void){return ft_printf(
			"  %s    %x    %%    %X    %i    %c  ",
			mx_s, mx_u, mx_u, mx_i, mx_c);}
int		mix_test_64(void){return ft_printf(
			"  %x    %X    %u    %c    %%    %i  ",
			mx_u, mx_u, mx_u, mx_c, mx_i);}
int		mix_test_65(void){return ft_printf(
			"  %c    %%    %i    %p    %u    %X  ",
			mx_c, mx_i, &mx_i, mx_u, mx_u);}
int		mix_test_66(void){return ft_printf(
			"  %i    %c    %%    %u    %X    %p  ",
			mx_i, mx_c, mx_u, mx_u, &mx_i);}
int		mix_test_67(void){return ft_printf(
			"  %s    %i    %x    %u    %c    %p  ",
			mx_s, mx_i, mx_u, mx_u, mx_c, &mx_i);}
int		mix_test_68(void){return ft_printf(
			"  %s    %x    %c    %p    %u    %X  ",
			mx_s, mx_u, mx_c, &mx_i, mx_u, mx_u);}
int		mix_test_69(void){return ft_printf(
			"  %%    %s    %p    %i    %X    %c  ",
			mx_s, &mx_i, mx_i, mx_u, mx_c);}
int		mix_test_70(void){return ft_printf(
			"  %x    %X    %i    %%    %s    %u  ",
			mx_u, mx_u, mx_i, mx_s, mx_u);}
int		mix_test_71(void){return ft_printf(
			"  %s    %i    %X    %c    %%    %p  ",
			mx_s, mx_i, mx_u, mx_c, &mx_i);}
int		mix_test_72(void){return ft_printf(
			"  %x    %p    %c    %s    %X    %u  ",
			mx_u, &mx_i, mx_c, mx_s, mx_u, mx_u);}
int		mix_test_73(void){return ft_printf(
			"  %%    %X    %u    %x    %p    %c  ",
			mx_u, mx_u, mx_u, &mx_i, mx_c);}
int		mix_test_74(void){return ft_printf(
			"  %p    %c    %s    %u    %i    %x  ",
			&mx_i, mx_c, mx_s, mx_u, mx_i, mx_u);}
int		mix_test_75(void){return ft_printf(
			"  %i    %c    %%    %p    %u    %x  ",
			mx_i, mx_c, &mx_i, mx_u, mx_u);}
int		mix_test_76(void){return ft_printf(
			"  %X    %%    %u    %c    %p    %s  ",
			mx_u, mx_u, mx_c, &mx_i, mx_s);}
int		mix_test_77(void){return ft_printf(
			"  %X    %i    %c    %u    %p    %s  ",
			mx_u, mx_i, mx_c, mx_u, &mx_i, mx_s);}
int		mix_test_78(void){return ft_printf(
			"  %p    %%    %c    %X    %u    %i  ",
			&mx_i, mx_c, mx_u, mx_u, mx_i);}
int		mix_test_79(void){return ft_printf(
			"  %s    %c    %i    %%    %p    %X  ",
			mx_s, mx_c, mx_i, &mx_i, mx_u);}
int		mix_test_80(void){return ft_printf(
			"  %p    %%    %c    %u    %s    %X  ",
			&mx_i, mx_c, mx_u, mx_s, mx_u);}
int		mix_test_81(void){return ft_printf(
			"  %x    %c    %%    %s    %X    %i  ",
			mx_u, mx_c, mx_s, mx_u, mx_i);}
int		mix_test_82(void){return ft_printf(
			"  %%    %c    %i    %X    %s    %x  ",
			mx_c, mx_i, mx_u, mx_s, mx_u);}
int		mix_test_83(void){return ft_printf(
			"  %i    %X    %%    %c    %u    %s  ",
			mx_i, mx_u, mx_c, mx_u, mx_s);}
int		mix_test_84(void){return ft_printf(
			"  %p    %x    %c    %s    %u    %p  ",
			&mx_i, mx_u, mx_c, mx_s, mx_u, &mx_i);}
int		mix_test_85(void){return ft_printf(
			"  %u    %p    %c    %X    %s    %p  ",
			mx_u, &mx_i, mx_c, mx_u, mx_s, &mx_i);}
int		mix_test_86(void){return ft_printf(
			"  %p    %c    %u    %X    %s    %p  ",
			&mx_i, mx_c, mx_u, mx_u, mx_s, &mx_i);}
int		mix_test_87(void){return ft_printf(
			"  %i    %u    %X    %p    %c    %p  ",
			mx_i, mx_u, mx_u, &mx_i, mx_c, &mx_i);}
int		mix_test_88(void){return ft_printf(
			"  %i    %c    %p    %%    %X    %u  ",
			mx_i, mx_c, &mx_i, mx_u, mx_u);}
int		mix_test_89(void){return ft_printf(
			"  %s    %c    %i    %x    %p    %u  ",
			mx_s, mx_c, mx_i, mx_u, &mx_i, mx_u);}
int		mix_test_90(void){return ft_printf(
			"  %u    %s    %x    %p    %i    %c  ",
			mx_u, mx_s, mx_u, &mx_i, mx_i, mx_c);}
int		mix_test_91(void){return ft_printf(
			"  %u    %p    %X    %c    %%    %x  ",
			mx_u, &mx_i, mx_u, mx_c, mx_u);}
int		mix_test_92(void){return ft_printf(
			"  %c    %p    %X    %x    %%    %s  ",
			mx_c, &mx_i, mx_u, mx_u, mx_s);}
int		mix_test_93(void){return ft_printf(
			"  %x    %c    %s    %p    %u    %i  ",
			mx_u, mx_c, mx_s, &mx_i, mx_u, mx_i);}
int		mix_test_94(void){return ft_printf(
			"  %X    %p    %c    %%    %u    %i  ",
			mx_u, &mx_i, mx_c, mx_u, mx_i);}
int		mix_test_95(void){return ft_printf(
			"  %%    %i    %x    %p    %c    %s  ",
			mx_i, mx_u, &mx_i, mx_c, mx_s);}
int		mix_test_96(void){return ft_printf(
			"  %X    %p    %c    %s    %i    %u  ",
			mx_u, &mx_i, mx_c, mx_s, mx_i, mx_u);}
int		mix_test_97(void){return ft_printf(
			"  %u    %i    %p    %x    %s    %X  ",
			mx_u, mx_i, &mx_i, mx_u, mx_s, mx_u);}
int		mix_test_98(void){return ft_printf(
			"  %i    %s    %%    %p    %X    %c  ",
			mx_i, mx_s, &mx_i, mx_u, mx_c);}
int		mix_test_99(void){return ft_printf(
			"  %X    %p    %c    %u    %x    %i  ",
			mx_u, &mx_i, mx_c, mx_u, mx_u, mx_i);}

//This block was filtered by cclaude's work on the new curriculum--old tests were simply discarded
int		mix_successive_0(void){return ( ft_printf("%c", mx_c) + ft_printf("%u", mx_u));}

int		mix_successive_4(void){return ( ft_printf("%x", mx_u) + ft_printf("%i", mx_i));}

int		mix_successive_6(void){return ( ft_printf("%s", mx_s) + ft_printf("%c", mx_c));}

int		mix_successive_10(void){return ( ft_printf("%u", mx_u) + ft_printf("%s", mx_s));}

int		mix_successive_16(void){return ( ft_printf("%s", mx_s) + ft_printf("%x", mx_u));}

int		mix_successive_20(void){return ( ft_printf("%p", &mx_i) + ft_printf("%s", mx_s));}

int		mix_successive_21(void){return ( ft_printf("%X", mx_u) + ft_printf("%x", mx_u));}

int		mix_successive_28(void){return ( ft_printf("%i", mx_i) + ft_printf("%u", mx_u));}

int		mix_successive_30(void){return ( ft_printf("%s", mx_s) + ft_printf("%u", mx_u));}

int		mix_successive_31(void){return ( ft_printf("%X", mx_u) + ft_printf("%c", mx_c));}

int		mix_successive_32(void){return ( ft_printf("%x", mx_u) + ft_printf("%u", mx_u));}

int		mix_successive_39(void){return ( ft_printf("%i", mx_i) + ft_printf("%c", mx_c));}

int		mix_successive_40(void){return ( ft_printf("%c", mx_c) + ft_printf("%x", mx_u));}

int		mix_successive_42(void){return ( ft_printf("%x", mx_u) + ft_printf("%s", mx_s));}

int		mix_successive_43(void){return ( ft_printf("%u", mx_u) + ft_printf("%x", mx_u));}

int		mix_successive_45(void){return ( ft_printf("%s", mx_s) + ft_printf("%c", mx_c));}

int		mix_successive_46(void){return ( ft_printf("%i", mx_i) + ft_printf("%s", mx_s));}

int		mix_successive_61(void){return ( ft_printf("%p", &mx_i) + ft_printf("%c", mx_c));}

int		mix_successive_64(void){return ( ft_printf("%s", mx_s) + ft_printf("%c", mx_c));}


/* -----------------------------------------------------------------------------
** 						'+' FLAG (ALLSIGN) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Signed integers with allsign ('+')
int bonus_as_d_pos(void){return ft_printf("%+d", 5);}
int bonus_as_d_neg(void){return ft_printf("%+d", -7);}
int bonus_as_d_intmax(void){return ft_printf("%+d", 2147483647);}
int bonus_as_d_prec_pos(void){return ft_printf("%+.7d", 234);}
int bonus_as_d_prec_neg(void){return ft_printf("%+.7d", -446);}
int bonus_as_d_prec_pos_nofit(void){return ft_printf("%+.3d", 3723);}
int bonus_as_d_width_pos(void){return ft_printf("%+5d", 35);}
int bonus_as_d_width_zero(void){return ft_printf("%+7d", 0);}
int bonus_as_d_width_intmax(void){return ft_printf("%+24d", 2147483647);}
int bonus_as_d_zp_fits(void){return ft_printf("%+05d", 432);}
int bonus_as_d_zp_zero(void){return ft_printf("%+04d", 0);}
//Signed integers with field width and precision with allsign
int bonus_as_d_prec0val0(void){return ft_printf("%+.0d", 0);}
int bonus_as_d_prec0val0_impl(void){return ft_printf("%+.d", 0);}
int bonus_as_d_prec_width_fit_fit_pos(void){return ft_printf("%+8.5d", 34);}
int bonus_as_d_prec_width_fit_fit_neg(void){return ft_printf("%+10.5d", -216);}
int bonus_as_d_prec_width_fit_fit_zero(void){return ft_printf("%+8.5d", 0);}
int bonus_as_d_prec_width_nofit_fit_pos(void){return ft_printf("%+8.3d", 8375);}
int bonus_as_d_prec_width_nofit_fit_neg(void){return ft_printf("%+8.3d", -8473);}
int bonus_as_d_prec_width_fit_nofit_pos(void){return ft_printf("%+3.7d", 3267);}
int bonus_as_d_prec_width_fit_nofit_neg(void){return ft_printf("%+3.7d", -2375);}
int bonus_as_d_prec_width_nofit_nofit_pos(void){return ft_printf("%+3.3d", 6983);}
int bonus_as_d_prec_width_nofit_nofit_neg(void){return ft_printf("%+3.3d", -8462);}
//Signed integers with field width and precision, left-justified with allsign
int bonus_as_d_prec_width_fit_fit_pos_ljas(void){return ft_printf("%+-8.5d", 34);}
int bonus_as_d_prec_width_fit_fit_neg_ljas(void){return ft_printf("%+-10.5d", -216);}
int bonus_as_d_prec_width_fit_fit_zero_ljas(void){return ft_printf("%+-8.5d", 0);}
int bonus_as_d_prec_width_nofit_fit_pos_ljas(void){return ft_printf("%+-8.3d", 8375);}
int bonus_as_d_prec_width_nofit_fit_neg_ljas(void){return ft_printf("%+-8.3d", -8473);}
int bonus_as_d_prec_width_fit_nofit_pos_ljas(void){return ft_printf("%+-3.7d", 3267);}
int bonus_as_d_prec_width_fit_nofit_neg_ljas(void){return ft_printf("%+-3.7d", -2375);}
int bonus_as_d_prec_width_nofit_nofit_pos_ljas(void){return ft_printf("%+-3.3d", 6983);}
int bonus_as_d_prec_width_nofit_nofit_neg_ljas(void){return ft_printf("%+-3.3d", -8462);}
//Signed integers with field width and precision with allsign with zeropadding
int bonus_as_d_prec_width_ff_pos_zp(void){return ft_printf("%0+8.5d", 34);}
int bonus_as_d_prec_width_ff_neg_zp(void){return ft_printf("%0+10.5d", -216);}
int bonus_as_d_prec_width_ff_zero_zp(void){return ft_printf("%0+8.5d", 0);}
int bonus_as_d_prec_width_nf_pos_zp(void){return ft_printf("%0+8.3d", 8375);}
int bonus_as_d_prec_width_nf_neg_zp(void){return ft_printf("%0+8.3d", -8473);}
int bonus_as_d_prec_width_fn_pos_zp(void){return ft_printf("%0+3.7d", 3267);}
int bonus_as_d_prec_width_fn_neg_zp(void){return ft_printf("%0+3.7d", -2375);}
int bonus_as_d_prec_width_nn_pos_zp(void){return ft_printf("%0+3.3d", 6983);}
int bonus_as_d_prec_width_nn_neg_zp(void){return ft_printf("%0+3.3d", -8462);}
//Signed integers with field width and precision, left-justified with allsign with zeropadding
int bonus_as_d_prec_width_ff_pos_ljaszp_ignoreflag(void){return ft_printf("%0+-8.5d", 34);}
int bonus_as_d_prec_width_ff_neg_ljaszp_ignoreflag(void){return ft_printf("%0+-10.5d", -216);}
int bonus_as_d_prec_width_ff_zero_ljaszp_ignoreflag(void){return ft_printf("%0+-8.5d", 0);}
int bonus_as_d_prec_width_nf_pos_ljaszp_ignoreflag(void){return ft_printf("%0+-8.3d", 8375);}
int bonus_as_d_prec_width_nf_neg_ljaszp_ignoreflag(void){return ft_printf("%0+-8.3d", -8473);}
int bonus_as_d_prec_width_fn_pos_ljaszp_ignoreflag(void){return ft_printf("%0+-3.7d", 3267);}
int bonus_as_d_prec_width_fn_neg_ljaszp_ignoreflag(void){return ft_printf("%0+-3.7d", -2375);}
int bonus_as_d_prec_width_nn_pos_ljaszp_ignoreflag(void){return ft_printf("%0+-3.3d", 6983);}
int bonus_as_d_prec_width_nn_neg_ljaszp_ignoreflag(void){return ft_printf("%0+-3.3d", -8462);}

//Signed integers  allsign ('+')
int bonus_as_i_pos(void){return ft_printf("%+i", 5);}
int bonus_as_i_neg(void){return ft_printf("%+i", -7);}
int bonus_as_i_intmax(void){return ft_printf("%+i", 2147483647);}
int bonus_as_i_zp_fits(void){return ft_printf("%+05i", 432);}
int bonus_as_i_zp_zero(void){return ft_printf("%+04i", 0);}
//signed integers  field width and allsign
int bonus_as_i_width_pos(void){return ft_printf("%+5i", 35);}
int bonus_as_i_width_zero(void){return ft_printf("%+7i", 0);}
int bonus_as_i_width_intmax(void){return ft_printf("%+24i", 2147483647);}
//signed integers with precision
int bonus_as_i_prec_pos(void){return ft_printf("%+.7i", 234);}
int bonus_as_i_prec_neg(void){return ft_printf("%+.7i", -446);}
int bonus_as_i_prec_pos_nofit(void){return ft_printf("%+.3i", 3723);}
int bonus_as_i_prec0val0(void){return ft_printf("%+.0i", 0);}
int bonus_as_i_prec0val0_impl(void){return ft_printf("%+.i", 0);}
int bonus_as_i_prec0val0_was(void){return ft_printf("%+5.0i", 0);}
int bonus_as_i_prec0val0_was_impl(void){return ft_printf("%+5.i", 0);}
int bonus_as_i_prec0val0_waslj(void){return ft_printf("%+-5.0i", 0);}
int bonus_as_i_prec0val0_waslj_impl(void){return ft_printf("%+-5.i", 0);}
//Signed integers with field width and precision with allsign
int bonus_as_i_prec_width_fit_fit_pos(void){return ft_printf("%+8.5i", 34);}
int bonus_as_i_prec_width_fit_fit_neg(void){return ft_printf("%+10.5i", -216);}
int bonus_as_i_prec_width_fit_fit_zero(void){return ft_printf("%+8.5i", 0);}
int bonus_as_i_prec_width_nofit_fit_pos(void){return ft_printf("%+8.3i", 8375);}
int bonus_as_i_prec_width_nofit_fit_neg(void){return ft_printf("%+8.3i", -8473);}
int bonus_as_i_prec_width_fit_nofit_pos(void){return ft_printf("%+3.7i", 3267);}
int bonus_as_i_prec_width_fit_nofit_neg(void){return ft_printf("%+3.7i", -2375);}
int bonus_as_i_prec_width_nofit_nofit_pos(void){return ft_printf("%+3.3i", 6983);}
int bonus_as_i_prec_width_nofit_nofit_neg(void){return ft_printf("%+3.3i", -8462);}
//Signed integers with field width and precision with allsign with zeropadding
int bonus_as_i_prec_width_ff_pos_zp(void){return ft_printf("%0+8.5i", 34);}
int bonus_as_i_prec_width_ff_neg_zp(void){return ft_printf("%0+10.5i", -216);}
int bonus_as_i_prec_width_ff_zero_zp(void){return ft_printf("%0+8.5i", 0);}
int bonus_as_i_prec_width_nf_pos_zp(void){return ft_printf("%0+8.3i", 8375);}
int bonus_as_i_prec_width_nf_neg_zp(void){return ft_printf("%0+8.3i", -8473);}
int bonus_as_i_prec_width_fn_pos_zp(void){return ft_printf("%0+3.7i", 3267);}
int bonus_as_i_prec_width_fn_neg_zp(void){return ft_printf("%0+3.7i", -2375);}
int bonus_as_i_prec_width_nn_pos_zp(void){return ft_printf("%0+3.3i", 6983);}
int bonus_as_i_prec_width_nn_neg_zp(void){return ft_printf("%0+3.3i", -8462);}
//Signed integers with field width and precision, left-justified with allsign
int bonus_as_i_prec_width_fit_fit_pos_ljas(void){return ft_printf("%+-8.5i", 34);}
int bonus_as_i_prec_width_fit_fit_neg_ljas(void){return ft_printf("%+-10.5i", -216);}
int bonus_as_i_prec_width_fit_fit_zero_ljas(void){return ft_printf("%+-8.5i", 0);}
int bonus_as_i_prec_width_nofit_fit_pos_ljas(void){return ft_printf("%+-8.3i", 8375);}
int bonus_as_i_prec_width_nofit_fit_neg_ljas(void){return ft_printf("%+-8.3i", -8473);}
int bonus_as_i_prec_width_fit_nofit_pos_ljas(void){return ft_printf("%+-3.7i", 3267);}
int bonus_as_i_prec_width_fit_nofit_neg_ljas(void){return ft_printf("%+-3.7i", -2375);}
int bonus_as_i_prec_width_nofit_nofit_pos_ljas(void){return ft_printf("%+-3.3i", 6983);}
int bonus_as_i_prec_width_nofit_nofit_neg_ljas(void){return ft_printf("%+-3.3i", -8462);}
//Signed integers with field width and precision, left-justified with allsign with zeropadding
int bonus_as_i_prec_width_ff_pos_ljaszp_ignoreflag(void){return ft_printf("%0+-8.5i", 34);}
int bonus_as_i_prec_width_ff_neg_ljaszp_ignoreflag(void){return ft_printf("%0+-10.5i", -216);}
int bonus_as_i_prec_width_ff_zero_ljaszp_ignoreflag(void){return ft_printf("%0+-8.5i", 0);}
int bonus_as_i_prec_width_nf_pos_ljaszp_ignoreflag(void){return ft_printf("%0+-8.3i", 8375);}
int bonus_as_i_prec_width_nf_neg_ljaszp_ignoreflag(void){return ft_printf("%0+-8.3i", -8473);}
int bonus_as_i_prec_width_fn_pos_ljaszp_ignoreflag(void){return ft_printf("%0+-3.7i", 3267);}
int bonus_as_i_prec_width_fn_neg_ljaszp_ignoreflag(void){return ft_printf("%0+-3.7i", -2375);}
int bonus_as_i_prec_width_nn_pos_ljaszp_ignoreflag(void){return ft_printf("%0+-3.3i", 6983);}
int bonus_as_i_prec_width_nn_neg_ljaszp_ignoreflag(void){return ft_printf("%0+-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_as_dupflag_d(void){return ft_printf("%++d", 42);}
int nocrash_notrequired_bonus_as_dupflag_d_ljasljw(void){return ft_printf("%-+-5d", 42);}
int nocrash_notrequired_bonus_as_c_1(void){return ft_printf("%+c", 'a');}
int nocrash_notrequired_bonus_as_c_2(void){return ft_printf("%+c", -42);}
int nocrash_notrequired_bonus_as_s_1(void){return ft_printf("%+s", "hello");}
int nocrash_notrequired_bonus_as_p_1(void){return ft_printf("%+p", &ncm_p);}
int nocrash_notrequired_bonus_as_p_2(void){return ft_printf("%+p", &ncm_p);}
int nocrash_notrequired_bonus_as_u(void){return ft_printf("%+u", 42);}
int nocrash_notrequired_bonus_as_x(void){return ft_printf("%+x", 42);}
int nocrash_notrequired_bonus_as_X(void){return ft_printf("%+X", 42);}


/* -----------------------------------------------------------------------------
** 						' ' FLAG (SPACE) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Signed integers - space - no modifers
int bonus_sp_d_basic_i_pos(void){return ft_printf("this % d number", 17);}
int bonus_sp_d_basic_i_neg(void){return ft_printf("this % d number", -267);}
int bonus_sp_d_basic_i_zero(void){return ft_printf("this % d number", 0);}
int bonus_sp_d_basic_i_onlypos(void){return ft_printf("% d", 3);}
int bonus_sp_d_basic_i_onlyneg(void){return ft_printf("% d", -1);}
int bonus_sp_d_basic_i_onlyzero(void){return ft_printf("% d", 0);}
int bonus_sp_d_basic_i_pos_d(void){return ft_printf("this % d number", 17);}
int bonus_sp_d_basic_i_neg_d(void){return ft_printf("this % d number", -267);}
int bonus_sp_d_basic_i_zero_d(void){return ft_printf("this % d number", 0);}
int bonus_sp_d_intmax(void){return ft_printf("% d", 2147483647);}
int bonus_sp_d_intmin(void){return ft_printf("% d", (int)(-2147483678));}
//Signed integers - space with field width
int bonus_sp_d_width_pos_fits(void){return ft_printf("% 7d", 33);}
int bonus_sp_d_width_neg_fits(void){return ft_printf("% 7d", -14);}
int bonus_sp_d_width_zero_fits(void){return ft_printf("% 3d", 0);}
int bonus_sp_d_width_pos_exactfit(void){return ft_printf("% 5d", 52625);}
int bonus_sp_d_width_neg_exactfit(void){return ft_printf("% 5d", -2562);}
int bonus_sp_d_width_pos_nofit(void){return ft_printf("% 4d", 94827);}
int bonus_sp_d_width_neg_nofit(void){return ft_printf("% 4d", -2464);}
int bonus_sp_d_width_pos_fits_lj(void){return ft_printf("% -7d", 33);}
int bonus_sp_d_width_neg_fits_lj(void){return ft_printf("% -7d", -14);}
int bonus_sp_d_width_zero_fits_lj(void){return ft_printf("% -3d", 0);}
int bonus_sp_d_width_pos_exactfit_lj(void){return ft_printf("% -5d", 52625);}
int bonus_sp_d_width_neg_exactfit_lj(void){return ft_printf("% -5d", -2562);}
int bonus_sp_d_width_pos_nofit_lj(void){return ft_printf("% -4d", 94827);}
int bonus_sp_d_width_neg_nofit_lj(void){return ft_printf("% -4d", -2464);}
//signed integers with precision
int bonus_sp_d_prec_fits_pos(void){return ft_printf("% .5d", 2);}
int bonus_sp_d_prec_fits_neg(void){return ft_printf("% .6d", -3);}
int bonus_sp_d_prec_fits_zero(void){return ft_printf("% .3d", 0);}
int bonus_sp_d_prec_exactfit_pos(void){return ft_printf("% .4d", 5263);}
int bonus_sp_d_prec_exactfit_neg(void){return ft_printf("% .4d", -2372);}
int bonus_sp_d_prec_nofit_pos(void){return ft_printf("% .3d", 13862);}
int bonus_sp_d_prec_nofit_neg(void){return ft_printf("% .3d",-23646);}
//Signed integers - space with zero field width padding
int bonus_sp_d_zpsp_pos_fits(void){return ft_printf("% 05d", 43);}
int bonus_sp_d_zpsp_neg_fits(void){return ft_printf("% 07d", -54);}
int bonus_sp_d_zpsp_zero_fits(void){return ft_printf("% 03d", 0);}
int bonus_sp_d_zpsp_pos_exactfit(void){return ft_printf("% 03d", 634);}
int bonus_sp_d_zpsp_neg_exactfit(void){return ft_printf("% 04d", -532);}
int bonus_sp_d_zpsp_neg_minus1fit(void){return ft_printf("% 04d", -4825);}
//Signed integers - space with field width and precision
int bonus_sp_d_prec_width_fit_fit_pos(void){return ft_printf("% 8.5d", 34);}
int bonus_sp_d_prec_width_fit_fit_neg(void){return ft_printf("% 10.5d", -216);}
int bonus_sp_d_prec_width_fit_fit_zero(void){return ft_printf("% 8.5d", 0);}
int bonus_sp_d_prec_width_nofit_fit_pos(void){return ft_printf("% 8.3d", 8375);}
int bonus_sp_d_prec_width_nofit_fit_neg(void){return ft_printf("% 8.3d", -8473);}
int bonus_sp_d_prec_width_fit_nofit_pos(void){return ft_printf("% 3.7d", 3267);}
int bonus_sp_d_prec_width_fit_nofit_neg(void){return ft_printf("% 3.7d", -2375);}
int bonus_sp_d_prec_width_nofit_nofit_pos(void){return ft_printf("% 3.3d", 6983);}
int bonus_sp_d_prec_width_nofit_nofit_neg(void){return ft_printf("% 3.3d", -8462);}
//Signed integers - space with field width and precision, left-justified
int bonus_sp_d_prec_width_fit_fit_pos_lj(void){return ft_printf("% -8.5d", 34);}
int bonus_sp_d_prec_width_fit_fit_neg_lj(void){return ft_printf("% -10.5d", -216);}
int bonus_sp_d_prec_width_fit_fit_zero_lj(void){return ft_printf("% -8.5d", 0);}
int bonus_sp_d_prec_width_nofit_fit_pos_lj(void){return ft_printf("% -8.3d", 8375);}
int bonus_sp_d_prec_width_nofit_fit_neg_lj(void){return ft_printf("% -8.3d", -8473);}
int bonus_sp_d_prec_width_fit_nofit_pos_lj(void){return ft_printf("% -3.7d", 3267);}
int bonus_sp_d_prec_width_fit_nofit_neg_lj(void){return ft_printf("% -3.7d", -2375);}
int bonus_sp_d_prec_width_nofit_nofit_pos_lj(void){return ft_printf("% -3.3d", 6983);}
int bonus_sp_d_prec_width_nofit_nofit_neg_lj(void){return ft_printf("% -3.3d", -8462);}
//Signed integers - space with field width and precision with zeropadding
int bonus_sp_d_prec_width_ff_pos_zp(void){return ft_printf("% 08.5d", 34);}
int bonus_sp_d_prec_width_ff_neg_zp(void){return ft_printf("% 010.5d", -216);}
int bonus_sp_d_prec_width_ff_zero_zp(void){return ft_printf("% 08.5d", 0);}
int bonus_sp_d_prec_width_nf_pos_zp(void){return ft_printf("% 08.3d", 8375);}
int bonus_sp_d_prec_width_nf_neg_zp(void){return ft_printf("% 08.3d", -8473);}
int bonus_sp_d_prec_width_fn_pos_zp(void){return ft_printf("% 03.7d", 3267);}
int bonus_sp_d_prec_width_fn_neg_zp(void){return ft_printf("% 03.7d", -2375);}
int bonus_sp_d_prec_width_nn_pos_zp(void){return ft_printf("% 03.3d", 6983);}
int bonus_sp_d_prec_width_nn_neg_zp(void){return ft_printf("% 03.3d", -8462);}
//Signed integers - space with field width and precision, left-justified with zeropadding
int bonus_sp_d_prec_width_ff_pos_ljzpsp_ignoreflag(void){return ft_printf("% 0-8.5d", 34);}
int bonus_sp_d_prec_width_ff_neg_ljzpsp_ignoreflag(void){return ft_printf("% 0-10.5d", -216);}
int bonus_sp_d_prec_width_ff_zero_ljzpsp_ignoreflag(void){return ft_printf("% 0-8.5d", 0);}
int bonus_sp_d_prec_width_nf_pos_ljzpsp_ignoreflag(void){return ft_printf("% 0-8.3d", 8375);}
int bonus_sp_d_prec_width_nf_neg_ljzpsp_ignoreflag(void){return ft_printf("% 0-8.3d", -8473);}
int bonus_sp_d_prec_width_fn_pos_ljzpsp_ignoreflag(void){return ft_printf("% 0-3.7d", 3267);}
int bonus_sp_d_prec_width_fn_neg_ljzpsp_ignoreflag(void){return ft_printf("% 0-3.7d", -2375);}
int bonus_sp_d_prec_width_nn_pos_ljzpsp_ignoreflag(void){return ft_printf("% 0-3.3d", 6983);}
int bonus_sp_d_prec_width_nn_neg_ljzpsp_ignoreflag(void){return ft_printf("% 0-3.3d", -8462);}

//Signed integers - space - no modifers
int bonus_sp_i_basic_i_pos(void){return ft_printf("this % i number", 17);}
int bonus_sp_i_basic_i_neg(void){return ft_printf("this % i number", -267);}
int bonus_sp_i_basic_i_zero(void){return ft_printf("this % i number", 0);}
int bonus_sp_i_basic_i_onlypos(void){return ft_printf("% i", 3);}
int bonus_sp_i_basic_i_onlyneg(void){return ft_printf("% i", -1);}
int bonus_sp_i_basic_i_onlyzero(void){return ft_printf("% i", 0);}
int bonus_sp_i_basic_i_pos_d(void){return ft_printf("this % d number", 17);}
int bonus_sp_i_basic_i_neg_d(void){return ft_printf("this % d number", -267);}
int bonus_sp_i_basic_i_zero_d(void){return ft_printf("this % d number", 0);}
int bonus_sp_i_intmax(void){return ft_printf("% i", 2147483647);}
int bonus_sp_i_intmin(void){return ft_printf("% i", (int)(-2147483678));}
//Signed integers - space with field width
int bonus_sp_i_width_pos_fits(void){return ft_printf("% 7i", 33);}
int bonus_sp_i_width_neg_fits(void){return ft_printf("% 7i", -14);}
int bonus_sp_i_width_zero_fits(void){return ft_printf("% 3i", 0);}
int bonus_sp_i_width_pos_exactfit(void){return ft_printf("% 5i", 52625);}
int bonus_sp_i_width_neg_exactfit(void){return ft_printf("% 5i", -2562);}
int bonus_sp_i_width_pos_nofit(void){return ft_printf("% 4i", 94827);}
int bonus_sp_i_width_neg_nofit(void){return ft_printf("% 4i", -2464);}
int bonus_sp_i_width_pos_fits_lj(void){return ft_printf("% -7i", 33);}
int bonus_sp_i_width_neg_fits_lj(void){return ft_printf("% -7i", -14);}
int bonus_sp_i_width_zero_fits_lj(void){return ft_printf("% -3i", 0);}
int bonus_sp_i_width_pos_exactfit_lj(void){return ft_printf("% -5i", 52625);}
int bonus_sp_i_width_neg_exactfit_lj(void){return ft_printf("% -5i", -2562);}
int bonus_sp_i_width_pos_nofit_lj(void){return ft_printf("% -4i", 94827);}
int bonus_sp_i_width_neg_nofit_lj(void){return ft_printf("% -4i", -2464);}
//signed integers with precision
int bonus_sp_i_prec_fits_pos(void){return ft_printf("% .5i", 2);}
int bonus_sp_i_prec_fits_neg(void){return ft_printf("% .6i", -3);}
int bonus_sp_i_prec_fits_zero(void){return ft_printf("% .3i", 0);}
int bonus_sp_i_prec_exactfit_pos(void){return ft_printf("% .4i", 5263);}
int bonus_sp_i_prec_exactfit_neg(void){return ft_printf("% .4i", -2372);}
int bonus_sp_i_prec_nofit_pos(void){return ft_printf("% .3i", 13862);}
int bonus_sp_i_prec_nofit_neg(void){return ft_printf("% .3i",-23646);}
//Signed integers - space with zero field width padding
int bonus_sp_i_zpsp_pos_fits(void){return ft_printf("% 05i", 43);}
int bonus_sp_i_zpsp_neg_fits(void){return ft_printf("% 07i", -54);}
int bonus_sp_i_zpsp_zero_fits(void){return ft_printf("% 03i", 0);}
int bonus_sp_i_zpsp_pos_exactfit(void){return ft_printf("% 03i", 634);}
int bonus_sp_i_zpsp_neg_exactfit(void){return ft_printf("% 04i", -532);}
int bonus_sp_i_zpsp_neg_minus1fit(void){return ft_printf("% 04i", -4825);}
//Signed integers - space with field width and precision
int bonus_sp_i_prec_width_fit_fit_pos(void){return ft_printf("% 8.5i", 34);}
int bonus_sp_i_prec_width_fit_fit_neg(void){return ft_printf("% 10.5i", -216);}
int bonus_sp_i_prec_width_fit_fit_zero(void){return ft_printf("% 8.5i", 0);}
int bonus_sp_i_prec_width_nofit_fit_pos(void){return ft_printf("% 8.3i", 8375);}
int bonus_sp_i_prec_width_nofit_fit_neg(void){return ft_printf("% 8.3i", -8473);}
int bonus_sp_i_prec_width_fit_nofit_pos(void){return ft_printf("% 3.7i", 3267);}
int bonus_sp_i_prec_width_fit_nofit_neg(void){return ft_printf("% 3.7i", -2375);}
int bonus_sp_i_prec_width_nofit_nofit_pos(void){return ft_printf("% 3.3i", 6983);}
int bonus_sp_i_prec_width_nofit_nofit_neg(void){return ft_printf("% 3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified
int bonus_sp_i_prec_width_fit_fit_pos_lj(void){return ft_printf("% -8.5i", 34);}
int bonus_sp_i_prec_width_fit_fit_neg_lj(void){return ft_printf("% -10.5i", -216);}
int bonus_sp_i_prec_width_fit_fit_zero_lj(void){return ft_printf("% -8.5i", 0);}
int bonus_sp_i_prec_width_nofit_fit_pos_lj(void){return ft_printf("% -8.3i", 8375);}
int bonus_sp_i_prec_width_nofit_fit_neg_lj(void){return ft_printf("% -8.3i", -8473);}
int bonus_sp_i_prec_width_fit_nofit_pos_lj(void){return ft_printf("% -3.7i", 3267);}
int bonus_sp_i_prec_width_fit_nofit_neg_lj(void){return ft_printf("% -3.7i", -2375);}
int bonus_sp_i_prec_width_nofit_nofit_pos_lj(void){return ft_printf("% -3.3i", 6983);}
int bonus_sp_i_prec_width_nofit_nofit_neg_lj(void){return ft_printf("% -3.3i", -8462);}
//Signed integers - space with field width and precision with zeropadding
int bonus_sp_i_prec_width_ff_pos_zp(void){return ft_printf("% 08.5i", 34);}
int bonus_sp_i_prec_width_ff_neg_zp(void){return ft_printf("% 010.5i", -216);}
int bonus_sp_i_prec_width_ff_zero_zp(void){return ft_printf("% 08.5i", 0);}
int bonus_sp_i_prec_width_nf_pos_zp(void){return ft_printf("% 08.3i", 8375);}
int bonus_sp_i_prec_width_nf_neg_zp(void){return ft_printf("% 08.3i", -8473);}
int bonus_sp_i_prec_width_fn_pos_zp(void){return ft_printf("% 03.7i", 3267);}
int bonus_sp_i_prec_width_fn_neg_zp(void){return ft_printf("% 03.7i", -2375);}
int bonus_sp_i_prec_width_nn_pos_zp(void){return ft_printf("% 03.3i", 6983);}
int bonus_sp_i_prec_width_nn_neg_zp(void){return ft_printf("% 03.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with zeropadding
int bonus_sp_i_prec_width_ff_pos_ljzpsp_ignoreflag(void){return ft_printf("% 0-8.5i", 34);}
int bonus_sp_i_prec_width_ff_neg_ljzpsp_ignoreflag(void){return ft_printf("% 0-10.5i", -216);}
int bonus_sp_i_prec_width_ff_zero_ljzpsp_ignoreflag(void){return ft_printf("% 0-8.5i", 0);}
int bonus_sp_i_prec_width_nf_pos_ljzpsp_ignoreflag(void){return ft_printf("% 0-8.3i", 8375);}
int bonus_sp_i_prec_width_nf_neg_ljzpsp_ignoreflag(void){return ft_printf("% 0-8.3i", -8473);}
int bonus_sp_i_prec_width_fn_pos_ljzpsp_ignoreflag(void){return ft_printf("% 0-3.7i", 3267);}
int bonus_sp_i_prec_width_fn_neg_ljzpsp_ignoreflag(void){return ft_printf("% 0-3.7i", -2375);}
int bonus_sp_i_prec_width_nn_pos_ljzpsp_ignoreflag(void){return ft_printf("% 0-3.3i", 6983);}
int bonus_sp_i_prec_width_nn_neg_ljzpsp_ignoreflag(void){return ft_printf("% 0-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_sp_dupflag_d(void){return ft_printf("%  d", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_bonus_sp_c_1(void){return ft_printf("% c", 'a');}
int nocrash_notrequired_bonus_sp_c_2(void){return ft_printf("% c", -42);}
int nocrash_notrequired_bonus_sp_s_1(void){return ft_printf("% s", "hello");}
int nocrash_notrequired_bonus_sp_p_1(void){return ft_printf("% p", &ncm_p);}
int nocrash_notrequired_bonus_sp_p_2(void){return ft_printf("% p", &ncm_p);}
int nocrash_notrequired_bonus_sp_u(void){return ft_printf("% u", 42);}
int nocrash_notrequired_bonus_sp_x(void){return ft_printf("% x", 42);}
int nocrash_notrequired_bonus_sp_X(void){return ft_printf("% X", 42);}


/* -----------------------------------------------------------------------------
** 						'#' FLAG (ALTFORM) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Hexadecimal lower (altform) - no modifers
int bonus_af_x_basic_pos(void){return ft_printf("this %#x number", 17);}
int bonus_af_x_basic_zero(void){return ft_printf("this %#x number", 0);}
int bonus_af_x_basic_onlypos(void){return ft_printf("%#x", 3);}
int bonus_af_x_hexlmax(void){return ft_printf("%#x", 4294967295u);}
//Hexadecimal lower (altform) with field width
int bonus_af_x_width_pos_fits(void){return ft_printf("%#7x", 33);}
int bonus_af_x_width_zero_fits(void){return ft_printf("%#3x", 0);}
int bonus_af_x_width_pos_exactfit(void){return ft_printf("%#5x", 52625);}
int bonus_af_x_width_pos_nofit(void){return ft_printf("%#2x", 94827);}
int bonus_af_x_width_pos_fits_lj(void){return ft_printf("%#-7x", 33);}
int bonus_af_x_width_zero_fits_lj(void){return ft_printf("%#-3x", 0);}
int bonus_af_x_width_pos_exactfit_lj(void){return ft_printf("%#-5x", 52625);}
int bonus_af_x_width_pos_nofit_lj(void){return ft_printf("%#-4x", 9648627);}
//Hexadecimal lower (altform) with precision
int bonus_af_x_prec_fits_pos(void){return ft_printf("%#.5x", 21);}
int bonus_af_x_prec_fits_zero(void){return ft_printf("%#.3x", 0);}
int bonus_af_x_prec_exactfit_pos(void){return ft_printf("%#.4x", 5263);}
int bonus_af_x_prec_nofit_pos(void){return ft_printf("%#.3x", 938862);}
int bonus_af_x_prec0val0(void){return ft_printf("%#.0x", 0);}
int bonus_af_x_prec0val0_impl(void){return ft_printf("%#.x", 0);}
int bonus_af_x_prec0val0_waf(void){return ft_printf("%#5.0x", 0);}
int bonus_af_x_prec0val0_waf_impl(void){return ft_printf("%#5.x", 0);}
int bonus_af_x_prec0val0_waflj(void){return ft_printf("%#-5.0x", 0);}
int bonus_af_x_prec0val0_waflj_impl(void){return ft_printf("%#-5.x", 0);}
//Hexadecimal lower (altform) with zero field width padding
int bonus_af_x_zp_pos_fits(void){return ft_printf("%#05x", 43);}
int bonus_af_x_zp_zero_fits(void){return ft_printf("%#03x", 0);}
int bonus_af_x_zp_pos_exactfit(void){return ft_printf("%#03x", 698334);}
//Hexadecimal lower (altform) with field width and precision
int bonus_af_x_prec_width_fit_fit_pos(void){return ft_printf("%#8.5x", 34);}
int bonus_af_x_prec_width_fit_fit_zero(void){return ft_printf("%#8.5x", 0);}
int bonus_af_x_prec_width_nofit_fit_pos(void){return ft_printf("%#8.3x", 8375);}
int bonus_af_x_prec_width_fit_nofit_pos(void){return ft_printf("%#2.7x", 3267);}
int bonus_af_x_prec_width_nofit_nofit_pos(void){return ft_printf("%#3.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision, left-justified
int bonus_af_x_prec_width_fit_fit_pos_lj(void){return ft_printf("%#-8.5x", 34);}
int bonus_af_x_prec_width_fit_fit_zero_lj(void){return ft_printf("%#-8.5x", 0);}
int bonus_af_x_prec_width_nofit_fit_pos_lj(void){return ft_printf("%#-8.3x", 8375);}
int bonus_af_x_prec_width_fit_nofit_pos_lj(void){return ft_printf("%#-2.7x", 3267);}
int bonus_af_x_prec_width_nofit_nofit_pos_lj(void){return ft_printf("%#-3.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision with zeropadding
int bonus_af_x_prec_width_ff_pos_zp(void){return ft_printf("%#08.5x", 34);}
int bonus_af_x_prec_width_ff_zero_zp(void){return ft_printf("%#08.5x", 0);}
int bonus_af_x_prec_width_nf_pos_zp(void){return ft_printf("%#08.3x", 8375);}
int bonus_af_x_prec_width_fn_pos_zp(void){return ft_printf("%#02.7x", 3267);}
int bonus_af_x_prec_width_nn_pos_zp(void){return ft_printf("%#03.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision, left-justified with zeropadding
int bonus_af_x_prec_width_ff_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.5x", 34);}
int bonus_af_x_prec_width_ff_zero_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.5x", 0);}
int bonus_af_x_prec_width_nf_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.3x", 8375);}
int bonus_af_x_prec_width_fn_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-2.7x", 3267);}
int bonus_af_x_prec_width_nn_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-3.3x", 6983);}

//Hex uppers (altform) - no modifers
int bonus_af_X_basic_hexu_pos(void){return ft_printf("this %#X number", 17);}
int bonus_af_X_basic_hexu_zero(void){return ft_printf("this %#X number", 0);}
int bonus_af_X_basic_hexu_onlypos(void){return ft_printf("%#X", 3);}
int bonus_af_X_hexumax(void){return ft_printf("%#X", 4294967295u);}
//Hex uppers (altform) with field width
int bonus_af_X_width_pos_fits(void){return ft_printf("%#7X", 33);}
int bonus_af_X_width_zero_fits(void){return ft_printf("%#3X", 0);}
int bonus_af_X_width_pos_exactfit(void){return ft_printf("%#7X", 52625);}
int bonus_af_X_width_pos_nofit(void){return ft_printf("%#2X", 94827);}
int bonus_af_X_width_pos_fits_lj(void){return ft_printf("%#-7X", 33);}
int bonus_af_X_width_zero_fits_lj(void){return ft_printf("%#-3X", 0);}
int bonus_af_X_width_pos_exactfit_lj(void){return ft_printf("%#-7X", 52625);}
int bonus_af_X_width_pos_nofit_lj(void){return ft_printf("%#-4X", 9648627);}
//Hex uppers (altform) with precision
int bonus_af_X_prec_fits_pos(void){return ft_printf("%#.5X", 21);}
int bonus_af_X_prec_fits_zero(void){return ft_printf("%#.3X", 0);}
int bonus_af_X_prec_exactfit_pos(void){return ft_printf("%#.4X", 5263);}
int bonus_af_X_prec_nofit_pos(void){return ft_printf("%#.3X", 938862);}
int bonus_af_X_prec0val0(void){return ft_printf("%#.0X", 0);}
int bonus_af_X_prec0val0_impl(void){return ft_printf("%#.X", 0);}
int bonus_af_X_prec0val0_waf(void){return ft_printf("%#5.0X", 0);}
int bonus_af_X_prec0val0_waf_impl(void){return ft_printf("%#5.X", 0);}
int bonus_af_X_prec0val0_waflj(void){return ft_printf("%#-5.0X", 0);}
int bonus_af_X_prec0val0_waflj_impl(void){return ft_printf("%#-5.X", 0);}
//Hex uppers (altform) with zero field width padding
int bonus_af_X_zp_pos_fits(void){return ft_printf("%#05X", 43);}
int bonus_af_X_zp_zero_fits(void){return ft_printf("%#03X", 0);}
int bonus_af_X_zp_pos_exactfit(void){return ft_printf("%#03X", 698334);}
//Hex uppers (altform) with field width and precision
int bonus_af_X_prec_width_fit_fit_pos(void){return ft_printf("%#8.5X", 34);}
int bonus_af_X_prec_width_fit_fit_zero(void){return ft_printf("%#8.5X", 0);}
int bonus_af_X_prec_width_nofit_fit_pos(void){return ft_printf("%#8.3X", 8375);}
int bonus_af_X_prec_width_fit_nofit_pos(void){return ft_printf("%#2.7X", 3267);}
int bonus_af_X_prec_width_nofit_nofit_pos(void){return ft_printf("%#3.3X", 6983);}
//Hex uppers (altform) with field width and precision, left-justified
int bonus_af_X_prec_width_fit_fit_pos_lj(void){return ft_printf("%#-8.5X", 34);}
int bonus_af_X_prec_width_fit_fit_zero_lj(void){return ft_printf("%#-8.5X", 0);}
int bonus_af_X_prec_width_nofit_fit_pos_lj(void){return ft_printf("%#-8.3X", 8375);}
int bonus_af_X_prec_width_fit_nofit_pos_lj(void){return ft_printf("%#-2.7X", 3267);}
int bonus_af_X_prec_width_nofit_nofit_pos_lj(void){return ft_printf("%#-3.3X", 6983);}
//Hex uppers (altform) with field width and precision with zeropadding
int bonus_af_X_prec_width_ff_pos_zp(void){return ft_printf("%#08.5X", 34);}
int bonus_af_X_prec_width_ff_zero_zp(void){return ft_printf("%#08.5X", 0);}
int bonus_af_X_prec_width_nf_pos_zp(void){return ft_printf("%#08.3X", 8375);}
int bonus_af_X_prec_width_fn_pos_zp(void){return ft_printf("%#02.7X", 3267);}
int bonus_af_X_prec_width_nn_pos_zp(void){return ft_printf("%#03.3X", 6983);}
//Hex uppers (altform) with field width and precision, left-justified with zeropadding
int bonus_af_X_prec_width_ff_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.5X", 34);}
int bonus_af_X_prec_width_ff_zero_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.5X", 0);}
int bonus_af_X_prec_width_nf_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.3X", 8375);}
int bonus_af_X_prec_width_fn_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-2.7X", 3267);}
int bonus_af_X_prec_width_nn_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-3.3X", 6983);}

//No-crash-no-segfault test
int nocrash_notrequired_bonus_af_noarg_4(void){return ft_printf("%#"); }
int nocrash_notrequired_bonus_af_nullarg_4(void){return ft_printf("%#s", NULL); }
//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_af_dupflag_x(void){return ft_printf("%##x", 42);}
int nocrash_notrequired_bonus_af_dupflag_xasasljw(void){return ft_printf("%#++#-5x", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_bonus_af_c(void){return ft_printf("%#c", 'a');}
int nocrash_notrequired_bonus_af_s(void){return ft_printf("%#s", "hello");}
int nocrash_notrequired_bonus_af_p(void){return ft_printf("%#p", &ncm_p);}
int nocrash_notrequired_bonus_af_d(void){return ft_printf("%#d", 42);}
int nocrash_notrequired_bonus_af_i(void){return ft_printf("%#i", 42);}
int nocrash_notrequired_bonus_af_u(void){return ft_printf("%#u", 42);}


/* -----------------------------------------------------------------------------
** 						'# +' FLAGS TESTS (BONUS)
** ---------------------------------------------------------------------------*/

// SPACE WITH ALLSIGN - MIGHT BE UNDEFINED BEHAVIOR
//Signed integers - space with allsign ('+')
int bonus_assp_d_pos_ignoreflag(void){return ft_printf("% +d", 5);}
int bonus_assp_d_neg_ignoreflag(void){return ft_printf("% +d", -7);}
int bonus_assp_d_intmax_ignoreflag(void){return ft_printf("% +d", 2147483647);}
//signed integers with field width and allsign
int bonus_assp_d_width_pos_ignoreflag(void){return ft_printf("% +5d", 35);}
int bonus_assp_d_width_zero_ignoreflag(void){return ft_printf("% +7d", 0);}
int bonus_assp_d_width_intmax_ignoreflag(void){return ft_printf("% +24d", 2147483647);}
int bonus_assp_d_prec_pos_ignoreflag(void){return ft_printf("% +.7d", 234);}
int bonus_assp_d_prec_neg_ignoreflag(void){return ft_printf("% +.7d", -446);}
int bonus_assp_d_prec_pos_nofit_ignoreflag(void){return ft_printf("% +.3d", 3723);}
int bonus_assp_d_zpassp_as_fits_ignoreflag(void){return ft_printf("% +05d", 432);}
int bonus_assp_d_zpassp_zero_ignoreflag(void){return ft_printf("% +04d", 0);}
//Signed integers - space with field width and precision with allsign
int bonus_assp_d_prec_width_fit_fit_pos_ignoreflag(void){return ft_printf("% +8.5d", 34);}
int bonus_assp_d_prec_width_fit_fit_neg_ignoreflag(void){return ft_printf("% +10.5d", -216);}
int bonus_assp_d_prec_width_fit_fit_zero_ignoreflag(void){return ft_printf("% +8.5d", 0);}
int bonus_assp_d_prec_width_nofit_fit_pos_ignoreflag(void){return ft_printf("% +8.3d", 8375);}
int bonus_assp_d_prec_width_nofit_fit_neg_ignoreflag(void){return ft_printf("% +8.3d", -8473);}
int bonus_assp_d_prec_width_fit_nofit_pos_ignoreflag(void){return ft_printf("% +3.7d", 3267);}
int bonus_assp_d_prec_width_fit_nofit_neg_ignoreflag(void){return ft_printf("% +3.7d", -2375);}
int bonus_assp_d_prec_width_nofit_nofit_pos_ignoreflag(void){return ft_printf("% +3.3d", 6983);}
int bonus_assp_d_prec_width_nofit_nofit_neg_ignoreflag(void){return ft_printf("% +3.3d", -8462);}
int bonus_assp_d_prec0val0_was(void){return ft_printf("%+5.0d", 0);}
int bonus_assp_d_prec0val0_was_impl(void){return ft_printf("%+5.d", 0);}
int bonus_assp_d_prec0val0_waslj(void){return ft_printf("%+-5.0d", 0);}
int bonus_assp_d_prec0val0_waslj_impl(void){return ft_printf("%+-5.d", 0);}
//Signed integers - space with field width and precision, left-justified with allsign
int bonus_assp_d_prec_width_fit_fit_pos_lj_ignoreflag(void){return ft_printf("% +-8.5d", 34);}
int bonus_assp_d_prec_width_fit_fit_neg_lj_ignoreflag(void){return ft_printf("% +-10.5d", -216);}
int bonus_assp_d_prec_width_fit_fit_zero_lj_ignoreflag(void){return ft_printf("% +-8.5d", 0);}
int bonus_assp_d_prec_width_nofit_fit_pos_lj_ignoreflag(void){return ft_printf("% +-8.3d", 8375);}
int bonus_assp_d_prec_width_nofit_fit_neg_lj_ignoreflag(void){return ft_printf("% +-8.3d", -8473);}
int bonus_assp_d_prec_width_fit_nofit_pos_lj_ignoreflag(void){return ft_printf("% +-3.7d", 3267);}
int bonus_assp_d_prec_width_fit_nofit_neg_lj_ignoreflag(void){return ft_printf("% +-3.7d", -2375);}
int bonus_assp_d_prec_width_nofit_nofit_pos_lj_ignoreflag(void){return ft_printf("% +-3.3d", 6983);}
int bonus_assp_d_prec_width_nofit_nofit_neg_lj_ignoreflag(void){return ft_printf("% +-3.3d", -8462);}
//Signed integers - space with field width and precision with allsign with zeropadding
int bonus_assp_d_prec_width_ff_pos_aszpsp_ignoreflag(void){return ft_printf("% 0+8.5d", 34);}
int bonus_assp_d_prec_width_ff_neg_aszpsp_ignoreflag(void){return ft_printf("% 0+10.5d", -216);}
int bonus_assp_d_prec_width_ff_zero_aszpsp_ignoreflag(void){return ft_printf("% 0+8.5d", 0);}
int bonus_assp_d_prec_width_nf_pos_aszpsp_ignoreflag(void){return ft_printf("% 0+8.3d", 8375);}
int bonus_assp_d_prec_width_nf_neg_aszpsp_ignoreflag(void){return ft_printf("% 0+8.3d", -8473);}
int bonus_assp_d_prec_width_fn_pos_aszpsp_ignoreflag(void){return ft_printf("% 0+3.7d", 3267);}
int bonus_assp_d_prec_width_fn_neg_aszpsp_ignoreflag(void){return ft_printf("% 0+3.7d", -2375);}
int bonus_assp_d_prec_width_nn_pos_aszpsp_ignoreflag(void){return ft_printf("% 0+3.3d", 6983);}
int bonus_assp_d_prec_width_nn_neg_aszpsp_ignoreflag(void){return ft_printf("% 0+3.3d", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign with zeropadding
int bonus_assp_d_prec_width_ff_pos_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-8.5d", 34);}
int bonus_assp_d_prec_width_ff_neg_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-10.5d", -216);}
int bonus_assp_d_prec_width_ff_zero_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-8.5d", 0);}
int bonus_assp_d_prec_width_nf_pos_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-8.3d", 8375);}
int bonus_assp_d_prec_width_nf_neg_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-8.3d", -8473);}
int bonus_assp_d_prec_width_fn_pos_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-3.7d", 3267);}
int bonus_assp_d_prec_width_fn_neg_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-3.7d", -2375);}
int bonus_assp_d_prec_width_nn_pos_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-3.3d", 6983);}
int bonus_assp_d_prec_width_nn_neg_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-3.3d", -8462);}
//Signed integers - space with allsign ('+')
int bonus_assp_i_pos_ignoreflag(void){return ft_printf("% +i", 5);}
int bonus_assp_i_neg_ignoreflag(void){return ft_printf("% +i", -7);}
int bonus_assp_i_intmax_ignoreflag(void){return ft_printf("% +i", 2147483647);}
//signed integers with field width and allsign
int bonus_assp_i_width_pos_ignoreflag(void){return ft_printf("% +5i", 35);}
int bonus_assp_i_width_zero_ignoreflag(void){return ft_printf("% +7i", 0);}
int bonus_assp_i_width_intmax_ignoreflag(void){return ft_printf("% +24i", 2147483647);}
int bonus_assp_i_prec_pos_ignoreflag(void){return ft_printf("% +.7i", 234);}
int bonus_assp_i_prec_neg_ignoreflag(void){return ft_printf("% +.7i", -446);}
int bonus_assp_i_prec_pos_nofit_ignoreflag(void){return ft_printf("% +.3i", 3723);}
int bonus_assp_i_zpassp_as_fits_ignoreflag(void){return ft_printf("% +05i", 432);}
int bonus_assp_i_zpassp_zero_ignoreflag(void){return ft_printf("% +04i", 0);}
//Signed integers - space with field width and precision with allsign
int bonus_assp_i_prec_width_fit_fit_pos_ignoreflag(void){return ft_printf("% +8.5i", 34);}
int bonus_assp_i_prec_width_fit_fit_neg_ignoreflag(void){return ft_printf("% +10.5i", -216);}
int bonus_assp_i_prec_width_fit_fit_zero_ignoreflag(void){return ft_printf("% +8.5i", 0);}
int bonus_assp_i_prec_width_nofit_fit_pos_ignoreflag(void){return ft_printf("% +8.3i", 8375);}
int bonus_assp_i_prec_width_nofit_fit_neg_ignoreflag(void){return ft_printf("% +8.3i", -8473);}
int bonus_assp_i_prec_width_fit_nofit_pos_ignoreflag(void){return ft_printf("% +3.7i", 3267);}
int bonus_assp_i_prec_width_fit_nofit_neg_ignoreflag(void){return ft_printf("% +3.7i", -2375);}
int bonus_assp_i_prec_width_nofit_nofit_pos_ignoreflag(void){return ft_printf("% +3.3i", 6983);}
int bonus_assp_i_prec_width_nofit_nofit_neg_ignoreflag(void){return ft_printf("% +3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign
int bonus_assp_i_prec_width_fit_fit_pos_lj_ignoreflag(void){return ft_printf("% +-8.5i", 34);}
int bonus_assp_i_prec_width_fit_fit_neg_lj_ignoreflag(void){return ft_printf("% +-10.5i", -216);}
int bonus_assp_i_prec_width_fit_fit_zero_lj_ignoreflag(void){return ft_printf("% +-8.5i", 0);}
int bonus_assp_i_prec_width_nofit_fit_pos_lj_ignoreflag(void){return ft_printf("% +-8.3i", 8375);}
int bonus_assp_i_prec_width_nofit_fit_neg_lj_ignoreflag(void){return ft_printf("% +-8.3i", -8473);}
int bonus_assp_i_prec_width_fit_nofit_pos_lj_ignoreflag(void){return ft_printf("% +-3.7i", 3267);}
int bonus_assp_i_prec_width_fit_nofit_neg_lj_ignoreflag(void){return ft_printf("% +-3.7i", -2375);}
int bonus_assp_i_prec_width_nofit_nofit_pos_lj_ignoreflag(void){return ft_printf("% +-3.3i", 6983);}
int bonus_assp_i_prec_width_nofit_nofit_neg_lj_ignoreflag(void){return ft_printf("% +-3.3i", -8462);}
//Signed integers - space with field width and precision with allsign with zeropadding
int bonus_assp_i_prec_width_ff_pos_aszpsp_ignoreflag(void){return ft_printf("% 0+8.5i", 34);}
int bonus_assp_i_prec_width_ff_neg_aszpsp_ignoreflag(void){return ft_printf("% 0+10.5i", -216);}
int bonus_assp_i_prec_width_ff_zero_aszpsp_ignoreflag(void){return ft_printf("% 0+8.5i", 0);}
int bonus_assp_i_prec_width_nf_pos_aszpsp_ignoreflag(void){return ft_printf("% 0+8.3i", 8375);}
int bonus_assp_i_prec_width_nf_neg_aszpsp_ignoreflag(void){return ft_printf("% 0+8.3i", -8473);}
int bonus_assp_i_prec_width_fn_pos_aszpsp_ignoreflag(void){return ft_printf("% 0+3.7i", 3267);}
int bonus_assp_i_prec_width_fn_neg_aszpsp_ignoreflag(void){return ft_printf("% 0+3.7i", -2375);}
int bonus_assp_i_prec_width_nn_pos_aszpsp_ignoreflag(void){return ft_printf("% 0+3.3i", 6983);}
int bonus_assp_i_prec_width_nn_neg_aszpsp_ignoreflag(void){return ft_printf("% 0+3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign with zeropadding
int bonus_assp_i_prec_width_ff_pos_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-8.5i", 34);}
int bonus_assp_i_prec_width_ff_neg_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-10.5i", -216);}
int bonus_assp_i_prec_width_ff_zero_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-8.5i", 0);}
int bonus_assp_i_prec_width_nf_pos_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-8.3i", 8375);}
int bonus_assp_i_prec_width_nf_neg_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-8.3i", -8473);}
int bonus_assp_i_prec_width_fn_pos_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-3.7i", 3267);}
int bonus_assp_i_prec_width_fn_neg_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-3.7i", -2375);}
int bonus_assp_i_prec_width_nn_pos_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-3.3i", 6983);}
int bonus_assp_i_prec_width_nn_neg_ljaszpsp_ignoreflag(void){return ft_printf("% 0+-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_assp_dupflag_d_spassp(void){return ft_printf("% + d", 42);}


int bonus_sp_moul_1(void){return ft_printf("%%      i 42 == |%      i|\n", 42);}
int bonus_sp_moul_2(void){return ft_printf("%% i -42 == |% i|\n", -42);}
int bonus_sp_moul_3(void){return ft_printf("%% 4i 42 == |% 4i|\n", 42);}
int bonus_sp_moul_prec_2(void){return ft_printf("%% 4.5i 42 == |% 4.5i|\n", 42);}

int bonus_as_moul_1(void){return ft_printf("%%+i 42 == %+i\n", 42);}
int bonus_as_moul_2(void){return ft_printf("%%+d 42 == %+d\n", INT_MAX);}
int bonus_as_moul_3(void){return ft_printf("%%+i -42 == %+i\n", -42);}
int bonus_as_moul_4(void){return ft_printf("%%+04d 42 == %0+04d\n", 42);}

int bonus_moul_hash_1(void){return ft_printf("%%#X 42 ==  %#X\n", 42);}
int bonus_moul_hash_2(void){return ft_printf("%%X 42 ==  %X\n", 42);}
int bonus_moul_hash_9(void){return ft_printf("%%#X INT_MIN ==  %#X\n", INT_MIN);}
int bonus_moul_hash_10(void){return ft_printf("%%X INT_MIN ==  %X\n", INT_MIN);}
int bonus_moul_hash_11(void){return ft_printf("%%#X INT_MAX ==  %#X\n", INT_MAX);}
int bonus_moul_hash_12(void){return ft_printf("%%X INT_MAX ==  %X\n", INT_MAX);}



/* -----------------------------------------------------------------------------
** 						NEGATIVE PRECISION
** ---------------------------------------------------------------------------*/

int d_neg_prec_star_01(void){return ft_printf("%.*d", -3, 12345);}
int d_neg_prec_star_02(void){return ft_printf("%.*d", -1, 12345);}
int d_neg_prec_star_03(void){return ft_printf("%.*d", -1, 0);}
// %u negative precision
int u_neg_prec_star_01(void){return ft_printf("%.*u", -3, 12345);}
int u_neg_prec_star_02(void){return ft_printf("%.*u", -1, 12345);}
int u_neg_prec_star_03(void){return ft_printf("%.*u", -1, 0);}
// %o negative precision
int x_neg_prec_star_01(void){return ft_printf("%.*x", -3, 12345);}
int x_neg_prec_star_02(void){return ft_printf("%.*x", -1, 12345);}
int x_neg_prec_star_03(void){return ft_printf("%.*x", -1, 0);}
// %X negative precision
int X_neg_prec_star_01(void){return ft_printf("%.*X", -3, 12345);}
int X_neg_prec_star_02(void){return ft_printf("%.*X", -1, 12345);}
int X_neg_prec_star_03(void){return ft_printf("%.*X", -1, 0);}
static char *s_hello = "hello world";
// %s negative precision
int s_neg_prec_star_01(void){return ft_printf("%.*s", -3, 0);}
int s_neg_prec_star_02(void){return ft_printf("%.*s", -1, 0);}
// %p negative precision
int p_neg_prec_star_01(void){return ft_printf("%.*p", -3, s_hello);}
int p_neg_prec_star_02(void){return ft_printf("%.*p", -1, s_hello);}
int p_neg_prec_star_03(void){return ft_printf("%.*p", -3, 0);}
int p_neg_prec_star_04(void){return ft_printf("%.*p", -1, 0);}


/* -----------------------------------------------------------------------------
** 						%n format only test cases
** ---------------------------------------------------------------------------*/
// %p negative precision
int n;
int bonus_n_format_only(void){return ft_printf("pft%ntest", &n); (void)n;} 
int bonus_n_format_only_sp(void){return ft_printf("pft% ntest", &n); (void)n;} 
int bonus_n_format_only_af(void){return ft_printf("pft%#ntest", &n); (void)n;} 
int bonus_n_format_only_zp(void){return ft_printf("pft%0ntest", &n); (void)n;} 
int bonus_n_format_only_lj(void){return ft_printf("pft%-ntest", &n); (void)n;} 
int bonus_n_format_only_as(void){return ft_printf("pft%+ntest", &n); (void)n;} 
int bonus_n_format_only_w(void){return ft_printf("pft%5ntest", &n); (void)n;} 
int bonus_n_format_only_prec(void){return ft_printf("pft%.5ntest", &n); (void)n;} 
int bonus_n_format_only_w_prec(void){return ft_printf("pft%5.5ntest", &n); (void)n;} 
int bonus_n_format_only_prec_star(void){return ft_printf("pft%.*ntest%d", 5, &n, 123); (void)n;}
int bonus_n_format_only_w_star(void){return ft_printf("pft%*.ntest%d", 5, &n, 123); (void)n;}
int bonus_n_format_only_wprec_star(void){return ft_printf("pft%*.*ntest%d", 5, 5, &n, 123); (void)n;}

int nocrash_notrequired_noarg_25(void){return ft_printf("%o"); }
int nocrash_notrequired_nullarg_25(void){return ft_printf("%o", NULL); }
int bonus_mix_successive_1(void){return ( ft_printf("%o", mx_u) + ft_printf("%%"));}

/* -----------------------------------------------------------------------------
** 						%o OCTALS TESTS (NOT IN THE SUBJECT)
** ---------------------------------------------------------------------------*/
//Octals - no modifers
int notinsubject_o_basic_octl_pos(void){return ft_printf("this %o number", 17);}
int notinsubject_o_basic_octl_zero(void){return ft_printf("this %o number", 0);}
int notinsubject_o_basic_octl_onlypos(void){return ft_printf("%o", 3);}
int notinsubject_o_octlmax(void){return ft_printf("%o", 4294967295u);}
//Octals with field width
int notinsubject_o_width_pos_fits(void){return ft_printf("%7o", 33);}
int notinsubject_o_width_zero_fits(void){return ft_printf("%3o", 0);}
int notinsubject_o_width_pos_exactfit(void){return ft_printf("%6o", 52625);}
int notinsubject_o_width_pos_nofit(void){return ft_printf("%2o", 94827);}
int notinsubject_o_width_pos_fits_lj(void){return ft_printf("%-7o", 33);}
int notinsubject_o_width_zero_fits_lj(void){return ft_printf("%-3o", 0);}
int notinsubject_o_width_pos_exactfit_lj(void){return ft_printf("%-6o", 52625);}
int notinsubject_o_width_pos_nofit_lj(void){return ft_printf("%-4o", 9648627);}
//Octals with precision
int notinsubject_o_prec_fits_pos(void){return ft_printf("%.5o", 21);}
int notinsubject_o_prec_fits_zero(void){return ft_printf("%.3o", 0);}
int notinsubject_o_prec_exactfit_pos(void){return ft_printf("%.5o", 5263);}
int notinsubject_o_prec_nofit_pos(void){return ft_printf("%.3o", 938862);}
//Octals with zero field width padding
int notinsubject_o_zp_pos_fits(void){return ft_printf("%05o", 43);}
int notinsubject_o_zp_zero_fits(void){return ft_printf("%03o", 0);}
int notinsubject_o_zp_pos_exactfit(void){return ft_printf("%07o", 698334);}
//Octals with field width and precision
int notinsubject_o_prec_width_fit_fit_pos(void){return ft_printf("%8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero(void){return ft_printf("%8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos(void){return ft_printf("%8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos(void){return ft_printf("%2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos(void){return ft_printf("%3.3o", 6983);}
//Octals with field width and precision, left-justified
int notinsubject_o_prec_width_fit_fit_pos_lj(void){return ft_printf("%-8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_lj(void){return ft_printf("%-8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_lj(void){return ft_printf("%-8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_lj(void){return ft_printf("%-2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_lj(void){return ft_printf("%-3.3o", 6983);}
//Octals with field width and precision with zeropadding
int notinsubject_o_prec_width_ff_pos_zp(void){return ft_printf("%08.5o", 34);}
int notinsubject_o_prec_width_ff_zero_zp(void){return ft_printf("%08.5o", 0);}
int notinsubject_o_prec_width_nf_pos_zp(void){return ft_printf("%08.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_zp(void){return ft_printf("%02.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_zp(void){return ft_printf("%03.3o", 6983);}
//Octals with field width and precision, left-justified with zeropadding
int notinsubject_o_prec_width_ff_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.5o", 34);}
int notinsubject_o_prec_width_ff_zero_ljzp_ignoreflag(void){return ft_printf("%0-8.5o", 0);}
int notinsubject_o_prec_width_nf_pos_ljzp_ignoreflag(void){return ft_printf("%0-8.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_ljzp_ignoreflag(void){return ft_printf("%0-2.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_ljzp_ignoreflag(void){return ft_printf("%0-3.3o", 6983);}


//Octal (Altform)s - no modifers
int notinsubject_o_basic_octl_pos_af(void){return ft_printf("this %#o number", 17);}
int notinsubject_o_basic_octl_zero_af(void){return ft_printf("this %#o number", 0);}
int notinsubject_o_basic_octl_onlypos_af(void){return ft_printf("%#o", 3);}
int notinsubject_o_octlmax_af(void){return ft_printf("%#o", 4294967295u);}
//Octal (Altform)s with field width
int notinsubject_o_width_pos_fits_af(void){return ft_printf("%#7o", 33);}
int notinsubject_o_width_zero_fits_af(void){return ft_printf("%#3o", 0);}
int notinsubject_o_width_pos_exactfit_af(void){return ft_printf("%#6o", 52625);}
int notinsubject_o_width_pos_nofit_af(void){return ft_printf("%#2o", 94827);}
int notinsubject_o_width_pos_fits_lj_af(void){return ft_printf("%#-7o", 33);}
int notinsubject_o_width_zero_fits_lj_af(void){return ft_printf("%#-3o", 0);}
int notinsubject_o_width_pos_exactfit_lj_af(void){return ft_printf("%#-6o", 52625);}
int notinsubject_o_width_pos_nofit_lj_af(void){return ft_printf("%#-4o", 9648627);}
//Octal (Altform)s with precision
int notinsubject_o_prec_fits_pos_af(void){return ft_printf("%#.5o", 21);}
int notinsubject_o_prec_fits_zero_af(void){return ft_printf("%#.3o", 0);}
int notinsubject_o_prec_exactfit_pos_af(void){return ft_printf("%#.5o", 5263);}
int notinsubject_o_prec_nofit_pos_af(void){return ft_printf("%#.3o", 938862);}
//Octal (Altform)s with zero field width padding
int notinsubject_o_zp_pos_fits_af(void){return ft_printf("%#05o", 43);}
int notinsubject_o_zp_zero_fits_af(void){return ft_printf("%#03o", 0);}
int notinsubject_o_zp_pos_exactfit_af(void){return ft_printf("%#07o", 698334);}
//Octal (Altform)s with field width and precision
int notinsubject_o_prec_width_fit_fit_pos_af(void){return ft_printf("%#8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_af(void){return ft_printf("%#8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_af(void){return ft_printf("%#8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_af(void){return ft_printf("%#2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_af(void){return ft_printf("%#3.3o", 6983);}
//Octal (Altform)s with field width and precision, left-justified
int notinsubject_o_prec_width_fit_fit_pos_lj_af(void){return ft_printf("%#-8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_lj_af(void){return ft_printf("%#-8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_lj_af(void){return ft_printf("%#-8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_lj_af(void){return ft_printf("%#-2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_lj_af(void){return ft_printf("%#-3.3o", 6983);}
//Octal (Altform)s with field width and precision with zeropadding
int notinsubject_o_prec_width_ff_pos_zp_af(void){return ft_printf("%#08.5o", 34);}
int notinsubject_o_prec_width_ff_zero_zp_af(void){return ft_printf("%#08.5o", 0);}
int notinsubject_o_prec_width_nf_pos_zp_af(void){return ft_printf("%#08.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_zp_af(void){return ft_printf("%#02.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_zp_af(void){return ft_printf("%#03.3o", 6983);}
//Octal (Altform)s with field width and precision, left-justified with zeropadding
int notinsubject_o_prec_width_ff_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.5o", 34);}
int notinsubject_o_prec_width_ff_zero_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.5o", 0);}
int notinsubject_o_prec_width_nf_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-8.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-2.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_ljzpaf_ignoreflag(void){return ft_printf("%#0-3.3o", 6983);}
//Octals - zero precision zero value
int notinsubject_o_prec0val0_basic(void){return ft_printf("%.0o", 0);}
int notinsubject_o_prec0val0_implicit(void){return ft_printf("%.o", 0);}
int notinsubject_o_prec0val0_w(void){return ft_printf("%5.0o", 0);}
int notinsubject_o_prec0val0_w_impl(void){return ft_printf("%5.o", 0);}
int notinsubject_o_prec0val0_wlj(void){return ft_printf("%-5.0o", 0);}
int notinsubject_o_prec0val0_wlj_impl(void){return ft_printf("%-5.o", 0);}
int notinsubject_o_prec0val0_af(void){return ft_printf("%#.0o", 0);}
int notinsubject_o_prec0val0_af_impl(void){return ft_printf("%#.o", 0);}
int notinsubject_o_prec0val0_waf(void){return ft_printf("%#5.0o", 0);}
int notinsubject_o_prec0val0_waf_impl(void){return ft_printf("%#5.o", 0);}
int notinsubject_o_prec0val0_waflj(void){return ft_printf("%#-5.0o", 0);}
int notinsubject_o_prec0val0_waflj_impl(void){return ft_printf("%#-5.o", 0);}

int nocrash_notinsubject_notrequired_o_sp(void){return ft_printf("% o", 42);}
int nocrash_notinsubject_notrequired_o_lj_nowidth(void){return ft_printf("%-o", 42);}
int nocrash_notinsubject_notrequired_o_as(void){return ft_printf("%+o", 42);}

int notinsubject_moul_o_1(void){return ft_printf("%o", 42);}
int notinsubject_moul_o_2(void){return ft_printf("Kashim a %o histoires à raconter", 1001);}
int notinsubject_moul_o_3(void){return ft_printf("Il fait au moins %o\n", -8000);}
int notinsubject_moul_o_4(void){return ft_printf("%o", -0);}
int notinsubject_moul_o_5(void){return ft_printf("%o", 0);}
int notinsubject_moul_o_6(void){return ft_printf("%o", INT_MAX);}
int notinsubject_moul_o_7(void){return ft_printf("%o", INT_MIN);}
int notinsubject_moul_o_8(void){return ft_printf("%o", INT_MIN - 1);}
int notinsubject_moul_o_9(void){return ft_printf("%o", INT_MAX + 1);}
int notinsubject_moul_o_10(void){return ft_printf("%%o 0000042 == |%o|\n", 0000042);}
int notinsubject_moul_o_11(void){return ft_printf("%%o \t == |%o|\n", '\t');}
int notinsubject_moul_o_12(void){return ft_printf("%%o Lydie == |%o|\n", 'L'+'y'+'d'+'i'+'e');}
int notinsubject_moul_o_hash_3(void){return ft_printf("%%#o 0 ==  %#o\n", 0);}
int notinsubject_moul_o_hash_4(void){return ft_printf("%%o 0 ==  %o\n", 0);}
int notinsubject_moul_o_hash_5(void){return ft_printf("%%#o INT_MAX ==  %#o\n", INT_MAX);}
int notinsubject_moul_o_hash_6(void){return ft_printf("%%o INT_MAX ==  %o\n", INT_MAX);}
int notinsubject_moul_o_hash_7(void){return ft_printf("%%#o INT_MIN ==  %#o\n", INT_MIN);}
int notinsubject_moul_o_hash_8(void){return ft_printf("%%o INT_MIN ==  %o\n", INT_MIN);}

#pragma clang diagnostic pop


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winteger-overflow"
#pragma clang diagnostic ignored "-Wformat"

#include "test.h"

/* -----------------------------------------------------------------------------
** Add unit tests to this file
**
** A valid unit test is prototyped
**
**    int   foo(void)
**
** and includes a call to the function:
**
**    int    printf(const char *fmt, ...)
**
** ---------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------
** unit tests that start with "nocrash_" will always pass
**     (provided it doesn't crash)
** ---------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------
** A unit test is ENABLED if it has no whitespace preceding it
** A unit test is DISABLED if it has whitespace preceding it
**
** scripts are provided to enable and disable tests by prefix
** ---------------------------------------------------------------------------*/

/* -----------------------------------------------------------------------------
** 						NO SPECIFIERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Tests with no specifiers
int nospec_no_specifier_test_bench(void){return printf("hello, world!");}
int nospec_empty_string_bench(void){return printf("");}
int nospec_some_escaped_chars_bench(void){return printf("\t\n\r\v\f\n");}
//Nospec tests with successive calls
int nospec_successive_5_5_bench(void){return ( printf("hello") + printf("world"));}
int nospec_successive_2_9_bench(void){return ( printf("he") ^ printf(" is alive"));}
int nospec_successive_8_3_bench(void){return ( printf("is alive") - printf(" he"));}


/* -----------------------------------------------------------------------------
** 						%% PERCENTAGE TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//%% Tests
int pct_basic_bench(void){return printf("%%");}
int pct_5w_bench(void){return printf("%5%");}
int pct_5wlj_bench(void){return printf("%-5%");}
int pct_5wzp_bench(void){return printf("%05%");}
int pct_5wljzp_bench(void){return printf("%-05%");}
//Null specifier tests
int nocrash_notrequired_nullspec_basic_bench(void){return printf("%");}
int nocrash_notrequired_nullspec_5w_bench(void){return printf("%5");}
int nocrash_notrequired_nullspec_5wzp_bench(void){return printf("%05");}
int nocrash_notrequired_nullspec_5wzplj_bench(void){return printf("%-05");}
int nocrash_notrequired_nullspec_5wlj_bench(void){return printf("%-5");}


/* -----------------------------------------------------------------------------
** 						%c CHARS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Chars - Basic
int c_allprintable_combined_bench(void){return printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}
int c_1_31_combined_bench(void){return printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}
int c_128_255_combined_bench(void){return printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}
int c_allprintable_width_bench(void){return printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}
int c_1_31_width_bench(void){return printf("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}
int c_128_255_width_bench(void){return printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}
int c_allprintable_width_lj_bench(void){return printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}
int c_1_31_width_lj_bench(void){return printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}
int c_128_255_width_lj_bench(void){return printf("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}
int c_nullterm_basic_bench(void){return printf("%c", '\0');}
int c_nullterm_5w_bench(void){return printf("%5c", '\0');}
int c_nullterm_5wlj_bench(void){return printf("%-5c", '\0');}


/* -----------------------------------------------------------------------------
** 						%s STRING TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//String specifiers - no modifiers
int s_basic_string_expansion_bench(void){return printf("hello, %s.", "gavin");}
int s_only_string_expansion_bench(void){return printf("%s", "testing testing");}
int s_two_string_expansions_bench(void){return printf("%s%s", "hello", "world");}
int s_two_string_expansions2_bench(void){return printf("..%s stuff %s", "a", "b");}
int s_empty_string_expansion_bench(void){return printf("this %s is empty", "");}
int s_full_then_empty_string_bench(void){return printf("this %s is %s", "hello", "");}
int s_empty_then_full_string_bench(void){return printf("this %s is %s", "", "hello");}
int s_three_strings_bench(void){return printf("%s%s%s", "1", "2", "3's a charm");}
//String specifiers with field_width, space- or zero-padded
int s_space_padded_field_width_bench(void){return printf("%32s", "abc");}
int s_space_padded_field_width2_bench(void){return printf("%16s", "nark nark");}
int s_space_padded_over_field_width_bench(void){return printf("%5s", "goes over");}
//String specifiers with field_width, space- or zero-padded, left-justified
int s_space_padded_field_width_lj_bench(void){return printf("%-32s", "abc");}
int s_space_padded_field_width2_lj_bench(void){return printf("%-16s", "nark nark");}
int s_space_padded_over_field_width_lj_bench(void){return printf("%-5s", "goes over");}
//String specifiers with precision
int s_string_prec_notrunc_bench(void){return printf("%.7s", "hello");}
int s_string_prec_trunc_bench(void){return printf("%.3s", "hello");}
int s_string_prec_default_bench(void){return printf("%.s", "hello");}
int s_string_prec_zero_bench(void){return printf("%.0s", "hello");}
int s_two_strings_prec_2trunc_bench(void){return printf("%.3s%.2s", "holla", "bitch");}
int s_two_strings_prec_1trunc_a_bench(void){return printf("%.2s%.7s", "hello", "world");}
int s_two_strings_prec_1trunc_b_bench(void){return printf("%.7s%.2s", "hello", "world");}
int s_two_strings_prec_0trunc_bench(void){return printf("%.5s%7s", "yo", "boi");}
//String specifiers with both precision and field width
int s_string_prec_width_notrunc_bench(void){return printf("%7.5s", "yolo");}
int s_string_prec_width_trunc_bench(void){return printf("%7.5s", "bombastic");}
int s_string_prec_width_notrunc_lj_bench(void){return printf("%-7.5s", "yolo");}
int s_string_prec_width_trunc_lj_bench(void){return printf("%-7.5s", "tubular");}
int s_two_s_prec_width_2fit_0trunc_bench(void){return printf("%7.7s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_a_0trunc_bench(void){return printf("%3.7s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_b_0trunc_bench(void){return printf("%7.7s%3.7s", "hello", "world");}
int s_two_s_prec_width_0fit_0trunc_bench(void){return printf("%3.7s%3.7s", "hello", "world");}
int s_two_s_prec_width_2fit_1trunc_a_bench(void){return printf("%7.3s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_a_1trunc_a_bench(void){return printf("%3.3s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_b_1trunc_a_bench(void){return printf("%7.3s%3.7s", "hello", "world");}
int s_two_s_prec_width_0fit_1trunc_a_bench(void){return printf("%3.3s%3.7s", "hello", "world");}
int s_two_s_prec_width_2fit_1trunc_b_bench(void){return printf("%7.7s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_a_1trunc_b_bench(void){return printf("%3.7s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_b_1trunc_b_bench(void){return printf("%7.7s%3.3s", "hello", "world");}
int s_two_s_prec_width_0fit_1trunc_b_bench(void){return printf("%3.7s%3.3s", "hello", "world");}
int s_two_s_prec_width_2fit_2trunc_bench(void){return printf("%7.3s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_a_2trunc_bench(void){return printf("%3.3s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_b_2trunc_bench(void){return printf("%7.3s%3.3s", "hello", "world");}
int s_two_s_prec_width_0fit_2trunc_bench(void){return printf("%3.3s%3.3s", "hello", "world");}
int s_two_s_prec_width_2trunc_bench(void){return printf("%3s%3s", "hello", "world");}
//String specifiers, other tests
int s_two_strings_lj_and_rj_bench(void){return printf("%-7s%5s", "hello", "world");}
int s_two_strings_rj_and_lj_bench(void){return printf("%7s%-5s", "hello", "world");}
//String specifiers - NULL strings
int s_null_basic_string_expansion_bench(void){return printf("hello, %s.", NULL);}
int s_null_only_string_expansion_bench(void){return printf("%s", NULL);}
int s_null_space_padded_field_width_bench(void){return printf("%32s", NULL);}
int s_null_space_padded_over_field_width_bench(void){return printf("%2s", NULL);}
int s_null_space_padded_field_width_lj_bench(void){return printf("%-32s", NULL);}
int s_null_space_padded_field_width2_lj_bench(void){return printf("%-16s", NULL);}
int s_null_space_padded_over_field_width_lj_bench(void){return printf("%-3s", NULL);}
//String specifiers with precision
int s_null_string_prec_notrunc_bench(void){return printf("%.9s", "NULL");}
int s_null_string_prec_trunc_bench(void){return printf("%.3s", "NULL");}
int s_null_string_prec_default_bench(void){return printf("%.s", "NULL");}
int s_null_string_prec_zero_bench(void){return printf("%.0s", "NULL");}
//String s_hidden tests

int s_basic_s_hidden_bench(void){return printf("%s", s_hidden);}
// width pad
int s_width_3_s_hidden_bench(void){return printf("%3s", s_hidden);}
int s_width_9_s_hidden_bench(void){return printf("%9s", s_hidden);}
// precision no width
int s_prec_no_width_s_hidden_bench(void){return printf("%.s", s_hidden);}
int s_prec_9_no_width_s_hidden_bench(void){return printf("%.9s", s_hidden);}
// precision  0 before number
int s_prec_03_no_width_s_hidden_bench(void){return printf("%.03s", s_hidden);}
int s_prec_09_no_width_s_hidden_bench(void){return printf("%.09s", s_hidden);}
int s_prec_03_no_width_s_null_bench(void){return printf("%.03s", NULL);}
int s_prec_09_no_width_s_null_bench(void){return printf("%.09s", NULL);}
int s_prec_00_no_width_s_nullchar_bench(void){return printf("%.00s", "\0");}
int s_prec_01_no_width_s_nullchar_bench(void){return printf("%.01s", "\0");}
int s_prec_03_no_width_s_nullchar_bench(void){return printf("%.03s", "\0");}
int s_prec_09_no_width_s_nullchar_bench(void){return printf("%.09s", "\0");}
// width  no precision
int s_prec_0_width_3_s_hidden_bench(void){return printf("%3.s", s_hidden);}
int s_prec_0_width_10_s_hidden_bench(void){return printf("%10.s", s_hidden);}
int s_prec_0_width_3_s_null_bench(void){return printf("%3.s", NULL);}
int s_prec_0_width_10_s_null_bench(void){return printf("%10.s", NULL);}
int s_prec_0_width_1_s_nullchar_bench(void){return printf("%1.s", "\0");}
int s_prec_0_width_2_s_nullchar_bench(void){return printf("%2.s", "\0");}
int s_prec_0_width_9_s_nullchar_bench(void){return printf("%9.s", "\0");}
// lj flag width  no precision
int s_prec_0_lj_width_3_s_hidden_bench(void){return printf("%-3.s", s_hidden);}
int s_prec_0_lj_width_8_s_hidden_bench(void){return printf("%-8.s", s_hidden);}
int s_prec_0_lj_width_3_s_null_bench(void){return printf("%-3.s", NULL);}
int s_prec_0_lj_width_8_s_null_bench(void){return printf("%-8.s", NULL);}
int s_prec_0_lj_width_1_s_nullchar_bench(void){return printf("%-1.s", "\0");}
int s_prec_0_lj_width_2_s_nullchar_bench(void){return printf("%-2.s", "\0");}
int s_prec_0_lj_width_6_s_nullchar_bench(void){return printf("%-6.s", "\0");}
// width  precision 1
int s_prec_1_width_3_s_hidden_bench(void){return printf("%3.1s", s_hidden);}
int s_prec_1_width_10_s_hidden_bench(void){return printf("%10.1s", s_hidden);}
int s_prec_1_width_3_s_null_bench(void){return printf("%3.1s", NULL);}
int s_prec_1_width_9_s_null_bench(void){return printf("%9.1s", NULL);}
// lj flag width  precision 1
int s_prec_1_lj_width_3_s_hidden_bench(void){return printf("%-3.1s", s_hidden);}
int s_prec_1_lj_width_10_s_hidden_bench(void){return printf("%-10.1s", s_hidden);}
int s_prec_1_lj_width_3_s_null_bench(void){return printf("%-3.1s", NULL);}
int s_prec_1_lj_width_9_s_null_bench(void){return printf("%-9.1s", NULL);}
int s_prec_1_lj_width_3_s_nullchar_bench(void){return printf("%-3.1s", "\0");}
int s_prec_1_lj_width_6_s_nullchar_bench(void){return printf("%-6.1s", "\0");}
// width  exact precision
int s_prec_perfect_width_3_s_hidden_bench(void){return printf("%3.6s", s_hidden);}
int s_prec_perfect_width_20_s_hidden_bench(void){return printf("%20.6s", s_hidden);}
int s_prec_perfect_width_3_s_null_bench(void){return printf("%3.6s", NULL);}
int s_prec_perfect_width_20_s_null_bench(void){return printf("%20.6s", NULL);}
int s_prec_perfect_width_3_s_nullchar_bench(void){return printf("%3.6s", "\0");}
int s_prec_perfect_width_6_s_nullchar_bench(void){return printf("%6.6s", "\0");}
// lj flag width exact precision
int s_prec_perfect_lj_width_3_s_hidden_bench(void){return printf("%-3.6s", s_hidden);}
int s_prec_perfect_lj_width_20_s_hidden_bench(void){return printf("%-20.6s", s_hidden);}
// lj flag width excess precision
int s_prec_8_lj_width_3_s_hidden_bench(void){return printf("%-3.8s", s_hidden);}
int s_prec_8_lj_width_10_s_hidden_bench(void){return printf("%-10.8s", s_hidden);}
int s_prec_8_lj_width_3_s_null_bench(void){return printf("%-3.8s", NULL);}
int s_prec_8_lj_width_10_s_null_bench(void){return printf("%-10.8s", NULL);}
// decoy lj flag
int s_prec_00_lj_s_hidden_trunc_bench(void){return printf("%-.00s", s_hidden);}
int s_prec_09_lj_s_hidden_notrunc_bench(void){return printf("%-.09s", s_hidden);}
// multiple flags diff order same width and precision
int notrequired_s_undefbehav_4_flags_diff_order_1_bench(void){return printf("%+- 06.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_2_bench(void){return printf("% 0+-6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_3_bench(void){return printf("%0 +-6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_4_bench(void){return printf("%+-0 6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_5_bench(void){return printf("%-+ 06.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_6_bench(void){return printf("% -+06.06s", s_hidden);}
// multiple flags diff order width > precision
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_1_bench(void){return printf("%+- 07.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_2_bench(void){return printf("% 0+-8.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_3_bench(void){return printf("%0 +-9.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_4_bench(void){return printf("%+-0 10.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_5_bench(void){return printf("%-+ 011.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_6_bench(void){return printf("% -+012.06s", s_hidden);}
// multiple flags diff order width > precision, truncated string
int notrequired_s_undefbehav_4_flags_as_lj_sp_zero_trunc_bench(void){return printf("%+- 06.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_as_lj_trunc_bench(void){return printf("% 0+-6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_zero_sp_as_lj_trunc_bench(void){return printf("%0 +-6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_as_lj_zero_sp_trunc_bench(void){return printf("%+-0 6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_lj_as_sp_zero_trunc_bench(void){return printf("%-+ 06.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_lj_as_trunc_bench(void){return printf("% 0-+6.04s", s_hidden);}
// multiple flags diff order width < precision, excess precision
int notrequired_s_undefbehav_4_flags_as_lj_sp_zero__pads_bench(void){return printf("%+- 06.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_as_lj__pads_bench(void){return printf("% 0+-6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_zero_sp_as_lj__pads_bench(void){return printf("%0 +-6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_as_lj_zero_sp__pads_bench(void){return printf("%+-0 6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_lj_as_sp_zero__pads_bench(void){return printf("%-+ 06.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_lj_as__pads_bench(void){return printf("% 0-+6.09s", s_hidden);}
// multi zeros
int notrequired_s_undefbehav_0_2zero_bench(void){return printf("%00s", s_hidden);}
int notrequired_s_undefbehav_0_3zero_bench(void){return printf("%000s", s_hidden);}
int notrequired_s_undefbehav_0_4zero_bench(void){return printf("%0000s", s_hidden);}
int notrequired_s_undefbehav_0_lj_2zero_bench(void){return printf("%-00s", s_hidden);}
int notrequired_s_undefbehav_0_zero_lj_zero_bench(void){return printf("%0-0s", s_hidden);}
int notrequired_s_undefbehav_0_2zero_lj_bench(void){return printf("%00-s", s_hidden);}
// zero and width
int notrequired_s_undefbehav_0_width_3_bench(void){return printf("%03s", s_hidden);}
int notrequired_s_undefbehav_0_width_9_bench(void){return printf("%09s", s_hidden);}
// as and zero flags  width
int notrequired_s_undefbehav_as_0_width_3_bench(void){return printf("%+03s", s_hidden);}
int notrequired_s_undefbehav_as_0_width_9_bench(void){return printf("%+09s", s_hidden);}
// flag cancelling
int notrequired_s_undefbehav_lj_0_width_3_bench(void){return printf("%-03s", s_hidden);}
int notrequired_s_undefbehav_lj_0_width_9_bench(void){return printf("%-09s", s_hidden);}
int notrequired_s_undefbehav_as_sp_width_3_bench(void){return printf("%+ 3s", s_hidden);}
int notrequired_s_undefbehav_as_sp_width_6_bench(void){return printf("%+ 6s", s_hidden);}


/* -----------------------------------------------------------------------------
** 						%p POINTERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Pointers - Basic












int p_null_bench(void){return printf("%p", NULL);}
int notrequired_p_ftfc_literal_9w_prec2_undefbehav_bench(void){return printf("%9.2p\n", 1234);}
int notrequired_p_ftfc_literal_2w_prec9_undefbehav_bench(void){return printf("%2.9p\n", 1234);}
int notrequired_p_ftfc_zero_prec5_undefbehav_bench(void){return printf("%.5p", 0);}
int notrequired_p_ftfc_zero_prec0_undefbehav_bench(void){return printf("%.0p", 0);}
int p_ftfc_5w_throwswarning_bench(void){return printf("%5p", 0);}
int p_basic_bench(void){return printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_fit_bench(void){return printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_nofit_bench(void){return printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_16_bench(void){return printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_8_bench(void){return printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_32_bench(void){return printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_fit_lj_bench(void){return printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_nofit_lj_bench(void){return printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_16_lj_bench(void){return printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_8_lj_bench(void){return printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}
int p_width_32_lj_bench(void){return printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


/* -----------------------------------------------------------------------------
** 						%d INTEGER TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Signed integers - no modifers
int d_basic_pos_bench(void){return printf("this %d number", 17);}
int d_basic_neg_bench(void){return printf("this %d number", -267);}
int d_basic_zero_bench(void){return printf("this %d number", 0);}
int d_basic_onlypos_bench(void){return printf("%d", 3);}
int d_basic_onlyneg_bench(void){return printf("%d", -1);}
int d_basic_onlyzero_bench(void){return printf("%d", 0);}
int d_intmax_bench(void){return printf("%d",  2147483647);}
int d_intmin_bench(void){return printf("%d", (int)(-2147483678));}
//Signed integers with field width
int d_width_pos_fits_bench(void){return printf("%7d", 33);}
int d_width_neg_fits_bench(void){return printf("%7d", -14);}
int d_width_zero_fits_bench(void){return printf("%3d", 0);}
int d_width_pos_exactfit_bench(void){return printf("%5d", 52625);}
int d_width_neg_exactfit_bench(void){return printf("%5d", -2562);}
int d_width_pos_nofit_bench(void){return printf("%4d", 94827);}
int d_width_neg_nofit_bench(void){return printf("%4d", -2464);}
int d_width_pos_fits_lj_bench(void){return printf("%-7d", 33);}
int d_width_neg_fits_lj_bench(void){return printf("%-7d", -14);}
int d_width_zero_fits_lj_bench(void){return printf("%-3d", 0);}
int d_width_pos_exactfit_lj_bench(void){return printf("%-5d", 52625);}
int d_width_neg_exactfit_lj_bench(void){return printf("%-5d", -2562);}
int d_width_pos_nofit_lj_bench(void){return printf("%-4d", 94827);}
int d_width_neg_nofit_lj_bench(void){return printf("%-4d", -2464);}
//signed integers with precision
int d_prec_fits_pos_bench(void){return printf("%.5d", 2);}
int d_prec_fits_neg_bench(void){return printf("%.6d", -3);}
int d_prec_fits_zero_bench(void){return printf("%.3d", 0);}
int d_prec_exactfit_pos_bench(void){return printf("%.4d", 5263);}
int d_prec_exactfit_neg_bench(void){return printf("%.4d", -2372);}
int d_prec_nofit_pos_bench(void){return printf("%.3d", 13862);}
int d_prec_nofit_neg_bench(void){return printf("%.3d",-23646);}
//Signed integers with zero field width padding
int d_zp_pos_fits_bench(void){return printf("%05d", 43);}
int d_zp_neg_fits_bench(void){return printf("%07d", -54);}
int d_zp_zero_fits_bench(void){return printf("%03d", 0);}
int d_zp_pos_exactfit_bench(void){return printf("%03d", 634);}
int d_zp_neg_exactfit_bench(void){return printf("%04d", -532);}
int d_zp_neg_minus1fit_bench(void){return printf("%04d", -4825);}
//Signed integers with field width and precision
int d_prec_width_fit_fit_pos_bench(void){return printf("%8.5d", 34);}
int d_prec_width_fit_fit_neg_bench(void){return printf("%10.5d", -216);}
int d_prec_width_fit_fit_zero_bench(void){return printf("%8.5d", 0);}
int d_prec_width_nofit_fit_pos_bench(void){return printf("%8.3d", 8375);}
int d_prec_width_nofit_fit_neg_bench(void){return printf("%8.3d", -8473);}
int d_prec_width_fit_nofit_pos_bench(void){return printf("%3.7d", 3267);}
int d_prec_width_fit_nofit_neg_bench(void){return printf("%3.7d", -2375);}
int d_prec_width_nofit_nofit_pos_bench(void){return printf("%3.3d", 6983);}
int d_prec_width_nofit_nofit_neg_bench(void){return printf("%3.3d", -8462);}
//Signed integers with field width and precision, left-justified
int d_prec_width_fit_fit_pos_lj_bench(void){return printf("%-8.5d", 34);}
int d_prec_width_fit_fit_neg_lj_bench(void){return printf("%-10.5d", -216);}
int d_prec_width_fit_fit_zero_lj_bench(void){return printf("%-8.5d", 0);}
int d_prec_width_nofit_fit_pos_lj_bench(void){return printf("%-8.3d", 8375);}
int d_prec_width_nofit_fit_neg_lj_bench(void){return printf("%-8.3d", -8473);}
int d_prec_width_fit_nofit_pos_lj_bench(void){return printf("%-3.7d", 3267);}
int d_prec_width_fit_nofit_neg_lj_bench(void){return printf("%-3.7d", -2375);}
int d_prec_width_nofit_nofit_pos_lj_bench(void){return printf("%-3.3d", 6983);}
int d_prec_width_nofit_nofit_neg_lj_bench(void){return printf("%-3.3d", -8462);}
//Signed integers with field width and precision with zeropadding
int d_prec_width_ff_pos_zp_bench(void){return printf("%08.5d", 34);}
int d_prec_width_ff_neg_zp_bench(void){return printf("%010.5d", -216);}
int d_prec_width_ff_zero_zp_bench(void){return printf("%08.5d", 0);}
int d_prec_width_nf_pos_zp_bench(void){return printf("%08.3d", 8375);}
int d_prec_width_nf_neg_zp_bench(void){return printf("%08.3d", -8473);}
int d_prec_width_fn_pos_zp_bench(void){return printf("%03.7d", 3267);}
int d_prec_width_fn_neg_zp_bench(void){return printf("%03.7d", -2375);}
int d_prec_width_nn_pos_zp_bench(void){return printf("%03.3d", 6983);}
int d_prec_width_nn_neg_zp_bench(void){return printf("%03.3d", -8462);}
//Signed integers with field width and precision, left-justified with zeropadding
int d_prec_width_ff_pos_lj_zp_ignoreflag_bench(void){return printf("%0-8.5d", 34);}
int d_prec_width_ff_neg_ljzp_ignoreflag_bench(void){return printf("%0-10.5d", -216);}
int d_prec_width_ff_zero_ljzp_ignoreflag_bench(void){return printf("%0-8.5d", 0);}
int d_prec_width_nf_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.3d", 8375);}
int d_prec_width_nf_neg_ljzp_ignoreflag_bench(void){return printf("%0-8.3d", -8473);}
int d_prec_width_fn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.7d", 3267);}
int d_prec_width_fn_neg_ljzp_ignoreflag_bench(void){return printf("%0-3.7d", -2375);}
int d_prec_width_nn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.3d", 6983);}
int d_prec_width_nn_neg_ljzp_ignoreflag_bench(void){return printf("%0-3.3d", -8462);}
//Signed integers - zero precision zero value
int d_prec0val0_basic_bench(void){return printf("%.0d", 0);}
int d_prec0val0_implicit_bench(void){return printf("%.d", 0);}
int d_prec0val0_w_bench(void){return printf("%5.0d", 0);}
int d_prec0val0_w_impl_bench(void){return printf("%5.d", 0);}
int d_prec0val0_wlj_bench(void){return printf("%-5.0d", 0);}
int d_prec0val0_wlj_impl_bench(void){return printf("%-5.d", 0);}


/* -----------------------------------------------------------------------------
** 						%i INTEGER TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Signed integers - no modifers
int i_basic_pos_bench(void){return printf("this %i number", 17);}
int i_basic_neg_bench(void){return printf("this %i number", -267);}
int i_basic_zero_bench(void){return printf("this %i number", 0);}
int i_basic_onlypos_bench(void){return printf("%i", 3);}
int i_basic_onlyneg_bench(void){return printf("%i", -1);}
int i_basic_onlyzero_bench(void){return printf("%i", 0);}
int i_intmax_bench(void){return printf("%i",  2147483647);}
int i_intmin_bench(void){return printf("%i", (int)(-2147483678));}
//Signed integers  field width
int i_width_pos_fits_bench(void){return printf("%7i", 33);}
int i_width_neg_fits_bench(void){return printf("%7i", -14);}
int i_width_zero_fits_bench(void){return printf("%3i", 0);}
int i_width_pos_exactfit_bench(void){return printf("%5i", 52625);}
int i_width_neg_exactfit_bench(void){return printf("%5i", -2562);}
int i_width_pos_nofit_bench(void){return printf("%4i", 94827);}
int i_width_neg_nofit_bench(void){return printf("%4i", -2464);}
int i_width_pos_fits_lj_bench(void){return printf("%-7i", 33);}
int i_width_neg_fits_lj_bench(void){return printf("%-7i", -14);}
int i_width_zero_fits_lj_bench(void){return printf("%-3i", 0);}
int i_width_pos_exactfit_lj_bench(void){return printf("%-5i", 52625);}
int i_width_neg_exactfit_lj_bench(void){return printf("%-5i", -2562);}
int i_width_pos_nofit_lj_bench(void){return printf("%-4i", 94827);}
int i_width_neg_nofit_lj_bench(void){return printf("%-4i", -2464);}
//signed integers with precision
int i_prec_fits_pos_bench(void){return printf("%.5i", 2);}
int i_prec_fits_neg_bench(void){return printf("%.6i", -3);}
int i_prec_fits_zero_bench(void){return printf("%.3i", 0);}
int i_prec_exactfit_pos_bench(void){return printf("%.4i", 5263);}
int i_prec_exactfit_neg_bench(void){return printf("%.4i", -2372);}
int i_prec_nofit_pos_bench(void){return printf("%.3i", 13862);}
int i_prec_nofit_neg_bench(void){return printf("%.3i",-23646);}
//Signed integers with zero field width padding
int i_zp_pos_fits_bench(void){return printf("%05i", 43);}
int i_zp_neg_fits_bench(void){return printf("%07i", -54);}
int i_zp_zero_fits_bench(void){return printf("%03i", 0);}
int i_zp_pos_exactfit_bench(void){return printf("%03i", 634);}
int i_zp_neg_exactfit_bench(void){return printf("%04i", -532);}
int i_zp_neg_minus1fit_bench(void){return printf("%04i", -4825);}
//Signed integers with field width and precision
int i_prec_width_fit_fit_pos_bench(void){return printf("%8.5i", 34);}
int i_prec_width_fit_fit_neg_bench(void){return printf("%10.5i", -216);}
int i_prec_width_fit_fit_zero_bench(void){return printf("%8.5i", 0);}
int i_prec_width_nofit_fit_pos_bench(void){return printf("%8.3i", 8375);}
int i_prec_width_nofit_fit_neg_bench(void){return printf("%8.3i", -8473);}
int i_prec_width_fit_nofit_pos_bench(void){return printf("%3.7i", 3267);}
int i_prec_width_fit_nofit_neg_bench(void){return printf("%3.7i", -2375);}
int i_prec_width_nofit_nofit_pos_bench(void){return printf("%3.3i", 6983);}
int i_prec_width_nofit_nofit_neg_bench(void){return printf("%3.3i", -8462);}
//Signed integers with field width and precision, left-justified
int i_prec_width_fit_fit_pos_lj_bench(void){return printf("%-8.5i", 34);}
int i_prec_width_fit_fit_neg_lj_bench(void){return printf("%-10.5i", -216);}
int i_prec_width_fit_fit_zero_lj_bench(void){return printf("%-8.5i", 0);}
int i_prec_width_nofit_fit_pos_lj_bench(void){return printf("%-8.3i", 8375);}
int i_prec_width_nofit_fit_neg_lj_bench(void){return printf("%-8.3i", -8473);}
int i_prec_width_fit_nofit_pos_lj_bench(void){return printf("%-3.7i", 3267);}
int i_prec_width_fit_nofit_neg_lj_bench(void){return printf("%-3.7i", -2375);}
int i_prec_width_nofit_nofit_pos_lj_bench(void){return printf("%-3.3i", 6983);}
int i_prec_width_nofit_nofit_neg_lj_bench(void){return printf("%-3.3i", -8462);}
//Signed integers with field width and precision with zeropadding
int i_prec_width_ff_pos_zp_bench(void){return printf("%08.5i", 34);}
int i_prec_width_ff_neg_zp_bench(void){return printf("%010.5i", -216);}
int i_prec_width_ff_zero_zp_bench(void){return printf("%08.5i", 0);}
int i_prec_width_nf_pos_zp_bench(void){return printf("%08.3i", 8375);}
int i_prec_width_nf_neg_zp_bench(void){return printf("%08.3i", -8473);}
int i_prec_width_fn_pos_zp_bench(void){return printf("%03.7i", 3267);}
int i_prec_width_fn_neg_zp_bench(void){return printf("%03.7i", -2375);}
int i_prec_width_nn_pos_zp_bench(void){return printf("%03.3i", 6983);}
int i_prec_width_nn_neg_zp_bench(void){return printf("%03.3i", -8462);}
//Signed integers with field width and precision, left-justified with zeropadding
int i_prec_width_ff_pos_lj_zp_ignoreflag_bench(void){return printf("%0-8.5i", 34);}
int i_prec_width_ff_neg_ljzp_ignoreflag_bench(void){return printf("%0-10.5i", -216);}
int i_prec_width_ff_zero_ljzp_ignoreflag_bench(void){return printf("%0-8.5i", 0);}
int i_prec_width_nf_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.3i", 8375);}
int i_prec_width_nf_neg_ljzp_ignoreflag_bench(void){return printf("%0-8.3i", -8473);}
int i_prec_width_fn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.7i", 3267);}
int i_prec_width_fn_neg_ljzp_ignoreflag_bench(void){return printf("%0-3.7i", -2375);}
int i_prec_width_nn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.3i", 6983);}
int i_prec_width_nn_neg_ljzp_ignoreflag_bench(void){return printf("%0-3.3i", -8462);}
//Signed integers - zero precision zero value
int i_prec0val0_basic_bench(void){return printf("%.0i", 0);}
int i_prec0val0_implicit_bench(void){return printf("%.i", 0);}
int i_prec0val0_w_bench(void){return printf("%5.0i", 0);}
int i_prec0val0_w_impl_bench(void){return printf("%5.i", 0);}
int i_prec0val0_wlj_bench(void){return printf("%-5.0i", 0);}
int i_prec0val0_wlj_impl_bench(void){return printf("%-5.i", 0);}


/* -----------------------------------------------------------------------------
** 						%u UNSIGNED INTEGERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Unsigned integers - no modifers
int u_basic_pos_bench(void){return printf("this %u number", 17);}
int u_basic_zero_bench(void){return printf("this %u number", 0);}
int u_basic_onlypos_bench(void){return printf("%u", 3);}
int u_uintmax_bench(void){return printf("%u", 4294967295u);}
//Unsigned integers with field width
int u_width_pos_fits_bench(void){return printf("%7u", 33);}
int u_width_zero_fits_bench(void){return printf("%3u", 0);}
int u_width_pos_exactfit_bench(void){return printf("%5u", 52625);}
int u_width_pos_nofit_bench(void){return printf("%4u", 94827);}
int u_width_pos_fits_lj_bench(void){return printf("%-7u", 33);}
int u_width_zero_fits_lj_bench(void){return printf("%-3u", 0);}
int u_width_pos_exactfit_lj_bench(void){return printf("%-5u", 52625);}
int u_width_pos_nofit_lj_bench(void){return printf("%-4u", 94827);}
//unsigned integers with precision
int u_prec_fits_pos_bench(void){return printf("%.5u", 2);}
int u_prec_fits_zero_bench(void){return printf("%.3u", 0);}
int u_prec_exactfit_pos_bench(void){return printf("%.4u", 5263);}
int u_prec_nofit_pos_bench(void){return printf("%.3u", 13862);}
//Unsigned integers with zero field width padding
int u_zp_pos_fits_bench(void){return printf("%05u", 43);}
int u_zp_zero_fits_bench(void){return printf("%03u", 0);}
int u_zp_pos_exactfit_bench(void){return printf("%03u", 634);}
//Unsigned integers with field width and precision
int u_prec_width_fit_fit_pos_bench(void){return printf("%8.5u", 34);}
int u_prec_width_fit_fit_zero_bench(void){return printf("%8.5u", 0);}
int u_prec_width_nofit_fit_pos_bench(void){return printf("%8.3u", 8375);}
int u_prec_width_fit_nofit_pos_bench(void){return printf("%3.7u", 3267);}
int u_prec_width_nofit_nofit_pos_bench(void){return printf("%3.3u", 6983);}
//Unsigned integers with field width and precision, left-justified
int u_prec_width_fit_fit_pos_lj_bench(void){return printf("%-8.5u", 34);}
int u_prec_width_fit_fit_zero_lj_bench(void){return printf("%-8.5u", 0);}
int u_prec_width_nofit_fit_pos_lj_bench(void){return printf("%-8.3u", 8375);}
int u_prec_width_fit_nofit_pos_lj_bench(void){return printf("%-3.7u", 3267);}
int u_prec_width_nofit_nofit_pos_lj_bench(void){return printf("%-3.3u", 6983);}
//Unsigned integers with field width and precision with zeropadding
int u_prec_width_ff_pos_zp_bench(void){return printf("%08.5u", 34);}
int u_prec_width_ff_zero_zp_bench(void){return printf("%08.5u", 0);}
int u_prec_width_nf_pos_zp_bench(void){return printf("%08.3u", 8375);}
int u_prec_width_fn_pos_zp_bench(void){return printf("%03.7u", 3267);}
int u_prec_width_nn_pos_zp_bench(void){return printf("%03.3u", 6983);}
//Unsigned integers with field width and precision, left-justified with zeropadding
int u_prec_width_ff_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.5u", 34);}
int u_prec_width_ff_zero_ljzp_ignoreflag_bench(void){return printf("%0-8.5u", 0);}
int u_prec_width_nf_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.3u", 8375);}
int u_prec_width_fn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.7u", 3267);}
int u_prec_width_nn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.3u", 6983);}
//Unsigned integers - zero precision zero value
int u_prec0val0_basic_bench(void){return printf("%.0u", 0);}
int u_prec0val0_implicit_bench(void){return printf("%.u", 0);}
int u_prec0val0_w_bench(void){return printf("%5.0u", 0);}
int u_prec0val0_w_impl_bench(void){return printf("%5.u", 0);}
int u_prec0val0_wlj_bench(void){return printf("%-5.0u", 0);}
int u_prec0val0_wlj_impl_bench(void){return printf("%-5.u", 0);}


/* -----------------------------------------------------------------------------
** 						%x HEXADECIMAL LOWERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Hexadecimal lowers - no modifers
int x_basic_pos_bench(void){return printf("this %x number", 17);}
int x_basic_zero_bench(void){return printf("this %x number", 0);}
int x_basic_onlypos_bench(void){return printf("%x", 3);}
int x_hexlmax_bench(void){return printf("%x", 4294967295u);}
//Hexadecimal lowers with field width
int x_width_pos_fits_bench(void){return printf("%7x", 33);}
int x_width_zero_fits_bench(void){return printf("%3x", 0);}
int x_width_pos_exactfit_bench(void){return printf("%5x", 52625);}
int x_width_pos_nofit_bench(void){return printf("%2x", 94827);}
int x_width_pos_fits_lj_bench(void){return printf("%-7x", 33);}
int x_width_zero_fits_lj_bench(void){return printf("%-3x", 0);}
int x_width_pos_exactfit_lj_bench(void){return printf("%-5x", 52625);}
int x_width_pos_nofit_lj_bench(void){return printf("%-4x", 9648627);}
//Hexadecimal lowers with precision
int x_prec_fits_pos_bench(void){return printf("%.5x", 21);}
int x_prec_fits_zero_bench(void){return printf("%.3x", 0);}
int x_prec_exactfit_pos_bench(void){return printf("%.4x", 5263);}
int x_prec_nofit_pos_bench(void){return printf("%.3x", 938862);}
//Hexadecimal lowers with zero field width padding
int x_zp_pos_fits_bench(void){return printf("%05x", 43);}
int x_zp_zero_fits_bench(void){return printf("%03x", 0);}
int x_zp_pos_exactfit_bench(void){return printf("%03x", 698334);}
//Hexadecimal lowers with field width and precision
int x_prec_width_fit_fit_pos_bench(void){return printf("%8.5x", 34);}
int x_prec_width_fit_fit_zero_bench(void){return printf("%8.5x", 0);}
int x_prec_width_nofit_fit_pos_bench(void){return printf("%8.3x", 8375);}
int x_prec_width_fit_nofit_pos_bench(void){return printf("%2.7x", 3267);}
int x_prec_width_nofit_nofit_pos_bench(void){return printf("%3.3x", 6983);}
//Hexadecimal lowers with field width and precision, left-justified
int x_prec_width_fit_fit_pos_lj_bench(void){return printf("%-8.5x", 34);}
int x_prec_width_fit_fit_zero_lj_bench(void){return printf("%-8.5x", 0);}
int x_prec_width_nofit_fit_pos_lj_bench(void){return printf("%-8.3x", 8375);}
int x_prec_width_fit_nofit_pos_lj_bench(void){return printf("%-2.7x", 3267);}
int x_prec_width_nofit_nofit_pos_lj_bench(void){return printf("%-3.3x", 6983);}
//Hexadecimal lowers with field width and precision with zeropadding
int x_prec_width_ff_pos_zp_bench(void){return printf("%08.5x", 34);}
int x_prec_width_ff_zero_zp_bench(void){return printf("%08.5x", 0);}
int x_prec_width_nf_pos_zp_bench(void){return printf("%08.3x", 8375);}
int x_prec_width_fn_pos_zp_bench(void){return printf("%02.7x", 3267);}
int x_prec_width_nn_pos_zp_bench(void){return printf("%03.3x", 6983);}
//Hexadecimal lowers with field width and precision, left-justified with zeropadding
int x_prec_width_ff_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.5x", 34);}
int x_prec_width_ff_zero_ljzp_ignoreflag_bench(void){return printf("%0-8.5x", 0);}
int x_prec_width_nf_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.3x", 8375);}
int x_prec_width_fn_pos_ljzp_ignoreflag_bench(void){return printf("%0-2.7x", 3267);}
int x_prec_width_nn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.3x", 6983);}
//Hexadecimal lower - zero precision zero value
int x_prec0val0_basic_bench(void){return printf("%.0x", 0);}
int x_prec0val0_implicit_bench(void){return printf("%.x", 0);}
int x_prec0val0_w_bench(void){return printf("%5.0x", 0);}
int x_prec0val0_w_impl_bench(void){return printf("%5.x", 0);}
int x_prec0val0_wlj_bench(void){return printf("%-5.0x", 0);}
int x_prec0val0_wlj_impl_bench(void){return printf("%-5.x", 0);}


/* -----------------------------------------------------------------------------
** 						%X HEXADECIMAL UPPERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Hexadecimal uppers - no modifers
int X_basic_hexu_pos_bench(void){return printf("this %X number", 17);}
int X_basic_hexu_zero_bench(void){return printf("this %X number", 0);}
int X_basic_hexu_onlypos_bench(void){return printf("%X", 3);}
int X_hexumax_bench(void){return printf("%X", 4294967295u);}
//Hexadecimal uppers with field width
int X_width_pos_fits_bench(void){return printf("%7X", 33);}
int X_width_zero_fits_bench(void){return printf("%3X", 0);}
int X_width_pos_exactfit_bench(void){return printf("%5X", 52625);}
int X_width_pos_nofit_bench(void){return printf("%2X", 94827);}
int X_width_pos_fits_lj_bench(void){return printf("%-7X", 33);}
int X_width_zero_fits_lj_bench(void){return printf("%-3X", 0);}
int X_width_pos_exactfit_lj_bench(void){return printf("%-5X", 52625);}
int X_width_pos_nofit_lj_bench(void){return printf("%-4X", 9648627);}
//Hexadecimal uppers with precision
int X_prec_fits_pos_bench(void){return printf("%.5X", 21);}
int X_prec_fits_zero_bench(void){return printf("%.3X", 0);}
int X_prec_exactfit_pos_bench(void){return printf("%.4X", 5263);}
int X_prec_nofit_pos_bench(void){return printf("%.3X", 938862);}
//Hexadecimal uppers with zero field width padding
int X_zp_pos_fits_bench(void){return printf("%05X", 43);}
int X_zp_zero_fits_bench(void){return printf("%03X", 0);}
int X_zp_pos_exactfit_bench(void){return printf("%03X", 698334);}
//Hexadecimal uppers with field width and precision
int X_prec_width_fit_fit_pos_bench(void){return printf("%8.5X", 34);}
int X_prec_width_fit_fit_zero_bench(void){return printf("%8.5X", 0);}
int X_prec_width_nofit_fit_pos_bench(void){return printf("%8.3X", 8375);}
int X_prec_width_fit_nofit_pos_bench(void){return printf("%2.7X", 3267);}
int X_prec_width_nofit_nofit_pos_bench(void){return printf("%3.3X", 6983);}
//Hexadecimal uppers with field width and precision, left-justified
int X_prec_width_fit_fit_pos_lj_bench(void){return printf("%-8.5X", 34);}
int X_prec_width_fit_fit_zero_lj_bench(void){return printf("%-8.5X", 0);}
int X_prec_width_nofit_fit_pos_lj_bench(void){return printf("%-8.3X", 8375);}
int X_prec_width_fit_nofit_pos_lj_bench(void){return printf("%-2.7X", 3267);}
int X_prec_width_nofit_nofit_pos_lj_bench(void){return printf("%-3.3X", 6983);}
//Hexadecimal uppers with field width and precision with zeropadding
int X_prec_width_ff_pos_zp_bench(void){return printf("%08.5X", 34);}
int X_prec_width_ff_zero_zp_bench(void){return printf("%08.5X", 0);}
int X_prec_width_nf_pos_zp_bench(void){return printf("%08.3X", 8375);}
int X_prec_width_fn_pos_zp_bench(void){return printf("%02.7X", 3267);}
int X_prec_width_nn_pos_zp_bench(void){return printf("%03.3X", 6983);}
//Hexadecimal uppers with field width and precision, left-justified with zeropadding
int X_prec_width_ff_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.5X", 34);}
int X_prec_width_ff_zero_ljzp_ignoreflag_bench(void){return printf("%0-8.5X", 0);}
int X_prec_width_nf_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.3X", 8375);}
int X_prec_width_fn_pos_ljzp_ignoreflag_bench(void){return printf("%0-2.7X", 3267);}
int X_prec_width_nn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.3X", 6983);}
//Hexadecimal uppers - zero precision zero value
int X_prec0val0_basic_bench(void){return printf("%.0X", 0);}
int X_prec0val0_implicit_bench(void){return printf("%.X", 0);}
int X_prec0val0_w_bench(void){return printf("%5.0X", 0);}
int X_prec0val0_w_impl_bench(void){return printf("%5.X", 0);}
int X_prec0val0_wlj_bench(void){return printf("%-5.0X", 0);}
int X_prec0val0_wlj_impl_bench(void){return printf("%-5.X", 0);}


/* -----------------------------------------------------------------------------
** 							STAR TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Taken from https://github.com/cclaude42/PFT_2019
int new2019_star_1_bench(void){return printf("%*s", 32, "abc");}
int new2019_star_2_bench(void){return printf("%-*s", 32, "abc");}
int new2019_star_3_bench(void){return printf("%*s", 3, "hello");}
int new2019_star_4_bench(void){return printf("%.*s", 3, "hello");}
int new2019_star_5_bench(void){return printf("%.*s", 0, "hello");}
int new2019_star_6_bench(void){return printf("%-*.*s", 7, 3, "yolo");}
int new2019_star_7_bench(void){return printf("%*i", 4, 94827);}
int new2019_star_8_bench(void){return printf("%*i", 14, 94827);}
int new2019_star_9_bench(void){return printf("%.*i", 6, -3);}
int new2019_star_10_bench(void){return printf("%0*i", 7, -54);}
int new2019_negstar_1_bench(void){return printf("%*s", -32, "abc");}
int new2019_negstar_2_bench(void){return printf("%-*s", -32, "abc");}
int new2019_negstar_3_bench(void){return printf("%*s", -3, "hello");}
int new2019_negstar_4_bench(void){return printf("%.*s", -3, "hello");}
int new2019_negstar_5_bench(void){return printf("%-*.*s", -7, -3, "yolo");}
int new2019_negstar_6_bench(void){return printf("%*i", -4, 94827);}
int new2019_negstar_7_bench(void){return printf("%*i", -14, 94827);}
int new2019_negstar_8_bench(void){return printf("%.*i", -6, -3);}
int new2019_negstar_9_bench(void){return printf("%0*i", -7, -54);}


/* -----------------------------------------------------------------------------
** 					NO CRASH / NO SEGFAULT TESTS (NOT REQUIRED)
** ---------------------------------------------------------------------------*/
//No-crash-no-segfault test
int nocrash_notrequired_noarg_3_bench(void){return printf("% "); }
int nocrash_notrequired_noarg_5_bench(void){return printf("%-"); }
int nocrash_notrequired_noarg_6_bench(void){return printf("%+"); }
int nocrash_notrequired_noarg_9_bench(void){return printf("%23"); }
int nocrash_notrequired_noarg_10_bench(void){return printf("%."); }
int nocrash_notrequired_noarg_16_bench(void){return printf("%p"); }
int nocrash_notrequired_noarg_17_bench(void){return printf("%d"); }
int nocrash_notrequired_noarg_19_bench(void){return printf("%u"); }
int nocrash_notrequired_noarg_20_bench(void){return printf("%x"); }
int nocrash_notrequired_noarg_21_bench(void){return printf("%X"); }
int nocrash_notrequired_noarg_24_bench(void){return printf("%c"); }
int nocrash_notrequired_nullarg_2_bench(void){return printf("%0s", NULL); }
int nocrash_notrequired_nullarg_3_bench(void){return printf("% s", NULL); }
int nocrash_notrequired_nullarg_5_bench(void){return printf("%-s", NULL); }
int nocrash_notrequired_nullarg_6_bench(void){return printf("%+s", NULL); }
int nocrash_notrequired_nullarg_9_bench(void){return printf("%23s", NULL); }
int nocrash_notrequired_nullarg_10_bench(void){return printf("%.s", NULL); }
int nocrash_notrequired_nullarg_16_bench(void){return printf("%p", NULL); }
int nocrash_notrequired_nullarg_17_bench(void){return printf("%d", NULL); }
int nocrash_notrequired_nullarg_19_bench(void){return printf("%u", NULL); }
int nocrash_notrequired_nullarg_20_bench(void){return printf("%x", NULL); }
int nocrash_notrequired_nullarg_21_bench(void){return printf("%X", NULL); }
int nocrash_notrequired_nullarg_23_bench(void){return printf("%s", NULL); }
int nocrash_notrequired_nullarg_24_bench(void){return printf("%c", NULL); }
//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_dupflag_d_ljljw_bench(void){return printf("%--5d", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_c_prec_1_bench(void){return printf("%.4c", 'a');}
int nocrash_notrequired_c_prec_2_bench(void){return printf("%.c", 'a');}
int nocrash_notrequired_c_zp_1_bench(void){return printf("%05c", 'a');}
int nocrash_notrequired_c_zp_2_bench(void){return printf("%0c", 'a');}
int nocrash_notrequired_c_lj_nowidth_bench(void){return printf("%-c", 'a');}
int nocrash_notrequired_s_zp_1_bench(void){return printf("%05s", "hello");}
int nocrash_notrequired_s_zp_2_bench(void){return printf("%0s", "hello");}
int nocrash_notrequired_s_lj_nowidth_bench(void){return printf("%-s", "hello");}


int nocrash_notrequired_p_prec_1_bench(void){return printf("%.4p", &ncm_p);}
int nocrash_notrequired_p_prec_2_bench(void){return printf("%.p", &ncm_p);}
int nocrash_notrequired_p_zp_1_bench(void){return printf("%05p", &ncm_p);}
int nocrash_notrequired_p_zp_2_bench(void){return printf("%0p", &ncm_p);}
int nocrash_notrequired_p_lj_nowidth_bench(void){return printf("%-p", &ncm_p);}
int nocrash_notrequired_i_lj_nowidth_bench(void){return printf("%-i", 42);}
int nocrash_notrequired_u_lj_nowidth_bench(void){return printf("%-u", 42);}
int nocrash_notrequired_x_lj_nowidth_bench(void){return printf("%-x", 42);}


/* -----------------------------------------------------------------------------
** 							MOULINETTE TESTS - MANDATORY
** ---------------------------------------------------------------------------*/
int moul_c_1_bench(void){return printf("%c", 42);}
int moul_c_2_bench(void){return printf("Kashim a %c histoires à raconter", 1001);}
int moul_c_3_bench(void){return printf("Il fait au moins %c\n", -8000);}
int moul_c_4_bench(void){return printf("%c", -0);}
int moul_c_5_bench(void){return printf("%c", 0);}
int moul_c_5b_bench(void){return printf("%c\n", INT_MAX);}
int moul_c_6_bench(void){return printf("%c\n", 'c');}
int moul_c_7_bench(void){return printf("%c\n", '\n');}
int moul_c_8_bench(void){return printf("%c", 'l');}
int moul_c_9_bench(void){return printf("%c", 'y');}
int moul_c_10_bench(void){return printf("%c", ' ');}
int moul_c_11_bench(void){return printf("%c", 'e');}
int moul_c_12_bench(void){return printf("%c", 's');}
int moul_c_13_bench(void){return printf("%c", 't');}
int moul_c_14_bench(void){return printf("%c", ' ');}
int moul_c_15_bench(void){return printf("%c", 'f');}
int moul_c_16_bench(void){return printf("%c", 'a');}
int moul_c_17_bench(void){return printf("%c", 'n');}
int moul_c_18_bench(void){return printf("%c", 't');}
int moul_c_19_bench(void){return printf("%c", 'a');}
int moul_c_20_bench(void){return printf("%c", 's');}
int moul_c_21_bench(void){return printf("%c", 't');}
int moul_c_22_bench(void){return printf("%c", 'i');}
int moul_c_23_bench(void){return printf("%c", 'q');}
int moul_c_24_bench(void){return printf("%c", 'u');}
int moul_c_25_bench(void){return printf("%c", 'e');}
int moul_c_26_bench(void){return printf("%c\n", '!');}
int moul_c_27_bench(void){return printf("%c\n", '\r');}
int moul_c_28_bench(void){return printf("%c\n", '\t');}
int moul_s_1_bench(void){return printf(" pouet %s !!", "camembert");}
int moul_s_2_bench(void){return printf("%s !", "Ceci n'est pas un \0 exercice !");}
int moul_s_3_bench(void){return printf("%s!", "Ceci n'est toujours pas un exercice !");}
int moul_s_4_bench(void){char *str = NULL; return printf("%s!", str);}
int moul_s_5_this_ones_a_doozy_bench(void){return printf("%s",
		"Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Etalafinilla*bip*");}
int moul_d_1_bench(void){return printf("%d", 42);}
int moul_d_2_bench(void){return printf("Kashim a %d histoires à raconter", 1001);}
int moul_d_3_bench(void){return printf("Il fait au moins %d\n", -8000);}
int moul_d_4_bench(void){return printf("%d", -0);}
int moul_d_5_bench(void){return printf("%d", 0);}
int moul_d_6_bench(void){return printf("%d", INT_MAX);}
int moul_d_7_bench(void){return printf("%d", INT_MIN);}
int moul_d_8_bench(void){return printf("%d", INT_MIN - 1);}
int moul_d_9_bench(void){return printf("%d", INT_MAX + 1);}
int moul_d_10_bench(void){return printf("%%d 0000042 == |%d|\n", 0000042);}
int moul_d_11_bench(void){return printf("%%d \t == |%d|\n", '\t');}
int moul_d_12_bench(void){return printf("%%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');}
int moul_mix_1_bench(void){int r00 = 0; return printf("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", &r00);}
int moul_i_1_bench(void){return printf("%i", 42);}
int moul_i_2_bench(void){return printf("Kashim a %i histoires à raconter", 1001);}
int moul_i_3_bench(void){return printf("Il fait au moins %i\n", -8000);}
int moul_i_4_bench(void){return printf("%i", -0);}
int moul_i_5_bench(void){return printf("%i", 0);}
int moul_i_6_bench(void){return printf("%i", INT_MAX);}
int moul_i_7_bench(void){return printf("%i", INT_MIN);}
int moul_i_8_bench(void){return printf("%i", INT_MIN - 1);}
int moul_i_9_bench(void){return printf("%i", INT_MAX + 1);}
int moul_i_10_bench(void){return printf("%%i 0000042 == |%i|\n", 0000042);}
int moul_i_11_bench(void){return printf("%%i \t == |%i|\n", '\t');}
int moul_i_12_bench(void){return printf("%%i Lydie == |%i|\n", 'L'+'y'+'d'+'i'+'e');}
int moul_u_1_bench(void){return printf("%u", 42);}
int moul_u_2_bench(void){return printf("Kashim a %u histoires à raconter", 1001);}
int moul_u_3_bench(void){return printf("Il fait au moins %u\n", -8000);}
int moul_u_4_bench(void){return printf("%u", -0);}
int moul_u_5_bench(void){return printf("%u", 0);}
int moul_u_6_bench(void){return printf("%u", INT_MAX);}
int moul_u_7_bench(void){return printf("%u", INT_MIN);}
int moul_u_8_bench(void){return printf("%u", INT_MIN - 1);}
int moul_u_9_bench(void){return printf("%u", INT_MAX + 1);}
int moul_u_10_bench(void){return printf("%%u 0000042 == |%u|\n", 0000042);}
int moul_u_11_bench(void){return printf("%%u \t == |%u|\n", '\t');}
int moul_u_12_bench(void){return printf("%%u Lydie == |%u|\n", 'L'+'y'+'d'+'i'+'e');}
int moul_x_1_bench(void){return printf("%x", 42);}
int moul_x_2_bench(void){return printf("Kashim a %x histoires à raconter", 1001);}
int moul_x_3_bench(void){return printf("Il fait au moins %x\n", -8000);}
int moul_x_4_bench(void){return printf("%x", -0);}
int moul_x_5_bench(void){return printf("%x", 0);}
int moul_x_6_bench(void){return printf("%x", INT_MAX);}
int moul_x_7_bench(void){return printf("%x", INT_MIN);}
int moul_x_8_bench(void){return printf("%x", INT_MIN - 1);}
int moul_x_9_bench(void){return printf("%x", INT_MAX + 1);}
int moul_x_10_bench(void){return printf("%%x 0000042 == |%x|\n", 0000042);}
int moul_x_11_bench(void){return printf("%%x \t == |%x|\n", '\t');}
int moul_x_12_bench(void){return printf("%%x Lydie == |%x|\n", 'L'+'y'+'d'+'i'+'e');}
int moul_prec_1_bench(void){return printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");}
int moul_prec_3_bench(void){return printf("%%04.5i 42 == |%04.5i|\n", 42);}
int moul_prec_4_bench(void){return printf("%%04.3i 42 == |%04.3i|\n", 42);}
int moul_prec_5_bench(void){return printf("%%04.2i 42 == |%04.2i|\n", 42);}
int moul_zeropad_1_bench(void){return printf("%%04i 42 == |%04i|\n", 42);}
int moul_zeropad_2_bench(void){return printf("%%05i 42 == |%05i|\n", 42);}
int moul_zeropad_3_bench(void){return printf("%%0i 42 == |%0i|\n", 42);}
int moul_zeropad_4_bench(void){return printf("%%0d 0000042 == |%0d|\n", 0000042);}
int moul_leftjusty_1_bench(void){return printf("%%-i 42 == %-i\n", 42);}
int moul_leftjusty_2_bench(void){return printf("%%-d 42 == %-d\n", INT_MIN);}
int moul_leftjusty_3_bench(void){return printf("%%-i -42 == %-i\n", -42);}
int moul_leftjusty_4_bench(void){return printf("%%-4d 42 == |%-4d|\n", 42);}
int moul_leftjusty_5_bench(void){return printf("%%-5d -42 == |%-5d|\n", -42);}
int moul_leftjusty_6_bench(void){return printf("|%3i|%-3i|\n", 42, 42);}
int moul_leftjusty_7_bench(void){return printf("%%-4i 42 == |%-4i|\n", 42);}
int moul_star_1_bench(void){return printf("%%-*.3s LYDI == |%-*.3s|\n", 5, "LYDI");}
int moul_star_2_bench(void){return printf("%% *.5i 42 == |% *.5i|\n", 4, 42);}
int moul_star_3_bench(void){return printf("%%*i 42 == |%*i|\n", 5, 42);}
int moul_star_4_bench(void){return printf("%%*i 42 == |%*i|\n", 3, 42);}
int moul_star_5_bench(void){return printf("%%*i 42 == |%*i|\n", 2, 42);}


/* -----------------------------------------------------------------------------
** 							MIXED TESTS - MANDATORY
** ---------------------------------------------------------------------------*/
//Mix tests




int		mix_test_0_bench(void){return printf(
			"  %u    %%    %p    %x    %s    %i  ",
			mx_u, &mx_i, mx_u, mx_s, mx_i);}
int		mix_test_1_bench(void){return printf(
			"  %x    %c    %X    %s    %u    %p  ",
			mx_u, mx_c, mx_u, mx_s, mx_u, &mx_i);}
int		mix_test_2_bench(void){return printf(
			"  %%    %i    %X    %p    %c    %s  ",
			mx_i, mx_u, &mx_i, mx_c, mx_s);}
int		mix_test_3_bench(void){return printf(
			"  %u    %%    %s    %c    %x    %X  ",
			mx_u, mx_s, mx_c, mx_u, mx_u);}
int		mix_test_4_bench(void){return printf(
			"  %i    %c    %x    %u    %%    %X  ",
			mx_i, mx_c, mx_u, mx_u, mx_u);}
int		mix_test_5_bench(void){return printf(
			"  %c    %X    %i    %%    %s    %p  ",
			mx_c, mx_u, mx_i, mx_s, &mx_i);}
int		mix_test_6_bench(void){return printf(
			"  %p    %x    %i    %c    %s    %u  ",
			&mx_i, mx_u, mx_i, mx_c, mx_s, mx_u);}
int		mix_test_7_bench(void){return printf(
			"  %i    %s    %%    %u    %c    %x  ",
			mx_i, mx_s, mx_u, mx_c, mx_u);}
int		mix_test_8_bench(void){return printf(
			"  %X    %p    %s    %%    %u    %x  ",
			mx_u, &mx_i, mx_s, mx_u, mx_u);}
int		mix_test_9_bench(void){return printf(
			"  %c    %%    %u    %i    %x    %X  ",
			mx_c, mx_u, mx_i, mx_u, mx_u);}
int		mix_test_10_bench(void){return printf(
			"  %i    %p    %X    %u    %s    %x  ",
			mx_i, &mx_i, mx_u, mx_u, mx_s, mx_u);}
int		mix_test_11_bench(void){return printf(
			"  %X    %c    %p    %x    %i    %u  ",
			mx_u, mx_c, &mx_i, mx_u, mx_i, mx_u);}
int		mix_test_12_bench(void){return printf(
			"  %%    %i    %u    %s    %c    %X  ",
			mx_i, mx_u, mx_s, mx_c, mx_u);}
int		mix_test_13_bench(void){return printf(
			"  %u    %c    %x    %s    %X    %i  ",
			mx_u, mx_c, mx_u, mx_s, mx_u, mx_i);}
int		mix_test_14_bench(void){return printf(
			"  %s    %p    %X    %c    %i    %x  ",
			mx_s, &mx_i, mx_u, mx_c, mx_i, mx_u);}
int		mix_test_15_bench(void){return printf(
			"  %u    %c    %X    %x    %p    %s  ",
			mx_u, mx_c, mx_u, mx_u, &mx_i, mx_s);}
int		mix_test_16_bench(void){return printf(
			"  %c    %%    %i    %X    %u    %x  ",
			mx_c, mx_i, mx_u, mx_u, mx_u);}
int		mix_test_17_bench(void){return printf(
			"  %s    %%    %x    %X    %c    %u  ",
			mx_s, mx_u, mx_u, mx_c, mx_u);}
int		mix_test_18_bench(void){return printf(
			"  %x    %s    %X    %%    %p    %i  ",
			mx_u, mx_s, mx_u, &mx_i, mx_i);}
int		mix_test_19_bench(void){return printf(
			"  %%    %p    %i    %c    %x    %X  ",
			&mx_i, mx_i, mx_c, mx_u, mx_u);}
int		mix_test_20_bench(void){return printf(
			"  %c    %s    %%    %u    %p    %x  ",
			mx_c, mx_s, mx_u, &mx_i, mx_u);}
int		mix_test_21_bench(void){return printf(
			"  %c    %i    %u    %s    %p    %x  ",
			mx_c, mx_i, mx_u, mx_s, &mx_i, mx_u);}
int		mix_test_22_bench(void){return printf(
			"  %X    %x    %s    %c    %i    %u  ",
			mx_u, mx_u, mx_s, mx_c, mx_i, mx_u);}
int		mix_test_23_bench(void){return printf(
			"  %x    %c    %X    %p    %s    %p  ",
			mx_u, mx_c, mx_u, &mx_i, mx_s, &mx_i);}
int		mix_test_24_bench(void){return printf(
			"  %X    %%    %i    %s    %p    %x  ",
			mx_u, mx_i, mx_s, &mx_i, mx_u);}
int		mix_test_25_bench(void){return printf(
			"  %i    %p    %x    %c    %X    %p  ",
			mx_i, &mx_i, mx_u, mx_c, mx_u, &mx_i);}
int		mix_test_26_bench(void){return printf(
			"  %X    %c    %i    %u    %x    %p  ",
			mx_u, mx_c, mx_i, mx_u, mx_u, &mx_i);}
int		mix_test_27_bench(void){return printf(
			"  %i    %u    %c    %%    %X    %p  ",
			mx_i, mx_u, mx_c, mx_u, &mx_i);}
int		mix_test_28_bench(void){return printf(
			"  %s    %i    %c    %p    %x    %u  ",
			mx_s, mx_i, mx_c, &mx_i, mx_u, mx_u);}
int		mix_test_29_bench(void){return printf(
			"  %p    %%    %x    %X    %i    %c  ",
			&mx_i, mx_u, mx_u, mx_i, mx_c);}
int		mix_test_30_bench(void){return printf(
			"  %X    %i    %s    %%    %u    %p  ",
			mx_u, mx_i, mx_s, mx_u, &mx_i);}
int		mix_test_31_bench(void){return printf(
			"  %%    %u    %p    %i    %X    %c  ",
			mx_u, &mx_i, mx_i, mx_u, mx_c);}
int		mix_test_32_bench(void){return printf(
			"  %x    %X    %p    %s    %i    %c  ",
			mx_u, mx_u, &mx_i, mx_s, mx_i, mx_c);}
int		mix_test_33_bench(void){return printf(
			"  %c    %%    %s    %X    %x    %p  ",
			mx_c, mx_s, mx_u, mx_u, &mx_i);}
int		mix_test_34_bench(void){return printf(
			"  %x    %X    %p    %s    %i    %u  ",
			mx_u, mx_u, &mx_i, mx_s, mx_i, mx_u);}
int		mix_test_35_bench(void){return printf(
			"  %p    %u    %s    %X    %c    %p  ",
			&mx_i, mx_u, mx_s, mx_u, mx_c, &mx_i);}
int		mix_test_36_bench(void){return printf(
			"  %X    %s    %x    %p    %%    %i  ",
			mx_u, mx_s, mx_u, &mx_i, mx_i);}
int		mix_test_37_bench(void){return printf(
			"  %x    %s    %%    %p    %i    %c  ",
			mx_u, mx_s, &mx_i, mx_i, mx_c);}
int		mix_test_38_bench(void){return printf(
			"  %s    %u    %x    %%    %i    %c  ",
			mx_s, mx_u, mx_u, mx_i, mx_c);}
int		mix_test_39_bench(void){return printf(
			"  %p    %i    %x    %%    %u    %X  ",
			&mx_i, mx_i, mx_u, mx_u, mx_u);}
int		mix_test_40_bench(void){return printf(
			"  %%    %c    %X    %p    %u    %x  ",
			mx_c, mx_u, &mx_i, mx_u, mx_u);}
int		mix_test_41_bench(void){return printf(
			"  %u    %c    %%    %p    %i    %s  ",
			mx_u, mx_c, &mx_i, mx_i, mx_s);}
int		mix_test_42_bench(void){return printf(
			"  %%    %i    %s    %u    %c    %X  ",
			mx_i, mx_s, mx_u, mx_c, mx_u);}
int		mix_test_43_bench(void){return printf(
			"  %%    %i    %u    %s    %X    %p  ",
			mx_i, mx_u, mx_s, mx_u, &mx_i);}
int		mix_test_44_bench(void){return printf(
			"  %s    %c    %X    %%    %i    %p  ",
			mx_s, mx_c, mx_u, mx_i, &mx_i);}
int		mix_test_45_bench(void){return printf(
			"  %x    %X    %u    %i    %%    %s  ",
			mx_u, mx_u, mx_u, mx_i, mx_s);}
int		mix_test_46_bench(void){return printf(
			"  %x    %u    %s    %i    %p    %p  ",
			mx_u, mx_u, mx_s, mx_i, &mx_i, &mx_i);}
int		mix_test_47_bench(void){return printf(
			"  %X    %i    %s    %x    %u    %p  ",
			mx_u, mx_i, mx_s, mx_u, mx_u, &mx_i);}
int		mix_test_48_bench(void){return printf(
			"  %c    %i    %%    %X    %p    %u  ",
			mx_c, mx_i, mx_u, &mx_i, mx_u);}
int		mix_test_49_bench(void){return printf(
			"  %s    %u    %i    %X    %%    %c  ",
			mx_s, mx_u, mx_i, mx_u, mx_c);}
int		mix_test_50_bench(void){return printf(
			"  %%    %p    %X    %i    %s    %x  ",
			&mx_i, mx_u, mx_i, mx_s, mx_u);}
int		mix_test_51_bench(void){return printf(
			"  %i    %x    %p    %c    %u    %X  ",
			mx_i, mx_u, &mx_i, mx_c, mx_u, mx_u);}
int		mix_test_52_bench(void){return printf(
			"  %X    %c    %%    %i    %x    %s  ",
			mx_u, mx_c, mx_i, mx_u, mx_s);}
int		mix_test_53_bench(void){return printf(
			"  %x    %c    %u    %X    %p    %p  ",
			mx_u, mx_c, mx_u, mx_u, &mx_i, &mx_i);}
int		mix_test_54_bench(void){return printf(
			"  %p    %u    %c    %s    %i    %p  ",
			&mx_i, mx_u, mx_c, mx_s, mx_i, &mx_i);}
int		mix_test_55_bench(void){return printf(
			"  %x    %p    %s    %u    %%    %c  ",
			mx_u, &mx_i, mx_s, mx_u, mx_c);}
int		mix_test_56_bench(void){return printf(
			"  %%    %i    %X    %p    %u    %s  ",
			mx_i, mx_u, &mx_i, mx_u, mx_s);}
int		mix_test_57_bench(void){return printf(
			"  %%    %u    %c    %s    %i    %x  ",
			mx_u, mx_c, mx_s, mx_i, mx_u);}
int		mix_test_58_bench(void){return printf(
			"  %c    %i    %u    %x    %s    %p  ",
			mx_c, mx_i, mx_u, mx_u, mx_s, &mx_i);}
int		mix_test_59_bench(void){return printf(
			"  %c    %i    %s    %u    %x    %p  ",
			mx_c, mx_i, mx_s, mx_u, mx_u, &mx_i);}
int		mix_test_60_bench(void){return printf(
			"  %u    %%    %x    %i    %X    %c  ",
			mx_u, mx_u, mx_i, mx_u, mx_c);}
int		mix_test_61_bench(void){return printf(
			"  %x    %s    %u    %i    %c    %X  ",
			mx_u, mx_s, mx_u, mx_i, mx_c, mx_u);}
int		mix_test_62_bench(void){return printf(
			"  %%    %c    %i    %p    %s    %X  ",
			mx_c, mx_i, &mx_i, mx_s, mx_u);}
int		mix_test_63_bench(void){return printf(
			"  %s    %x    %%    %X    %i    %c  ",
			mx_s, mx_u, mx_u, mx_i, mx_c);}
int		mix_test_64_bench(void){return printf(
			"  %x    %X    %u    %c    %%    %i  ",
			mx_u, mx_u, mx_u, mx_c, mx_i);}
int		mix_test_65_bench(void){return printf(
			"  %c    %%    %i    %p    %u    %X  ",
			mx_c, mx_i, &mx_i, mx_u, mx_u);}
int		mix_test_66_bench(void){return printf(
			"  %i    %c    %%    %u    %X    %p  ",
			mx_i, mx_c, mx_u, mx_u, &mx_i);}
int		mix_test_67_bench(void){return printf(
			"  %s    %i    %x    %u    %c    %p  ",
			mx_s, mx_i, mx_u, mx_u, mx_c, &mx_i);}
int		mix_test_68_bench(void){return printf(
			"  %s    %x    %c    %p    %u    %X  ",
			mx_s, mx_u, mx_c, &mx_i, mx_u, mx_u);}
int		mix_test_69_bench(void){return printf(
			"  %%    %s    %p    %i    %X    %c  ",
			mx_s, &mx_i, mx_i, mx_u, mx_c);}
int		mix_test_70_bench(void){return printf(
			"  %x    %X    %i    %%    %s    %u  ",
			mx_u, mx_u, mx_i, mx_s, mx_u);}
int		mix_test_71_bench(void){return printf(
			"  %s    %i    %X    %c    %%    %p  ",
			mx_s, mx_i, mx_u, mx_c, &mx_i);}
int		mix_test_72_bench(void){return printf(
			"  %x    %p    %c    %s    %X    %u  ",
			mx_u, &mx_i, mx_c, mx_s, mx_u, mx_u);}
int		mix_test_73_bench(void){return printf(
			"  %%    %X    %u    %x    %p    %c  ",
			mx_u, mx_u, mx_u, &mx_i, mx_c);}
int		mix_test_74_bench(void){return printf(
			"  %p    %c    %s    %u    %i    %x  ",
			&mx_i, mx_c, mx_s, mx_u, mx_i, mx_u);}
int		mix_test_75_bench(void){return printf(
			"  %i    %c    %%    %p    %u    %x  ",
			mx_i, mx_c, &mx_i, mx_u, mx_u);}
int		mix_test_76_bench(void){return printf(
			"  %X    %%    %u    %c    %p    %s  ",
			mx_u, mx_u, mx_c, &mx_i, mx_s);}
int		mix_test_77_bench(void){return printf(
			"  %X    %i    %c    %u    %p    %s  ",
			mx_u, mx_i, mx_c, mx_u, &mx_i, mx_s);}
int		mix_test_78_bench(void){return printf(
			"  %p    %%    %c    %X    %u    %i  ",
			&mx_i, mx_c, mx_u, mx_u, mx_i);}
int		mix_test_79_bench(void){return printf(
			"  %s    %c    %i    %%    %p    %X  ",
			mx_s, mx_c, mx_i, &mx_i, mx_u);}
int		mix_test_80_bench(void){return printf(
			"  %p    %%    %c    %u    %s    %X  ",
			&mx_i, mx_c, mx_u, mx_s, mx_u);}
int		mix_test_81_bench(void){return printf(
			"  %x    %c    %%    %s    %X    %i  ",
			mx_u, mx_c, mx_s, mx_u, mx_i);}
int		mix_test_82_bench(void){return printf(
			"  %%    %c    %i    %X    %s    %x  ",
			mx_c, mx_i, mx_u, mx_s, mx_u);}
int		mix_test_83_bench(void){return printf(
			"  %i    %X    %%    %c    %u    %s  ",
			mx_i, mx_u, mx_c, mx_u, mx_s);}
int		mix_test_84_bench(void){return printf(
			"  %p    %x    %c    %s    %u    %p  ",
			&mx_i, mx_u, mx_c, mx_s, mx_u, &mx_i);}
int		mix_test_85_bench(void){return printf(
			"  %u    %p    %c    %X    %s    %p  ",
			mx_u, &mx_i, mx_c, mx_u, mx_s, &mx_i);}
int		mix_test_86_bench(void){return printf(
			"  %p    %c    %u    %X    %s    %p  ",
			&mx_i, mx_c, mx_u, mx_u, mx_s, &mx_i);}
int		mix_test_87_bench(void){return printf(
			"  %i    %u    %X    %p    %c    %p  ",
			mx_i, mx_u, mx_u, &mx_i, mx_c, &mx_i);}
int		mix_test_88_bench(void){return printf(
			"  %i    %c    %p    %%    %X    %u  ",
			mx_i, mx_c, &mx_i, mx_u, mx_u);}
int		mix_test_89_bench(void){return printf(
			"  %s    %c    %i    %x    %p    %u  ",
			mx_s, mx_c, mx_i, mx_u, &mx_i, mx_u);}
int		mix_test_90_bench(void){return printf(
			"  %u    %s    %x    %p    %i    %c  ",
			mx_u, mx_s, mx_u, &mx_i, mx_i, mx_c);}
int		mix_test_91_bench(void){return printf(
			"  %u    %p    %X    %c    %%    %x  ",
			mx_u, &mx_i, mx_u, mx_c, mx_u);}
int		mix_test_92_bench(void){return printf(
			"  %c    %p    %X    %x    %%    %s  ",
			mx_c, &mx_i, mx_u, mx_u, mx_s);}
int		mix_test_93_bench(void){return printf(
			"  %x    %c    %s    %p    %u    %i  ",
			mx_u, mx_c, mx_s, &mx_i, mx_u, mx_i);}
int		mix_test_94_bench(void){return printf(
			"  %X    %p    %c    %%    %u    %i  ",
			mx_u, &mx_i, mx_c, mx_u, mx_i);}
int		mix_test_95_bench(void){return printf(
			"  %%    %i    %x    %p    %c    %s  ",
			mx_i, mx_u, &mx_i, mx_c, mx_s);}
int		mix_test_96_bench(void){return printf(
			"  %X    %p    %c    %s    %i    %u  ",
			mx_u, &mx_i, mx_c, mx_s, mx_i, mx_u);}
int		mix_test_97_bench(void){return printf(
			"  %u    %i    %p    %x    %s    %X  ",
			mx_u, mx_i, &mx_i, mx_u, mx_s, mx_u);}
int		mix_test_98_bench(void){return printf(
			"  %i    %s    %%    %p    %X    %c  ",
			mx_i, mx_s, &mx_i, mx_u, mx_c);}
int		mix_test_99_bench(void){return printf(
			"  %X    %p    %c    %u    %x    %i  ",
			mx_u, &mx_i, mx_c, mx_u, mx_u, mx_i);}

//This block was filtered by cclaude's work on the new curriculum--old tests were simply discarded
int		mix_successive_0_bench(void){return ( printf("%c", mx_c) + printf("%u", mx_u));}
int		mix_successive_4_bench(void){return ( printf("%x", mx_u) + printf("%i", mx_i));}
int		mix_successive_6_bench(void){return ( printf("%s", mx_s) + printf("%c", mx_c));}
int		mix_successive_10_bench(void){return ( printf("%u", mx_u) + printf("%s", mx_s));}
int		mix_successive_16_bench(void){return ( printf("%s", mx_s) + printf("%x", mx_u));}
int		mix_successive_20_bench(void){return ( printf("%p", &mx_i) + printf("%s", mx_s));}
int		mix_successive_21_bench(void){return ( printf("%X", mx_u) + printf("%x", mx_u));}
int		mix_successive_28_bench(void){return ( printf("%i", mx_i) + printf("%u", mx_u));}
int		mix_successive_30_bench(void){return ( printf("%s", mx_s) + printf("%u", mx_u));}
int		mix_successive_31_bench(void){return ( printf("%X", mx_u) + printf("%c", mx_c));}
int		mix_successive_32_bench(void){return ( printf("%x", mx_u) + printf("%u", mx_u));}
int		mix_successive_39_bench(void){return ( printf("%i", mx_i) + printf("%c", mx_c));}
int		mix_successive_40_bench(void){return ( printf("%c", mx_c) + printf("%x", mx_u));}
int		mix_successive_42_bench(void){return ( printf("%x", mx_u) + printf("%s", mx_s));}
int		mix_successive_43_bench(void){return ( printf("%u", mx_u) + printf("%x", mx_u));}
int		mix_successive_45_bench(void){return ( printf("%s", mx_s) + printf("%c", mx_c));}
int		mix_successive_46_bench(void){return ( printf("%i", mx_i) + printf("%s", mx_s));}
int		mix_successive_61_bench(void){return ( printf("%p", &mx_i) + printf("%c", mx_c));}
int		mix_successive_64_bench(void){return ( printf("%s", mx_s) + printf("%c", mx_c));}


/* -----------------------------------------------------------------------------
** 						'+' FLAG (ALLSIGN) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Signed integers with allsign ('+')
int bonus_as_d_pos_bench(void){return printf("%+d", 5);}
int bonus_as_d_neg_bench(void){return printf("%+d", -7);}
int bonus_as_d_intmax_bench(void){return printf("%+d", 2147483647);}
int bonus_as_d_prec_pos_bench(void){return printf("%+.7d", 234);}
int bonus_as_d_prec_neg_bench(void){return printf("%+.7d", -446);}
int bonus_as_d_prec_pos_nofit_bench(void){return printf("%+.3d", 3723);}
int bonus_as_d_width_pos_bench(void){return printf("%+5d", 35);}
int bonus_as_d_width_zero_bench(void){return printf("%+7d", 0);}
int bonus_as_d_width_intmax_bench(void){return printf("%+24d", 2147483647);}
int bonus_as_d_zp_fits_bench(void){return printf("%+05d", 432);}
int bonus_as_d_zp_zero_bench(void){return printf("%+04d", 0);}
//Signed integers with field width and precision with allsign
int bonus_as_d_prec0val0_bench(void){return printf("%+.0d", 0);}
int bonus_as_d_prec0val0_impl_bench(void){return printf("%+.d", 0);}
int bonus_as_d_prec_width_fit_fit_pos_bench(void){return printf("%+8.5d", 34);}
int bonus_as_d_prec_width_fit_fit_neg_bench(void){return printf("%+10.5d", -216);}
int bonus_as_d_prec_width_fit_fit_zero_bench(void){return printf("%+8.5d", 0);}
int bonus_as_d_prec_width_nofit_fit_pos_bench(void){return printf("%+8.3d", 8375);}
int bonus_as_d_prec_width_nofit_fit_neg_bench(void){return printf("%+8.3d", -8473);}
int bonus_as_d_prec_width_fit_nofit_pos_bench(void){return printf("%+3.7d", 3267);}
int bonus_as_d_prec_width_fit_nofit_neg_bench(void){return printf("%+3.7d", -2375);}
int bonus_as_d_prec_width_nofit_nofit_pos_bench(void){return printf("%+3.3d", 6983);}
int bonus_as_d_prec_width_nofit_nofit_neg_bench(void){return printf("%+3.3d", -8462);}
//Signed integers with field width and precision, left-justified with allsign
int bonus_as_d_prec_width_fit_fit_pos_ljas_bench(void){return printf("%+-8.5d", 34);}
int bonus_as_d_prec_width_fit_fit_neg_ljas_bench(void){return printf("%+-10.5d", -216);}
int bonus_as_d_prec_width_fit_fit_zero_ljas_bench(void){return printf("%+-8.5d", 0);}
int bonus_as_d_prec_width_nofit_fit_pos_ljas_bench(void){return printf("%+-8.3d", 8375);}
int bonus_as_d_prec_width_nofit_fit_neg_ljas_bench(void){return printf("%+-8.3d", -8473);}
int bonus_as_d_prec_width_fit_nofit_pos_ljas_bench(void){return printf("%+-3.7d", 3267);}
int bonus_as_d_prec_width_fit_nofit_neg_ljas_bench(void){return printf("%+-3.7d", -2375);}
int bonus_as_d_prec_width_nofit_nofit_pos_ljas_bench(void){return printf("%+-3.3d", 6983);}
int bonus_as_d_prec_width_nofit_nofit_neg_ljas_bench(void){return printf("%+-3.3d", -8462);}
//Signed integers with field width and precision with allsign with zeropadding
int bonus_as_d_prec_width_ff_pos_zp_bench(void){return printf("%0+8.5d", 34);}
int bonus_as_d_prec_width_ff_neg_zp_bench(void){return printf("%0+10.5d", -216);}
int bonus_as_d_prec_width_ff_zero_zp_bench(void){return printf("%0+8.5d", 0);}
int bonus_as_d_prec_width_nf_pos_zp_bench(void){return printf("%0+8.3d", 8375);}
int bonus_as_d_prec_width_nf_neg_zp_bench(void){return printf("%0+8.3d", -8473);}
int bonus_as_d_prec_width_fn_pos_zp_bench(void){return printf("%0+3.7d", 3267);}
int bonus_as_d_prec_width_fn_neg_zp_bench(void){return printf("%0+3.7d", -2375);}
int bonus_as_d_prec_width_nn_pos_zp_bench(void){return printf("%0+3.3d", 6983);}
int bonus_as_d_prec_width_nn_neg_zp_bench(void){return printf("%0+3.3d", -8462);}
//Signed integers with field width and precision, left-justified with allsign with zeropadding
int bonus_as_d_prec_width_ff_pos_ljaszp_ignoreflag_bench(void){return printf("%0+-8.5d", 34);}
int bonus_as_d_prec_width_ff_neg_ljaszp_ignoreflag_bench(void){return printf("%0+-10.5d", -216);}
int bonus_as_d_prec_width_ff_zero_ljaszp_ignoreflag_bench(void){return printf("%0+-8.5d", 0);}
int bonus_as_d_prec_width_nf_pos_ljaszp_ignoreflag_bench(void){return printf("%0+-8.3d", 8375);}
int bonus_as_d_prec_width_nf_neg_ljaszp_ignoreflag_bench(void){return printf("%0+-8.3d", -8473);}
int bonus_as_d_prec_width_fn_pos_ljaszp_ignoreflag_bench(void){return printf("%0+-3.7d", 3267);}
int bonus_as_d_prec_width_fn_neg_ljaszp_ignoreflag_bench(void){return printf("%0+-3.7d", -2375);}
int bonus_as_d_prec_width_nn_pos_ljaszp_ignoreflag_bench(void){return printf("%0+-3.3d", 6983);}
int bonus_as_d_prec_width_nn_neg_ljaszp_ignoreflag_bench(void){return printf("%0+-3.3d", -8462);}

//Signed integers  allsign ('+')
int bonus_as_i_pos_bench(void){return printf("%+i", 5);}
int bonus_as_i_neg_bench(void){return printf("%+i", -7);}
int bonus_as_i_intmax_bench(void){return printf("%+i", 2147483647);}
int bonus_as_i_zp_fits_bench(void){return printf("%+05i", 432);}
int bonus_as_i_zp_zero_bench(void){return printf("%+04i", 0);}
//signed integers  field width and allsign
int bonus_as_i_width_pos_bench(void){return printf("%+5i", 35);}
int bonus_as_i_width_zero_bench(void){return printf("%+7i", 0);}
int bonus_as_i_width_intmax_bench(void){return printf("%+24i", 2147483647);}
//signed integers with precision
int bonus_as_i_prec_pos_bench(void){return printf("%+.7i", 234);}
int bonus_as_i_prec_neg_bench(void){return printf("%+.7i", -446);}
int bonus_as_i_prec_pos_nofit_bench(void){return printf("%+.3i", 3723);}
int bonus_as_i_prec0val0_bench(void){return printf("%+.0i", 0);}
int bonus_as_i_prec0val0_impl_bench(void){return printf("%+.i", 0);}
int bonus_as_i_prec0val0_was_bench(void){return printf("%+5.0i", 0);}
int bonus_as_i_prec0val0_was_impl_bench(void){return printf("%+5.i", 0);}
int bonus_as_i_prec0val0_waslj_bench(void){return printf("%+-5.0i", 0);}
int bonus_as_i_prec0val0_waslj_impl_bench(void){return printf("%+-5.i", 0);}
//Signed integers with field width and precision with allsign
int bonus_as_i_prec_width_fit_fit_pos_bench(void){return printf("%+8.5i", 34);}
int bonus_as_i_prec_width_fit_fit_neg_bench(void){return printf("%+10.5i", -216);}
int bonus_as_i_prec_width_fit_fit_zero_bench(void){return printf("%+8.5i", 0);}
int bonus_as_i_prec_width_nofit_fit_pos_bench(void){return printf("%+8.3i", 8375);}
int bonus_as_i_prec_width_nofit_fit_neg_bench(void){return printf("%+8.3i", -8473);}
int bonus_as_i_prec_width_fit_nofit_pos_bench(void){return printf("%+3.7i", 3267);}
int bonus_as_i_prec_width_fit_nofit_neg_bench(void){return printf("%+3.7i", -2375);}
int bonus_as_i_prec_width_nofit_nofit_pos_bench(void){return printf("%+3.3i", 6983);}
int bonus_as_i_prec_width_nofit_nofit_neg_bench(void){return printf("%+3.3i", -8462);}
//Signed integers with field width and precision with allsign with zeropadding
int bonus_as_i_prec_width_ff_pos_zp_bench(void){return printf("%0+8.5i", 34);}
int bonus_as_i_prec_width_ff_neg_zp_bench(void){return printf("%0+10.5i", -216);}
int bonus_as_i_prec_width_ff_zero_zp_bench(void){return printf("%0+8.5i", 0);}
int bonus_as_i_prec_width_nf_pos_zp_bench(void){return printf("%0+8.3i", 8375);}
int bonus_as_i_prec_width_nf_neg_zp_bench(void){return printf("%0+8.3i", -8473);}
int bonus_as_i_prec_width_fn_pos_zp_bench(void){return printf("%0+3.7i", 3267);}
int bonus_as_i_prec_width_fn_neg_zp_bench(void){return printf("%0+3.7i", -2375);}
int bonus_as_i_prec_width_nn_pos_zp_bench(void){return printf("%0+3.3i", 6983);}
int bonus_as_i_prec_width_nn_neg_zp_bench(void){return printf("%0+3.3i", -8462);}
//Signed integers with field width and precision, left-justified with allsign
int bonus_as_i_prec_width_fit_fit_pos_ljas_bench(void){return printf("%+-8.5i", 34);}
int bonus_as_i_prec_width_fit_fit_neg_ljas_bench(void){return printf("%+-10.5i", -216);}
int bonus_as_i_prec_width_fit_fit_zero_ljas_bench(void){return printf("%+-8.5i", 0);}
int bonus_as_i_prec_width_nofit_fit_pos_ljas_bench(void){return printf("%+-8.3i", 8375);}
int bonus_as_i_prec_width_nofit_fit_neg_ljas_bench(void){return printf("%+-8.3i", -8473);}
int bonus_as_i_prec_width_fit_nofit_pos_ljas_bench(void){return printf("%+-3.7i", 3267);}
int bonus_as_i_prec_width_fit_nofit_neg_ljas_bench(void){return printf("%+-3.7i", -2375);}
int bonus_as_i_prec_width_nofit_nofit_pos_ljas_bench(void){return printf("%+-3.3i", 6983);}
int bonus_as_i_prec_width_nofit_nofit_neg_ljas_bench(void){return printf("%+-3.3i", -8462);}
//Signed integers with field width and precision, left-justified with allsign with zeropadding
int bonus_as_i_prec_width_ff_pos_ljaszp_ignoreflag_bench(void){return printf("%0+-8.5i", 34);}
int bonus_as_i_prec_width_ff_neg_ljaszp_ignoreflag_bench(void){return printf("%0+-10.5i", -216);}
int bonus_as_i_prec_width_ff_zero_ljaszp_ignoreflag_bench(void){return printf("%0+-8.5i", 0);}
int bonus_as_i_prec_width_nf_pos_ljaszp_ignoreflag_bench(void){return printf("%0+-8.3i", 8375);}
int bonus_as_i_prec_width_nf_neg_ljaszp_ignoreflag_bench(void){return printf("%0+-8.3i", -8473);}
int bonus_as_i_prec_width_fn_pos_ljaszp_ignoreflag_bench(void){return printf("%0+-3.7i", 3267);}
int bonus_as_i_prec_width_fn_neg_ljaszp_ignoreflag_bench(void){return printf("%0+-3.7i", -2375);}
int bonus_as_i_prec_width_nn_pos_ljaszp_ignoreflag_bench(void){return printf("%0+-3.3i", 6983);}
int bonus_as_i_prec_width_nn_neg_ljaszp_ignoreflag_bench(void){return printf("%0+-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_as_dupflag_d_bench(void){return printf("%++d", 42);}
int nocrash_notrequired_bonus_as_dupflag_d_ljasljw_bench(void){return printf("%-+-5d", 42);}
int nocrash_notrequired_bonus_as_c_1_bench(void){return printf("%+c", 'a');}
int nocrash_notrequired_bonus_as_c_2_bench(void){return printf("%+c", -42);}
int nocrash_notrequired_bonus_as_s_1_bench(void){return printf("%+s", "hello");}
int nocrash_notrequired_bonus_as_p_1_bench(void){return printf("%+p", &ncm_p);}
int nocrash_notrequired_bonus_as_p_2_bench(void){return printf("%+p", &ncm_p);}
int nocrash_notrequired_bonus_as_u_bench(void){return printf("%+u", 42);}
int nocrash_notrequired_bonus_as_x_bench(void){return printf("%+x", 42);}
int nocrash_notrequired_bonus_as_X_bench(void){return printf("%+X", 42);}


/* -----------------------------------------------------------------------------
** 						' ' FLAG (SPACE) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Signed integers - space - no modifers
int bonus_sp_d_basic_i_pos_bench(void){return printf("this % d number", 17);}
int bonus_sp_d_basic_i_neg_bench(void){return printf("this % d number", -267);}
int bonus_sp_d_basic_i_zero_bench(void){return printf("this % d number", 0);}
int bonus_sp_d_basic_i_onlypos_bench(void){return printf("% d", 3);}
int bonus_sp_d_basic_i_onlyneg_bench(void){return printf("% d", -1);}
int bonus_sp_d_basic_i_onlyzero_bench(void){return printf("% d", 0);}
int bonus_sp_d_basic_i_pos_d_bench(void){return printf("this % d number", 17);}
int bonus_sp_d_basic_i_neg_d_bench(void){return printf("this % d number", -267);}
int bonus_sp_d_basic_i_zero_d_bench(void){return printf("this % d number", 0);}
int bonus_sp_d_intmax_bench(void){return printf("% d", 2147483647);}
int bonus_sp_d_intmin_bench(void){return printf("% d", (int)(-2147483678));}
//Signed integers - space with field width
int bonus_sp_d_width_pos_fits_bench(void){return printf("% 7d", 33);}
int bonus_sp_d_width_neg_fits_bench(void){return printf("% 7d", -14);}
int bonus_sp_d_width_zero_fits_bench(void){return printf("% 3d", 0);}
int bonus_sp_d_width_pos_exactfit_bench(void){return printf("% 5d", 52625);}
int bonus_sp_d_width_neg_exactfit_bench(void){return printf("% 5d", -2562);}
int bonus_sp_d_width_pos_nofit_bench(void){return printf("% 4d", 94827);}
int bonus_sp_d_width_neg_nofit_bench(void){return printf("% 4d", -2464);}
int bonus_sp_d_width_pos_fits_lj_bench(void){return printf("% -7d", 33);}
int bonus_sp_d_width_neg_fits_lj_bench(void){return printf("% -7d", -14);}
int bonus_sp_d_width_zero_fits_lj_bench(void){return printf("% -3d", 0);}
int bonus_sp_d_width_pos_exactfit_lj_bench(void){return printf("% -5d", 52625);}
int bonus_sp_d_width_neg_exactfit_lj_bench(void){return printf("% -5d", -2562);}
int bonus_sp_d_width_pos_nofit_lj_bench(void){return printf("% -4d", 94827);}
int bonus_sp_d_width_neg_nofit_lj_bench(void){return printf("% -4d", -2464);}
//signed integers with precision
int bonus_sp_d_prec_fits_pos_bench(void){return printf("% .5d", 2);}
int bonus_sp_d_prec_fits_neg_bench(void){return printf("% .6d", -3);}
int bonus_sp_d_prec_fits_zero_bench(void){return printf("% .3d", 0);}
int bonus_sp_d_prec_exactfit_pos_bench(void){return printf("% .4d", 5263);}
int bonus_sp_d_prec_exactfit_neg_bench(void){return printf("% .4d", -2372);}
int bonus_sp_d_prec_nofit_pos_bench(void){return printf("% .3d", 13862);}
int bonus_sp_d_prec_nofit_neg_bench(void){return printf("% .3d",-23646);}
//Signed integers - space with zero field width padding
int bonus_sp_d_zpsp_pos_fits_bench(void){return printf("% 05d", 43);}
int bonus_sp_d_zpsp_neg_fits_bench(void){return printf("% 07d", -54);}
int bonus_sp_d_zpsp_zero_fits_bench(void){return printf("% 03d", 0);}
int bonus_sp_d_zpsp_pos_exactfit_bench(void){return printf("% 03d", 634);}
int bonus_sp_d_zpsp_neg_exactfit_bench(void){return printf("% 04d", -532);}
int bonus_sp_d_zpsp_neg_minus1fit_bench(void){return printf("% 04d", -4825);}
//Signed integers - space with field width and precision
int bonus_sp_d_prec_width_fit_fit_pos_bench(void){return printf("% 8.5d", 34);}
int bonus_sp_d_prec_width_fit_fit_neg_bench(void){return printf("% 10.5d", -216);}
int bonus_sp_d_prec_width_fit_fit_zero_bench(void){return printf("% 8.5d", 0);}
int bonus_sp_d_prec_width_nofit_fit_pos_bench(void){return printf("% 8.3d", 8375);}
int bonus_sp_d_prec_width_nofit_fit_neg_bench(void){return printf("% 8.3d", -8473);}
int bonus_sp_d_prec_width_fit_nofit_pos_bench(void){return printf("% 3.7d", 3267);}
int bonus_sp_d_prec_width_fit_nofit_neg_bench(void){return printf("% 3.7d", -2375);}
int bonus_sp_d_prec_width_nofit_nofit_pos_bench(void){return printf("% 3.3d", 6983);}
int bonus_sp_d_prec_width_nofit_nofit_neg_bench(void){return printf("% 3.3d", -8462);}
//Signed integers - space with field width and precision, left-justified
int bonus_sp_d_prec_width_fit_fit_pos_lj_bench(void){return printf("% -8.5d", 34);}
int bonus_sp_d_prec_width_fit_fit_neg_lj_bench(void){return printf("% -10.5d", -216);}
int bonus_sp_d_prec_width_fit_fit_zero_lj_bench(void){return printf("% -8.5d", 0);}
int bonus_sp_d_prec_width_nofit_fit_pos_lj_bench(void){return printf("% -8.3d", 8375);}
int bonus_sp_d_prec_width_nofit_fit_neg_lj_bench(void){return printf("% -8.3d", -8473);}
int bonus_sp_d_prec_width_fit_nofit_pos_lj_bench(void){return printf("% -3.7d", 3267);}
int bonus_sp_d_prec_width_fit_nofit_neg_lj_bench(void){return printf("% -3.7d", -2375);}
int bonus_sp_d_prec_width_nofit_nofit_pos_lj_bench(void){return printf("% -3.3d", 6983);}
int bonus_sp_d_prec_width_nofit_nofit_neg_lj_bench(void){return printf("% -3.3d", -8462);}
//Signed integers - space with field width and precision with zeropadding
int bonus_sp_d_prec_width_ff_pos_zp_bench(void){return printf("% 08.5d", 34);}
int bonus_sp_d_prec_width_ff_neg_zp_bench(void){return printf("% 010.5d", -216);}
int bonus_sp_d_prec_width_ff_zero_zp_bench(void){return printf("% 08.5d", 0);}
int bonus_sp_d_prec_width_nf_pos_zp_bench(void){return printf("% 08.3d", 8375);}
int bonus_sp_d_prec_width_nf_neg_zp_bench(void){return printf("% 08.3d", -8473);}
int bonus_sp_d_prec_width_fn_pos_zp_bench(void){return printf("% 03.7d", 3267);}
int bonus_sp_d_prec_width_fn_neg_zp_bench(void){return printf("% 03.7d", -2375);}
int bonus_sp_d_prec_width_nn_pos_zp_bench(void){return printf("% 03.3d", 6983);}
int bonus_sp_d_prec_width_nn_neg_zp_bench(void){return printf("% 03.3d", -8462);}
//Signed integers - space with field width and precision, left-justified with zeropadding
int bonus_sp_d_prec_width_ff_pos_ljzpsp_ignoreflag_bench(void){return printf("% 0-8.5d", 34);}
int bonus_sp_d_prec_width_ff_neg_ljzpsp_ignoreflag_bench(void){return printf("% 0-10.5d", -216);}
int bonus_sp_d_prec_width_ff_zero_ljzpsp_ignoreflag_bench(void){return printf("% 0-8.5d", 0);}
int bonus_sp_d_prec_width_nf_pos_ljzpsp_ignoreflag_bench(void){return printf("% 0-8.3d", 8375);}
int bonus_sp_d_prec_width_nf_neg_ljzpsp_ignoreflag_bench(void){return printf("% 0-8.3d", -8473);}
int bonus_sp_d_prec_width_fn_pos_ljzpsp_ignoreflag_bench(void){return printf("% 0-3.7d", 3267);}
int bonus_sp_d_prec_width_fn_neg_ljzpsp_ignoreflag_bench(void){return printf("% 0-3.7d", -2375);}
int bonus_sp_d_prec_width_nn_pos_ljzpsp_ignoreflag_bench(void){return printf("% 0-3.3d", 6983);}
int bonus_sp_d_prec_width_nn_neg_ljzpsp_ignoreflag_bench(void){return printf("% 0-3.3d", -8462);}

//Signed integers - space - no modifers
int bonus_sp_i_basic_i_pos_bench(void){return printf("this % i number", 17);}
int bonus_sp_i_basic_i_neg_bench(void){return printf("this % i number", -267);}
int bonus_sp_i_basic_i_zero_bench(void){return printf("this % i number", 0);}
int bonus_sp_i_basic_i_onlypos_bench(void){return printf("% i", 3);}
int bonus_sp_i_basic_i_onlyneg_bench(void){return printf("% i", -1);}
int bonus_sp_i_basic_i_onlyzero_bench(void){return printf("% i", 0);}
int bonus_sp_i_basic_i_pos_d_bench(void){return printf("this % d number", 17);}
int bonus_sp_i_basic_i_neg_d_bench(void){return printf("this % d number", -267);}
int bonus_sp_i_basic_i_zero_d_bench(void){return printf("this % d number", 0);}
int bonus_sp_i_intmax_bench(void){return printf("% i", 2147483647);}
int bonus_sp_i_intmin_bench(void){return printf("% i", (int)(-2147483678));}
//Signed integers - space with field width
int bonus_sp_i_width_pos_fits_bench(void){return printf("% 7i", 33);}
int bonus_sp_i_width_neg_fits_bench(void){return printf("% 7i", -14);}
int bonus_sp_i_width_zero_fits_bench(void){return printf("% 3i", 0);}
int bonus_sp_i_width_pos_exactfit_bench(void){return printf("% 5i", 52625);}
int bonus_sp_i_width_neg_exactfit_bench(void){return printf("% 5i", -2562);}
int bonus_sp_i_width_pos_nofit_bench(void){return printf("% 4i", 94827);}
int bonus_sp_i_width_neg_nofit_bench(void){return printf("% 4i", -2464);}
int bonus_sp_i_width_pos_fits_lj_bench(void){return printf("% -7i", 33);}
int bonus_sp_i_width_neg_fits_lj_bench(void){return printf("% -7i", -14);}
int bonus_sp_i_width_zero_fits_lj_bench(void){return printf("% -3i", 0);}
int bonus_sp_i_width_pos_exactfit_lj_bench(void){return printf("% -5i", 52625);}
int bonus_sp_i_width_neg_exactfit_lj_bench(void){return printf("% -5i", -2562);}
int bonus_sp_i_width_pos_nofit_lj_bench(void){return printf("% -4i", 94827);}
int bonus_sp_i_width_neg_nofit_lj_bench(void){return printf("% -4i", -2464);}
//signed integers with precision
int bonus_sp_i_prec_fits_pos_bench(void){return printf("% .5i", 2);}
int bonus_sp_i_prec_fits_neg_bench(void){return printf("% .6i", -3);}
int bonus_sp_i_prec_fits_zero_bench(void){return printf("% .3i", 0);}
int bonus_sp_i_prec_exactfit_pos_bench(void){return printf("% .4i", 5263);}
int bonus_sp_i_prec_exactfit_neg_bench(void){return printf("% .4i", -2372);}
int bonus_sp_i_prec_nofit_pos_bench(void){return printf("% .3i", 13862);}
int bonus_sp_i_prec_nofit_neg_bench(void){return printf("% .3i",-23646);}
//Signed integers - space with zero field width padding
int bonus_sp_i_zpsp_pos_fits_bench(void){return printf("% 05i", 43);}
int bonus_sp_i_zpsp_neg_fits_bench(void){return printf("% 07i", -54);}
int bonus_sp_i_zpsp_zero_fits_bench(void){return printf("% 03i", 0);}
int bonus_sp_i_zpsp_pos_exactfit_bench(void){return printf("% 03i", 634);}
int bonus_sp_i_zpsp_neg_exactfit_bench(void){return printf("% 04i", -532);}
int bonus_sp_i_zpsp_neg_minus1fit_bench(void){return printf("% 04i", -4825);}
//Signed integers - space with field width and precision
int bonus_sp_i_prec_width_fit_fit_pos_bench(void){return printf("% 8.5i", 34);}
int bonus_sp_i_prec_width_fit_fit_neg_bench(void){return printf("% 10.5i", -216);}
int bonus_sp_i_prec_width_fit_fit_zero_bench(void){return printf("% 8.5i", 0);}
int bonus_sp_i_prec_width_nofit_fit_pos_bench(void){return printf("% 8.3i", 8375);}
int bonus_sp_i_prec_width_nofit_fit_neg_bench(void){return printf("% 8.3i", -8473);}
int bonus_sp_i_prec_width_fit_nofit_pos_bench(void){return printf("% 3.7i", 3267);}
int bonus_sp_i_prec_width_fit_nofit_neg_bench(void){return printf("% 3.7i", -2375);}
int bonus_sp_i_prec_width_nofit_nofit_pos_bench(void){return printf("% 3.3i", 6983);}
int bonus_sp_i_prec_width_nofit_nofit_neg_bench(void){return printf("% 3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified
int bonus_sp_i_prec_width_fit_fit_pos_lj_bench(void){return printf("% -8.5i", 34);}
int bonus_sp_i_prec_width_fit_fit_neg_lj_bench(void){return printf("% -10.5i", -216);}
int bonus_sp_i_prec_width_fit_fit_zero_lj_bench(void){return printf("% -8.5i", 0);}
int bonus_sp_i_prec_width_nofit_fit_pos_lj_bench(void){return printf("% -8.3i", 8375);}
int bonus_sp_i_prec_width_nofit_fit_neg_lj_bench(void){return printf("% -8.3i", -8473);}
int bonus_sp_i_prec_width_fit_nofit_pos_lj_bench(void){return printf("% -3.7i", 3267);}
int bonus_sp_i_prec_width_fit_nofit_neg_lj_bench(void){return printf("% -3.7i", -2375);}
int bonus_sp_i_prec_width_nofit_nofit_pos_lj_bench(void){return printf("% -3.3i", 6983);}
int bonus_sp_i_prec_width_nofit_nofit_neg_lj_bench(void){return printf("% -3.3i", -8462);}
//Signed integers - space with field width and precision with zeropadding
int bonus_sp_i_prec_width_ff_pos_zp_bench(void){return printf("% 08.5i", 34);}
int bonus_sp_i_prec_width_ff_neg_zp_bench(void){return printf("% 010.5i", -216);}
int bonus_sp_i_prec_width_ff_zero_zp_bench(void){return printf("% 08.5i", 0);}
int bonus_sp_i_prec_width_nf_pos_zp_bench(void){return printf("% 08.3i", 8375);}
int bonus_sp_i_prec_width_nf_neg_zp_bench(void){return printf("% 08.3i", -8473);}
int bonus_sp_i_prec_width_fn_pos_zp_bench(void){return printf("% 03.7i", 3267);}
int bonus_sp_i_prec_width_fn_neg_zp_bench(void){return printf("% 03.7i", -2375);}
int bonus_sp_i_prec_width_nn_pos_zp_bench(void){return printf("% 03.3i", 6983);}
int bonus_sp_i_prec_width_nn_neg_zp_bench(void){return printf("% 03.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with zeropadding
int bonus_sp_i_prec_width_ff_pos_ljzpsp_ignoreflag_bench(void){return printf("% 0-8.5i", 34);}
int bonus_sp_i_prec_width_ff_neg_ljzpsp_ignoreflag_bench(void){return printf("% 0-10.5i", -216);}
int bonus_sp_i_prec_width_ff_zero_ljzpsp_ignoreflag_bench(void){return printf("% 0-8.5i", 0);}
int bonus_sp_i_prec_width_nf_pos_ljzpsp_ignoreflag_bench(void){return printf("% 0-8.3i", 8375);}
int bonus_sp_i_prec_width_nf_neg_ljzpsp_ignoreflag_bench(void){return printf("% 0-8.3i", -8473);}
int bonus_sp_i_prec_width_fn_pos_ljzpsp_ignoreflag_bench(void){return printf("% 0-3.7i", 3267);}
int bonus_sp_i_prec_width_fn_neg_ljzpsp_ignoreflag_bench(void){return printf("% 0-3.7i", -2375);}
int bonus_sp_i_prec_width_nn_pos_ljzpsp_ignoreflag_bench(void){return printf("% 0-3.3i", 6983);}
int bonus_sp_i_prec_width_nn_neg_ljzpsp_ignoreflag_bench(void){return printf("% 0-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_sp_dupflag_d_bench(void){return printf("%  d", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_bonus_sp_c_1_bench(void){return printf("% c", 'a');}
int nocrash_notrequired_bonus_sp_c_2_bench(void){return printf("% c", -42);}
int nocrash_notrequired_bonus_sp_s_1_bench(void){return printf("% s", "hello");}
int nocrash_notrequired_bonus_sp_p_1_bench(void){return printf("% p", &ncm_p);}
int nocrash_notrequired_bonus_sp_p_2_bench(void){return printf("% p", &ncm_p);}
int nocrash_notrequired_bonus_sp_u_bench(void){return printf("% u", 42);}
int nocrash_notrequired_bonus_sp_x_bench(void){return printf("% x", 42);}
int nocrash_notrequired_bonus_sp_X_bench(void){return printf("% X", 42);}


/* -----------------------------------------------------------------------------
** 						'#' FLAG (ALTFORM) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Hexadecimal lower (altform) - no modifers
int bonus_af_x_basic_pos_bench(void){return printf("this %#x number", 17);}
int bonus_af_x_basic_zero_bench(void){return printf("this %#x number", 0);}
int bonus_af_x_basic_onlypos_bench(void){return printf("%#x", 3);}
int bonus_af_x_hexlmax_bench(void){return printf("%#x", 4294967295u);}
//Hexadecimal lower (altform) with field width
int bonus_af_x_width_pos_fits_bench(void){return printf("%#7x", 33);}
int bonus_af_x_width_zero_fits_bench(void){return printf("%#3x", 0);}
int bonus_af_x_width_pos_exactfit_bench(void){return printf("%#5x", 52625);}
int bonus_af_x_width_pos_nofit_bench(void){return printf("%#2x", 94827);}
int bonus_af_x_width_pos_fits_lj_bench(void){return printf("%#-7x", 33);}
int bonus_af_x_width_zero_fits_lj_bench(void){return printf("%#-3x", 0);}
int bonus_af_x_width_pos_exactfit_lj_bench(void){return printf("%#-5x", 52625);}
int bonus_af_x_width_pos_nofit_lj_bench(void){return printf("%#-4x", 9648627);}
//Hexadecimal lower (altform) with precision
int bonus_af_x_prec_fits_pos_bench(void){return printf("%#.5x", 21);}
int bonus_af_x_prec_fits_zero_bench(void){return printf("%#.3x", 0);}
int bonus_af_x_prec_exactfit_pos_bench(void){return printf("%#.4x", 5263);}
int bonus_af_x_prec_nofit_pos_bench(void){return printf("%#.3x", 938862);}
int bonus_af_x_prec0val0_bench(void){return printf("%#.0x", 0);}
int bonus_af_x_prec0val0_impl_bench(void){return printf("%#.x", 0);}
int bonus_af_x_prec0val0_waf_bench(void){return printf("%#5.0x", 0);}
int bonus_af_x_prec0val0_waf_impl_bench(void){return printf("%#5.x", 0);}
int bonus_af_x_prec0val0_waflj_bench(void){return printf("%#-5.0x", 0);}
int bonus_af_x_prec0val0_waflj_impl_bench(void){return printf("%#-5.x", 0);}
//Hexadecimal lower (altform) with zero field width padding
int bonus_af_x_zp_pos_fits_bench(void){return printf("%#05x", 43);}
int bonus_af_x_zp_zero_fits_bench(void){return printf("%#03x", 0);}
int bonus_af_x_zp_pos_exactfit_bench(void){return printf("%#03x", 698334);}
//Hexadecimal lower (altform) with field width and precision
int bonus_af_x_prec_width_fit_fit_pos_bench(void){return printf("%#8.5x", 34);}
int bonus_af_x_prec_width_fit_fit_zero_bench(void){return printf("%#8.5x", 0);}
int bonus_af_x_prec_width_nofit_fit_pos_bench(void){return printf("%#8.3x", 8375);}
int bonus_af_x_prec_width_fit_nofit_pos_bench(void){return printf("%#2.7x", 3267);}
int bonus_af_x_prec_width_nofit_nofit_pos_bench(void){return printf("%#3.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision, left-justified
int bonus_af_x_prec_width_fit_fit_pos_lj_bench(void){return printf("%#-8.5x", 34);}
int bonus_af_x_prec_width_fit_fit_zero_lj_bench(void){return printf("%#-8.5x", 0);}
int bonus_af_x_prec_width_nofit_fit_pos_lj_bench(void){return printf("%#-8.3x", 8375);}
int bonus_af_x_prec_width_fit_nofit_pos_lj_bench(void){return printf("%#-2.7x", 3267);}
int bonus_af_x_prec_width_nofit_nofit_pos_lj_bench(void){return printf("%#-3.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision with zeropadding
int bonus_af_x_prec_width_ff_pos_zp_bench(void){return printf("%#08.5x", 34);}
int bonus_af_x_prec_width_ff_zero_zp_bench(void){return printf("%#08.5x", 0);}
int bonus_af_x_prec_width_nf_pos_zp_bench(void){return printf("%#08.3x", 8375);}
int bonus_af_x_prec_width_fn_pos_zp_bench(void){return printf("%#02.7x", 3267);}
int bonus_af_x_prec_width_nn_pos_zp_bench(void){return printf("%#03.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision, left-justified with zeropadding
int bonus_af_x_prec_width_ff_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.5x", 34);}
int bonus_af_x_prec_width_ff_zero_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.5x", 0);}
int bonus_af_x_prec_width_nf_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.3x", 8375);}
int bonus_af_x_prec_width_fn_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-2.7x", 3267);}
int bonus_af_x_prec_width_nn_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-3.3x", 6983);}

//Hex uppers (altform) - no modifers
int bonus_af_X_basic_hexu_pos_bench(void){return printf("this %#X number", 17);}
int bonus_af_X_basic_hexu_zero_bench(void){return printf("this %#X number", 0);}
int bonus_af_X_basic_hexu_onlypos_bench(void){return printf("%#X", 3);}
int bonus_af_X_hexumax_bench(void){return printf("%#X", 4294967295u);}
//Hex uppers (altform) with field width
int bonus_af_X_width_pos_fits_bench(void){return printf("%#7X", 33);}
int bonus_af_X_width_zero_fits_bench(void){return printf("%#3X", 0);}
int bonus_af_X_width_pos_exactfit_bench(void){return printf("%#7X", 52625);}
int bonus_af_X_width_pos_nofit_bench(void){return printf("%#2X", 94827);}
int bonus_af_X_width_pos_fits_lj_bench(void){return printf("%#-7X", 33);}
int bonus_af_X_width_zero_fits_lj_bench(void){return printf("%#-3X", 0);}
int bonus_af_X_width_pos_exactfit_lj_bench(void){return printf("%#-7X", 52625);}
int bonus_af_X_width_pos_nofit_lj_bench(void){return printf("%#-4X", 9648627);}
//Hex uppers (altform) with precision
int bonus_af_X_prec_fits_pos_bench(void){return printf("%#.5X", 21);}
int bonus_af_X_prec_fits_zero_bench(void){return printf("%#.3X", 0);}
int bonus_af_X_prec_exactfit_pos_bench(void){return printf("%#.4X", 5263);}
int bonus_af_X_prec_nofit_pos_bench(void){return printf("%#.3X", 938862);}
int bonus_af_X_prec0val0_bench(void){return printf("%#.0X", 0);}
int bonus_af_X_prec0val0_impl_bench(void){return printf("%#.X", 0);}
int bonus_af_X_prec0val0_waf_bench(void){return printf("%#5.0X", 0);}
int bonus_af_X_prec0val0_waf_impl_bench(void){return printf("%#5.X", 0);}
int bonus_af_X_prec0val0_waflj_bench(void){return printf("%#-5.0X", 0);}
int bonus_af_X_prec0val0_waflj_impl_bench(void){return printf("%#-5.X", 0);}
//Hex uppers (altform) with zero field width padding
int bonus_af_X_zp_pos_fits_bench(void){return printf("%#05X", 43);}
int bonus_af_X_zp_zero_fits_bench(void){return printf("%#03X", 0);}
int bonus_af_X_zp_pos_exactfit_bench(void){return printf("%#03X", 698334);}
//Hex uppers (altform) with field width and precision
int bonus_af_X_prec_width_fit_fit_pos_bench(void){return printf("%#8.5X", 34);}
int bonus_af_X_prec_width_fit_fit_zero_bench(void){return printf("%#8.5X", 0);}
int bonus_af_X_prec_width_nofit_fit_pos_bench(void){return printf("%#8.3X", 8375);}
int bonus_af_X_prec_width_fit_nofit_pos_bench(void){return printf("%#2.7X", 3267);}
int bonus_af_X_prec_width_nofit_nofit_pos_bench(void){return printf("%#3.3X", 6983);}
//Hex uppers (altform) with field width and precision, left-justified
int bonus_af_X_prec_width_fit_fit_pos_lj_bench(void){return printf("%#-8.5X", 34);}
int bonus_af_X_prec_width_fit_fit_zero_lj_bench(void){return printf("%#-8.5X", 0);}
int bonus_af_X_prec_width_nofit_fit_pos_lj_bench(void){return printf("%#-8.3X", 8375);}
int bonus_af_X_prec_width_fit_nofit_pos_lj_bench(void){return printf("%#-2.7X", 3267);}
int bonus_af_X_prec_width_nofit_nofit_pos_lj_bench(void){return printf("%#-3.3X", 6983);}
//Hex uppers (altform) with field width and precision with zeropadding
int bonus_af_X_prec_width_ff_pos_zp_bench(void){return printf("%#08.5X", 34);}
int bonus_af_X_prec_width_ff_zero_zp_bench(void){return printf("%#08.5X", 0);}
int bonus_af_X_prec_width_nf_pos_zp_bench(void){return printf("%#08.3X", 8375);}
int bonus_af_X_prec_width_fn_pos_zp_bench(void){return printf("%#02.7X", 3267);}
int bonus_af_X_prec_width_nn_pos_zp_bench(void){return printf("%#03.3X", 6983);}
//Hex uppers (altform) with field width and precision, left-justified with zeropadding
int bonus_af_X_prec_width_ff_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.5X", 34);}
int bonus_af_X_prec_width_ff_zero_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.5X", 0);}
int bonus_af_X_prec_width_nf_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.3X", 8375);}
int bonus_af_X_prec_width_fn_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-2.7X", 3267);}
int bonus_af_X_prec_width_nn_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-3.3X", 6983);}

//No-crash-no-segfault test
int nocrash_notrequired_bonus_af_noarg_4_bench(void){return printf("%#"); }
int nocrash_notrequired_bonus_af_nullarg_4_bench(void){return printf("%#s", NULL); }
//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_af_dupflag_x_bench(void){return printf("%##x", 42);}
int nocrash_notrequired_bonus_af_dupflag_xasasljw_bench(void){return printf("%#++#-5x", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_bonus_af_c_bench(void){return printf("%#c", 'a');}
int nocrash_notrequired_bonus_af_s_bench(void){return printf("%#s", "hello");}
int nocrash_notrequired_bonus_af_p_bench(void){return printf("%#p", &ncm_p);}
int nocrash_notrequired_bonus_af_d_bench(void){return printf("%#d", 42);}
int nocrash_notrequired_bonus_af_i_bench(void){return printf("%#i", 42);}
int nocrash_notrequired_bonus_af_u_bench(void){return printf("%#u", 42);}


/* -----------------------------------------------------------------------------
** 						'# +' FLAGS TESTS (BONUS)
** ---------------------------------------------------------------------------*/

// SPACE WITH ALLSIGN - MIGHT BE UNDEFINED BEHAVIOR
//Signed integers - space with allsign ('+')
int bonus_assp_d_pos_ignoreflag_bench(void){return printf("% +d", 5);}
int bonus_assp_d_neg_ignoreflag_bench(void){return printf("% +d", -7);}
int bonus_assp_d_intmax_ignoreflag_bench(void){return printf("% +d", 2147483647);}
//signed integers with field width and allsign
int bonus_assp_d_width_pos_ignoreflag_bench(void){return printf("% +5d", 35);}
int bonus_assp_d_width_zero_ignoreflag_bench(void){return printf("% +7d", 0);}
int bonus_assp_d_width_intmax_ignoreflag_bench(void){return printf("% +24d", 2147483647);}
int bonus_assp_d_prec_pos_ignoreflag_bench(void){return printf("% +.7d", 234);}
int bonus_assp_d_prec_neg_ignoreflag_bench(void){return printf("% +.7d", -446);}
int bonus_assp_d_prec_pos_nofit_ignoreflag_bench(void){return printf("% +.3d", 3723);}
int bonus_assp_d_zpassp_as_fits_ignoreflag_bench(void){return printf("% +05d", 432);}
int bonus_assp_d_zpassp_zero_ignoreflag_bench(void){return printf("% +04d", 0);}
//Signed integers - space with field width and precision with allsign
int bonus_assp_d_prec_width_fit_fit_pos_ignoreflag_bench(void){return printf("% +8.5d", 34);}
int bonus_assp_d_prec_width_fit_fit_neg_ignoreflag_bench(void){return printf("% +10.5d", -216);}
int bonus_assp_d_prec_width_fit_fit_zero_ignoreflag_bench(void){return printf("% +8.5d", 0);}
int bonus_assp_d_prec_width_nofit_fit_pos_ignoreflag_bench(void){return printf("% +8.3d", 8375);}
int bonus_assp_d_prec_width_nofit_fit_neg_ignoreflag_bench(void){return printf("% +8.3d", -8473);}
int bonus_assp_d_prec_width_fit_nofit_pos_ignoreflag_bench(void){return printf("% +3.7d", 3267);}
int bonus_assp_d_prec_width_fit_nofit_neg_ignoreflag_bench(void){return printf("% +3.7d", -2375);}
int bonus_assp_d_prec_width_nofit_nofit_pos_ignoreflag_bench(void){return printf("% +3.3d", 6983);}
int bonus_assp_d_prec_width_nofit_nofit_neg_ignoreflag_bench(void){return printf("% +3.3d", -8462);}
int bonus_assp_d_prec0val0_was_bench(void){return printf("%+5.0d", 0);}
int bonus_assp_d_prec0val0_was_impl_bench(void){return printf("%+5.d", 0);}
int bonus_assp_d_prec0val0_waslj_bench(void){return printf("%+-5.0d", 0);}
int bonus_assp_d_prec0val0_waslj_impl_bench(void){return printf("%+-5.d", 0);}
//Signed integers - space with field width and precision, left-justified with allsign
int bonus_assp_d_prec_width_fit_fit_pos_lj_ignoreflag_bench(void){return printf("% +-8.5d", 34);}
int bonus_assp_d_prec_width_fit_fit_neg_lj_ignoreflag_bench(void){return printf("% +-10.5d", -216);}
int bonus_assp_d_prec_width_fit_fit_zero_lj_ignoreflag_bench(void){return printf("% +-8.5d", 0);}
int bonus_assp_d_prec_width_nofit_fit_pos_lj_ignoreflag_bench(void){return printf("% +-8.3d", 8375);}
int bonus_assp_d_prec_width_nofit_fit_neg_lj_ignoreflag_bench(void){return printf("% +-8.3d", -8473);}
int bonus_assp_d_prec_width_fit_nofit_pos_lj_ignoreflag_bench(void){return printf("% +-3.7d", 3267);}
int bonus_assp_d_prec_width_fit_nofit_neg_lj_ignoreflag_bench(void){return printf("% +-3.7d", -2375);}
int bonus_assp_d_prec_width_nofit_nofit_pos_lj_ignoreflag_bench(void){return printf("% +-3.3d", 6983);}
int bonus_assp_d_prec_width_nofit_nofit_neg_lj_ignoreflag_bench(void){return printf("% +-3.3d", -8462);}
//Signed integers - space with field width and precision with allsign with zeropadding
int bonus_assp_d_prec_width_ff_pos_aszpsp_ignoreflag_bench(void){return printf("% 0+8.5d", 34);}
int bonus_assp_d_prec_width_ff_neg_aszpsp_ignoreflag_bench(void){return printf("% 0+10.5d", -216);}
int bonus_assp_d_prec_width_ff_zero_aszpsp_ignoreflag_bench(void){return printf("% 0+8.5d", 0);}
int bonus_assp_d_prec_width_nf_pos_aszpsp_ignoreflag_bench(void){return printf("% 0+8.3d", 8375);}
int bonus_assp_d_prec_width_nf_neg_aszpsp_ignoreflag_bench(void){return printf("% 0+8.3d", -8473);}
int bonus_assp_d_prec_width_fn_pos_aszpsp_ignoreflag_bench(void){return printf("% 0+3.7d", 3267);}
int bonus_assp_d_prec_width_fn_neg_aszpsp_ignoreflag_bench(void){return printf("% 0+3.7d", -2375);}
int bonus_assp_d_prec_width_nn_pos_aszpsp_ignoreflag_bench(void){return printf("% 0+3.3d", 6983);}
int bonus_assp_d_prec_width_nn_neg_aszpsp_ignoreflag_bench(void){return printf("% 0+3.3d", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign with zeropadding
int bonus_assp_d_prec_width_ff_pos_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-8.5d", 34);}
int bonus_assp_d_prec_width_ff_neg_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-10.5d", -216);}
int bonus_assp_d_prec_width_ff_zero_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-8.5d", 0);}
int bonus_assp_d_prec_width_nf_pos_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-8.3d", 8375);}
int bonus_assp_d_prec_width_nf_neg_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-8.3d", -8473);}
int bonus_assp_d_prec_width_fn_pos_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-3.7d", 3267);}
int bonus_assp_d_prec_width_fn_neg_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-3.7d", -2375);}
int bonus_assp_d_prec_width_nn_pos_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-3.3d", 6983);}
int bonus_assp_d_prec_width_nn_neg_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-3.3d", -8462);}
//Signed integers - space with allsign ('+')
int bonus_assp_i_pos_ignoreflag_bench(void){return printf("% +i", 5);}
int bonus_assp_i_neg_ignoreflag_bench(void){return printf("% +i", -7);}
int bonus_assp_i_intmax_ignoreflag_bench(void){return printf("% +i", 2147483647);}
//signed integers with field width and allsign
int bonus_assp_i_width_pos_ignoreflag_bench(void){return printf("% +5i", 35);}
int bonus_assp_i_width_zero_ignoreflag_bench(void){return printf("% +7i", 0);}
int bonus_assp_i_width_intmax_ignoreflag_bench(void){return printf("% +24i", 2147483647);}
int bonus_assp_i_prec_pos_ignoreflag_bench(void){return printf("% +.7i", 234);}
int bonus_assp_i_prec_neg_ignoreflag_bench(void){return printf("% +.7i", -446);}
int bonus_assp_i_prec_pos_nofit_ignoreflag_bench(void){return printf("% +.3i", 3723);}
int bonus_assp_i_zpassp_as_fits_ignoreflag_bench(void){return printf("% +05i", 432);}
int bonus_assp_i_zpassp_zero_ignoreflag_bench(void){return printf("% +04i", 0);}
//Signed integers - space with field width and precision with allsign
int bonus_assp_i_prec_width_fit_fit_pos_ignoreflag_bench(void){return printf("% +8.5i", 34);}
int bonus_assp_i_prec_width_fit_fit_neg_ignoreflag_bench(void){return printf("% +10.5i", -216);}
int bonus_assp_i_prec_width_fit_fit_zero_ignoreflag_bench(void){return printf("% +8.5i", 0);}
int bonus_assp_i_prec_width_nofit_fit_pos_ignoreflag_bench(void){return printf("% +8.3i", 8375);}
int bonus_assp_i_prec_width_nofit_fit_neg_ignoreflag_bench(void){return printf("% +8.3i", -8473);}
int bonus_assp_i_prec_width_fit_nofit_pos_ignoreflag_bench(void){return printf("% +3.7i", 3267);}
int bonus_assp_i_prec_width_fit_nofit_neg_ignoreflag_bench(void){return printf("% +3.7i", -2375);}
int bonus_assp_i_prec_width_nofit_nofit_pos_ignoreflag_bench(void){return printf("% +3.3i", 6983);}
int bonus_assp_i_prec_width_nofit_nofit_neg_ignoreflag_bench(void){return printf("% +3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign
int bonus_assp_i_prec_width_fit_fit_pos_lj_ignoreflag_bench(void){return printf("% +-8.5i", 34);}
int bonus_assp_i_prec_width_fit_fit_neg_lj_ignoreflag_bench(void){return printf("% +-10.5i", -216);}
int bonus_assp_i_prec_width_fit_fit_zero_lj_ignoreflag_bench(void){return printf("% +-8.5i", 0);}
int bonus_assp_i_prec_width_nofit_fit_pos_lj_ignoreflag_bench(void){return printf("% +-8.3i", 8375);}
int bonus_assp_i_prec_width_nofit_fit_neg_lj_ignoreflag_bench(void){return printf("% +-8.3i", -8473);}
int bonus_assp_i_prec_width_fit_nofit_pos_lj_ignoreflag_bench(void){return printf("% +-3.7i", 3267);}
int bonus_assp_i_prec_width_fit_nofit_neg_lj_ignoreflag_bench(void){return printf("% +-3.7i", -2375);}
int bonus_assp_i_prec_width_nofit_nofit_pos_lj_ignoreflag_bench(void){return printf("% +-3.3i", 6983);}
int bonus_assp_i_prec_width_nofit_nofit_neg_lj_ignoreflag_bench(void){return printf("% +-3.3i", -8462);}
//Signed integers - space with field width and precision with allsign with zeropadding
int bonus_assp_i_prec_width_ff_pos_aszpsp_ignoreflag_bench(void){return printf("% 0+8.5i", 34);}
int bonus_assp_i_prec_width_ff_neg_aszpsp_ignoreflag_bench(void){return printf("% 0+10.5i", -216);}
int bonus_assp_i_prec_width_ff_zero_aszpsp_ignoreflag_bench(void){return printf("% 0+8.5i", 0);}
int bonus_assp_i_prec_width_nf_pos_aszpsp_ignoreflag_bench(void){return printf("% 0+8.3i", 8375);}
int bonus_assp_i_prec_width_nf_neg_aszpsp_ignoreflag_bench(void){return printf("% 0+8.3i", -8473);}
int bonus_assp_i_prec_width_fn_pos_aszpsp_ignoreflag_bench(void){return printf("% 0+3.7i", 3267);}
int bonus_assp_i_prec_width_fn_neg_aszpsp_ignoreflag_bench(void){return printf("% 0+3.7i", -2375);}
int bonus_assp_i_prec_width_nn_pos_aszpsp_ignoreflag_bench(void){return printf("% 0+3.3i", 6983);}
int bonus_assp_i_prec_width_nn_neg_aszpsp_ignoreflag_bench(void){return printf("% 0+3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign with zeropadding
int bonus_assp_i_prec_width_ff_pos_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-8.5i", 34);}
int bonus_assp_i_prec_width_ff_neg_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-10.5i", -216);}
int bonus_assp_i_prec_width_ff_zero_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-8.5i", 0);}
int bonus_assp_i_prec_width_nf_pos_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-8.3i", 8375);}
int bonus_assp_i_prec_width_nf_neg_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-8.3i", -8473);}
int bonus_assp_i_prec_width_fn_pos_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-3.7i", 3267);}
int bonus_assp_i_prec_width_fn_neg_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-3.7i", -2375);}
int bonus_assp_i_prec_width_nn_pos_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-3.3i", 6983);}
int bonus_assp_i_prec_width_nn_neg_ljaszpsp_ignoreflag_bench(void){return printf("% 0+-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_assp_dupflag_d_spassp_bench(void){return printf("% + d", 42);}
int bonus_sp_moul_1_bench(void){return printf("%%      i 42 == |%      i|\n", 42);}
int bonus_sp_moul_2_bench(void){return printf("%% i -42 == |% i|\n", -42);}
int bonus_sp_moul_3_bench(void){return printf("%% 4i 42 == |% 4i|\n", 42);}
int bonus_sp_moul_prec_2_bench(void){return printf("%% 4.5i 42 == |% 4.5i|\n", 42);}
int bonus_as_moul_1_bench(void){return printf("%%+i 42 == %+i\n", 42);}
int bonus_as_moul_2_bench(void){return printf("%%+d 42 == %+d\n", INT_MAX);}
int bonus_as_moul_3_bench(void){return printf("%%+i -42 == %+i\n", -42);}
int bonus_as_moul_4_bench(void){return printf("%%+04d 42 == %0+04d\n", 42);}
int bonus_moul_hash_1_bench(void){return printf("%%#X 42 ==  %#X\n", 42);}
int bonus_moul_hash_2_bench(void){return printf("%%X 42 ==  %X\n", 42);}
int bonus_moul_hash_9_bench(void){return printf("%%#X INT_MIN ==  %#X\n", INT_MIN);}
int bonus_moul_hash_10_bench(void){return printf("%%X INT_MIN ==  %X\n", INT_MIN);}
int bonus_moul_hash_11_bench(void){return printf("%%#X INT_MAX ==  %#X\n", INT_MAX);}
int bonus_moul_hash_12_bench(void){return printf("%%X INT_MAX ==  %X\n", INT_MAX);}



/* -----------------------------------------------------------------------------
** 						NEGATIVE PRECISION
** ---------------------------------------------------------------------------*/
int d_neg_prec_star_01_bench(void){return printf("%.*d", -3, 12345);}
int d_neg_prec_star_02_bench(void){return printf("%.*d", -1, 12345);}
int d_neg_prec_star_03_bench(void){return printf("%.*d", -1, 0);}
// %u negative precision
int u_neg_prec_star_01_bench(void){return printf("%.*u", -3, 12345);}
int u_neg_prec_star_02_bench(void){return printf("%.*u", -1, 12345);}
int u_neg_prec_star_03_bench(void){return printf("%.*u", -1, 0);}
// %o negative precision
int x_neg_prec_star_01_bench(void){return printf("%.*x", -3, 12345);}
int x_neg_prec_star_02_bench(void){return printf("%.*x", -1, 12345);}
int x_neg_prec_star_03_bench(void){return printf("%.*x", -1, 0);}
// %X negative precision
int X_neg_prec_star_01_bench(void){return printf("%.*X", -3, 12345);}
int X_neg_prec_star_02_bench(void){return printf("%.*X", -1, 12345);}
int X_neg_prec_star_03_bench(void){return printf("%.*X", -1, 0);}

// %s negative precision
int s_neg_prec_star_01_bench(void){return printf("%.*s", -3, 0);}
int s_neg_prec_star_02_bench(void){return printf("%.*s", -1, 0);}
// %p negative precision
int p_neg_prec_star_01_bench(void){return printf("%.*p", -3, s_hello);}
int p_neg_prec_star_02_bench(void){return printf("%.*p", -1, s_hello);}
int p_neg_prec_star_03_bench(void){return printf("%.*p", -3, 0);}
int p_neg_prec_star_04_bench(void){return printf("%.*p", -1, 0);}


/* -----------------------------------------------------------------------------
** 						%n format only test cases
** ---------------------------------------------------------------------------*/
// %p negative precision
int n;
int bonus_n_format_only_bench(void){return printf("pft%ntest", &n); (void)n;} 
int bonus_n_format_only_sp_bench(void){return printf("pft% ntest", &n); (void)n;} 
int bonus_n_format_only_af_bench(void){return printf("pft%#ntest", &n); (void)n;} 
int bonus_n_format_only_zp_bench(void){return printf("pft%0ntest", &n); (void)n;} 
int bonus_n_format_only_lj_bench(void){return printf("pft%-ntest", &n); (void)n;} 
int bonus_n_format_only_as_bench(void){return printf("pft%+ntest", &n); (void)n;} 
int bonus_n_format_only_w_bench(void){return printf("pft%5ntest", &n); (void)n;} 
int bonus_n_format_only_prec_bench(void){return printf("pft%.5ntest", &n); (void)n;} 
int bonus_n_format_only_w_prec_bench(void){return printf("pft%5.5ntest", &n); (void)n;} 
int bonus_n_format_only_prec_star_bench(void){return printf("pft%.*ntest%d", 5, &n, 123); (void)n;}
int bonus_n_format_only_w_star_bench(void){return printf("pft%*.ntest%d", 5, &n, 123); (void)n;}
int bonus_n_format_only_wprec_star_bench(void){return printf("pft%*.*ntest%d", 5, 5, &n, 123); (void)n;}
int nocrash_notrequired_noarg_25_bench(void){return printf("%o"); }
int nocrash_notrequired_nullarg_25_bench(void){return printf("%o", NULL); }
int bonus_mix_successive_1_bench(void){return ( printf("%o", mx_u) + printf("%%"));}

/* -----------------------------------------------------------------------------
** 						%o OCTALS TESTS (NOT IN THE SUBJECT)
** ---------------------------------------------------------------------------*/
//Octals - no modifers
int notinsubject_o_basic_octl_pos_bench(void){return printf("this %o number", 17);}
int notinsubject_o_basic_octl_zero_bench(void){return printf("this %o number", 0);}
int notinsubject_o_basic_octl_onlypos_bench(void){return printf("%o", 3);}
int notinsubject_o_octlmax_bench(void){return printf("%o", 4294967295u);}
//Octals with field width
int notinsubject_o_width_pos_fits_bench(void){return printf("%7o", 33);}
int notinsubject_o_width_zero_fits_bench(void){return printf("%3o", 0);}
int notinsubject_o_width_pos_exactfit_bench(void){return printf("%6o", 52625);}
int notinsubject_o_width_pos_nofit_bench(void){return printf("%2o", 94827);}
int notinsubject_o_width_pos_fits_lj_bench(void){return printf("%-7o", 33);}
int notinsubject_o_width_zero_fits_lj_bench(void){return printf("%-3o", 0);}
int notinsubject_o_width_pos_exactfit_lj_bench(void){return printf("%-6o", 52625);}
int notinsubject_o_width_pos_nofit_lj_bench(void){return printf("%-4o", 9648627);}
//Octals with precision
int notinsubject_o_prec_fits_pos_bench(void){return printf("%.5o", 21);}
int notinsubject_o_prec_fits_zero_bench(void){return printf("%.3o", 0);}
int notinsubject_o_prec_exactfit_pos_bench(void){return printf("%.5o", 5263);}
int notinsubject_o_prec_nofit_pos_bench(void){return printf("%.3o", 938862);}
//Octals with zero field width padding
int notinsubject_o_zp_pos_fits_bench(void){return printf("%05o", 43);}
int notinsubject_o_zp_zero_fits_bench(void){return printf("%03o", 0);}
int notinsubject_o_zp_pos_exactfit_bench(void){return printf("%07o", 698334);}
//Octals with field width and precision
int notinsubject_o_prec_width_fit_fit_pos_bench(void){return printf("%8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_bench(void){return printf("%8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_bench(void){return printf("%8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_bench(void){return printf("%2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_bench(void){return printf("%3.3o", 6983);}
//Octals with field width and precision, left-justified
int notinsubject_o_prec_width_fit_fit_pos_lj_bench(void){return printf("%-8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_lj_bench(void){return printf("%-8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_lj_bench(void){return printf("%-8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_lj_bench(void){return printf("%-2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_lj_bench(void){return printf("%-3.3o", 6983);}
//Octals with field width and precision with zeropadding
int notinsubject_o_prec_width_ff_pos_zp_bench(void){return printf("%08.5o", 34);}
int notinsubject_o_prec_width_ff_zero_zp_bench(void){return printf("%08.5o", 0);}
int notinsubject_o_prec_width_nf_pos_zp_bench(void){return printf("%08.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_zp_bench(void){return printf("%02.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_zp_bench(void){return printf("%03.3o", 6983);}
//Octals with field width and precision, left-justified with zeropadding
int notinsubject_o_prec_width_ff_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.5o", 34);}
int notinsubject_o_prec_width_ff_zero_ljzp_ignoreflag_bench(void){return printf("%0-8.5o", 0);}
int notinsubject_o_prec_width_nf_pos_ljzp_ignoreflag_bench(void){return printf("%0-8.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_ljzp_ignoreflag_bench(void){return printf("%0-2.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_ljzp_ignoreflag_bench(void){return printf("%0-3.3o", 6983);}


//Octal (Altform)s - no modifers
int notinsubject_o_basic_octl_pos_af_bench(void){return printf("this %#o number", 17);}
int notinsubject_o_basic_octl_zero_af_bench(void){return printf("this %#o number", 0);}
int notinsubject_o_basic_octl_onlypos_af_bench(void){return printf("%#o", 3);}
int notinsubject_o_octlmax_af_bench(void){return printf("%#o", 4294967295u);}
//Octal (Altform)s with field width
int notinsubject_o_width_pos_fits_af_bench(void){return printf("%#7o", 33);}
int notinsubject_o_width_zero_fits_af_bench(void){return printf("%#3o", 0);}
int notinsubject_o_width_pos_exactfit_af_bench(void){return printf("%#6o", 52625);}
int notinsubject_o_width_pos_nofit_af_bench(void){return printf("%#2o", 94827);}
int notinsubject_o_width_pos_fits_lj_af_bench(void){return printf("%#-7o", 33);}
int notinsubject_o_width_zero_fits_lj_af_bench(void){return printf("%#-3o", 0);}
int notinsubject_o_width_pos_exactfit_lj_af_bench(void){return printf("%#-6o", 52625);}
int notinsubject_o_width_pos_nofit_lj_af_bench(void){return printf("%#-4o", 9648627);}
//Octal (Altform)s with precision
int notinsubject_o_prec_fits_pos_af_bench(void){return printf("%#.5o", 21);}
int notinsubject_o_prec_fits_zero_af_bench(void){return printf("%#.3o", 0);}
int notinsubject_o_prec_exactfit_pos_af_bench(void){return printf("%#.5o", 5263);}
int notinsubject_o_prec_nofit_pos_af_bench(void){return printf("%#.3o", 938862);}
//Octal (Altform)s with zero field width padding
int notinsubject_o_zp_pos_fits_af_bench(void){return printf("%#05o", 43);}
int notinsubject_o_zp_zero_fits_af_bench(void){return printf("%#03o", 0);}
int notinsubject_o_zp_pos_exactfit_af_bench(void){return printf("%#07o", 698334);}
//Octal (Altform)s with field width and precision
int notinsubject_o_prec_width_fit_fit_pos_af_bench(void){return printf("%#8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_af_bench(void){return printf("%#8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_af_bench(void){return printf("%#8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_af_bench(void){return printf("%#2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_af_bench(void){return printf("%#3.3o", 6983);}
//Octal (Altform)s with field width and precision, left-justified
int notinsubject_o_prec_width_fit_fit_pos_lj_af_bench(void){return printf("%#-8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_lj_af_bench(void){return printf("%#-8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_lj_af_bench(void){return printf("%#-8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_lj_af_bench(void){return printf("%#-2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_lj_af_bench(void){return printf("%#-3.3o", 6983);}
//Octal (Altform)s with field width and precision with zeropadding
int notinsubject_o_prec_width_ff_pos_zp_af_bench(void){return printf("%#08.5o", 34);}
int notinsubject_o_prec_width_ff_zero_zp_af_bench(void){return printf("%#08.5o", 0);}
int notinsubject_o_prec_width_nf_pos_zp_af_bench(void){return printf("%#08.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_zp_af_bench(void){return printf("%#02.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_zp_af_bench(void){return printf("%#03.3o", 6983);}
//Octal (Altform)s with field width and precision, left-justified with zeropadding
int notinsubject_o_prec_width_ff_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.5o", 34);}
int notinsubject_o_prec_width_ff_zero_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.5o", 0);}
int notinsubject_o_prec_width_nf_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-8.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-2.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_ljzpaf_ignoreflag_bench(void){return printf("%#0-3.3o", 6983);}
//Octals - zero precision zero value
int notinsubject_o_prec0val0_basic_bench(void){return printf("%.0o", 0);}
int notinsubject_o_prec0val0_implicit_bench(void){return printf("%.o", 0);}
int notinsubject_o_prec0val0_w_bench(void){return printf("%5.0o", 0);}
int notinsubject_o_prec0val0_w_impl_bench(void){return printf("%5.o", 0);}
int notinsubject_o_prec0val0_wlj_bench(void){return printf("%-5.0o", 0);}
int notinsubject_o_prec0val0_wlj_impl_bench(void){return printf("%-5.o", 0);}
int notinsubject_o_prec0val0_af_bench(void){return printf("%#.0o", 0);}
int notinsubject_o_prec0val0_af_impl_bench(void){return printf("%#.o", 0);}
int notinsubject_o_prec0val0_waf_bench(void){return printf("%#5.0o", 0);}
int notinsubject_o_prec0val0_waf_impl_bench(void){return printf("%#5.o", 0);}
int notinsubject_o_prec0val0_waflj_bench(void){return printf("%#-5.0o", 0);}
int notinsubject_o_prec0val0_waflj_impl_bench(void){return printf("%#-5.o", 0);}
int nocrash_notinsubject_notrequired_o_sp_bench(void){return printf("% o", 42);}
int nocrash_notinsubject_notrequired_o_lj_nowidth_bench(void){return printf("%-o", 42);}
int nocrash_notinsubject_notrequired_o_as_bench(void){return printf("%+o", 42);}
int notinsubject_moul_o_1_bench(void){return printf("%o", 42);}
int notinsubject_moul_o_2_bench(void){return printf("Kashim a %o histoires à raconter", 1001);}
int notinsubject_moul_o_3_bench(void){return printf("Il fait au moins %o\n", -8000);}
int notinsubject_moul_o_4_bench(void){return printf("%o", -0);}
int notinsubject_moul_o_5_bench(void){return printf("%o", 0);}
int notinsubject_moul_o_6_bench(void){return printf("%o", INT_MAX);}
int notinsubject_moul_o_7_bench(void){return printf("%o", INT_MIN);}
int notinsubject_moul_o_8_bench(void){return printf("%o", INT_MIN - 1);}
int notinsubject_moul_o_9_bench(void){return printf("%o", INT_MAX + 1);}
int notinsubject_moul_o_10_bench(void){return printf("%%o 0000042 == |%o|\n", 0000042);}
int notinsubject_moul_o_11_bench(void){return printf("%%o \t == |%o|\n", '\t');}
int notinsubject_moul_o_12_bench(void){return printf("%%o Lydie == |%o|\n", 'L'+'y'+'d'+'i'+'e');}
int notinsubject_moul_o_hash_3_bench(void){return printf("%%#o 0 ==  %#o\n", 0);}
int notinsubject_moul_o_hash_4_bench(void){return printf("%%o 0 ==  %o\n", 0);}
int notinsubject_moul_o_hash_5_bench(void){return printf("%%#o INT_MAX ==  %#o\n", INT_MAX);}
int notinsubject_moul_o_hash_6_bench(void){return printf("%%o INT_MAX ==  %o\n", INT_MAX);}
int notinsubject_moul_o_hash_7_bench(void){return printf("%%#o INT_MIN ==  %#o\n", INT_MIN);}
int notinsubject_moul_o_hash_8_bench(void){return printf("%%o INT_MIN ==  %o\n", INT_MIN);}

#pragma clang diagnostic pop

const t_test_entry g_unit_tests[] = {
	{1, 0, "nospec_no_specifier_test", nospec_no_specifier_test, nospec_no_specifier_test_bench, "{return test(\"hello, world!\");}"},
	{1, 1, "nospec_empty_string", nospec_empty_string, nospec_empty_string_bench, "{return test(\"\");}"},
	{1, 2, "nospec_some_escaped_chars", nospec_some_escaped_chars, nospec_some_escaped_chars_bench, "{return test(\"\t\n\r\v\f\n\");}"},
	{1, 3, "nospec_successive_5_5", nospec_successive_5_5, nospec_successive_5_5_bench, "{return ( test(\"hello\") + test(\"world\"));}"},
	{1, 4, "nospec_successive_2_9", nospec_successive_2_9, nospec_successive_2_9_bench, "{return ( test(\"he\") ^ test(\" is alive\"));}"},
	{1, 5, "nospec_successive_8_3", nospec_successive_8_3, nospec_successive_8_3_bench, "{return ( test(\"is alive\") - test(\" he\"));}"},
	{1, 6, "pct_basic", pct_basic, pct_basic_bench, "{return test(\"%%\");}"},
	{1, 7, "pct_5w", pct_5w, pct_5w_bench, "{return test(\"%5%\");}"},
	{1, 8, "pct_5wlj", pct_5wlj, pct_5wlj_bench, "{return test(\"%-5%\");}"},
	{1, 9, "pct_5wzp", pct_5wzp, pct_5wzp_bench, "{return test(\"%05%\");}"},
	{1, 10, "pct_5wljzp", pct_5wljzp, pct_5wljzp_bench, "{return test(\"%-05%\");}"},
	{1, 11, "nocrash_notrequired_nullspec_basic", nocrash_notrequired_nullspec_basic, nocrash_notrequired_nullspec_basic_bench, "{return test(\"%\");}"},
	{1, 12, "nocrash_notrequired_nullspec_5w", nocrash_notrequired_nullspec_5w, nocrash_notrequired_nullspec_5w_bench, "{return test(\"%5\");}"},
	{1, 13, "nocrash_notrequired_nullspec_5wzp", nocrash_notrequired_nullspec_5wzp, nocrash_notrequired_nullspec_5wzp_bench, "{return test(\"%05\");}"},
	{1, 14, "nocrash_notrequired_nullspec_5wzplj", nocrash_notrequired_nullspec_5wzplj, nocrash_notrequired_nullspec_5wzplj_bench, "{return test(\"%-05\");}"},
	{1, 15, "nocrash_notrequired_nullspec_5wlj", nocrash_notrequired_nullspec_5wlj, nocrash_notrequired_nullspec_5wlj_bench, "{return test(\"%-5\");}"},
	{1, 16, "c_allprintable_combined", c_allprintable_combined, c_allprintable_combined_bench, "{return test(\"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\",' ','!','\"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}"},
	{1, 17, "c_1_31_combined", c_1_31_combined, c_1_31_combined_bench, "{return test(\"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}"},
	{1, 18, "c_128_255_combined", c_128_255_combined, c_128_255_combined_bench, "{return test(\"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}"},
	{1, 19, "c_allprintable_width", c_allprintable_width, c_allprintable_width_bench, "{return test(\"%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\",' ','!','\"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}"},
	{1, 20, "c_1_31_width", c_1_31_width, c_1_31_width_bench, "{return test(\"%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}"},
	{1, 21, "c_128_255_width", c_128_255_width, c_128_255_width_bench, "{return test(\"%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}"},
	{1, 22, "c_allprintable_width_lj", c_allprintable_width_lj, c_allprintable_width_lj_bench, "{return test(\"%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\",' ','!','\"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}"},
	{1, 23, "c_1_31_width_lj", c_1_31_width_lj, c_1_31_width_lj_bench, "{return test(\"%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}"},
	{1, 24, "c_128_255_width_lj", c_128_255_width_lj, c_128_255_width_lj_bench, "{return test(\"%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}"},
	{1, 25, "c_nullterm_basic", c_nullterm_basic, c_nullterm_basic_bench, "{return test(\"%c\", '\0');}"},
	{1, 26, "c_nullterm_5w", c_nullterm_5w, c_nullterm_5w_bench, "{return test(\"%5c\", '\0');}"},
	{1, 27, "c_nullterm_5wlj", c_nullterm_5wlj, c_nullterm_5wlj_bench, "{return test(\"%-5c\", '\0');}"},
	{1, 28, "s_basic_string_expansion", s_basic_string_expansion, s_basic_string_expansion_bench, "{return test(\"hello, %s.\", \"gavin\");}"},
	{1, 29, "s_only_string_expansion", s_only_string_expansion, s_only_string_expansion_bench, "{return test(\"%s\", \"testing testing\");}"},
	{1, 30, "s_two_string_expansions", s_two_string_expansions, s_two_string_expansions_bench, "{return test(\"%s%s\", \"hello\", \"world\");}"},
	{1, 31, "s_two_string_expansions2", s_two_string_expansions2, s_two_string_expansions2_bench, "{return test(\"..%s stuff %s\", \"a\", \"b\");}"},
	{1, 32, "s_empty_string_expansion", s_empty_string_expansion, s_empty_string_expansion_bench, "{return test(\"this %s is empty\", \"\");}"},
	{1, 33, "s_full_then_empty_string", s_full_then_empty_string, s_full_then_empty_string_bench, "{return test(\"this %s is %s\", \"hello\", \"\");}"},
	{1, 34, "s_empty_then_full_string", s_empty_then_full_string, s_empty_then_full_string_bench, "{return test(\"this %s is %s\", \"\", \"hello\");}"},
	{1, 35, "s_three_strings", s_three_strings, s_three_strings_bench, "{return test(\"%s%s%s\", \"1\", \"2\", \"3's a charm\");}"},
	{1, 36, "s_space_padded_field_width", s_space_padded_field_width, s_space_padded_field_width_bench, "{return test(\"%32s\", \"abc\");}"},
	{1, 37, "s_space_padded_field_width2", s_space_padded_field_width2, s_space_padded_field_width2_bench, "{return test(\"%16s\", \"nark nark\");}"},
	{1, 38, "s_space_padded_over_field_width", s_space_padded_over_field_width, s_space_padded_over_field_width_bench, "{return test(\"%5s\", \"goes over\");}"},
	{1, 39, "s_space_padded_field_width_lj", s_space_padded_field_width_lj, s_space_padded_field_width_lj_bench, "{return test(\"%-32s\", \"abc\");}"},
	{1, 40, "s_space_padded_field_width2_lj", s_space_padded_field_width2_lj, s_space_padded_field_width2_lj_bench, "{return test(\"%-16s\", \"nark nark\");}"},
	{1, 41, "s_space_padded_over_field_width_lj", s_space_padded_over_field_width_lj, s_space_padded_over_field_width_lj_bench, "{return test(\"%-5s\", \"goes over\");}"},
	{1, 42, "s_string_prec_notrunc", s_string_prec_notrunc, s_string_prec_notrunc_bench, "{return test(\"%.7s\", \"hello\");}"},
	{1, 43, "s_string_prec_trunc", s_string_prec_trunc, s_string_prec_trunc_bench, "{return test(\"%.3s\", \"hello\");}"},
	{1, 44, "s_string_prec_default", s_string_prec_default, s_string_prec_default_bench, "{return test(\"%.s\", \"hello\");}"},
	{1, 45, "s_string_prec_zero", s_string_prec_zero, s_string_prec_zero_bench, "{return test(\"%.0s\", \"hello\");}"},
	{1, 46, "s_two_strings_prec_2trunc", s_two_strings_prec_2trunc, s_two_strings_prec_2trunc_bench, "{return test(\"%.3s%.2s\", \"holla\", \"bitch\");}"},
	{1, 47, "s_two_strings_prec_1trunc_a", s_two_strings_prec_1trunc_a, s_two_strings_prec_1trunc_a_bench, "{return test(\"%.2s%.7s\", \"hello\", \"world\");}"},
	{1, 48, "s_two_strings_prec_1trunc_b", s_two_strings_prec_1trunc_b, s_two_strings_prec_1trunc_b_bench, "{return test(\"%.7s%.2s\", \"hello\", \"world\");}"},
	{1, 49, "s_two_strings_prec_0trunc", s_two_strings_prec_0trunc, s_two_strings_prec_0trunc_bench, "{return test(\"%.5s%7s\", \"yo\", \"boi\");}"},
	{1, 50, "s_string_prec_width_notrunc", s_string_prec_width_notrunc, s_string_prec_width_notrunc_bench, "{return test(\"%7.5s\", \"yolo\");}"},
	{1, 51, "s_string_prec_width_trunc", s_string_prec_width_trunc, s_string_prec_width_trunc_bench, "{return test(\"%7.5s\", \"bombastic\");}"},
	{1, 52, "s_string_prec_width_notrunc_lj", s_string_prec_width_notrunc_lj, s_string_prec_width_notrunc_lj_bench, "{return test(\"%-7.5s\", \"yolo\");}"},
	{1, 53, "s_string_prec_width_trunc_lj", s_string_prec_width_trunc_lj, s_string_prec_width_trunc_lj_bench, "{return test(\"%-7.5s\", \"tubular\");}"},
	{1, 54, "s_two_s_prec_width_2fit_0trunc", s_two_s_prec_width_2fit_0trunc, s_two_s_prec_width_2fit_0trunc_bench, "{return test(\"%7.7s%7.7s\", \"hello\", \"world\");}"},
	{1, 55, "s_two_s_prec_width_1fit_a_0trunc", s_two_s_prec_width_1fit_a_0trunc, s_two_s_prec_width_1fit_a_0trunc_bench, "{return test(\"%3.7s%7.7s\", \"hello\", \"world\");}"},
	{1, 56, "s_two_s_prec_width_1fit_b_0trunc", s_two_s_prec_width_1fit_b_0trunc, s_two_s_prec_width_1fit_b_0trunc_bench, "{return test(\"%7.7s%3.7s\", \"hello\", \"world\");}"},
	{1, 57, "s_two_s_prec_width_0fit_0trunc", s_two_s_prec_width_0fit_0trunc, s_two_s_prec_width_0fit_0trunc_bench, "{return test(\"%3.7s%3.7s\", \"hello\", \"world\");}"},
	{1, 58, "s_two_s_prec_width_2fit_1trunc_a", s_two_s_prec_width_2fit_1trunc_a, s_two_s_prec_width_2fit_1trunc_a_bench, "{return test(\"%7.3s%7.7s\", \"hello\", \"world\");}"},
	{1, 59, "s_two_s_prec_width_1fit_a_1trunc_a", s_two_s_prec_width_1fit_a_1trunc_a, s_two_s_prec_width_1fit_a_1trunc_a_bench, "{return test(\"%3.3s%7.7s\", \"hello\", \"world\");}"},
	{1, 60, "s_two_s_prec_width_1fit_b_1trunc_a", s_two_s_prec_width_1fit_b_1trunc_a, s_two_s_prec_width_1fit_b_1trunc_a_bench, "{return test(\"%7.3s%3.7s\", \"hello\", \"world\");}"},
	{1, 61, "s_two_s_prec_width_0fit_1trunc_a", s_two_s_prec_width_0fit_1trunc_a, s_two_s_prec_width_0fit_1trunc_a_bench, "{return test(\"%3.3s%3.7s\", \"hello\", \"world\");}"},
	{1, 62, "s_two_s_prec_width_2fit_1trunc_b", s_two_s_prec_width_2fit_1trunc_b, s_two_s_prec_width_2fit_1trunc_b_bench, "{return test(\"%7.7s%7.3s\", \"hello\", \"world\");}"},
	{1, 63, "s_two_s_prec_width_1fit_a_1trunc_b", s_two_s_prec_width_1fit_a_1trunc_b, s_two_s_prec_width_1fit_a_1trunc_b_bench, "{return test(\"%3.7s%7.3s\", \"hello\", \"world\");}"},
	{1, 64, "s_two_s_prec_width_1fit_b_1trunc_b", s_two_s_prec_width_1fit_b_1trunc_b, s_two_s_prec_width_1fit_b_1trunc_b_bench, "{return test(\"%7.7s%3.3s\", \"hello\", \"world\");}"},
	{1, 65, "s_two_s_prec_width_0fit_1trunc_b", s_two_s_prec_width_0fit_1trunc_b, s_two_s_prec_width_0fit_1trunc_b_bench, "{return test(\"%3.7s%3.3s\", \"hello\", \"world\");}"},
	{1, 66, "s_two_s_prec_width_2fit_2trunc", s_two_s_prec_width_2fit_2trunc, s_two_s_prec_width_2fit_2trunc_bench, "{return test(\"%7.3s%7.3s\", \"hello\", \"world\");}"},
	{1, 67, "s_two_s_prec_width_1fit_a_2trunc", s_two_s_prec_width_1fit_a_2trunc, s_two_s_prec_width_1fit_a_2trunc_bench, "{return test(\"%3.3s%7.3s\", \"hello\", \"world\");}"},
	{1, 68, "s_two_s_prec_width_1fit_b_2trunc", s_two_s_prec_width_1fit_b_2trunc, s_two_s_prec_width_1fit_b_2trunc_bench, "{return test(\"%7.3s%3.3s\", \"hello\", \"world\");}"},
	{1, 69, "s_two_s_prec_width_0fit_2trunc", s_two_s_prec_width_0fit_2trunc, s_two_s_prec_width_0fit_2trunc_bench, "{return test(\"%3.3s%3.3s\", \"hello\", \"world\");}"},
	{1, 70, "s_two_s_prec_width_2trunc", s_two_s_prec_width_2trunc, s_two_s_prec_width_2trunc_bench, "{return test(\"%3s%3s\", \"hello\", \"world\");}"},
	{1, 71, "s_two_strings_lj_and_rj", s_two_strings_lj_and_rj, s_two_strings_lj_and_rj_bench, "{return test(\"%-7s%5s\", \"hello\", \"world\");}"},
	{1, 72, "s_two_strings_rj_and_lj", s_two_strings_rj_and_lj, s_two_strings_rj_and_lj_bench, "{return test(\"%7s%-5s\", \"hello\", \"world\");}"},
	{1, 73, "s_null_basic_string_expansion", s_null_basic_string_expansion, s_null_basic_string_expansion_bench, "{return test(\"hello, %s.\", NULL);}"},
	{1, 74, "s_null_only_string_expansion", s_null_only_string_expansion, s_null_only_string_expansion_bench, "{return test(\"%s\", NULL);}"},
	{1, 75, "s_null_space_padded_field_width", s_null_space_padded_field_width, s_null_space_padded_field_width_bench, "{return test(\"%32s\", NULL);}"},
	{1, 76, "s_null_space_padded_over_field_width", s_null_space_padded_over_field_width, s_null_space_padded_over_field_width_bench, "{return test(\"%2s\", NULL);}"},
	{1, 77, "s_null_space_padded_field_width_lj", s_null_space_padded_field_width_lj, s_null_space_padded_field_width_lj_bench, "{return test(\"%-32s\", NULL);}"},
	{1, 78, "s_null_space_padded_field_width2_lj", s_null_space_padded_field_width2_lj, s_null_space_padded_field_width2_lj_bench, "{return test(\"%-16s\", NULL);}"},
	{1, 79, "s_null_space_padded_over_field_width_lj", s_null_space_padded_over_field_width_lj, s_null_space_padded_over_field_width_lj_bench, "{return test(\"%-3s\", NULL);}"},
	{1, 80, "s_null_string_prec_notrunc", s_null_string_prec_notrunc, s_null_string_prec_notrunc_bench, "{return test(\"%.9s\", \"NULL\");}"},
	{1, 81, "s_null_string_prec_trunc", s_null_string_prec_trunc, s_null_string_prec_trunc_bench, "{return test(\"%.3s\", \"NULL\");}"},
	{1, 82, "s_null_string_prec_default", s_null_string_prec_default, s_null_string_prec_default_bench, "{return test(\"%.s\", \"NULL\");}"},
	{1, 83, "s_null_string_prec_zero", s_null_string_prec_zero, s_null_string_prec_zero_bench, "{return test(\"%.0s\", \"NULL\");}"},
	{1, 84, "s_basic_s_hidden", s_basic_s_hidden, s_basic_s_hidden_bench, "{return test(\"%s\", s_hidden);}"},
	{1, 85, "s_width_3_s_hidden", s_width_3_s_hidden, s_width_3_s_hidden_bench, "{return test(\"%3s\", s_hidden);}"},
	{1, 86, "s_width_9_s_hidden", s_width_9_s_hidden, s_width_9_s_hidden_bench, "{return test(\"%9s\", s_hidden);}"},
	{1, 87, "s_prec_no_width_s_hidden", s_prec_no_width_s_hidden, s_prec_no_width_s_hidden_bench, "{return test(\"%.s\", s_hidden);}"},
	{1, 88, "s_prec_9_no_width_s_hidden", s_prec_9_no_width_s_hidden, s_prec_9_no_width_s_hidden_bench, "{return test(\"%.9s\", s_hidden);}"},
	{1, 89, "s_prec_03_no_width_s_hidden", s_prec_03_no_width_s_hidden, s_prec_03_no_width_s_hidden_bench, "{return test(\"%.03s\", s_hidden);}"},
	{1, 90, "s_prec_09_no_width_s_hidden", s_prec_09_no_width_s_hidden, s_prec_09_no_width_s_hidden_bench, "{return test(\"%.09s\", s_hidden);}"},
	{1, 91, "s_prec_03_no_width_s_null", s_prec_03_no_width_s_null, s_prec_03_no_width_s_null_bench, "{return test(\"%.03s\", NULL);}"},
	{1, 92, "s_prec_09_no_width_s_null", s_prec_09_no_width_s_null, s_prec_09_no_width_s_null_bench, "{return test(\"%.09s\", NULL);}"},
	{1, 93, "s_prec_00_no_width_s_nullchar", s_prec_00_no_width_s_nullchar, s_prec_00_no_width_s_nullchar_bench, "{return test(\"%.00s\", \"\0\");}"},
	{1, 94, "s_prec_01_no_width_s_nullchar", s_prec_01_no_width_s_nullchar, s_prec_01_no_width_s_nullchar_bench, "{return test(\"%.01s\", \"\0\");}"},
	{1, 95, "s_prec_03_no_width_s_nullchar", s_prec_03_no_width_s_nullchar, s_prec_03_no_width_s_nullchar_bench, "{return test(\"%.03s\", \"\0\");}"},
	{1, 96, "s_prec_09_no_width_s_nullchar", s_prec_09_no_width_s_nullchar, s_prec_09_no_width_s_nullchar_bench, "{return test(\"%.09s\", \"\0\");}"},
	{1, 97, "s_prec_0_width_3_s_hidden", s_prec_0_width_3_s_hidden, s_prec_0_width_3_s_hidden_bench, "{return test(\"%3.s\", s_hidden);}"},
	{1, 98, "s_prec_0_width_10_s_hidden", s_prec_0_width_10_s_hidden, s_prec_0_width_10_s_hidden_bench, "{return test(\"%10.s\", s_hidden);}"},
	{1, 99, "s_prec_0_width_3_s_null", s_prec_0_width_3_s_null, s_prec_0_width_3_s_null_bench, "{return test(\"%3.s\", NULL);}"},
	{1, 100, "s_prec_0_width_10_s_null", s_prec_0_width_10_s_null, s_prec_0_width_10_s_null_bench, "{return test(\"%10.s\", NULL);}"},
	{1, 101, "s_prec_0_width_1_s_nullchar", s_prec_0_width_1_s_nullchar, s_prec_0_width_1_s_nullchar_bench, "{return test(\"%1.s\", \"\0\");}"},
	{1, 102, "s_prec_0_width_2_s_nullchar", s_prec_0_width_2_s_nullchar, s_prec_0_width_2_s_nullchar_bench, "{return test(\"%2.s\", \"\0\");}"},
	{1, 103, "s_prec_0_width_9_s_nullchar", s_prec_0_width_9_s_nullchar, s_prec_0_width_9_s_nullchar_bench, "{return test(\"%9.s\", \"\0\");}"},
	{1, 104, "s_prec_0_lj_width_3_s_hidden", s_prec_0_lj_width_3_s_hidden, s_prec_0_lj_width_3_s_hidden_bench, "{return test(\"%-3.s\", s_hidden);}"},
	{1, 105, "s_prec_0_lj_width_8_s_hidden", s_prec_0_lj_width_8_s_hidden, s_prec_0_lj_width_8_s_hidden_bench, "{return test(\"%-8.s\", s_hidden);}"},
	{1, 106, "s_prec_0_lj_width_3_s_null", s_prec_0_lj_width_3_s_null, s_prec_0_lj_width_3_s_null_bench, "{return test(\"%-3.s\", NULL);}"},
	{1, 107, "s_prec_0_lj_width_8_s_null", s_prec_0_lj_width_8_s_null, s_prec_0_lj_width_8_s_null_bench, "{return test(\"%-8.s\", NULL);}"},
	{1, 108, "s_prec_0_lj_width_1_s_nullchar", s_prec_0_lj_width_1_s_nullchar, s_prec_0_lj_width_1_s_nullchar_bench, "{return test(\"%-1.s\", \"\0\");}"},
	{1, 109, "s_prec_0_lj_width_2_s_nullchar", s_prec_0_lj_width_2_s_nullchar, s_prec_0_lj_width_2_s_nullchar_bench, "{return test(\"%-2.s\", \"\0\");}"},
	{1, 110, "s_prec_0_lj_width_6_s_nullchar", s_prec_0_lj_width_6_s_nullchar, s_prec_0_lj_width_6_s_nullchar_bench, "{return test(\"%-6.s\", \"\0\");}"},
	{1, 111, "s_prec_1_width_3_s_hidden", s_prec_1_width_3_s_hidden, s_prec_1_width_3_s_hidden_bench, "{return test(\"%3.1s\", s_hidden);}"},
	{1, 112, "s_prec_1_width_10_s_hidden", s_prec_1_width_10_s_hidden, s_prec_1_width_10_s_hidden_bench, "{return test(\"%10.1s\", s_hidden);}"},
	{1, 113, "s_prec_1_width_3_s_null", s_prec_1_width_3_s_null, s_prec_1_width_3_s_null_bench, "{return test(\"%3.1s\", NULL);}"},
	{1, 114, "s_prec_1_width_9_s_null", s_prec_1_width_9_s_null, s_prec_1_width_9_s_null_bench, "{return test(\"%9.1s\", NULL);}"},
	{1, 115, "s_prec_1_lj_width_3_s_hidden", s_prec_1_lj_width_3_s_hidden, s_prec_1_lj_width_3_s_hidden_bench, "{return test(\"%-3.1s\", s_hidden);}"},
	{1, 116, "s_prec_1_lj_width_10_s_hidden", s_prec_1_lj_width_10_s_hidden, s_prec_1_lj_width_10_s_hidden_bench, "{return test(\"%-10.1s\", s_hidden);}"},
	{1, 117, "s_prec_1_lj_width_3_s_null", s_prec_1_lj_width_3_s_null, s_prec_1_lj_width_3_s_null_bench, "{return test(\"%-3.1s\", NULL);}"},
	{1, 118, "s_prec_1_lj_width_9_s_null", s_prec_1_lj_width_9_s_null, s_prec_1_lj_width_9_s_null_bench, "{return test(\"%-9.1s\", NULL);}"},
	{1, 119, "s_prec_1_lj_width_3_s_nullchar", s_prec_1_lj_width_3_s_nullchar, s_prec_1_lj_width_3_s_nullchar_bench, "{return test(\"%-3.1s\", \"\0\");}"},
	{1, 120, "s_prec_1_lj_width_6_s_nullchar", s_prec_1_lj_width_6_s_nullchar, s_prec_1_lj_width_6_s_nullchar_bench, "{return test(\"%-6.1s\", \"\0\");}"},
	{1, 121, "s_prec_perfect_width_3_s_hidden", s_prec_perfect_width_3_s_hidden, s_prec_perfect_width_3_s_hidden_bench, "{return test(\"%3.6s\", s_hidden);}"},
	{1, 122, "s_prec_perfect_width_20_s_hidden", s_prec_perfect_width_20_s_hidden, s_prec_perfect_width_20_s_hidden_bench, "{return test(\"%20.6s\", s_hidden);}"},
	{1, 123, "s_prec_perfect_width_3_s_null", s_prec_perfect_width_3_s_null, s_prec_perfect_width_3_s_null_bench, "{return test(\"%3.6s\", NULL);}"},
	{1, 124, "s_prec_perfect_width_20_s_null", s_prec_perfect_width_20_s_null, s_prec_perfect_width_20_s_null_bench, "{return test(\"%20.6s\", NULL);}"},
	{1, 125, "s_prec_perfect_width_3_s_nullchar", s_prec_perfect_width_3_s_nullchar, s_prec_perfect_width_3_s_nullchar_bench, "{return test(\"%3.6s\", \"\0\");}"},
	{1, 126, "s_prec_perfect_width_6_s_nullchar", s_prec_perfect_width_6_s_nullchar, s_prec_perfect_width_6_s_nullchar_bench, "{return test(\"%6.6s\", \"\0\");}"},
	{1, 127, "s_prec_perfect_lj_width_3_s_hidden", s_prec_perfect_lj_width_3_s_hidden, s_prec_perfect_lj_width_3_s_hidden_bench, "{return test(\"%-3.6s\", s_hidden);}"},
	{1, 128, "s_prec_perfect_lj_width_20_s_hidden", s_prec_perfect_lj_width_20_s_hidden, s_prec_perfect_lj_width_20_s_hidden_bench, "{return test(\"%-20.6s\", s_hidden);}"},
	{1, 129, "s_prec_8_lj_width_3_s_hidden", s_prec_8_lj_width_3_s_hidden, s_prec_8_lj_width_3_s_hidden_bench, "{return test(\"%-3.8s\", s_hidden);}"},
	{1, 130, "s_prec_8_lj_width_10_s_hidden", s_prec_8_lj_width_10_s_hidden, s_prec_8_lj_width_10_s_hidden_bench, "{return test(\"%-10.8s\", s_hidden);}"},
	{1, 131, "s_prec_8_lj_width_3_s_null", s_prec_8_lj_width_3_s_null, s_prec_8_lj_width_3_s_null_bench, "{return test(\"%-3.8s\", NULL);}"},
	{1, 132, "s_prec_8_lj_width_10_s_null", s_prec_8_lj_width_10_s_null, s_prec_8_lj_width_10_s_null_bench, "{return test(\"%-10.8s\", NULL);}"},
	{1, 133, "s_prec_00_lj_s_hidden_trunc", s_prec_00_lj_s_hidden_trunc, s_prec_00_lj_s_hidden_trunc_bench, "{return test(\"%-.00s\", s_hidden);}"},
	{1, 134, "s_prec_09_lj_s_hidden_notrunc", s_prec_09_lj_s_hidden_notrunc, s_prec_09_lj_s_hidden_notrunc_bench, "{return test(\"%-.09s\", s_hidden);}"},
	{1, 135, "notrequired_s_undefbehav_4_flags_diff_order_1", notrequired_s_undefbehav_4_flags_diff_order_1, notrequired_s_undefbehav_4_flags_diff_order_1_bench, "{return test(\"%+- 06.06s\", s_hidden);}"},
	{1, 136, "notrequired_s_undefbehav_4_flags_diff_order_2", notrequired_s_undefbehav_4_flags_diff_order_2, notrequired_s_undefbehav_4_flags_diff_order_2_bench, "{return test(\"% 0+-6.06s\", s_hidden);}"},
	{1, 137, "notrequired_s_undefbehav_4_flags_diff_order_3", notrequired_s_undefbehav_4_flags_diff_order_3, notrequired_s_undefbehav_4_flags_diff_order_3_bench, "{return test(\"%0 +-6.06s\", s_hidden);}"},
	{1, 138, "notrequired_s_undefbehav_4_flags_diff_order_4", notrequired_s_undefbehav_4_flags_diff_order_4, notrequired_s_undefbehav_4_flags_diff_order_4_bench, "{return test(\"%+-0 6.06s\", s_hidden);}"},
	{1, 139, "notrequired_s_undefbehav_4_flags_diff_order_5", notrequired_s_undefbehav_4_flags_diff_order_5, notrequired_s_undefbehav_4_flags_diff_order_5_bench, "{return test(\"%-+ 06.06s\", s_hidden);}"},
	{1, 140, "notrequired_s_undefbehav_4_flags_diff_order_6", notrequired_s_undefbehav_4_flags_diff_order_6, notrequired_s_undefbehav_4_flags_diff_order_6_bench, "{return test(\"% -+06.06s\", s_hidden);}"},
	{1, 141, "notrequired_s_undefbehav_4_flags_sp_padded_diff_order_1", notrequired_s_undefbehav_4_flags_sp_padded_diff_order_1, notrequired_s_undefbehav_4_flags_sp_padded_diff_order_1_bench, "{return test(\"%+- 07.06s\", s_hidden);}"},
	{1, 142, "notrequired_s_undefbehav_4_flags_sp_padded_diff_order_2", notrequired_s_undefbehav_4_flags_sp_padded_diff_order_2, notrequired_s_undefbehav_4_flags_sp_padded_diff_order_2_bench, "{return test(\"% 0+-8.06s\", s_hidden);}"},
	{1, 143, "notrequired_s_undefbehav_4_flags_sp_padded_diff_order_3", notrequired_s_undefbehav_4_flags_sp_padded_diff_order_3, notrequired_s_undefbehav_4_flags_sp_padded_diff_order_3_bench, "{return test(\"%0 +-9.06s\", s_hidden);}"},
	{1, 144, "notrequired_s_undefbehav_4_flags_sp_padded_diff_order_4", notrequired_s_undefbehav_4_flags_sp_padded_diff_order_4, notrequired_s_undefbehav_4_flags_sp_padded_diff_order_4_bench, "{return test(\"%+-0 10.06s\", s_hidden);}"},
	{1, 145, "notrequired_s_undefbehav_4_flags_sp_padded_diff_order_5", notrequired_s_undefbehav_4_flags_sp_padded_diff_order_5, notrequired_s_undefbehav_4_flags_sp_padded_diff_order_5_bench, "{return test(\"%-+ 011.06s\", s_hidden);}"},
	{1, 146, "notrequired_s_undefbehav_4_flags_sp_padded_diff_order_6", notrequired_s_undefbehav_4_flags_sp_padded_diff_order_6, notrequired_s_undefbehav_4_flags_sp_padded_diff_order_6_bench, "{return test(\"% -+012.06s\", s_hidden);}"},
	{1, 147, "notrequired_s_undefbehav_4_flags_as_lj_sp_zero_trunc", notrequired_s_undefbehav_4_flags_as_lj_sp_zero_trunc, notrequired_s_undefbehav_4_flags_as_lj_sp_zero_trunc_bench, "{return test(\"%+- 06.04s\", s_hidden);}"},
	{1, 148, "notrequired_s_undefbehav_4_flags_sp_zero_as_lj_trunc", notrequired_s_undefbehav_4_flags_sp_zero_as_lj_trunc, notrequired_s_undefbehav_4_flags_sp_zero_as_lj_trunc_bench, "{return test(\"% 0+-6.04s\", s_hidden);}"},
	{1, 149, "notrequired_s_undefbehav_4_flags_zero_sp_as_lj_trunc", notrequired_s_undefbehav_4_flags_zero_sp_as_lj_trunc, notrequired_s_undefbehav_4_flags_zero_sp_as_lj_trunc_bench, "{return test(\"%0 +-6.04s\", s_hidden);}"},
	{1, 150, "notrequired_s_undefbehav_4_flags_as_lj_zero_sp_trunc", notrequired_s_undefbehav_4_flags_as_lj_zero_sp_trunc, notrequired_s_undefbehav_4_flags_as_lj_zero_sp_trunc_bench, "{return test(\"%+-0 6.04s\", s_hidden);}"},
	{1, 151, "notrequired_s_undefbehav_4_flags_lj_as_sp_zero_trunc", notrequired_s_undefbehav_4_flags_lj_as_sp_zero_trunc, notrequired_s_undefbehav_4_flags_lj_as_sp_zero_trunc_bench, "{return test(\"%-+ 06.04s\", s_hidden);}"},
	{1, 152, "notrequired_s_undefbehav_4_flags_sp_zero_lj_as_trunc", notrequired_s_undefbehav_4_flags_sp_zero_lj_as_trunc, notrequired_s_undefbehav_4_flags_sp_zero_lj_as_trunc_bench, "{return test(\"% 0-+6.04s\", s_hidden);}"},
	{1, 153, "notrequired_s_undefbehav_4_flags_as_lj_sp_zero__pads", notrequired_s_undefbehav_4_flags_as_lj_sp_zero__pads, notrequired_s_undefbehav_4_flags_as_lj_sp_zero__pads_bench, "{return test(\"%+- 06.09s\", s_hidden);}"},
	{1, 154, "notrequired_s_undefbehav_4_flags_sp_zero_as_lj__pads", notrequired_s_undefbehav_4_flags_sp_zero_as_lj__pads, notrequired_s_undefbehav_4_flags_sp_zero_as_lj__pads_bench, "{return test(\"% 0+-6.09s\", s_hidden);}"},
	{1, 155, "notrequired_s_undefbehav_4_flags_zero_sp_as_lj__pads", notrequired_s_undefbehav_4_flags_zero_sp_as_lj__pads, notrequired_s_undefbehav_4_flags_zero_sp_as_lj__pads_bench, "{return test(\"%0 +-6.09s\", s_hidden);}"},
	{1, 156, "notrequired_s_undefbehav_4_flags_as_lj_zero_sp__pads", notrequired_s_undefbehav_4_flags_as_lj_zero_sp__pads, notrequired_s_undefbehav_4_flags_as_lj_zero_sp__pads_bench, "{return test(\"%+-0 6.09s\", s_hidden);}"},
	{1, 157, "notrequired_s_undefbehav_4_flags_lj_as_sp_zero__pads", notrequired_s_undefbehav_4_flags_lj_as_sp_zero__pads, notrequired_s_undefbehav_4_flags_lj_as_sp_zero__pads_bench, "{return test(\"%-+ 06.09s\", s_hidden);}"},
	{1, 158, "notrequired_s_undefbehav_4_flags_sp_zero_lj_as__pads", notrequired_s_undefbehav_4_flags_sp_zero_lj_as__pads, notrequired_s_undefbehav_4_flags_sp_zero_lj_as__pads_bench, "{return test(\"% 0-+6.09s\", s_hidden);}"},
	{1, 159, "notrequired_s_undefbehav_0_2zero", notrequired_s_undefbehav_0_2zero, notrequired_s_undefbehav_0_2zero_bench, "{return test(\"%00s\", s_hidden);}"},
	{1, 160, "notrequired_s_undefbehav_0_3zero", notrequired_s_undefbehav_0_3zero, notrequired_s_undefbehav_0_3zero_bench, "{return test(\"%000s\", s_hidden);}"},
	{1, 161, "notrequired_s_undefbehav_0_4zero", notrequired_s_undefbehav_0_4zero, notrequired_s_undefbehav_0_4zero_bench, "{return test(\"%0000s\", s_hidden);}"},
	{1, 162, "notrequired_s_undefbehav_0_lj_2zero", notrequired_s_undefbehav_0_lj_2zero, notrequired_s_undefbehav_0_lj_2zero_bench, "{return test(\"%-00s\", s_hidden);}"},
	{1, 163, "notrequired_s_undefbehav_0_zero_lj_zero", notrequired_s_undefbehav_0_zero_lj_zero, notrequired_s_undefbehav_0_zero_lj_zero_bench, "{return test(\"%0-0s\", s_hidden);}"},
	{1, 164, "notrequired_s_undefbehav_0_2zero_lj", notrequired_s_undefbehav_0_2zero_lj, notrequired_s_undefbehav_0_2zero_lj_bench, "{return test(\"%00-s\", s_hidden);}"},
	{1, 165, "notrequired_s_undefbehav_0_width_3", notrequired_s_undefbehav_0_width_3, notrequired_s_undefbehav_0_width_3_bench, "{return test(\"%03s\", s_hidden);}"},
	{1, 166, "notrequired_s_undefbehav_0_width_9", notrequired_s_undefbehav_0_width_9, notrequired_s_undefbehav_0_width_9_bench, "{return test(\"%09s\", s_hidden);}"},
	{1, 167, "notrequired_s_undefbehav_as_0_width_3", notrequired_s_undefbehav_as_0_width_3, notrequired_s_undefbehav_as_0_width_3_bench, "{return test(\"%+03s\", s_hidden);}"},
	{1, 168, "notrequired_s_undefbehav_as_0_width_9", notrequired_s_undefbehav_as_0_width_9, notrequired_s_undefbehav_as_0_width_9_bench, "{return test(\"%+09s\", s_hidden);}"},
	{1, 169, "notrequired_s_undefbehav_lj_0_width_3", notrequired_s_undefbehav_lj_0_width_3, notrequired_s_undefbehav_lj_0_width_3_bench, "{return test(\"%-03s\", s_hidden);}"},
	{1, 170, "notrequired_s_undefbehav_lj_0_width_9", notrequired_s_undefbehav_lj_0_width_9, notrequired_s_undefbehav_lj_0_width_9_bench, "{return test(\"%-09s\", s_hidden);}"},
	{1, 171, "notrequired_s_undefbehav_as_sp_width_3", notrequired_s_undefbehav_as_sp_width_3, notrequired_s_undefbehav_as_sp_width_3_bench, "{return test(\"%+ 3s\", s_hidden);}"},
	{1, 172, "notrequired_s_undefbehav_as_sp_width_6", notrequired_s_undefbehav_as_sp_width_6, notrequired_s_undefbehav_as_sp_width_6_bench, "{return test(\"%+ 6s\", s_hidden);}"},
	{1, 173, "p_null", p_null, p_null_bench, "{return test(\"%p\", NULL);}"},
	{1, 174, "notrequired_p_ftfc_literal_9w_prec2_undefbehav", notrequired_p_ftfc_literal_9w_prec2_undefbehav, notrequired_p_ftfc_literal_9w_prec2_undefbehav_bench, "{return test(\"%9.2p\n\", 1234);}"},
	{1, 175, "notrequired_p_ftfc_literal_2w_prec9_undefbehav", notrequired_p_ftfc_literal_2w_prec9_undefbehav, notrequired_p_ftfc_literal_2w_prec9_undefbehav_bench, "{return test(\"%2.9p\n\", 1234);}"},
	{1, 176, "notrequired_p_ftfc_zero_prec5_undefbehav", notrequired_p_ftfc_zero_prec5_undefbehav, notrequired_p_ftfc_zero_prec5_undefbehav_bench, "{return test(\"%.5p\", 0);}"},
	{1, 177, "notrequired_p_ftfc_zero_prec0_undefbehav", notrequired_p_ftfc_zero_prec0_undefbehav, notrequired_p_ftfc_zero_prec0_undefbehav_bench, "{return test(\"%.0p\", 0);}"},
	{1, 178, "p_ftfc_5w_throwswarning", p_ftfc_5w_throwswarning, p_ftfc_5w_throwswarning_bench, "{return test(\"%5p\", 0);}"},
	{1, 179, "p_basic", p_basic, p_basic_bench, "{return test(\"%p%p%p%p%p%p%p%p%p%p%p%p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 180, "p_width_fit", p_width_fit, p_width_fit_bench, "{return test(\"%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 181, "p_width_nofit", p_width_nofit, p_width_nofit_bench, "{return test(\"%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 182, "p_width_16", p_width_16, p_width_16_bench, "{return test(\"%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 183, "p_width_8", p_width_8, p_width_8_bench, "{return test(\"%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 184, "p_width_32", p_width_32, p_width_32_bench, "{return test(\"%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 185, "p_width_fit_lj", p_width_fit_lj, p_width_fit_lj_bench, "{return test(\"%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 186, "p_width_nofit_lj", p_width_nofit_lj, p_width_nofit_lj_bench, "{return test(\"%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 187, "p_width_16_lj", p_width_16_lj, p_width_16_lj_bench, "{return test(\"%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 188, "p_width_8_lj", p_width_8_lj, p_width_8_lj_bench, "{return test(\"%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 189, "p_width_32_lj", p_width_32_lj, p_width_32_lj_bench, "{return test(\"%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p\",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}"},
	{1, 190, "d_basic_pos", d_basic_pos, d_basic_pos_bench, "{return test(\"this %d number\", 17);}"},
	{1, 191, "d_basic_neg", d_basic_neg, d_basic_neg_bench, "{return test(\"this %d number\", -267);}"},
	{1, 192, "d_basic_zero", d_basic_zero, d_basic_zero_bench, "{return test(\"this %d number\", 0);}"},
	{1, 193, "d_basic_onlypos", d_basic_onlypos, d_basic_onlypos_bench, "{return test(\"%d\", 3);}"},
	{1, 194, "d_basic_onlyneg", d_basic_onlyneg, d_basic_onlyneg_bench, "{return test(\"%d\", -1);}"},
	{1, 195, "d_basic_onlyzero", d_basic_onlyzero, d_basic_onlyzero_bench, "{return test(\"%d\", 0);}"},
	{1, 196, "d_intmax", d_intmax, d_intmax_bench, "{return test(\"%d\",  2147483647);}"},
	{1, 197, "d_intmin", d_intmin, d_intmin_bench, "{return test(\"%d\", (int)(-2147483678));}"},
	{1, 198, "d_width_pos_fits", d_width_pos_fits, d_width_pos_fits_bench, "{return test(\"%7d\", 33);}"},
	{1, 199, "d_width_neg_fits", d_width_neg_fits, d_width_neg_fits_bench, "{return test(\"%7d\", -14);}"},
	{1, 200, "d_width_zero_fits", d_width_zero_fits, d_width_zero_fits_bench, "{return test(\"%3d\", 0);}"},
	{1, 201, "d_width_pos_exactfit", d_width_pos_exactfit, d_width_pos_exactfit_bench, "{return test(\"%5d\", 52625);}"},
	{1, 202, "d_width_neg_exactfit", d_width_neg_exactfit, d_width_neg_exactfit_bench, "{return test(\"%5d\", -2562);}"},
	{1, 203, "d_width_pos_nofit", d_width_pos_nofit, d_width_pos_nofit_bench, "{return test(\"%4d\", 94827);}"},
	{1, 204, "d_width_neg_nofit", d_width_neg_nofit, d_width_neg_nofit_bench, "{return test(\"%4d\", -2464);}"},
	{1, 205, "d_width_pos_fits_lj", d_width_pos_fits_lj, d_width_pos_fits_lj_bench, "{return test(\"%-7d\", 33);}"},
	{1, 206, "d_width_neg_fits_lj", d_width_neg_fits_lj, d_width_neg_fits_lj_bench, "{return test(\"%-7d\", -14);}"},
	{1, 207, "d_width_zero_fits_lj", d_width_zero_fits_lj, d_width_zero_fits_lj_bench, "{return test(\"%-3d\", 0);}"},
	{1, 208, "d_width_pos_exactfit_lj", d_width_pos_exactfit_lj, d_width_pos_exactfit_lj_bench, "{return test(\"%-5d\", 52625);}"},
	{1, 209, "d_width_neg_exactfit_lj", d_width_neg_exactfit_lj, d_width_neg_exactfit_lj_bench, "{return test(\"%-5d\", -2562);}"},
	{1, 210, "d_width_pos_nofit_lj", d_width_pos_nofit_lj, d_width_pos_nofit_lj_bench, "{return test(\"%-4d\", 94827);}"},
	{1, 211, "d_width_neg_nofit_lj", d_width_neg_nofit_lj, d_width_neg_nofit_lj_bench, "{return test(\"%-4d\", -2464);}"},
	{1, 212, "d_prec_fits_pos", d_prec_fits_pos, d_prec_fits_pos_bench, "{return test(\"%.5d\", 2);}"},
	{1, 213, "d_prec_fits_neg", d_prec_fits_neg, d_prec_fits_neg_bench, "{return test(\"%.6d\", -3);}"},
	{1, 214, "d_prec_fits_zero", d_prec_fits_zero, d_prec_fits_zero_bench, "{return test(\"%.3d\", 0);}"},
	{1, 215, "d_prec_exactfit_pos", d_prec_exactfit_pos, d_prec_exactfit_pos_bench, "{return test(\"%.4d\", 5263);}"},
	{1, 216, "d_prec_exactfit_neg", d_prec_exactfit_neg, d_prec_exactfit_neg_bench, "{return test(\"%.4d\", -2372);}"},
	{1, 217, "d_prec_nofit_pos", d_prec_nofit_pos, d_prec_nofit_pos_bench, "{return test(\"%.3d\", 13862);}"},
	{1, 218, "d_prec_nofit_neg", d_prec_nofit_neg, d_prec_nofit_neg_bench, "{return test(\"%.3d\",-23646);}"},
	{1, 219, "d_zp_pos_fits", d_zp_pos_fits, d_zp_pos_fits_bench, "{return test(\"%05d\", 43);}"},
	{1, 220, "d_zp_neg_fits", d_zp_neg_fits, d_zp_neg_fits_bench, "{return test(\"%07d\", -54);}"},
	{1, 221, "d_zp_zero_fits", d_zp_zero_fits, d_zp_zero_fits_bench, "{return test(\"%03d\", 0);}"},
	{1, 222, "d_zp_pos_exactfit", d_zp_pos_exactfit, d_zp_pos_exactfit_bench, "{return test(\"%03d\", 634);}"},
	{1, 223, "d_zp_neg_exactfit", d_zp_neg_exactfit, d_zp_neg_exactfit_bench, "{return test(\"%04d\", -532);}"},
	{1, 224, "d_zp_neg_minus1fit", d_zp_neg_minus1fit, d_zp_neg_minus1fit_bench, "{return test(\"%04d\", -4825);}"},
	{1, 225, "d_prec_width_fit_fit_pos", d_prec_width_fit_fit_pos, d_prec_width_fit_fit_pos_bench, "{return test(\"%8.5d\", 34);}"},
	{1, 226, "d_prec_width_fit_fit_neg", d_prec_width_fit_fit_neg, d_prec_width_fit_fit_neg_bench, "{return test(\"%10.5d\", -216);}"},
	{1, 227, "d_prec_width_fit_fit_zero", d_prec_width_fit_fit_zero, d_prec_width_fit_fit_zero_bench, "{return test(\"%8.5d\", 0);}"},
	{1, 228, "d_prec_width_nofit_fit_pos", d_prec_width_nofit_fit_pos, d_prec_width_nofit_fit_pos_bench, "{return test(\"%8.3d\", 8375);}"},
	{1, 229, "d_prec_width_nofit_fit_neg", d_prec_width_nofit_fit_neg, d_prec_width_nofit_fit_neg_bench, "{return test(\"%8.3d\", -8473);}"},
	{1, 230, "d_prec_width_fit_nofit_pos", d_prec_width_fit_nofit_pos, d_prec_width_fit_nofit_pos_bench, "{return test(\"%3.7d\", 3267);}"},
	{1, 231, "d_prec_width_fit_nofit_neg", d_prec_width_fit_nofit_neg, d_prec_width_fit_nofit_neg_bench, "{return test(\"%3.7d\", -2375);}"},
	{1, 232, "d_prec_width_nofit_nofit_pos", d_prec_width_nofit_nofit_pos, d_prec_width_nofit_nofit_pos_bench, "{return test(\"%3.3d\", 6983);}"},
	{1, 233, "d_prec_width_nofit_nofit_neg", d_prec_width_nofit_nofit_neg, d_prec_width_nofit_nofit_neg_bench, "{return test(\"%3.3d\", -8462);}"},
	{1, 234, "d_prec_width_fit_fit_pos_lj", d_prec_width_fit_fit_pos_lj, d_prec_width_fit_fit_pos_lj_bench, "{return test(\"%-8.5d\", 34);}"},
	{1, 235, "d_prec_width_fit_fit_neg_lj", d_prec_width_fit_fit_neg_lj, d_prec_width_fit_fit_neg_lj_bench, "{return test(\"%-10.5d\", -216);}"},
	{1, 236, "d_prec_width_fit_fit_zero_lj", d_prec_width_fit_fit_zero_lj, d_prec_width_fit_fit_zero_lj_bench, "{return test(\"%-8.5d\", 0);}"},
	{1, 237, "d_prec_width_nofit_fit_pos_lj", d_prec_width_nofit_fit_pos_lj, d_prec_width_nofit_fit_pos_lj_bench, "{return test(\"%-8.3d\", 8375);}"},
	{1, 238, "d_prec_width_nofit_fit_neg_lj", d_prec_width_nofit_fit_neg_lj, d_prec_width_nofit_fit_neg_lj_bench, "{return test(\"%-8.3d\", -8473);}"},
	{1, 239, "d_prec_width_fit_nofit_pos_lj", d_prec_width_fit_nofit_pos_lj, d_prec_width_fit_nofit_pos_lj_bench, "{return test(\"%-3.7d\", 3267);}"},
	{1, 240, "d_prec_width_fit_nofit_neg_lj", d_prec_width_fit_nofit_neg_lj, d_prec_width_fit_nofit_neg_lj_bench, "{return test(\"%-3.7d\", -2375);}"},
	{1, 241, "d_prec_width_nofit_nofit_pos_lj", d_prec_width_nofit_nofit_pos_lj, d_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"%-3.3d\", 6983);}"},
	{1, 242, "d_prec_width_nofit_nofit_neg_lj", d_prec_width_nofit_nofit_neg_lj, d_prec_width_nofit_nofit_neg_lj_bench, "{return test(\"%-3.3d\", -8462);}"},
	{1, 243, "d_prec_width_ff_pos_zp", d_prec_width_ff_pos_zp, d_prec_width_ff_pos_zp_bench, "{return test(\"%08.5d\", 34);}"},
	{1, 244, "d_prec_width_ff_neg_zp", d_prec_width_ff_neg_zp, d_prec_width_ff_neg_zp_bench, "{return test(\"%010.5d\", -216);}"},
	{1, 245, "d_prec_width_ff_zero_zp", d_prec_width_ff_zero_zp, d_prec_width_ff_zero_zp_bench, "{return test(\"%08.5d\", 0);}"},
	{1, 246, "d_prec_width_nf_pos_zp", d_prec_width_nf_pos_zp, d_prec_width_nf_pos_zp_bench, "{return test(\"%08.3d\", 8375);}"},
	{1, 247, "d_prec_width_nf_neg_zp", d_prec_width_nf_neg_zp, d_prec_width_nf_neg_zp_bench, "{return test(\"%08.3d\", -8473);}"},
	{1, 248, "d_prec_width_fn_pos_zp", d_prec_width_fn_pos_zp, d_prec_width_fn_pos_zp_bench, "{return test(\"%03.7d\", 3267);}"},
	{1, 249, "d_prec_width_fn_neg_zp", d_prec_width_fn_neg_zp, d_prec_width_fn_neg_zp_bench, "{return test(\"%03.7d\", -2375);}"},
	{1, 250, "d_prec_width_nn_pos_zp", d_prec_width_nn_pos_zp, d_prec_width_nn_pos_zp_bench, "{return test(\"%03.3d\", 6983);}"},
	{1, 251, "d_prec_width_nn_neg_zp", d_prec_width_nn_neg_zp, d_prec_width_nn_neg_zp_bench, "{return test(\"%03.3d\", -8462);}"},
	{1, 252, "d_prec_width_ff_pos_lj_zp_ignoreflag", d_prec_width_ff_pos_lj_zp_ignoreflag, d_prec_width_ff_pos_lj_zp_ignoreflag_bench, "{return test(\"%0-8.5d\", 34);}"},
	{1, 253, "d_prec_width_ff_neg_ljzp_ignoreflag", d_prec_width_ff_neg_ljzp_ignoreflag, d_prec_width_ff_neg_ljzp_ignoreflag_bench, "{return test(\"%0-10.5d\", -216);}"},
	{1, 254, "d_prec_width_ff_zero_ljzp_ignoreflag", d_prec_width_ff_zero_ljzp_ignoreflag, d_prec_width_ff_zero_ljzp_ignoreflag_bench, "{return test(\"%0-8.5d\", 0);}"},
	{1, 255, "d_prec_width_nf_pos_ljzp_ignoreflag", d_prec_width_nf_pos_ljzp_ignoreflag, d_prec_width_nf_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.3d\", 8375);}"},
	{1, 256, "d_prec_width_nf_neg_ljzp_ignoreflag", d_prec_width_nf_neg_ljzp_ignoreflag, d_prec_width_nf_neg_ljzp_ignoreflag_bench, "{return test(\"%0-8.3d\", -8473);}"},
	{1, 257, "d_prec_width_fn_pos_ljzp_ignoreflag", d_prec_width_fn_pos_ljzp_ignoreflag, d_prec_width_fn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.7d\", 3267);}"},
	{1, 258, "d_prec_width_fn_neg_ljzp_ignoreflag", d_prec_width_fn_neg_ljzp_ignoreflag, d_prec_width_fn_neg_ljzp_ignoreflag_bench, "{return test(\"%0-3.7d\", -2375);}"},
	{1, 259, "d_prec_width_nn_pos_ljzp_ignoreflag", d_prec_width_nn_pos_ljzp_ignoreflag, d_prec_width_nn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.3d\", 6983);}"},
	{1, 260, "d_prec_width_nn_neg_ljzp_ignoreflag", d_prec_width_nn_neg_ljzp_ignoreflag, d_prec_width_nn_neg_ljzp_ignoreflag_bench, "{return test(\"%0-3.3d\", -8462);}"},
	{1, 261, "d_prec0val0_basic", d_prec0val0_basic, d_prec0val0_basic_bench, "{return test(\"%.0d\", 0);}"},
	{1, 262, "d_prec0val0_implicit", d_prec0val0_implicit, d_prec0val0_implicit_bench, "{return test(\"%.d\", 0);}"},
	{1, 263, "d_prec0val0_w", d_prec0val0_w, d_prec0val0_w_bench, "{return test(\"%5.0d\", 0);}"},
	{1, 264, "d_prec0val0_w_impl", d_prec0val0_w_impl, d_prec0val0_w_impl_bench, "{return test(\"%5.d\", 0);}"},
	{1, 265, "d_prec0val0_wlj", d_prec0val0_wlj, d_prec0val0_wlj_bench, "{return test(\"%-5.0d\", 0);}"},
	{1, 266, "d_prec0val0_wlj_impl", d_prec0val0_wlj_impl, d_prec0val0_wlj_impl_bench, "{return test(\"%-5.d\", 0);}"},
	{1, 267, "i_basic_pos", i_basic_pos, i_basic_pos_bench, "{return test(\"this %i number\", 17);}"},
	{1, 268, "i_basic_neg", i_basic_neg, i_basic_neg_bench, "{return test(\"this %i number\", -267);}"},
	{1, 269, "i_basic_zero", i_basic_zero, i_basic_zero_bench, "{return test(\"this %i number\", 0);}"},
	{1, 270, "i_basic_onlypos", i_basic_onlypos, i_basic_onlypos_bench, "{return test(\"%i\", 3);}"},
	{1, 271, "i_basic_onlyneg", i_basic_onlyneg, i_basic_onlyneg_bench, "{return test(\"%i\", -1);}"},
	{1, 272, "i_basic_onlyzero", i_basic_onlyzero, i_basic_onlyzero_bench, "{return test(\"%i\", 0);}"},
	{1, 273, "i_intmax", i_intmax, i_intmax_bench, "{return test(\"%i\",  2147483647);}"},
	{1, 274, "i_intmin", i_intmin, i_intmin_bench, "{return test(\"%i\", (int)(-2147483678));}"},
	{1, 275, "i_width_pos_fits", i_width_pos_fits, i_width_pos_fits_bench, "{return test(\"%7i\", 33);}"},
	{1, 276, "i_width_neg_fits", i_width_neg_fits, i_width_neg_fits_bench, "{return test(\"%7i\", -14);}"},
	{1, 277, "i_width_zero_fits", i_width_zero_fits, i_width_zero_fits_bench, "{return test(\"%3i\", 0);}"},
	{1, 278, "i_width_pos_exactfit", i_width_pos_exactfit, i_width_pos_exactfit_bench, "{return test(\"%5i\", 52625);}"},
	{1, 279, "i_width_neg_exactfit", i_width_neg_exactfit, i_width_neg_exactfit_bench, "{return test(\"%5i\", -2562);}"},
	{1, 280, "i_width_pos_nofit", i_width_pos_nofit, i_width_pos_nofit_bench, "{return test(\"%4i\", 94827);}"},
	{1, 281, "i_width_neg_nofit", i_width_neg_nofit, i_width_neg_nofit_bench, "{return test(\"%4i\", -2464);}"},
	{1, 282, "i_width_pos_fits_lj", i_width_pos_fits_lj, i_width_pos_fits_lj_bench, "{return test(\"%-7i\", 33);}"},
	{1, 283, "i_width_neg_fits_lj", i_width_neg_fits_lj, i_width_neg_fits_lj_bench, "{return test(\"%-7i\", -14);}"},
	{1, 284, "i_width_zero_fits_lj", i_width_zero_fits_lj, i_width_zero_fits_lj_bench, "{return test(\"%-3i\", 0);}"},
	{1, 285, "i_width_pos_exactfit_lj", i_width_pos_exactfit_lj, i_width_pos_exactfit_lj_bench, "{return test(\"%-5i\", 52625);}"},
	{1, 286, "i_width_neg_exactfit_lj", i_width_neg_exactfit_lj, i_width_neg_exactfit_lj_bench, "{return test(\"%-5i\", -2562);}"},
	{1, 287, "i_width_pos_nofit_lj", i_width_pos_nofit_lj, i_width_pos_nofit_lj_bench, "{return test(\"%-4i\", 94827);}"},
	{1, 288, "i_width_neg_nofit_lj", i_width_neg_nofit_lj, i_width_neg_nofit_lj_bench, "{return test(\"%-4i\", -2464);}"},
	{1, 289, "i_prec_fits_pos", i_prec_fits_pos, i_prec_fits_pos_bench, "{return test(\"%.5i\", 2);}"},
	{1, 290, "i_prec_fits_neg", i_prec_fits_neg, i_prec_fits_neg_bench, "{return test(\"%.6i\", -3);}"},
	{1, 291, "i_prec_fits_zero", i_prec_fits_zero, i_prec_fits_zero_bench, "{return test(\"%.3i\", 0);}"},
	{1, 292, "i_prec_exactfit_pos", i_prec_exactfit_pos, i_prec_exactfit_pos_bench, "{return test(\"%.4i\", 5263);}"},
	{1, 293, "i_prec_exactfit_neg", i_prec_exactfit_neg, i_prec_exactfit_neg_bench, "{return test(\"%.4i\", -2372);}"},
	{1, 294, "i_prec_nofit_pos", i_prec_nofit_pos, i_prec_nofit_pos_bench, "{return test(\"%.3i\", 13862);}"},
	{1, 295, "i_prec_nofit_neg", i_prec_nofit_neg, i_prec_nofit_neg_bench, "{return test(\"%.3i\",-23646);}"},
	{1, 296, "i_zp_pos_fits", i_zp_pos_fits, i_zp_pos_fits_bench, "{return test(\"%05i\", 43);}"},
	{1, 297, "i_zp_neg_fits", i_zp_neg_fits, i_zp_neg_fits_bench, "{return test(\"%07i\", -54);}"},
	{1, 298, "i_zp_zero_fits", i_zp_zero_fits, i_zp_zero_fits_bench, "{return test(\"%03i\", 0);}"},
	{1, 299, "i_zp_pos_exactfit", i_zp_pos_exactfit, i_zp_pos_exactfit_bench, "{return test(\"%03i\", 634);}"},
	{1, 300, "i_zp_neg_exactfit", i_zp_neg_exactfit, i_zp_neg_exactfit_bench, "{return test(\"%04i\", -532);}"},
	{1, 301, "i_zp_neg_minus1fit", i_zp_neg_minus1fit, i_zp_neg_minus1fit_bench, "{return test(\"%04i\", -4825);}"},
	{1, 302, "i_prec_width_fit_fit_pos", i_prec_width_fit_fit_pos, i_prec_width_fit_fit_pos_bench, "{return test(\"%8.5i\", 34);}"},
	{1, 303, "i_prec_width_fit_fit_neg", i_prec_width_fit_fit_neg, i_prec_width_fit_fit_neg_bench, "{return test(\"%10.5i\", -216);}"},
	{1, 304, "i_prec_width_fit_fit_zero", i_prec_width_fit_fit_zero, i_prec_width_fit_fit_zero_bench, "{return test(\"%8.5i\", 0);}"},
	{1, 305, "i_prec_width_nofit_fit_pos", i_prec_width_nofit_fit_pos, i_prec_width_nofit_fit_pos_bench, "{return test(\"%8.3i\", 8375);}"},
	{1, 306, "i_prec_width_nofit_fit_neg", i_prec_width_nofit_fit_neg, i_prec_width_nofit_fit_neg_bench, "{return test(\"%8.3i\", -8473);}"},
	{1, 307, "i_prec_width_fit_nofit_pos", i_prec_width_fit_nofit_pos, i_prec_width_fit_nofit_pos_bench, "{return test(\"%3.7i\", 3267);}"},
	{1, 308, "i_prec_width_fit_nofit_neg", i_prec_width_fit_nofit_neg, i_prec_width_fit_nofit_neg_bench, "{return test(\"%3.7i\", -2375);}"},
	{1, 309, "i_prec_width_nofit_nofit_pos", i_prec_width_nofit_nofit_pos, i_prec_width_nofit_nofit_pos_bench, "{return test(\"%3.3i\", 6983);}"},
	{1, 310, "i_prec_width_nofit_nofit_neg", i_prec_width_nofit_nofit_neg, i_prec_width_nofit_nofit_neg_bench, "{return test(\"%3.3i\", -8462);}"},
	{1, 311, "i_prec_width_fit_fit_pos_lj", i_prec_width_fit_fit_pos_lj, i_prec_width_fit_fit_pos_lj_bench, "{return test(\"%-8.5i\", 34);}"},
	{1, 312, "i_prec_width_fit_fit_neg_lj", i_prec_width_fit_fit_neg_lj, i_prec_width_fit_fit_neg_lj_bench, "{return test(\"%-10.5i\", -216);}"},
	{1, 313, "i_prec_width_fit_fit_zero_lj", i_prec_width_fit_fit_zero_lj, i_prec_width_fit_fit_zero_lj_bench, "{return test(\"%-8.5i\", 0);}"},
	{1, 314, "i_prec_width_nofit_fit_pos_lj", i_prec_width_nofit_fit_pos_lj, i_prec_width_nofit_fit_pos_lj_bench, "{return test(\"%-8.3i\", 8375);}"},
	{1, 315, "i_prec_width_nofit_fit_neg_lj", i_prec_width_nofit_fit_neg_lj, i_prec_width_nofit_fit_neg_lj_bench, "{return test(\"%-8.3i\", -8473);}"},
	{1, 316, "i_prec_width_fit_nofit_pos_lj", i_prec_width_fit_nofit_pos_lj, i_prec_width_fit_nofit_pos_lj_bench, "{return test(\"%-3.7i\", 3267);}"},
	{1, 317, "i_prec_width_fit_nofit_neg_lj", i_prec_width_fit_nofit_neg_lj, i_prec_width_fit_nofit_neg_lj_bench, "{return test(\"%-3.7i\", -2375);}"},
	{1, 318, "i_prec_width_nofit_nofit_pos_lj", i_prec_width_nofit_nofit_pos_lj, i_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"%-3.3i\", 6983);}"},
	{1, 319, "i_prec_width_nofit_nofit_neg_lj", i_prec_width_nofit_nofit_neg_lj, i_prec_width_nofit_nofit_neg_lj_bench, "{return test(\"%-3.3i\", -8462);}"},
	{1, 320, "i_prec_width_ff_pos_zp", i_prec_width_ff_pos_zp, i_prec_width_ff_pos_zp_bench, "{return test(\"%08.5i\", 34);}"},
	{1, 321, "i_prec_width_ff_neg_zp", i_prec_width_ff_neg_zp, i_prec_width_ff_neg_zp_bench, "{return test(\"%010.5i\", -216);}"},
	{1, 322, "i_prec_width_ff_zero_zp", i_prec_width_ff_zero_zp, i_prec_width_ff_zero_zp_bench, "{return test(\"%08.5i\", 0);}"},
	{1, 323, "i_prec_width_nf_pos_zp", i_prec_width_nf_pos_zp, i_prec_width_nf_pos_zp_bench, "{return test(\"%08.3i\", 8375);}"},
	{1, 324, "i_prec_width_nf_neg_zp", i_prec_width_nf_neg_zp, i_prec_width_nf_neg_zp_bench, "{return test(\"%08.3i\", -8473);}"},
	{1, 325, "i_prec_width_fn_pos_zp", i_prec_width_fn_pos_zp, i_prec_width_fn_pos_zp_bench, "{return test(\"%03.7i\", 3267);}"},
	{1, 326, "i_prec_width_fn_neg_zp", i_prec_width_fn_neg_zp, i_prec_width_fn_neg_zp_bench, "{return test(\"%03.7i\", -2375);}"},
	{1, 327, "i_prec_width_nn_pos_zp", i_prec_width_nn_pos_zp, i_prec_width_nn_pos_zp_bench, "{return test(\"%03.3i\", 6983);}"},
	{1, 328, "i_prec_width_nn_neg_zp", i_prec_width_nn_neg_zp, i_prec_width_nn_neg_zp_bench, "{return test(\"%03.3i\", -8462);}"},
	{1, 329, "i_prec_width_ff_pos_lj_zp_ignoreflag", i_prec_width_ff_pos_lj_zp_ignoreflag, i_prec_width_ff_pos_lj_zp_ignoreflag_bench, "{return test(\"%0-8.5i\", 34);}"},
	{1, 330, "i_prec_width_ff_neg_ljzp_ignoreflag", i_prec_width_ff_neg_ljzp_ignoreflag, i_prec_width_ff_neg_ljzp_ignoreflag_bench, "{return test(\"%0-10.5i\", -216);}"},
	{1, 331, "i_prec_width_ff_zero_ljzp_ignoreflag", i_prec_width_ff_zero_ljzp_ignoreflag, i_prec_width_ff_zero_ljzp_ignoreflag_bench, "{return test(\"%0-8.5i\", 0);}"},
	{1, 332, "i_prec_width_nf_pos_ljzp_ignoreflag", i_prec_width_nf_pos_ljzp_ignoreflag, i_prec_width_nf_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.3i\", 8375);}"},
	{1, 333, "i_prec_width_nf_neg_ljzp_ignoreflag", i_prec_width_nf_neg_ljzp_ignoreflag, i_prec_width_nf_neg_ljzp_ignoreflag_bench, "{return test(\"%0-8.3i\", -8473);}"},
	{1, 334, "i_prec_width_fn_pos_ljzp_ignoreflag", i_prec_width_fn_pos_ljzp_ignoreflag, i_prec_width_fn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.7i\", 3267);}"},
	{1, 335, "i_prec_width_fn_neg_ljzp_ignoreflag", i_prec_width_fn_neg_ljzp_ignoreflag, i_prec_width_fn_neg_ljzp_ignoreflag_bench, "{return test(\"%0-3.7i\", -2375);}"},
	{1, 336, "i_prec_width_nn_pos_ljzp_ignoreflag", i_prec_width_nn_pos_ljzp_ignoreflag, i_prec_width_nn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.3i\", 6983);}"},
	{1, 337, "i_prec_width_nn_neg_ljzp_ignoreflag", i_prec_width_nn_neg_ljzp_ignoreflag, i_prec_width_nn_neg_ljzp_ignoreflag_bench, "{return test(\"%0-3.3i\", -8462);}"},
	{1, 338, "i_prec0val0_basic", i_prec0val0_basic, i_prec0val0_basic_bench, "{return test(\"%.0i\", 0);}"},
	{1, 339, "i_prec0val0_implicit", i_prec0val0_implicit, i_prec0val0_implicit_bench, "{return test(\"%.i\", 0);}"},
	{1, 340, "i_prec0val0_w", i_prec0val0_w, i_prec0val0_w_bench, "{return test(\"%5.0i\", 0);}"},
	{1, 341, "i_prec0val0_w_impl", i_prec0val0_w_impl, i_prec0val0_w_impl_bench, "{return test(\"%5.i\", 0);}"},
	{1, 342, "i_prec0val0_wlj", i_prec0val0_wlj, i_prec0val0_wlj_bench, "{return test(\"%-5.0i\", 0);}"},
	{1, 343, "i_prec0val0_wlj_impl", i_prec0val0_wlj_impl, i_prec0val0_wlj_impl_bench, "{return test(\"%-5.i\", 0);}"},
	{1, 344, "u_basic_pos", u_basic_pos, u_basic_pos_bench, "{return test(\"this %u number\", 17);}"},
	{1, 345, "u_basic_zero", u_basic_zero, u_basic_zero_bench, "{return test(\"this %u number\", 0);}"},
	{1, 346, "u_basic_onlypos", u_basic_onlypos, u_basic_onlypos_bench, "{return test(\"%u\", 3);}"},
	{1, 347, "u_uintmax", u_uintmax, u_uintmax_bench, "{return test(\"%u\", 4294967295u);}"},
	{1, 348, "u_width_pos_fits", u_width_pos_fits, u_width_pos_fits_bench, "{return test(\"%7u\", 33);}"},
	{1, 349, "u_width_zero_fits", u_width_zero_fits, u_width_zero_fits_bench, "{return test(\"%3u\", 0);}"},
	{1, 350, "u_width_pos_exactfit", u_width_pos_exactfit, u_width_pos_exactfit_bench, "{return test(\"%5u\", 52625);}"},
	{1, 351, "u_width_pos_nofit", u_width_pos_nofit, u_width_pos_nofit_bench, "{return test(\"%4u\", 94827);}"},
	{1, 352, "u_width_pos_fits_lj", u_width_pos_fits_lj, u_width_pos_fits_lj_bench, "{return test(\"%-7u\", 33);}"},
	{1, 353, "u_width_zero_fits_lj", u_width_zero_fits_lj, u_width_zero_fits_lj_bench, "{return test(\"%-3u\", 0);}"},
	{1, 354, "u_width_pos_exactfit_lj", u_width_pos_exactfit_lj, u_width_pos_exactfit_lj_bench, "{return test(\"%-5u\", 52625);}"},
	{1, 355, "u_width_pos_nofit_lj", u_width_pos_nofit_lj, u_width_pos_nofit_lj_bench, "{return test(\"%-4u\", 94827);}"},
	{1, 356, "u_prec_fits_pos", u_prec_fits_pos, u_prec_fits_pos_bench, "{return test(\"%.5u\", 2);}"},
	{1, 357, "u_prec_fits_zero", u_prec_fits_zero, u_prec_fits_zero_bench, "{return test(\"%.3u\", 0);}"},
	{1, 358, "u_prec_exactfit_pos", u_prec_exactfit_pos, u_prec_exactfit_pos_bench, "{return test(\"%.4u\", 5263);}"},
	{1, 359, "u_prec_nofit_pos", u_prec_nofit_pos, u_prec_nofit_pos_bench, "{return test(\"%.3u\", 13862);}"},
	{1, 360, "u_zp_pos_fits", u_zp_pos_fits, u_zp_pos_fits_bench, "{return test(\"%05u\", 43);}"},
	{1, 361, "u_zp_zero_fits", u_zp_zero_fits, u_zp_zero_fits_bench, "{return test(\"%03u\", 0);}"},
	{1, 362, "u_zp_pos_exactfit", u_zp_pos_exactfit, u_zp_pos_exactfit_bench, "{return test(\"%03u\", 634);}"},
	{1, 363, "u_prec_width_fit_fit_pos", u_prec_width_fit_fit_pos, u_prec_width_fit_fit_pos_bench, "{return test(\"%8.5u\", 34);}"},
	{1, 364, "u_prec_width_fit_fit_zero", u_prec_width_fit_fit_zero, u_prec_width_fit_fit_zero_bench, "{return test(\"%8.5u\", 0);}"},
	{1, 365, "u_prec_width_nofit_fit_pos", u_prec_width_nofit_fit_pos, u_prec_width_nofit_fit_pos_bench, "{return test(\"%8.3u\", 8375);}"},
	{1, 366, "u_prec_width_fit_nofit_pos", u_prec_width_fit_nofit_pos, u_prec_width_fit_nofit_pos_bench, "{return test(\"%3.7u\", 3267);}"},
	{1, 367, "u_prec_width_nofit_nofit_pos", u_prec_width_nofit_nofit_pos, u_prec_width_nofit_nofit_pos_bench, "{return test(\"%3.3u\", 6983);}"},
	{1, 368, "u_prec_width_fit_fit_pos_lj", u_prec_width_fit_fit_pos_lj, u_prec_width_fit_fit_pos_lj_bench, "{return test(\"%-8.5u\", 34);}"},
	{1, 369, "u_prec_width_fit_fit_zero_lj", u_prec_width_fit_fit_zero_lj, u_prec_width_fit_fit_zero_lj_bench, "{return test(\"%-8.5u\", 0);}"},
	{1, 370, "u_prec_width_nofit_fit_pos_lj", u_prec_width_nofit_fit_pos_lj, u_prec_width_nofit_fit_pos_lj_bench, "{return test(\"%-8.3u\", 8375);}"},
	{1, 371, "u_prec_width_fit_nofit_pos_lj", u_prec_width_fit_nofit_pos_lj, u_prec_width_fit_nofit_pos_lj_bench, "{return test(\"%-3.7u\", 3267);}"},
	{1, 372, "u_prec_width_nofit_nofit_pos_lj", u_prec_width_nofit_nofit_pos_lj, u_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"%-3.3u\", 6983);}"},
	{1, 373, "u_prec_width_ff_pos_zp", u_prec_width_ff_pos_zp, u_prec_width_ff_pos_zp_bench, "{return test(\"%08.5u\", 34);}"},
	{1, 374, "u_prec_width_ff_zero_zp", u_prec_width_ff_zero_zp, u_prec_width_ff_zero_zp_bench, "{return test(\"%08.5u\", 0);}"},
	{1, 375, "u_prec_width_nf_pos_zp", u_prec_width_nf_pos_zp, u_prec_width_nf_pos_zp_bench, "{return test(\"%08.3u\", 8375);}"},
	{1, 376, "u_prec_width_fn_pos_zp", u_prec_width_fn_pos_zp, u_prec_width_fn_pos_zp_bench, "{return test(\"%03.7u\", 3267);}"},
	{1, 377, "u_prec_width_nn_pos_zp", u_prec_width_nn_pos_zp, u_prec_width_nn_pos_zp_bench, "{return test(\"%03.3u\", 6983);}"},
	{1, 378, "u_prec_width_ff_pos_ljzp_ignoreflag", u_prec_width_ff_pos_ljzp_ignoreflag, u_prec_width_ff_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.5u\", 34);}"},
	{1, 379, "u_prec_width_ff_zero_ljzp_ignoreflag", u_prec_width_ff_zero_ljzp_ignoreflag, u_prec_width_ff_zero_ljzp_ignoreflag_bench, "{return test(\"%0-8.5u\", 0);}"},
	{1, 380, "u_prec_width_nf_pos_ljzp_ignoreflag", u_prec_width_nf_pos_ljzp_ignoreflag, u_prec_width_nf_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.3u\", 8375);}"},
	{1, 381, "u_prec_width_fn_pos_ljzp_ignoreflag", u_prec_width_fn_pos_ljzp_ignoreflag, u_prec_width_fn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.7u\", 3267);}"},
	{1, 382, "u_prec_width_nn_pos_ljzp_ignoreflag", u_prec_width_nn_pos_ljzp_ignoreflag, u_prec_width_nn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.3u\", 6983);}"},
	{1, 383, "u_prec0val0_basic", u_prec0val0_basic, u_prec0val0_basic_bench, "{return test(\"%.0u\", 0);}"},
	{1, 384, "u_prec0val0_implicit", u_prec0val0_implicit, u_prec0val0_implicit_bench, "{return test(\"%.u\", 0);}"},
	{1, 385, "u_prec0val0_w", u_prec0val0_w, u_prec0val0_w_bench, "{return test(\"%5.0u\", 0);}"},
	{1, 386, "u_prec0val0_w_impl", u_prec0val0_w_impl, u_prec0val0_w_impl_bench, "{return test(\"%5.u\", 0);}"},
	{1, 387, "u_prec0val0_wlj", u_prec0val0_wlj, u_prec0val0_wlj_bench, "{return test(\"%-5.0u\", 0);}"},
	{1, 388, "u_prec0val0_wlj_impl", u_prec0val0_wlj_impl, u_prec0val0_wlj_impl_bench, "{return test(\"%-5.u\", 0);}"},
	{1, 389, "x_basic_pos", x_basic_pos, x_basic_pos_bench, "{return test(\"this %x number\", 17);}"},
	{1, 390, "x_basic_zero", x_basic_zero, x_basic_zero_bench, "{return test(\"this %x number\", 0);}"},
	{1, 391, "x_basic_onlypos", x_basic_onlypos, x_basic_onlypos_bench, "{return test(\"%x\", 3);}"},
	{1, 392, "x_hexlmax", x_hexlmax, x_hexlmax_bench, "{return test(\"%x\", 4294967295u);}"},
	{1, 393, "x_width_pos_fits", x_width_pos_fits, x_width_pos_fits_bench, "{return test(\"%7x\", 33);}"},
	{1, 394, "x_width_zero_fits", x_width_zero_fits, x_width_zero_fits_bench, "{return test(\"%3x\", 0);}"},
	{1, 395, "x_width_pos_exactfit", x_width_pos_exactfit, x_width_pos_exactfit_bench, "{return test(\"%5x\", 52625);}"},
	{1, 396, "x_width_pos_nofit", x_width_pos_nofit, x_width_pos_nofit_bench, "{return test(\"%2x\", 94827);}"},
	{1, 397, "x_width_pos_fits_lj", x_width_pos_fits_lj, x_width_pos_fits_lj_bench, "{return test(\"%-7x\", 33);}"},
	{1, 398, "x_width_zero_fits_lj", x_width_zero_fits_lj, x_width_zero_fits_lj_bench, "{return test(\"%-3x\", 0);}"},
	{1, 399, "x_width_pos_exactfit_lj", x_width_pos_exactfit_lj, x_width_pos_exactfit_lj_bench, "{return test(\"%-5x\", 52625);}"},
	{1, 400, "x_width_pos_nofit_lj", x_width_pos_nofit_lj, x_width_pos_nofit_lj_bench, "{return test(\"%-4x\", 9648627);}"},
	{1, 401, "x_prec_fits_pos", x_prec_fits_pos, x_prec_fits_pos_bench, "{return test(\"%.5x\", 21);}"},
	{1, 402, "x_prec_fits_zero", x_prec_fits_zero, x_prec_fits_zero_bench, "{return test(\"%.3x\", 0);}"},
	{1, 403, "x_prec_exactfit_pos", x_prec_exactfit_pos, x_prec_exactfit_pos_bench, "{return test(\"%.4x\", 5263);}"},
	{1, 404, "x_prec_nofit_pos", x_prec_nofit_pos, x_prec_nofit_pos_bench, "{return test(\"%.3x\", 938862);}"},
	{1, 405, "x_zp_pos_fits", x_zp_pos_fits, x_zp_pos_fits_bench, "{return test(\"%05x\", 43);}"},
	{1, 406, "x_zp_zero_fits", x_zp_zero_fits, x_zp_zero_fits_bench, "{return test(\"%03x\", 0);}"},
	{1, 407, "x_zp_pos_exactfit", x_zp_pos_exactfit, x_zp_pos_exactfit_bench, "{return test(\"%03x\", 698334);}"},
	{1, 408, "x_prec_width_fit_fit_pos", x_prec_width_fit_fit_pos, x_prec_width_fit_fit_pos_bench, "{return test(\"%8.5x\", 34);}"},
	{1, 409, "x_prec_width_fit_fit_zero", x_prec_width_fit_fit_zero, x_prec_width_fit_fit_zero_bench, "{return test(\"%8.5x\", 0);}"},
	{1, 410, "x_prec_width_nofit_fit_pos", x_prec_width_nofit_fit_pos, x_prec_width_nofit_fit_pos_bench, "{return test(\"%8.3x\", 8375);}"},
	{1, 411, "x_prec_width_fit_nofit_pos", x_prec_width_fit_nofit_pos, x_prec_width_fit_nofit_pos_bench, "{return test(\"%2.7x\", 3267);}"},
	{1, 412, "x_prec_width_nofit_nofit_pos", x_prec_width_nofit_nofit_pos, x_prec_width_nofit_nofit_pos_bench, "{return test(\"%3.3x\", 6983);}"},
	{1, 413, "x_prec_width_fit_fit_pos_lj", x_prec_width_fit_fit_pos_lj, x_prec_width_fit_fit_pos_lj_bench, "{return test(\"%-8.5x\", 34);}"},
	{1, 414, "x_prec_width_fit_fit_zero_lj", x_prec_width_fit_fit_zero_lj, x_prec_width_fit_fit_zero_lj_bench, "{return test(\"%-8.5x\", 0);}"},
	{1, 415, "x_prec_width_nofit_fit_pos_lj", x_prec_width_nofit_fit_pos_lj, x_prec_width_nofit_fit_pos_lj_bench, "{return test(\"%-8.3x\", 8375);}"},
	{1, 416, "x_prec_width_fit_nofit_pos_lj", x_prec_width_fit_nofit_pos_lj, x_prec_width_fit_nofit_pos_lj_bench, "{return test(\"%-2.7x\", 3267);}"},
	{1, 417, "x_prec_width_nofit_nofit_pos_lj", x_prec_width_nofit_nofit_pos_lj, x_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"%-3.3x\", 6983);}"},
	{1, 418, "x_prec_width_ff_pos_zp", x_prec_width_ff_pos_zp, x_prec_width_ff_pos_zp_bench, "{return test(\"%08.5x\", 34);}"},
	{1, 419, "x_prec_width_ff_zero_zp", x_prec_width_ff_zero_zp, x_prec_width_ff_zero_zp_bench, "{return test(\"%08.5x\", 0);}"},
	{1, 420, "x_prec_width_nf_pos_zp", x_prec_width_nf_pos_zp, x_prec_width_nf_pos_zp_bench, "{return test(\"%08.3x\", 8375);}"},
	{1, 421, "x_prec_width_fn_pos_zp", x_prec_width_fn_pos_zp, x_prec_width_fn_pos_zp_bench, "{return test(\"%02.7x\", 3267);}"},
	{1, 422, "x_prec_width_nn_pos_zp", x_prec_width_nn_pos_zp, x_prec_width_nn_pos_zp_bench, "{return test(\"%03.3x\", 6983);}"},
	{1, 423, "x_prec_width_ff_pos_ljzp_ignoreflag", x_prec_width_ff_pos_ljzp_ignoreflag, x_prec_width_ff_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.5x\", 34);}"},
	{1, 424, "x_prec_width_ff_zero_ljzp_ignoreflag", x_prec_width_ff_zero_ljzp_ignoreflag, x_prec_width_ff_zero_ljzp_ignoreflag_bench, "{return test(\"%0-8.5x\", 0);}"},
	{1, 425, "x_prec_width_nf_pos_ljzp_ignoreflag", x_prec_width_nf_pos_ljzp_ignoreflag, x_prec_width_nf_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.3x\", 8375);}"},
	{1, 426, "x_prec_width_fn_pos_ljzp_ignoreflag", x_prec_width_fn_pos_ljzp_ignoreflag, x_prec_width_fn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-2.7x\", 3267);}"},
	{1, 427, "x_prec_width_nn_pos_ljzp_ignoreflag", x_prec_width_nn_pos_ljzp_ignoreflag, x_prec_width_nn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.3x\", 6983);}"},
	{1, 428, "x_prec0val0_basic", x_prec0val0_basic, x_prec0val0_basic_bench, "{return test(\"%.0x\", 0);}"},
	{1, 429, "x_prec0val0_implicit", x_prec0val0_implicit, x_prec0val0_implicit_bench, "{return test(\"%.x\", 0);}"},
	{1, 430, "x_prec0val0_w", x_prec0val0_w, x_prec0val0_w_bench, "{return test(\"%5.0x\", 0);}"},
	{1, 431, "x_prec0val0_w_impl", x_prec0val0_w_impl, x_prec0val0_w_impl_bench, "{return test(\"%5.x\", 0);}"},
	{1, 432, "x_prec0val0_wlj", x_prec0val0_wlj, x_prec0val0_wlj_bench, "{return test(\"%-5.0x\", 0);}"},
	{1, 433, "x_prec0val0_wlj_impl", x_prec0val0_wlj_impl, x_prec0val0_wlj_impl_bench, "{return test(\"%-5.x\", 0);}"},
	{1, 434, "X_basic_hexu_pos", X_basic_hexu_pos, X_basic_hexu_pos_bench, "{return test(\"this %X number\", 17);}"},
	{1, 435, "X_basic_hexu_zero", X_basic_hexu_zero, X_basic_hexu_zero_bench, "{return test(\"this %X number\", 0);}"},
	{1, 436, "X_basic_hexu_onlypos", X_basic_hexu_onlypos, X_basic_hexu_onlypos_bench, "{return test(\"%X\", 3);}"},
	{1, 437, "X_hexumax", X_hexumax, X_hexumax_bench, "{return test(\"%X\", 4294967295u);}"},
	{1, 438, "X_width_pos_fits", X_width_pos_fits, X_width_pos_fits_bench, "{return test(\"%7X\", 33);}"},
	{1, 439, "X_width_zero_fits", X_width_zero_fits, X_width_zero_fits_bench, "{return test(\"%3X\", 0);}"},
	{1, 440, "X_width_pos_exactfit", X_width_pos_exactfit, X_width_pos_exactfit_bench, "{return test(\"%5X\", 52625);}"},
	{1, 441, "X_width_pos_nofit", X_width_pos_nofit, X_width_pos_nofit_bench, "{return test(\"%2X\", 94827);}"},
	{1, 442, "X_width_pos_fits_lj", X_width_pos_fits_lj, X_width_pos_fits_lj_bench, "{return test(\"%-7X\", 33);}"},
	{1, 443, "X_width_zero_fits_lj", X_width_zero_fits_lj, X_width_zero_fits_lj_bench, "{return test(\"%-3X\", 0);}"},
	{1, 444, "X_width_pos_exactfit_lj", X_width_pos_exactfit_lj, X_width_pos_exactfit_lj_bench, "{return test(\"%-5X\", 52625);}"},
	{1, 445, "X_width_pos_nofit_lj", X_width_pos_nofit_lj, X_width_pos_nofit_lj_bench, "{return test(\"%-4X\", 9648627);}"},
	{1, 446, "X_prec_fits_pos", X_prec_fits_pos, X_prec_fits_pos_bench, "{return test(\"%.5X\", 21);}"},
	{1, 447, "X_prec_fits_zero", X_prec_fits_zero, X_prec_fits_zero_bench, "{return test(\"%.3X\", 0);}"},
	{1, 448, "X_prec_exactfit_pos", X_prec_exactfit_pos, X_prec_exactfit_pos_bench, "{return test(\"%.4X\", 5263);}"},
	{1, 449, "X_prec_nofit_pos", X_prec_nofit_pos, X_prec_nofit_pos_bench, "{return test(\"%.3X\", 938862);}"},
	{1, 450, "X_zp_pos_fits", X_zp_pos_fits, X_zp_pos_fits_bench, "{return test(\"%05X\", 43);}"},
	{1, 451, "X_zp_zero_fits", X_zp_zero_fits, X_zp_zero_fits_bench, "{return test(\"%03X\", 0);}"},
	{1, 452, "X_zp_pos_exactfit", X_zp_pos_exactfit, X_zp_pos_exactfit_bench, "{return test(\"%03X\", 698334);}"},
	{1, 453, "X_prec_width_fit_fit_pos", X_prec_width_fit_fit_pos, X_prec_width_fit_fit_pos_bench, "{return test(\"%8.5X\", 34);}"},
	{1, 454, "X_prec_width_fit_fit_zero", X_prec_width_fit_fit_zero, X_prec_width_fit_fit_zero_bench, "{return test(\"%8.5X\", 0);}"},
	{1, 455, "X_prec_width_nofit_fit_pos", X_prec_width_nofit_fit_pos, X_prec_width_nofit_fit_pos_bench, "{return test(\"%8.3X\", 8375);}"},
	{1, 456, "X_prec_width_fit_nofit_pos", X_prec_width_fit_nofit_pos, X_prec_width_fit_nofit_pos_bench, "{return test(\"%2.7X\", 3267);}"},
	{1, 457, "X_prec_width_nofit_nofit_pos", X_prec_width_nofit_nofit_pos, X_prec_width_nofit_nofit_pos_bench, "{return test(\"%3.3X\", 6983);}"},
	{1, 458, "X_prec_width_fit_fit_pos_lj", X_prec_width_fit_fit_pos_lj, X_prec_width_fit_fit_pos_lj_bench, "{return test(\"%-8.5X\", 34);}"},
	{1, 459, "X_prec_width_fit_fit_zero_lj", X_prec_width_fit_fit_zero_lj, X_prec_width_fit_fit_zero_lj_bench, "{return test(\"%-8.5X\", 0);}"},
	{1, 460, "X_prec_width_nofit_fit_pos_lj", X_prec_width_nofit_fit_pos_lj, X_prec_width_nofit_fit_pos_lj_bench, "{return test(\"%-8.3X\", 8375);}"},
	{1, 461, "X_prec_width_fit_nofit_pos_lj", X_prec_width_fit_nofit_pos_lj, X_prec_width_fit_nofit_pos_lj_bench, "{return test(\"%-2.7X\", 3267);}"},
	{1, 462, "X_prec_width_nofit_nofit_pos_lj", X_prec_width_nofit_nofit_pos_lj, X_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"%-3.3X\", 6983);}"},
	{1, 463, "X_prec_width_ff_pos_zp", X_prec_width_ff_pos_zp, X_prec_width_ff_pos_zp_bench, "{return test(\"%08.5X\", 34);}"},
	{1, 464, "X_prec_width_ff_zero_zp", X_prec_width_ff_zero_zp, X_prec_width_ff_zero_zp_bench, "{return test(\"%08.5X\", 0);}"},
	{1, 465, "X_prec_width_nf_pos_zp", X_prec_width_nf_pos_zp, X_prec_width_nf_pos_zp_bench, "{return test(\"%08.3X\", 8375);}"},
	{1, 466, "X_prec_width_fn_pos_zp", X_prec_width_fn_pos_zp, X_prec_width_fn_pos_zp_bench, "{return test(\"%02.7X\", 3267);}"},
	{1, 467, "X_prec_width_nn_pos_zp", X_prec_width_nn_pos_zp, X_prec_width_nn_pos_zp_bench, "{return test(\"%03.3X\", 6983);}"},
	{1, 468, "X_prec_width_ff_pos_ljzp_ignoreflag", X_prec_width_ff_pos_ljzp_ignoreflag, X_prec_width_ff_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.5X\", 34);}"},
	{1, 469, "X_prec_width_ff_zero_ljzp_ignoreflag", X_prec_width_ff_zero_ljzp_ignoreflag, X_prec_width_ff_zero_ljzp_ignoreflag_bench, "{return test(\"%0-8.5X\", 0);}"},
	{1, 470, "X_prec_width_nf_pos_ljzp_ignoreflag", X_prec_width_nf_pos_ljzp_ignoreflag, X_prec_width_nf_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.3X\", 8375);}"},
	{1, 471, "X_prec_width_fn_pos_ljzp_ignoreflag", X_prec_width_fn_pos_ljzp_ignoreflag, X_prec_width_fn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-2.7X\", 3267);}"},
	{1, 472, "X_prec_width_nn_pos_ljzp_ignoreflag", X_prec_width_nn_pos_ljzp_ignoreflag, X_prec_width_nn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.3X\", 6983);}"},
	{1, 473, "X_prec0val0_basic", X_prec0val0_basic, X_prec0val0_basic_bench, "{return test(\"%.0X\", 0);}"},
	{1, 474, "X_prec0val0_implicit", X_prec0val0_implicit, X_prec0val0_implicit_bench, "{return test(\"%.X\", 0);}"},
	{1, 475, "X_prec0val0_w", X_prec0val0_w, X_prec0val0_w_bench, "{return test(\"%5.0X\", 0);}"},
	{1, 476, "X_prec0val0_w_impl", X_prec0val0_w_impl, X_prec0val0_w_impl_bench, "{return test(\"%5.X\", 0);}"},
	{1, 477, "X_prec0val0_wlj", X_prec0val0_wlj, X_prec0val0_wlj_bench, "{return test(\"%-5.0X\", 0);}"},
	{1, 478, "X_prec0val0_wlj_impl", X_prec0val0_wlj_impl, X_prec0val0_wlj_impl_bench, "{return test(\"%-5.X\", 0);}"},
	{1, 479, "new2019_star_1", new2019_star_1, new2019_star_1_bench, "{return test(\"%*s\", 32, \"abc\");}"},
	{1, 480, "new2019_star_2", new2019_star_2, new2019_star_2_bench, "{return test(\"%-*s\", 32, \"abc\");}"},
	{1, 481, "new2019_star_3", new2019_star_3, new2019_star_3_bench, "{return test(\"%*s\", 3, \"hello\");}"},
	{1, 482, "new2019_star_4", new2019_star_4, new2019_star_4_bench, "{return test(\"%.*s\", 3, \"hello\");}"},
	{1, 483, "new2019_star_5", new2019_star_5, new2019_star_5_bench, "{return test(\"%.*s\", 0, \"hello\");}"},
	{1, 484, "new2019_star_6", new2019_star_6, new2019_star_6_bench, "{return test(\"%-*.*s\", 7, 3, \"yolo\");}"},
	{1, 485, "new2019_star_7", new2019_star_7, new2019_star_7_bench, "{return test(\"%*i\", 4, 94827);}"},
	{1, 486, "new2019_star_8", new2019_star_8, new2019_star_8_bench, "{return test(\"%*i\", 14, 94827);}"},
	{1, 487, "new2019_star_9", new2019_star_9, new2019_star_9_bench, "{return test(\"%.*i\", 6, -3);}"},
	{1, 488, "new2019_star_10", new2019_star_10, new2019_star_10_bench, "{return test(\"%0*i\", 7, -54);}"},
	{1, 489, "new2019_negstar_1", new2019_negstar_1, new2019_negstar_1_bench, "{return test(\"%*s\", -32, \"abc\");}"},
	{1, 490, "new2019_negstar_2", new2019_negstar_2, new2019_negstar_2_bench, "{return test(\"%-*s\", -32, \"abc\");}"},
	{1, 491, "new2019_negstar_3", new2019_negstar_3, new2019_negstar_3_bench, "{return test(\"%*s\", -3, \"hello\");}"},
	{1, 492, "new2019_negstar_4", new2019_negstar_4, new2019_negstar_4_bench, "{return test(\"%.*s\", -3, \"hello\");}"},
	{1, 493, "new2019_negstar_5", new2019_negstar_5, new2019_negstar_5_bench, "{return test(\"%-*.*s\", -7, -3, \"yolo\");}"},
	{1, 494, "new2019_negstar_6", new2019_negstar_6, new2019_negstar_6_bench, "{return test(\"%*i\", -4, 94827);}"},
	{1, 495, "new2019_negstar_7", new2019_negstar_7, new2019_negstar_7_bench, "{return test(\"%*i\", -14, 94827);}"},
	{1, 496, "new2019_negstar_8", new2019_negstar_8, new2019_negstar_8_bench, "{return test(\"%.*i\", -6, -3);}"},
	{1, 497, "new2019_negstar_9", new2019_negstar_9, new2019_negstar_9_bench, "{return test(\"%0*i\", -7, -54);}"},
	{1, 498, "nocrash_notrequired_noarg_3", nocrash_notrequired_noarg_3, nocrash_notrequired_noarg_3_bench, "{return test(\"% \"); }"},
	{1, 499, "nocrash_notrequired_noarg_5", nocrash_notrequired_noarg_5, nocrash_notrequired_noarg_5_bench, "{return test(\"%-\"); }"},
	{1, 500, "nocrash_notrequired_noarg_6", nocrash_notrequired_noarg_6, nocrash_notrequired_noarg_6_bench, "{return test(\"%+\"); }"},
	{1, 501, "nocrash_notrequired_noarg_9", nocrash_notrequired_noarg_9, nocrash_notrequired_noarg_9_bench, "{return test(\"%23\"); }"},
	{1, 502, "nocrash_notrequired_noarg_10", nocrash_notrequired_noarg_10, nocrash_notrequired_noarg_10_bench, "{return test(\"%.\"); }"},
	{1, 503, "nocrash_notrequired_noarg_16", nocrash_notrequired_noarg_16, nocrash_notrequired_noarg_16_bench, "{return test(\"%p\"); }"},
	{1, 504, "nocrash_notrequired_noarg_17", nocrash_notrequired_noarg_17, nocrash_notrequired_noarg_17_bench, "{return test(\"%d\"); }"},
	{1, 505, "nocrash_notrequired_noarg_19", nocrash_notrequired_noarg_19, nocrash_notrequired_noarg_19_bench, "{return test(\"%u\"); }"},
	{1, 506, "nocrash_notrequired_noarg_20", nocrash_notrequired_noarg_20, nocrash_notrequired_noarg_20_bench, "{return test(\"%x\"); }"},
	{1, 507, "nocrash_notrequired_noarg_21", nocrash_notrequired_noarg_21, nocrash_notrequired_noarg_21_bench, "{return test(\"%X\"); }"},
	{1, 508, "nocrash_notrequired_noarg_24", nocrash_notrequired_noarg_24, nocrash_notrequired_noarg_24_bench, "{return test(\"%c\"); }"},
	{1, 509, "nocrash_notrequired_nullarg_2", nocrash_notrequired_nullarg_2, nocrash_notrequired_nullarg_2_bench, "{return test(\"%0s\", NULL); }"},
	{1, 510, "nocrash_notrequired_nullarg_3", nocrash_notrequired_nullarg_3, nocrash_notrequired_nullarg_3_bench, "{return test(\"% s\", NULL); }"},
	{1, 511, "nocrash_notrequired_nullarg_5", nocrash_notrequired_nullarg_5, nocrash_notrequired_nullarg_5_bench, "{return test(\"%-s\", NULL); }"},
	{1, 512, "nocrash_notrequired_nullarg_6", nocrash_notrequired_nullarg_6, nocrash_notrequired_nullarg_6_bench, "{return test(\"%+s\", NULL); }"},
	{1, 513, "nocrash_notrequired_nullarg_9", nocrash_notrequired_nullarg_9, nocrash_notrequired_nullarg_9_bench, "{return test(\"%23s\", NULL); }"},
	{1, 514, "nocrash_notrequired_nullarg_10", nocrash_notrequired_nullarg_10, nocrash_notrequired_nullarg_10_bench, "{return test(\"%.s\", NULL); }"},
	{1, 515, "nocrash_notrequired_nullarg_16", nocrash_notrequired_nullarg_16, nocrash_notrequired_nullarg_16_bench, "{return test(\"%p\", NULL); }"},
	{1, 516, "nocrash_notrequired_nullarg_17", nocrash_notrequired_nullarg_17, nocrash_notrequired_nullarg_17_bench, "{return test(\"%d\", NULL); }"},
	{1, 517, "nocrash_notrequired_nullarg_19", nocrash_notrequired_nullarg_19, nocrash_notrequired_nullarg_19_bench, "{return test(\"%u\", NULL); }"},
	{1, 518, "nocrash_notrequired_nullarg_20", nocrash_notrequired_nullarg_20, nocrash_notrequired_nullarg_20_bench, "{return test(\"%x\", NULL); }"},
	{1, 519, "nocrash_notrequired_nullarg_21", nocrash_notrequired_nullarg_21, nocrash_notrequired_nullarg_21_bench, "{return test(\"%X\", NULL); }"},
	{1, 520, "nocrash_notrequired_nullarg_23", nocrash_notrequired_nullarg_23, nocrash_notrequired_nullarg_23_bench, "{return test(\"%s\", NULL); }"},
	{1, 521, "nocrash_notrequired_nullarg_24", nocrash_notrequired_nullarg_24, nocrash_notrequired_nullarg_24_bench, "{return test(\"%c\", NULL); }"},
	{1, 522, "nocrash_notrequired_dupflag_d_ljljw", nocrash_notrequired_dupflag_d_ljljw, nocrash_notrequired_dupflag_d_ljljw_bench, "{return test(\"%--5d\", 42);}"},
	{1, 523, "nocrash_notrequired_c_prec_1", nocrash_notrequired_c_prec_1, nocrash_notrequired_c_prec_1_bench, "{return test(\"%.4c\", 'a');}"},
	{1, 524, "nocrash_notrequired_c_prec_2", nocrash_notrequired_c_prec_2, nocrash_notrequired_c_prec_2_bench, "{return test(\"%.c\", 'a');}"},
	{1, 525, "nocrash_notrequired_c_zp_1", nocrash_notrequired_c_zp_1, nocrash_notrequired_c_zp_1_bench, "{return test(\"%05c\", 'a');}"},
	{1, 526, "nocrash_notrequired_c_zp_2", nocrash_notrequired_c_zp_2, nocrash_notrequired_c_zp_2_bench, "{return test(\"%0c\", 'a');}"},
	{1, 527, "nocrash_notrequired_c_lj_nowidth", nocrash_notrequired_c_lj_nowidth, nocrash_notrequired_c_lj_nowidth_bench, "{return test(\"%-c\", 'a');}"},
	{1, 528, "nocrash_notrequired_s_zp_1", nocrash_notrequired_s_zp_1, nocrash_notrequired_s_zp_1_bench, "{return test(\"%05s\", \"hello\");}"},
	{1, 529, "nocrash_notrequired_s_zp_2", nocrash_notrequired_s_zp_2, nocrash_notrequired_s_zp_2_bench, "{return test(\"%0s\", \"hello\");}"},
	{1, 530, "nocrash_notrequired_s_lj_nowidth", nocrash_notrequired_s_lj_nowidth, nocrash_notrequired_s_lj_nowidth_bench, "{return test(\"%-s\", \"hello\");}"},
	{1, 531, "nocrash_notrequired_p_prec_1", nocrash_notrequired_p_prec_1, nocrash_notrequired_p_prec_1_bench, "{return test(\"%.4p\", &ncm_p);}"},
	{1, 532, "nocrash_notrequired_p_prec_2", nocrash_notrequired_p_prec_2, nocrash_notrequired_p_prec_2_bench, "{return test(\"%.p\", &ncm_p);}"},
	{1, 533, "nocrash_notrequired_p_zp_1", nocrash_notrequired_p_zp_1, nocrash_notrequired_p_zp_1_bench, "{return test(\"%05p\", &ncm_p);}"},
	{1, 534, "nocrash_notrequired_p_zp_2", nocrash_notrequired_p_zp_2, nocrash_notrequired_p_zp_2_bench, "{return test(\"%0p\", &ncm_p);}"},
	{1, 535, "nocrash_notrequired_p_lj_nowidth", nocrash_notrequired_p_lj_nowidth, nocrash_notrequired_p_lj_nowidth_bench, "{return test(\"%-p\", &ncm_p);}"},
	{1, 536, "nocrash_notrequired_i_lj_nowidth", nocrash_notrequired_i_lj_nowidth, nocrash_notrequired_i_lj_nowidth_bench, "{return test(\"%-i\", 42);}"},
	{1, 537, "nocrash_notrequired_u_lj_nowidth", nocrash_notrequired_u_lj_nowidth, nocrash_notrequired_u_lj_nowidth_bench, "{return test(\"%-u\", 42);}"},
	{1, 538, "nocrash_notrequired_x_lj_nowidth", nocrash_notrequired_x_lj_nowidth, nocrash_notrequired_x_lj_nowidth_bench, "{return test(\"%-x\", 42);}"},
	{1, 539, "moul_c_1", moul_c_1, moul_c_1_bench, "{return test(\"%c\", 42);}"},
	{1, 540, "moul_c_2", moul_c_2, moul_c_2_bench, "{return test(\"Kashim a %c histoires à raconter\", 1001);}"},
	{1, 541, "moul_c_3", moul_c_3, moul_c_3_bench, "{return test(\"Il fait au moins %c\n\", -8000);}"},
	{1, 542, "moul_c_4", moul_c_4, moul_c_4_bench, "{return test(\"%c\", -0);}"},
	{1, 543, "moul_c_5", moul_c_5, moul_c_5_bench, "{return test(\"%c\", 0);}"},
	{1, 544, "moul_c_5b", moul_c_5b, moul_c_5b_bench, "{return test(\"%c\n\", INT_MAX);}"},
	{1, 545, "moul_c_6", moul_c_6, moul_c_6_bench, "{return test(\"%c\n\", 'c');}"},
	{1, 546, "moul_c_7", moul_c_7, moul_c_7_bench, "{return test(\"%c\n\", '\n');}"},
	{1, 547, "moul_c_8", moul_c_8, moul_c_8_bench, "{return test(\"%c\", 'l');}"},
	{1, 548, "moul_c_9", moul_c_9, moul_c_9_bench, "{return test(\"%c\", 'y');}"},
	{1, 549, "moul_c_10", moul_c_10, moul_c_10_bench, "{return test(\"%c\", ' ');}"},
	{1, 550, "moul_c_11", moul_c_11, moul_c_11_bench, "{return test(\"%c\", 'e');}"},
	{1, 551, "moul_c_12", moul_c_12, moul_c_12_bench, "{return test(\"%c\", 's');}"},
	{1, 552, "moul_c_13", moul_c_13, moul_c_13_bench, "{return test(\"%c\", 't');}"},
	{1, 553, "moul_c_14", moul_c_14, moul_c_14_bench, "{return test(\"%c\", ' ');}"},
	{1, 554, "moul_c_15", moul_c_15, moul_c_15_bench, "{return test(\"%c\", 'f');}"},
	{1, 555, "moul_c_16", moul_c_16, moul_c_16_bench, "{return test(\"%c\", 'a');}"},
	{1, 556, "moul_c_17", moul_c_17, moul_c_17_bench, "{return test(\"%c\", 'n');}"},
	{1, 557, "moul_c_18", moul_c_18, moul_c_18_bench, "{return test(\"%c\", 't');}"},
	{1, 558, "moul_c_19", moul_c_19, moul_c_19_bench, "{return test(\"%c\", 'a');}"},
	{1, 559, "moul_c_20", moul_c_20, moul_c_20_bench, "{return test(\"%c\", 's');}"},
	{1, 560, "moul_c_21", moul_c_21, moul_c_21_bench, "{return test(\"%c\", 't');}"},
	{1, 561, "moul_c_22", moul_c_22, moul_c_22_bench, "{return test(\"%c\", 'i');}"},
	{1, 562, "moul_c_23", moul_c_23, moul_c_23_bench, "{return test(\"%c\", 'q');}"},
	{1, 563, "moul_c_24", moul_c_24, moul_c_24_bench, "{return test(\"%c\", 'u');}"},
	{1, 564, "moul_c_25", moul_c_25, moul_c_25_bench, "{return test(\"%c\", 'e');}"},
	{1, 565, "moul_c_26", moul_c_26, moul_c_26_bench, "{return test(\"%c\n\", '!');}"},
	{1, 566, "moul_c_27", moul_c_27, moul_c_27_bench, "{return test(\"%c\n\", '\r');}"},
	{1, 567, "moul_c_28", moul_c_28, moul_c_28_bench, "{return test(\"%c\n\", '\t');}"},
	{1, 568, "moul_s_1", moul_s_1, moul_s_1_bench, "{return test(\" pouet %s !!\", \"camembert\");}"},
	{1, 569, "moul_s_2", moul_s_2, moul_s_2_bench, "{return test(\"%s !\", \"Ceci n'est pas un \0 exercice !\");}"},
	{1, 570, "moul_s_3", moul_s_3, moul_s_3_bench, "{return test(\"%s!\", \"Ceci n'est toujours pas un exercice !\");}"},
	{1, 571, "moul_s_4", moul_s_4, moul_s_4_bench, "{char *str = NULL; return test(\"%s!\", str);}"},
	{1, 572, "moul_s_5_this_ones_a_doozy", moul_s_5_this_ones_a_doozy, moul_s_5_this_ones_a_doozy_bench, "{return test(\"%s\","},
	{1, 573, "moul_d_1", moul_d_1, moul_d_1_bench, "{return test(\"%d\", 42);}"},
	{1, 574, "moul_d_2", moul_d_2, moul_d_2_bench, "{return test(\"Kashim a %d histoires à raconter\", 1001);}"},
	{1, 575, "moul_d_3", moul_d_3, moul_d_3_bench, "{return test(\"Il fait au moins %d\n\", -8000);}"},
	{1, 576, "moul_d_4", moul_d_4, moul_d_4_bench, "{return test(\"%d\", -0);}"},
	{1, 577, "moul_d_5", moul_d_5, moul_d_5_bench, "{return test(\"%d\", 0);}"},
	{1, 578, "moul_d_6", moul_d_6, moul_d_6_bench, "{return test(\"%d\", INT_MAX);}"},
	{1, 579, "moul_d_7", moul_d_7, moul_d_7_bench, "{return test(\"%d\", INT_MIN);}"},
	{1, 580, "moul_d_8", moul_d_8, moul_d_8_bench, "{return test(\"%d\", INT_MIN - 1);}"},
	{1, 581, "moul_d_9", moul_d_9, moul_d_9_bench, "{return test(\"%d\", INT_MAX + 1);}"},
	{1, 582, "moul_d_10", moul_d_10, moul_d_10_bench, "{return test(\"%%d 0000042 == |%d|\n\", 0000042);}"},
	{1, 583, "moul_d_11", moul_d_11, moul_d_11_bench, "{return test(\"%%d \t == |%d|\n\", '\t');}"},
	{1, 584, "moul_d_12", moul_d_12, moul_d_12_bench, "{return test(\"%%d Lydie == |%d|\n\", 'L'+'y'+'d'+'i'+'e');}"},
	{1, 585, "moul_mix_1", moul_mix_1, moul_mix_1_bench, "{int r00 = 0; return test(\"Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p\", 100, \"Ly\", &r00);}"},
	{1, 586, "moul_i_1", moul_i_1, moul_i_1_bench, "{return test(\"%i\", 42);}"},
	{1, 587, "moul_i_2", moul_i_2, moul_i_2_bench, "{return test(\"Kashim a %i histoires à raconter\", 1001);}"},
	{1, 588, "moul_i_3", moul_i_3, moul_i_3_bench, "{return test(\"Il fait au moins %i\n\", -8000);}"},
	{1, 589, "moul_i_4", moul_i_4, moul_i_4_bench, "{return test(\"%i\", -0);}"},
	{1, 590, "moul_i_5", moul_i_5, moul_i_5_bench, "{return test(\"%i\", 0);}"},
	{1, 591, "moul_i_6", moul_i_6, moul_i_6_bench, "{return test(\"%i\", INT_MAX);}"},
	{1, 592, "moul_i_7", moul_i_7, moul_i_7_bench, "{return test(\"%i\", INT_MIN);}"},
	{1, 593, "moul_i_8", moul_i_8, moul_i_8_bench, "{return test(\"%i\", INT_MIN - 1);}"},
	{1, 594, "moul_i_9", moul_i_9, moul_i_9_bench, "{return test(\"%i\", INT_MAX + 1);}"},
	{1, 595, "moul_i_10", moul_i_10, moul_i_10_bench, "{return test(\"%%i 0000042 == |%i|\n\", 0000042);}"},
	{1, 596, "moul_i_11", moul_i_11, moul_i_11_bench, "{return test(\"%%i \t == |%i|\n\", '\t');}"},
	{1, 597, "moul_i_12", moul_i_12, moul_i_12_bench, "{return test(\"%%i Lydie == |%i|\n\", 'L'+'y'+'d'+'i'+'e');}"},
	{1, 598, "moul_u_1", moul_u_1, moul_u_1_bench, "{return test(\"%u\", 42);}"},
	{1, 599, "moul_u_2", moul_u_2, moul_u_2_bench, "{return test(\"Kashim a %u histoires à raconter\", 1001);}"},
	{1, 600, "moul_u_3", moul_u_3, moul_u_3_bench, "{return test(\"Il fait au moins %u\n\", -8000);}"},
	{1, 601, "moul_u_4", moul_u_4, moul_u_4_bench, "{return test(\"%u\", -0);}"},
	{1, 602, "moul_u_5", moul_u_5, moul_u_5_bench, "{return test(\"%u\", 0);}"},
	{1, 603, "moul_u_6", moul_u_6, moul_u_6_bench, "{return test(\"%u\", INT_MAX);}"},
	{1, 604, "moul_u_7", moul_u_7, moul_u_7_bench, "{return test(\"%u\", INT_MIN);}"},
	{1, 605, "moul_u_8", moul_u_8, moul_u_8_bench, "{return test(\"%u\", INT_MIN - 1);}"},
	{1, 606, "moul_u_9", moul_u_9, moul_u_9_bench, "{return test(\"%u\", INT_MAX + 1);}"},
	{1, 607, "moul_u_10", moul_u_10, moul_u_10_bench, "{return test(\"%%u 0000042 == |%u|\n\", 0000042);}"},
	{1, 608, "moul_u_11", moul_u_11, moul_u_11_bench, "{return test(\"%%u \t == |%u|\n\", '\t');}"},
	{1, 609, "moul_u_12", moul_u_12, moul_u_12_bench, "{return test(\"%%u Lydie == |%u|\n\", 'L'+'y'+'d'+'i'+'e');}"},
	{1, 610, "moul_x_1", moul_x_1, moul_x_1_bench, "{return test(\"%x\", 42);}"},
	{1, 611, "moul_x_2", moul_x_2, moul_x_2_bench, "{return test(\"Kashim a %x histoires à raconter\", 1001);}"},
	{1, 612, "moul_x_3", moul_x_3, moul_x_3_bench, "{return test(\"Il fait au moins %x\n\", -8000);}"},
	{1, 613, "moul_x_4", moul_x_4, moul_x_4_bench, "{return test(\"%x\", -0);}"},
	{1, 614, "moul_x_5", moul_x_5, moul_x_5_bench, "{return test(\"%x\", 0);}"},
	{1, 615, "moul_x_6", moul_x_6, moul_x_6_bench, "{return test(\"%x\", INT_MAX);}"},
	{1, 616, "moul_x_7", moul_x_7, moul_x_7_bench, "{return test(\"%x\", INT_MIN);}"},
	{1, 617, "moul_x_8", moul_x_8, moul_x_8_bench, "{return test(\"%x\", INT_MIN - 1);}"},
	{1, 618, "moul_x_9", moul_x_9, moul_x_9_bench, "{return test(\"%x\", INT_MAX + 1);}"},
	{1, 619, "moul_x_10", moul_x_10, moul_x_10_bench, "{return test(\"%%x 0000042 == |%x|\n\", 0000042);}"},
	{1, 620, "moul_x_11", moul_x_11, moul_x_11_bench, "{return test(\"%%x \t == |%x|\n\", '\t');}"},
	{1, 621, "moul_x_12", moul_x_12, moul_x_12_bench, "{return test(\"%%x Lydie == |%x|\n\", 'L'+'y'+'d'+'i'+'e');}"},
	{1, 622, "moul_prec_1", moul_prec_1, moul_prec_1_bench, "{return test(\"%%-5.3s LYDI == |%-5.3s|\n\", \"LYDI\");}"},
	{1, 623, "moul_prec_3", moul_prec_3, moul_prec_3_bench, "{return test(\"%%04.5i 42 == |%04.5i|\n\", 42);}"},
	{1, 624, "moul_prec_4", moul_prec_4, moul_prec_4_bench, "{return test(\"%%04.3i 42 == |%04.3i|\n\", 42);}"},
	{1, 625, "moul_prec_5", moul_prec_5, moul_prec_5_bench, "{return test(\"%%04.2i 42 == |%04.2i|\n\", 42);}"},
	{1, 626, "moul_zeropad_1", moul_zeropad_1, moul_zeropad_1_bench, "{return test(\"%%04i 42 == |%04i|\n\", 42);}"},
	{1, 627, "moul_zeropad_2", moul_zeropad_2, moul_zeropad_2_bench, "{return test(\"%%05i 42 == |%05i|\n\", 42);}"},
	{1, 628, "moul_zeropad_3", moul_zeropad_3, moul_zeropad_3_bench, "{return test(\"%%0i 42 == |%0i|\n\", 42);}"},
	{1, 629, "moul_zeropad_4", moul_zeropad_4, moul_zeropad_4_bench, "{return test(\"%%0d 0000042 == |%0d|\n\", 0000042);}"},
	{1, 630, "moul_leftjusty_1", moul_leftjusty_1, moul_leftjusty_1_bench, "{return test(\"%%-i 42 == %-i\n\", 42);}"},
	{1, 631, "moul_leftjusty_2", moul_leftjusty_2, moul_leftjusty_2_bench, "{return test(\"%%-d 42 == %-d\n\", INT_MIN);}"},
	{1, 632, "moul_leftjusty_3", moul_leftjusty_3, moul_leftjusty_3_bench, "{return test(\"%%-i -42 == %-i\n\", -42);}"},
	{1, 633, "moul_leftjusty_4", moul_leftjusty_4, moul_leftjusty_4_bench, "{return test(\"%%-4d 42 == |%-4d|\n\", 42);}"},
	{1, 634, "moul_leftjusty_5", moul_leftjusty_5, moul_leftjusty_5_bench, "{return test(\"%%-5d -42 == |%-5d|\n\", -42);}"},
	{1, 635, "moul_leftjusty_6", moul_leftjusty_6, moul_leftjusty_6_bench, "{return test(\"|%3i|%-3i|\n\", 42, 42);}"},
	{1, 636, "moul_leftjusty_7", moul_leftjusty_7, moul_leftjusty_7_bench, "{return test(\"%%-4i 42 == |%-4i|\n\", 42);}"},
	{1, 637, "moul_star_1", moul_star_1, moul_star_1_bench, "{return test(\"%%-*.3s LYDI == |%-*.3s|\n\", 5, \"LYDI\");}"},
	{1, 638, "moul_star_2", moul_star_2, moul_star_2_bench, "{return test(\"%% *.5i 42 == |% *.5i|\n\", 4, 42);}"},
	{1, 639, "moul_star_3", moul_star_3, moul_star_3_bench, "{return test(\"%%*i 42 == |%*i|\n\", 5, 42);}"},
	{1, 640, "moul_star_4", moul_star_4, moul_star_4_bench, "{return test(\"%%*i 42 == |%*i|\n\", 3, 42);}"},
	{1, 641, "moul_star_5", moul_star_5, moul_star_5_bench, "{return test(\"%%*i 42 == |%*i|\n\", 2, 42);}"},
	{1, 642, "mix_test_0", mix_test_0, mix_test_0_bench, "{return test("},
	{1, 643, "mix_test_1", mix_test_1, mix_test_1_bench, "{return test("},
	{1, 644, "mix_test_2", mix_test_2, mix_test_2_bench, "{return test("},
	{1, 645, "mix_test_3", mix_test_3, mix_test_3_bench, "{return test("},
	{1, 646, "mix_test_4", mix_test_4, mix_test_4_bench, "{return test("},
	{1, 647, "mix_test_5", mix_test_5, mix_test_5_bench, "{return test("},
	{1, 648, "mix_test_6", mix_test_6, mix_test_6_bench, "{return test("},
	{1, 649, "mix_test_7", mix_test_7, mix_test_7_bench, "{return test("},
	{1, 650, "mix_test_8", mix_test_8, mix_test_8_bench, "{return test("},
	{1, 651, "mix_test_9", mix_test_9, mix_test_9_bench, "{return test("},
	{1, 652, "mix_test_10", mix_test_10, mix_test_10_bench, "{return test("},
	{1, 653, "mix_test_11", mix_test_11, mix_test_11_bench, "{return test("},
	{1, 654, "mix_test_12", mix_test_12, mix_test_12_bench, "{return test("},
	{1, 655, "mix_test_13", mix_test_13, mix_test_13_bench, "{return test("},
	{1, 656, "mix_test_14", mix_test_14, mix_test_14_bench, "{return test("},
	{1, 657, "mix_test_15", mix_test_15, mix_test_15_bench, "{return test("},
	{1, 658, "mix_test_16", mix_test_16, mix_test_16_bench, "{return test("},
	{1, 659, "mix_test_17", mix_test_17, mix_test_17_bench, "{return test("},
	{1, 660, "mix_test_18", mix_test_18, mix_test_18_bench, "{return test("},
	{1, 661, "mix_test_19", mix_test_19, mix_test_19_bench, "{return test("},
	{1, 662, "mix_test_20", mix_test_20, mix_test_20_bench, "{return test("},
	{1, 663, "mix_test_21", mix_test_21, mix_test_21_bench, "{return test("},
	{1, 664, "mix_test_22", mix_test_22, mix_test_22_bench, "{return test("},
	{1, 665, "mix_test_23", mix_test_23, mix_test_23_bench, "{return test("},
	{1, 666, "mix_test_24", mix_test_24, mix_test_24_bench, "{return test("},
	{1, 667, "mix_test_25", mix_test_25, mix_test_25_bench, "{return test("},
	{1, 668, "mix_test_26", mix_test_26, mix_test_26_bench, "{return test("},
	{1, 669, "mix_test_27", mix_test_27, mix_test_27_bench, "{return test("},
	{1, 670, "mix_test_28", mix_test_28, mix_test_28_bench, "{return test("},
	{1, 671, "mix_test_29", mix_test_29, mix_test_29_bench, "{return test("},
	{1, 672, "mix_test_30", mix_test_30, mix_test_30_bench, "{return test("},
	{1, 673, "mix_test_31", mix_test_31, mix_test_31_bench, "{return test("},
	{1, 674, "mix_test_32", mix_test_32, mix_test_32_bench, "{return test("},
	{1, 675, "mix_test_33", mix_test_33, mix_test_33_bench, "{return test("},
	{1, 676, "mix_test_34", mix_test_34, mix_test_34_bench, "{return test("},
	{1, 677, "mix_test_35", mix_test_35, mix_test_35_bench, "{return test("},
	{1, 678, "mix_test_36", mix_test_36, mix_test_36_bench, "{return test("},
	{1, 679, "mix_test_37", mix_test_37, mix_test_37_bench, "{return test("},
	{1, 680, "mix_test_38", mix_test_38, mix_test_38_bench, "{return test("},
	{1, 681, "mix_test_39", mix_test_39, mix_test_39_bench, "{return test("},
	{1, 682, "mix_test_40", mix_test_40, mix_test_40_bench, "{return test("},
	{1, 683, "mix_test_41", mix_test_41, mix_test_41_bench, "{return test("},
	{1, 684, "mix_test_42", mix_test_42, mix_test_42_bench, "{return test("},
	{1, 685, "mix_test_43", mix_test_43, mix_test_43_bench, "{return test("},
	{1, 686, "mix_test_44", mix_test_44, mix_test_44_bench, "{return test("},
	{1, 687, "mix_test_45", mix_test_45, mix_test_45_bench, "{return test("},
	{1, 688, "mix_test_46", mix_test_46, mix_test_46_bench, "{return test("},
	{1, 689, "mix_test_47", mix_test_47, mix_test_47_bench, "{return test("},
	{1, 690, "mix_test_48", mix_test_48, mix_test_48_bench, "{return test("},
	{1, 691, "mix_test_49", mix_test_49, mix_test_49_bench, "{return test("},
	{1, 692, "mix_test_50", mix_test_50, mix_test_50_bench, "{return test("},
	{1, 693, "mix_test_51", mix_test_51, mix_test_51_bench, "{return test("},
	{1, 694, "mix_test_52", mix_test_52, mix_test_52_bench, "{return test("},
	{1, 695, "mix_test_53", mix_test_53, mix_test_53_bench, "{return test("},
	{1, 696, "mix_test_54", mix_test_54, mix_test_54_bench, "{return test("},
	{1, 697, "mix_test_55", mix_test_55, mix_test_55_bench, "{return test("},
	{1, 698, "mix_test_56", mix_test_56, mix_test_56_bench, "{return test("},
	{1, 699, "mix_test_57", mix_test_57, mix_test_57_bench, "{return test("},
	{1, 700, "mix_test_58", mix_test_58, mix_test_58_bench, "{return test("},
	{1, 701, "mix_test_59", mix_test_59, mix_test_59_bench, "{return test("},
	{1, 702, "mix_test_60", mix_test_60, mix_test_60_bench, "{return test("},
	{1, 703, "mix_test_61", mix_test_61, mix_test_61_bench, "{return test("},
	{1, 704, "mix_test_62", mix_test_62, mix_test_62_bench, "{return test("},
	{1, 705, "mix_test_63", mix_test_63, mix_test_63_bench, "{return test("},
	{1, 706, "mix_test_64", mix_test_64, mix_test_64_bench, "{return test("},
	{1, 707, "mix_test_65", mix_test_65, mix_test_65_bench, "{return test("},
	{1, 708, "mix_test_66", mix_test_66, mix_test_66_bench, "{return test("},
	{1, 709, "mix_test_67", mix_test_67, mix_test_67_bench, "{return test("},
	{1, 710, "mix_test_68", mix_test_68, mix_test_68_bench, "{return test("},
	{1, 711, "mix_test_69", mix_test_69, mix_test_69_bench, "{return test("},
	{1, 712, "mix_test_70", mix_test_70, mix_test_70_bench, "{return test("},
	{1, 713, "mix_test_71", mix_test_71, mix_test_71_bench, "{return test("},
	{1, 714, "mix_test_72", mix_test_72, mix_test_72_bench, "{return test("},
	{1, 715, "mix_test_73", mix_test_73, mix_test_73_bench, "{return test("},
	{1, 716, "mix_test_74", mix_test_74, mix_test_74_bench, "{return test("},
	{1, 717, "mix_test_75", mix_test_75, mix_test_75_bench, "{return test("},
	{1, 718, "mix_test_76", mix_test_76, mix_test_76_bench, "{return test("},
	{1, 719, "mix_test_77", mix_test_77, mix_test_77_bench, "{return test("},
	{1, 720, "mix_test_78", mix_test_78, mix_test_78_bench, "{return test("},
	{1, 721, "mix_test_79", mix_test_79, mix_test_79_bench, "{return test("},
	{1, 722, "mix_test_80", mix_test_80, mix_test_80_bench, "{return test("},
	{1, 723, "mix_test_81", mix_test_81, mix_test_81_bench, "{return test("},
	{1, 724, "mix_test_82", mix_test_82, mix_test_82_bench, "{return test("},
	{1, 725, "mix_test_83", mix_test_83, mix_test_83_bench, "{return test("},
	{1, 726, "mix_test_84", mix_test_84, mix_test_84_bench, "{return test("},
	{1, 727, "mix_test_85", mix_test_85, mix_test_85_bench, "{return test("},
	{1, 728, "mix_test_86", mix_test_86, mix_test_86_bench, "{return test("},
	{1, 729, "mix_test_87", mix_test_87, mix_test_87_bench, "{return test("},
	{1, 730, "mix_test_88", mix_test_88, mix_test_88_bench, "{return test("},
	{1, 731, "mix_test_89", mix_test_89, mix_test_89_bench, "{return test("},
	{1, 732, "mix_test_90", mix_test_90, mix_test_90_bench, "{return test("},
	{1, 733, "mix_test_91", mix_test_91, mix_test_91_bench, "{return test("},
	{1, 734, "mix_test_92", mix_test_92, mix_test_92_bench, "{return test("},
	{1, 735, "mix_test_93", mix_test_93, mix_test_93_bench, "{return test("},
	{1, 736, "mix_test_94", mix_test_94, mix_test_94_bench, "{return test("},
	{1, 737, "mix_test_95", mix_test_95, mix_test_95_bench, "{return test("},
	{1, 738, "mix_test_96", mix_test_96, mix_test_96_bench, "{return test("},
	{1, 739, "mix_test_97", mix_test_97, mix_test_97_bench, "{return test("},
	{1, 740, "mix_test_98", mix_test_98, mix_test_98_bench, "{return test("},
	{1, 741, "mix_test_99", mix_test_99, mix_test_99_bench, "{return test("},
	{1, 742, "mix_successive_0", mix_successive_0, mix_successive_0_bench, "{return ( test(\"%c\", mx_c) + test(\"%u\", mx_u));}"},
	{1, 743, "mix_successive_4", mix_successive_4, mix_successive_4_bench, "{return ( test(\"%x\", mx_u) + test(\"%i\", mx_i));}"},
	{1, 744, "mix_successive_6", mix_successive_6, mix_successive_6_bench, "{return ( test(\"%s\", mx_s) + test(\"%c\", mx_c));}"},
	{1, 745, "mix_successive_10", mix_successive_10, mix_successive_10_bench, "{return ( test(\"%u\", mx_u) + test(\"%s\", mx_s));}"},
	{1, 746, "mix_successive_16", mix_successive_16, mix_successive_16_bench, "{return ( test(\"%s\", mx_s) + test(\"%x\", mx_u));}"},
	{1, 747, "mix_successive_20", mix_successive_20, mix_successive_20_bench, "{return ( test(\"%p\", &mx_i) + test(\"%s\", mx_s));}"},
	{1, 748, "mix_successive_21", mix_successive_21, mix_successive_21_bench, "{return ( test(\"%X\", mx_u) + test(\"%x\", mx_u));}"},
	{1, 749, "mix_successive_28", mix_successive_28, mix_successive_28_bench, "{return ( test(\"%i\", mx_i) + test(\"%u\", mx_u));}"},
	{1, 750, "mix_successive_30", mix_successive_30, mix_successive_30_bench, "{return ( test(\"%s\", mx_s) + test(\"%u\", mx_u));}"},
	{1, 751, "mix_successive_31", mix_successive_31, mix_successive_31_bench, "{return ( test(\"%X\", mx_u) + test(\"%c\", mx_c));}"},
	{1, 752, "mix_successive_32", mix_successive_32, mix_successive_32_bench, "{return ( test(\"%x\", mx_u) + test(\"%u\", mx_u));}"},
	{1, 753, "mix_successive_39", mix_successive_39, mix_successive_39_bench, "{return ( test(\"%i\", mx_i) + test(\"%c\", mx_c));}"},
	{1, 754, "mix_successive_40", mix_successive_40, mix_successive_40_bench, "{return ( test(\"%c\", mx_c) + test(\"%x\", mx_u));}"},
	{1, 755, "mix_successive_42", mix_successive_42, mix_successive_42_bench, "{return ( test(\"%x\", mx_u) + test(\"%s\", mx_s));}"},
	{1, 756, "mix_successive_43", mix_successive_43, mix_successive_43_bench, "{return ( test(\"%u\", mx_u) + test(\"%x\", mx_u));}"},
	{1, 757, "mix_successive_45", mix_successive_45, mix_successive_45_bench, "{return ( test(\"%s\", mx_s) + test(\"%c\", mx_c));}"},
	{1, 758, "mix_successive_46", mix_successive_46, mix_successive_46_bench, "{return ( test(\"%i\", mx_i) + test(\"%s\", mx_s));}"},
	{1, 759, "mix_successive_61", mix_successive_61, mix_successive_61_bench, "{return ( test(\"%p\", &mx_i) + test(\"%c\", mx_c));}"},
	{1, 760, "mix_successive_64", mix_successive_64, mix_successive_64_bench, "{return ( test(\"%s\", mx_s) + test(\"%c\", mx_c));}"},
	{1, 761, "bonus_as_d_pos", bonus_as_d_pos, bonus_as_d_pos_bench, "{return test(\"%+d\", 5);}"},
	{1, 762, "bonus_as_d_neg", bonus_as_d_neg, bonus_as_d_neg_bench, "{return test(\"%+d\", -7);}"},
	{1, 763, "bonus_as_d_intmax", bonus_as_d_intmax, bonus_as_d_intmax_bench, "{return test(\"%+d\", 2147483647);}"},
	{1, 764, "bonus_as_d_prec_pos", bonus_as_d_prec_pos, bonus_as_d_prec_pos_bench, "{return test(\"%+.7d\", 234);}"},
	{1, 765, "bonus_as_d_prec_neg", bonus_as_d_prec_neg, bonus_as_d_prec_neg_bench, "{return test(\"%+.7d\", -446);}"},
	{1, 766, "bonus_as_d_prec_pos_nofit", bonus_as_d_prec_pos_nofit, bonus_as_d_prec_pos_nofit_bench, "{return test(\"%+.3d\", 3723);}"},
	{1, 767, "bonus_as_d_width_pos", bonus_as_d_width_pos, bonus_as_d_width_pos_bench, "{return test(\"%+5d\", 35);}"},
	{1, 768, "bonus_as_d_width_zero", bonus_as_d_width_zero, bonus_as_d_width_zero_bench, "{return test(\"%+7d\", 0);}"},
	{1, 769, "bonus_as_d_width_intmax", bonus_as_d_width_intmax, bonus_as_d_width_intmax_bench, "{return test(\"%+24d\", 2147483647);}"},
	{1, 770, "bonus_as_d_zp_fits", bonus_as_d_zp_fits, bonus_as_d_zp_fits_bench, "{return test(\"%+05d\", 432);}"},
	{1, 771, "bonus_as_d_zp_zero", bonus_as_d_zp_zero, bonus_as_d_zp_zero_bench, "{return test(\"%+04d\", 0);}"},
	{1, 772, "bonus_as_d_prec0val0", bonus_as_d_prec0val0, bonus_as_d_prec0val0_bench, "{return test(\"%+.0d\", 0);}"},
	{1, 773, "bonus_as_d_prec0val0_impl", bonus_as_d_prec0val0_impl, bonus_as_d_prec0val0_impl_bench, "{return test(\"%+.d\", 0);}"},
	{1, 774, "bonus_as_d_prec_width_fit_fit_pos", bonus_as_d_prec_width_fit_fit_pos, bonus_as_d_prec_width_fit_fit_pos_bench, "{return test(\"%+8.5d\", 34);}"},
	{1, 775, "bonus_as_d_prec_width_fit_fit_neg", bonus_as_d_prec_width_fit_fit_neg, bonus_as_d_prec_width_fit_fit_neg_bench, "{return test(\"%+10.5d\", -216);}"},
	{1, 776, "bonus_as_d_prec_width_fit_fit_zero", bonus_as_d_prec_width_fit_fit_zero, bonus_as_d_prec_width_fit_fit_zero_bench, "{return test(\"%+8.5d\", 0);}"},
	{1, 777, "bonus_as_d_prec_width_nofit_fit_pos", bonus_as_d_prec_width_nofit_fit_pos, bonus_as_d_prec_width_nofit_fit_pos_bench, "{return test(\"%+8.3d\", 8375);}"},
	{1, 778, "bonus_as_d_prec_width_nofit_fit_neg", bonus_as_d_prec_width_nofit_fit_neg, bonus_as_d_prec_width_nofit_fit_neg_bench, "{return test(\"%+8.3d\", -8473);}"},
	{1, 779, "bonus_as_d_prec_width_fit_nofit_pos", bonus_as_d_prec_width_fit_nofit_pos, bonus_as_d_prec_width_fit_nofit_pos_bench, "{return test(\"%+3.7d\", 3267);}"},
	{1, 780, "bonus_as_d_prec_width_fit_nofit_neg", bonus_as_d_prec_width_fit_nofit_neg, bonus_as_d_prec_width_fit_nofit_neg_bench, "{return test(\"%+3.7d\", -2375);}"},
	{1, 781, "bonus_as_d_prec_width_nofit_nofit_pos", bonus_as_d_prec_width_nofit_nofit_pos, bonus_as_d_prec_width_nofit_nofit_pos_bench, "{return test(\"%+3.3d\", 6983);}"},
	{1, 782, "bonus_as_d_prec_width_nofit_nofit_neg", bonus_as_d_prec_width_nofit_nofit_neg, bonus_as_d_prec_width_nofit_nofit_neg_bench, "{return test(\"%+3.3d\", -8462);}"},
	{1, 783, "bonus_as_d_prec_width_fit_fit_pos_ljas", bonus_as_d_prec_width_fit_fit_pos_ljas, bonus_as_d_prec_width_fit_fit_pos_ljas_bench, "{return test(\"%+-8.5d\", 34);}"},
	{1, 784, "bonus_as_d_prec_width_fit_fit_neg_ljas", bonus_as_d_prec_width_fit_fit_neg_ljas, bonus_as_d_prec_width_fit_fit_neg_ljas_bench, "{return test(\"%+-10.5d\", -216);}"},
	{1, 785, "bonus_as_d_prec_width_fit_fit_zero_ljas", bonus_as_d_prec_width_fit_fit_zero_ljas, bonus_as_d_prec_width_fit_fit_zero_ljas_bench, "{return test(\"%+-8.5d\", 0);}"},
	{1, 786, "bonus_as_d_prec_width_nofit_fit_pos_ljas", bonus_as_d_prec_width_nofit_fit_pos_ljas, bonus_as_d_prec_width_nofit_fit_pos_ljas_bench, "{return test(\"%+-8.3d\", 8375);}"},
	{1, 787, "bonus_as_d_prec_width_nofit_fit_neg_ljas", bonus_as_d_prec_width_nofit_fit_neg_ljas, bonus_as_d_prec_width_nofit_fit_neg_ljas_bench, "{return test(\"%+-8.3d\", -8473);}"},
	{1, 788, "bonus_as_d_prec_width_fit_nofit_pos_ljas", bonus_as_d_prec_width_fit_nofit_pos_ljas, bonus_as_d_prec_width_fit_nofit_pos_ljas_bench, "{return test(\"%+-3.7d\", 3267);}"},
	{1, 789, "bonus_as_d_prec_width_fit_nofit_neg_ljas", bonus_as_d_prec_width_fit_nofit_neg_ljas, bonus_as_d_prec_width_fit_nofit_neg_ljas_bench, "{return test(\"%+-3.7d\", -2375);}"},
	{1, 790, "bonus_as_d_prec_width_nofit_nofit_pos_ljas", bonus_as_d_prec_width_nofit_nofit_pos_ljas, bonus_as_d_prec_width_nofit_nofit_pos_ljas_bench, "{return test(\"%+-3.3d\", 6983);}"},
	{1, 791, "bonus_as_d_prec_width_nofit_nofit_neg_ljas", bonus_as_d_prec_width_nofit_nofit_neg_ljas, bonus_as_d_prec_width_nofit_nofit_neg_ljas_bench, "{return test(\"%+-3.3d\", -8462);}"},
	{1, 792, "bonus_as_d_prec_width_ff_pos_zp", bonus_as_d_prec_width_ff_pos_zp, bonus_as_d_prec_width_ff_pos_zp_bench, "{return test(\"%0+8.5d\", 34);}"},
	{1, 793, "bonus_as_d_prec_width_ff_neg_zp", bonus_as_d_prec_width_ff_neg_zp, bonus_as_d_prec_width_ff_neg_zp_bench, "{return test(\"%0+10.5d\", -216);}"},
	{1, 794, "bonus_as_d_prec_width_ff_zero_zp", bonus_as_d_prec_width_ff_zero_zp, bonus_as_d_prec_width_ff_zero_zp_bench, "{return test(\"%0+8.5d\", 0);}"},
	{1, 795, "bonus_as_d_prec_width_nf_pos_zp", bonus_as_d_prec_width_nf_pos_zp, bonus_as_d_prec_width_nf_pos_zp_bench, "{return test(\"%0+8.3d\", 8375);}"},
	{1, 796, "bonus_as_d_prec_width_nf_neg_zp", bonus_as_d_prec_width_nf_neg_zp, bonus_as_d_prec_width_nf_neg_zp_bench, "{return test(\"%0+8.3d\", -8473);}"},
	{1, 797, "bonus_as_d_prec_width_fn_pos_zp", bonus_as_d_prec_width_fn_pos_zp, bonus_as_d_prec_width_fn_pos_zp_bench, "{return test(\"%0+3.7d\", 3267);}"},
	{1, 798, "bonus_as_d_prec_width_fn_neg_zp", bonus_as_d_prec_width_fn_neg_zp, bonus_as_d_prec_width_fn_neg_zp_bench, "{return test(\"%0+3.7d\", -2375);}"},
	{1, 799, "bonus_as_d_prec_width_nn_pos_zp", bonus_as_d_prec_width_nn_pos_zp, bonus_as_d_prec_width_nn_pos_zp_bench, "{return test(\"%0+3.3d\", 6983);}"},
	{1, 800, "bonus_as_d_prec_width_nn_neg_zp", bonus_as_d_prec_width_nn_neg_zp, bonus_as_d_prec_width_nn_neg_zp_bench, "{return test(\"%0+3.3d\", -8462);}"},
	{1, 801, "bonus_as_d_prec_width_ff_pos_ljaszp_ignoreflag", bonus_as_d_prec_width_ff_pos_ljaszp_ignoreflag, bonus_as_d_prec_width_ff_pos_ljaszp_ignoreflag_bench, "{return test(\"%0+-8.5d\", 34);}"},
	{1, 802, "bonus_as_d_prec_width_ff_neg_ljaszp_ignoreflag", bonus_as_d_prec_width_ff_neg_ljaszp_ignoreflag, bonus_as_d_prec_width_ff_neg_ljaszp_ignoreflag_bench, "{return test(\"%0+-10.5d\", -216);}"},
	{1, 803, "bonus_as_d_prec_width_ff_zero_ljaszp_ignoreflag", bonus_as_d_prec_width_ff_zero_ljaszp_ignoreflag, bonus_as_d_prec_width_ff_zero_ljaszp_ignoreflag_bench, "{return test(\"%0+-8.5d\", 0);}"},
	{1, 804, "bonus_as_d_prec_width_nf_pos_ljaszp_ignoreflag", bonus_as_d_prec_width_nf_pos_ljaszp_ignoreflag, bonus_as_d_prec_width_nf_pos_ljaszp_ignoreflag_bench, "{return test(\"%0+-8.3d\", 8375);}"},
	{1, 805, "bonus_as_d_prec_width_nf_neg_ljaszp_ignoreflag", bonus_as_d_prec_width_nf_neg_ljaszp_ignoreflag, bonus_as_d_prec_width_nf_neg_ljaszp_ignoreflag_bench, "{return test(\"%0+-8.3d\", -8473);}"},
	{1, 806, "bonus_as_d_prec_width_fn_pos_ljaszp_ignoreflag", bonus_as_d_prec_width_fn_pos_ljaszp_ignoreflag, bonus_as_d_prec_width_fn_pos_ljaszp_ignoreflag_bench, "{return test(\"%0+-3.7d\", 3267);}"},
	{1, 807, "bonus_as_d_prec_width_fn_neg_ljaszp_ignoreflag", bonus_as_d_prec_width_fn_neg_ljaszp_ignoreflag, bonus_as_d_prec_width_fn_neg_ljaszp_ignoreflag_bench, "{return test(\"%0+-3.7d\", -2375);}"},
	{1, 808, "bonus_as_d_prec_width_nn_pos_ljaszp_ignoreflag", bonus_as_d_prec_width_nn_pos_ljaszp_ignoreflag, bonus_as_d_prec_width_nn_pos_ljaszp_ignoreflag_bench, "{return test(\"%0+-3.3d\", 6983);}"},
	{1, 809, "bonus_as_d_prec_width_nn_neg_ljaszp_ignoreflag", bonus_as_d_prec_width_nn_neg_ljaszp_ignoreflag, bonus_as_d_prec_width_nn_neg_ljaszp_ignoreflag_bench, "{return test(\"%0+-3.3d\", -8462);}"},
	{1, 810, "bonus_as_i_pos", bonus_as_i_pos, bonus_as_i_pos_bench, "{return test(\"%+i\", 5);}"},
	{1, 811, "bonus_as_i_neg", bonus_as_i_neg, bonus_as_i_neg_bench, "{return test(\"%+i\", -7);}"},
	{1, 812, "bonus_as_i_intmax", bonus_as_i_intmax, bonus_as_i_intmax_bench, "{return test(\"%+i\", 2147483647);}"},
	{1, 813, "bonus_as_i_zp_fits", bonus_as_i_zp_fits, bonus_as_i_zp_fits_bench, "{return test(\"%+05i\", 432);}"},
	{1, 814, "bonus_as_i_zp_zero", bonus_as_i_zp_zero, bonus_as_i_zp_zero_bench, "{return test(\"%+04i\", 0);}"},
	{1, 815, "bonus_as_i_width_pos", bonus_as_i_width_pos, bonus_as_i_width_pos_bench, "{return test(\"%+5i\", 35);}"},
	{1, 816, "bonus_as_i_width_zero", bonus_as_i_width_zero, bonus_as_i_width_zero_bench, "{return test(\"%+7i\", 0);}"},
	{1, 817, "bonus_as_i_width_intmax", bonus_as_i_width_intmax, bonus_as_i_width_intmax_bench, "{return test(\"%+24i\", 2147483647);}"},
	{1, 818, "bonus_as_i_prec_pos", bonus_as_i_prec_pos, bonus_as_i_prec_pos_bench, "{return test(\"%+.7i\", 234);}"},
	{1, 819, "bonus_as_i_prec_neg", bonus_as_i_prec_neg, bonus_as_i_prec_neg_bench, "{return test(\"%+.7i\", -446);}"},
	{1, 820, "bonus_as_i_prec_pos_nofit", bonus_as_i_prec_pos_nofit, bonus_as_i_prec_pos_nofit_bench, "{return test(\"%+.3i\", 3723);}"},
	{1, 821, "bonus_as_i_prec0val0", bonus_as_i_prec0val0, bonus_as_i_prec0val0_bench, "{return test(\"%+.0i\", 0);}"},
	{1, 822, "bonus_as_i_prec0val0_impl", bonus_as_i_prec0val0_impl, bonus_as_i_prec0val0_impl_bench, "{return test(\"%+.i\", 0);}"},
	{1, 823, "bonus_as_i_prec0val0_was", bonus_as_i_prec0val0_was, bonus_as_i_prec0val0_was_bench, "{return test(\"%+5.0i\", 0);}"},
	{1, 824, "bonus_as_i_prec0val0_was_impl", bonus_as_i_prec0val0_was_impl, bonus_as_i_prec0val0_was_impl_bench, "{return test(\"%+5.i\", 0);}"},
	{1, 825, "bonus_as_i_prec0val0_waslj", bonus_as_i_prec0val0_waslj, bonus_as_i_prec0val0_waslj_bench, "{return test(\"%+-5.0i\", 0);}"},
	{1, 826, "bonus_as_i_prec0val0_waslj_impl", bonus_as_i_prec0val0_waslj_impl, bonus_as_i_prec0val0_waslj_impl_bench, "{return test(\"%+-5.i\", 0);}"},
	{1, 827, "bonus_as_i_prec_width_fit_fit_pos", bonus_as_i_prec_width_fit_fit_pos, bonus_as_i_prec_width_fit_fit_pos_bench, "{return test(\"%+8.5i\", 34);}"},
	{1, 828, "bonus_as_i_prec_width_fit_fit_neg", bonus_as_i_prec_width_fit_fit_neg, bonus_as_i_prec_width_fit_fit_neg_bench, "{return test(\"%+10.5i\", -216);}"},
	{1, 829, "bonus_as_i_prec_width_fit_fit_zero", bonus_as_i_prec_width_fit_fit_zero, bonus_as_i_prec_width_fit_fit_zero_bench, "{return test(\"%+8.5i\", 0);}"},
	{1, 830, "bonus_as_i_prec_width_nofit_fit_pos", bonus_as_i_prec_width_nofit_fit_pos, bonus_as_i_prec_width_nofit_fit_pos_bench, "{return test(\"%+8.3i\", 8375);}"},
	{1, 831, "bonus_as_i_prec_width_nofit_fit_neg", bonus_as_i_prec_width_nofit_fit_neg, bonus_as_i_prec_width_nofit_fit_neg_bench, "{return test(\"%+8.3i\", -8473);}"},
	{1, 832, "bonus_as_i_prec_width_fit_nofit_pos", bonus_as_i_prec_width_fit_nofit_pos, bonus_as_i_prec_width_fit_nofit_pos_bench, "{return test(\"%+3.7i\", 3267);}"},
	{1, 833, "bonus_as_i_prec_width_fit_nofit_neg", bonus_as_i_prec_width_fit_nofit_neg, bonus_as_i_prec_width_fit_nofit_neg_bench, "{return test(\"%+3.7i\", -2375);}"},
	{1, 834, "bonus_as_i_prec_width_nofit_nofit_pos", bonus_as_i_prec_width_nofit_nofit_pos, bonus_as_i_prec_width_nofit_nofit_pos_bench, "{return test(\"%+3.3i\", 6983);}"},
	{1, 835, "bonus_as_i_prec_width_nofit_nofit_neg", bonus_as_i_prec_width_nofit_nofit_neg, bonus_as_i_prec_width_nofit_nofit_neg_bench, "{return test(\"%+3.3i\", -8462);}"},
	{1, 836, "bonus_as_i_prec_width_ff_pos_zp", bonus_as_i_prec_width_ff_pos_zp, bonus_as_i_prec_width_ff_pos_zp_bench, "{return test(\"%0+8.5i\", 34);}"},
	{1, 837, "bonus_as_i_prec_width_ff_neg_zp", bonus_as_i_prec_width_ff_neg_zp, bonus_as_i_prec_width_ff_neg_zp_bench, "{return test(\"%0+10.5i\", -216);}"},
	{1, 838, "bonus_as_i_prec_width_ff_zero_zp", bonus_as_i_prec_width_ff_zero_zp, bonus_as_i_prec_width_ff_zero_zp_bench, "{return test(\"%0+8.5i\", 0);}"},
	{1, 839, "bonus_as_i_prec_width_nf_pos_zp", bonus_as_i_prec_width_nf_pos_zp, bonus_as_i_prec_width_nf_pos_zp_bench, "{return test(\"%0+8.3i\", 8375);}"},
	{1, 840, "bonus_as_i_prec_width_nf_neg_zp", bonus_as_i_prec_width_nf_neg_zp, bonus_as_i_prec_width_nf_neg_zp_bench, "{return test(\"%0+8.3i\", -8473);}"},
	{1, 841, "bonus_as_i_prec_width_fn_pos_zp", bonus_as_i_prec_width_fn_pos_zp, bonus_as_i_prec_width_fn_pos_zp_bench, "{return test(\"%0+3.7i\", 3267);}"},
	{1, 842, "bonus_as_i_prec_width_fn_neg_zp", bonus_as_i_prec_width_fn_neg_zp, bonus_as_i_prec_width_fn_neg_zp_bench, "{return test(\"%0+3.7i\", -2375);}"},
	{1, 843, "bonus_as_i_prec_width_nn_pos_zp", bonus_as_i_prec_width_nn_pos_zp, bonus_as_i_prec_width_nn_pos_zp_bench, "{return test(\"%0+3.3i\", 6983);}"},
	{1, 844, "bonus_as_i_prec_width_nn_neg_zp", bonus_as_i_prec_width_nn_neg_zp, bonus_as_i_prec_width_nn_neg_zp_bench, "{return test(\"%0+3.3i\", -8462);}"},
	{1, 845, "bonus_as_i_prec_width_fit_fit_pos_ljas", bonus_as_i_prec_width_fit_fit_pos_ljas, bonus_as_i_prec_width_fit_fit_pos_ljas_bench, "{return test(\"%+-8.5i\", 34);}"},
	{1, 846, "bonus_as_i_prec_width_fit_fit_neg_ljas", bonus_as_i_prec_width_fit_fit_neg_ljas, bonus_as_i_prec_width_fit_fit_neg_ljas_bench, "{return test(\"%+-10.5i\", -216);}"},
	{1, 847, "bonus_as_i_prec_width_fit_fit_zero_ljas", bonus_as_i_prec_width_fit_fit_zero_ljas, bonus_as_i_prec_width_fit_fit_zero_ljas_bench, "{return test(\"%+-8.5i\", 0);}"},
	{1, 848, "bonus_as_i_prec_width_nofit_fit_pos_ljas", bonus_as_i_prec_width_nofit_fit_pos_ljas, bonus_as_i_prec_width_nofit_fit_pos_ljas_bench, "{return test(\"%+-8.3i\", 8375);}"},
	{1, 849, "bonus_as_i_prec_width_nofit_fit_neg_ljas", bonus_as_i_prec_width_nofit_fit_neg_ljas, bonus_as_i_prec_width_nofit_fit_neg_ljas_bench, "{return test(\"%+-8.3i\", -8473);}"},
	{1, 850, "bonus_as_i_prec_width_fit_nofit_pos_ljas", bonus_as_i_prec_width_fit_nofit_pos_ljas, bonus_as_i_prec_width_fit_nofit_pos_ljas_bench, "{return test(\"%+-3.7i\", 3267);}"},
	{1, 851, "bonus_as_i_prec_width_fit_nofit_neg_ljas", bonus_as_i_prec_width_fit_nofit_neg_ljas, bonus_as_i_prec_width_fit_nofit_neg_ljas_bench, "{return test(\"%+-3.7i\", -2375);}"},
	{1, 852, "bonus_as_i_prec_width_nofit_nofit_pos_ljas", bonus_as_i_prec_width_nofit_nofit_pos_ljas, bonus_as_i_prec_width_nofit_nofit_pos_ljas_bench, "{return test(\"%+-3.3i\", 6983);}"},
	{1, 853, "bonus_as_i_prec_width_nofit_nofit_neg_ljas", bonus_as_i_prec_width_nofit_nofit_neg_ljas, bonus_as_i_prec_width_nofit_nofit_neg_ljas_bench, "{return test(\"%+-3.3i\", -8462);}"},
	{1, 854, "bonus_as_i_prec_width_ff_pos_ljaszp_ignoreflag", bonus_as_i_prec_width_ff_pos_ljaszp_ignoreflag, bonus_as_i_prec_width_ff_pos_ljaszp_ignoreflag_bench, "{return test(\"%0+-8.5i\", 34);}"},
	{1, 855, "bonus_as_i_prec_width_ff_neg_ljaszp_ignoreflag", bonus_as_i_prec_width_ff_neg_ljaszp_ignoreflag, bonus_as_i_prec_width_ff_neg_ljaszp_ignoreflag_bench, "{return test(\"%0+-10.5i\", -216);}"},
	{1, 856, "bonus_as_i_prec_width_ff_zero_ljaszp_ignoreflag", bonus_as_i_prec_width_ff_zero_ljaszp_ignoreflag, bonus_as_i_prec_width_ff_zero_ljaszp_ignoreflag_bench, "{return test(\"%0+-8.5i\", 0);}"},
	{1, 857, "bonus_as_i_prec_width_nf_pos_ljaszp_ignoreflag", bonus_as_i_prec_width_nf_pos_ljaszp_ignoreflag, bonus_as_i_prec_width_nf_pos_ljaszp_ignoreflag_bench, "{return test(\"%0+-8.3i\", 8375);}"},
	{1, 858, "bonus_as_i_prec_width_nf_neg_ljaszp_ignoreflag", bonus_as_i_prec_width_nf_neg_ljaszp_ignoreflag, bonus_as_i_prec_width_nf_neg_ljaszp_ignoreflag_bench, "{return test(\"%0+-8.3i\", -8473);}"},
	{1, 859, "bonus_as_i_prec_width_fn_pos_ljaszp_ignoreflag", bonus_as_i_prec_width_fn_pos_ljaszp_ignoreflag, bonus_as_i_prec_width_fn_pos_ljaszp_ignoreflag_bench, "{return test(\"%0+-3.7i\", 3267);}"},
	{1, 860, "bonus_as_i_prec_width_fn_neg_ljaszp_ignoreflag", bonus_as_i_prec_width_fn_neg_ljaszp_ignoreflag, bonus_as_i_prec_width_fn_neg_ljaszp_ignoreflag_bench, "{return test(\"%0+-3.7i\", -2375);}"},
	{1, 861, "bonus_as_i_prec_width_nn_pos_ljaszp_ignoreflag", bonus_as_i_prec_width_nn_pos_ljaszp_ignoreflag, bonus_as_i_prec_width_nn_pos_ljaszp_ignoreflag_bench, "{return test(\"%0+-3.3i\", 6983);}"},
	{1, 862, "bonus_as_i_prec_width_nn_neg_ljaszp_ignoreflag", bonus_as_i_prec_width_nn_neg_ljaszp_ignoreflag, bonus_as_i_prec_width_nn_neg_ljaszp_ignoreflag_bench, "{return test(\"%0+-3.3i\", -8462);}"},
	{1, 863, "nocrash_notrequired_bonus_as_dupflag_d", nocrash_notrequired_bonus_as_dupflag_d, nocrash_notrequired_bonus_as_dupflag_d_bench, "{return test(\"%++d\", 42);}"},
	{1, 864, "nocrash_notrequired_bonus_as_dupflag_d_ljasljw", nocrash_notrequired_bonus_as_dupflag_d_ljasljw, nocrash_notrequired_bonus_as_dupflag_d_ljasljw_bench, "{return test(\"%-+-5d\", 42);}"},
	{1, 865, "nocrash_notrequired_bonus_as_c_1", nocrash_notrequired_bonus_as_c_1, nocrash_notrequired_bonus_as_c_1_bench, "{return test(\"%+c\", 'a');}"},
	{1, 866, "nocrash_notrequired_bonus_as_c_2", nocrash_notrequired_bonus_as_c_2, nocrash_notrequired_bonus_as_c_2_bench, "{return test(\"%+c\", -42);}"},
	{1, 867, "nocrash_notrequired_bonus_as_s_1", nocrash_notrequired_bonus_as_s_1, nocrash_notrequired_bonus_as_s_1_bench, "{return test(\"%+s\", \"hello\");}"},
	{1, 868, "nocrash_notrequired_bonus_as_p_1", nocrash_notrequired_bonus_as_p_1, nocrash_notrequired_bonus_as_p_1_bench, "{return test(\"%+p\", &ncm_p);}"},
	{1, 869, "nocrash_notrequired_bonus_as_p_2", nocrash_notrequired_bonus_as_p_2, nocrash_notrequired_bonus_as_p_2_bench, "{return test(\"%+p\", &ncm_p);}"},
	{1, 870, "nocrash_notrequired_bonus_as_u", nocrash_notrequired_bonus_as_u, nocrash_notrequired_bonus_as_u_bench, "{return test(\"%+u\", 42);}"},
	{1, 871, "nocrash_notrequired_bonus_as_x", nocrash_notrequired_bonus_as_x, nocrash_notrequired_bonus_as_x_bench, "{return test(\"%+x\", 42);}"},
	{1, 872, "nocrash_notrequired_bonus_as_X", nocrash_notrequired_bonus_as_X, nocrash_notrequired_bonus_as_X_bench, "{return test(\"%+X\", 42);}"},
	{1, 873, "bonus_sp_d_basic_i_pos", bonus_sp_d_basic_i_pos, bonus_sp_d_basic_i_pos_bench, "{return test(\"this % d number\", 17);}"},
	{1, 874, "bonus_sp_d_basic_i_neg", bonus_sp_d_basic_i_neg, bonus_sp_d_basic_i_neg_bench, "{return test(\"this % d number\", -267);}"},
	{1, 875, "bonus_sp_d_basic_i_zero", bonus_sp_d_basic_i_zero, bonus_sp_d_basic_i_zero_bench, "{return test(\"this % d number\", 0);}"},
	{1, 876, "bonus_sp_d_basic_i_onlypos", bonus_sp_d_basic_i_onlypos, bonus_sp_d_basic_i_onlypos_bench, "{return test(\"% d\", 3);}"},
	{1, 877, "bonus_sp_d_basic_i_onlyneg", bonus_sp_d_basic_i_onlyneg, bonus_sp_d_basic_i_onlyneg_bench, "{return test(\"% d\", -1);}"},
	{1, 878, "bonus_sp_d_basic_i_onlyzero", bonus_sp_d_basic_i_onlyzero, bonus_sp_d_basic_i_onlyzero_bench, "{return test(\"% d\", 0);}"},
	{1, 879, "bonus_sp_d_basic_i_pos_d", bonus_sp_d_basic_i_pos_d, bonus_sp_d_basic_i_pos_d_bench, "{return test(\"this % d number\", 17);}"},
	{1, 880, "bonus_sp_d_basic_i_neg_d", bonus_sp_d_basic_i_neg_d, bonus_sp_d_basic_i_neg_d_bench, "{return test(\"this % d number\", -267);}"},
	{1, 881, "bonus_sp_d_basic_i_zero_d", bonus_sp_d_basic_i_zero_d, bonus_sp_d_basic_i_zero_d_bench, "{return test(\"this % d number\", 0);}"},
	{1, 882, "bonus_sp_d_intmax", bonus_sp_d_intmax, bonus_sp_d_intmax_bench, "{return test(\"% d\", 2147483647);}"},
	{1, 883, "bonus_sp_d_intmin", bonus_sp_d_intmin, bonus_sp_d_intmin_bench, "{return test(\"% d\", (int)(-2147483678));}"},
	{1, 884, "bonus_sp_d_width_pos_fits", bonus_sp_d_width_pos_fits, bonus_sp_d_width_pos_fits_bench, "{return test(\"% 7d\", 33);}"},
	{1, 885, "bonus_sp_d_width_neg_fits", bonus_sp_d_width_neg_fits, bonus_sp_d_width_neg_fits_bench, "{return test(\"% 7d\", -14);}"},
	{1, 886, "bonus_sp_d_width_zero_fits", bonus_sp_d_width_zero_fits, bonus_sp_d_width_zero_fits_bench, "{return test(\"% 3d\", 0);}"},
	{1, 887, "bonus_sp_d_width_pos_exactfit", bonus_sp_d_width_pos_exactfit, bonus_sp_d_width_pos_exactfit_bench, "{return test(\"% 5d\", 52625);}"},
	{1, 888, "bonus_sp_d_width_neg_exactfit", bonus_sp_d_width_neg_exactfit, bonus_sp_d_width_neg_exactfit_bench, "{return test(\"% 5d\", -2562);}"},
	{1, 889, "bonus_sp_d_width_pos_nofit", bonus_sp_d_width_pos_nofit, bonus_sp_d_width_pos_nofit_bench, "{return test(\"% 4d\", 94827);}"},
	{1, 890, "bonus_sp_d_width_neg_nofit", bonus_sp_d_width_neg_nofit, bonus_sp_d_width_neg_nofit_bench, "{return test(\"% 4d\", -2464);}"},
	{1, 891, "bonus_sp_d_width_pos_fits_lj", bonus_sp_d_width_pos_fits_lj, bonus_sp_d_width_pos_fits_lj_bench, "{return test(\"% -7d\", 33);}"},
	{1, 892, "bonus_sp_d_width_neg_fits_lj", bonus_sp_d_width_neg_fits_lj, bonus_sp_d_width_neg_fits_lj_bench, "{return test(\"% -7d\", -14);}"},
	{1, 893, "bonus_sp_d_width_zero_fits_lj", bonus_sp_d_width_zero_fits_lj, bonus_sp_d_width_zero_fits_lj_bench, "{return test(\"% -3d\", 0);}"},
	{1, 894, "bonus_sp_d_width_pos_exactfit_lj", bonus_sp_d_width_pos_exactfit_lj, bonus_sp_d_width_pos_exactfit_lj_bench, "{return test(\"% -5d\", 52625);}"},
	{1, 895, "bonus_sp_d_width_neg_exactfit_lj", bonus_sp_d_width_neg_exactfit_lj, bonus_sp_d_width_neg_exactfit_lj_bench, "{return test(\"% -5d\", -2562);}"},
	{1, 896, "bonus_sp_d_width_pos_nofit_lj", bonus_sp_d_width_pos_nofit_lj, bonus_sp_d_width_pos_nofit_lj_bench, "{return test(\"% -4d\", 94827);}"},
	{1, 897, "bonus_sp_d_width_neg_nofit_lj", bonus_sp_d_width_neg_nofit_lj, bonus_sp_d_width_neg_nofit_lj_bench, "{return test(\"% -4d\", -2464);}"},
	{1, 898, "bonus_sp_d_prec_fits_pos", bonus_sp_d_prec_fits_pos, bonus_sp_d_prec_fits_pos_bench, "{return test(\"% .5d\", 2);}"},
	{1, 899, "bonus_sp_d_prec_fits_neg", bonus_sp_d_prec_fits_neg, bonus_sp_d_prec_fits_neg_bench, "{return test(\"% .6d\", -3);}"},
	{1, 900, "bonus_sp_d_prec_fits_zero", bonus_sp_d_prec_fits_zero, bonus_sp_d_prec_fits_zero_bench, "{return test(\"% .3d\", 0);}"},
	{1, 901, "bonus_sp_d_prec_exactfit_pos", bonus_sp_d_prec_exactfit_pos, bonus_sp_d_prec_exactfit_pos_bench, "{return test(\"% .4d\", 5263);}"},
	{1, 902, "bonus_sp_d_prec_exactfit_neg", bonus_sp_d_prec_exactfit_neg, bonus_sp_d_prec_exactfit_neg_bench, "{return test(\"% .4d\", -2372);}"},
	{1, 903, "bonus_sp_d_prec_nofit_pos", bonus_sp_d_prec_nofit_pos, bonus_sp_d_prec_nofit_pos_bench, "{return test(\"% .3d\", 13862);}"},
	{1, 904, "bonus_sp_d_prec_nofit_neg", bonus_sp_d_prec_nofit_neg, bonus_sp_d_prec_nofit_neg_bench, "{return test(\"% .3d\",-23646);}"},
	{1, 905, "bonus_sp_d_zpsp_pos_fits", bonus_sp_d_zpsp_pos_fits, bonus_sp_d_zpsp_pos_fits_bench, "{return test(\"% 05d\", 43);}"},
	{1, 906, "bonus_sp_d_zpsp_neg_fits", bonus_sp_d_zpsp_neg_fits, bonus_sp_d_zpsp_neg_fits_bench, "{return test(\"% 07d\", -54);}"},
	{1, 907, "bonus_sp_d_zpsp_zero_fits", bonus_sp_d_zpsp_zero_fits, bonus_sp_d_zpsp_zero_fits_bench, "{return test(\"% 03d\", 0);}"},
	{1, 908, "bonus_sp_d_zpsp_pos_exactfit", bonus_sp_d_zpsp_pos_exactfit, bonus_sp_d_zpsp_pos_exactfit_bench, "{return test(\"% 03d\", 634);}"},
	{1, 909, "bonus_sp_d_zpsp_neg_exactfit", bonus_sp_d_zpsp_neg_exactfit, bonus_sp_d_zpsp_neg_exactfit_bench, "{return test(\"% 04d\", -532);}"},
	{1, 910, "bonus_sp_d_zpsp_neg_minus1fit", bonus_sp_d_zpsp_neg_minus1fit, bonus_sp_d_zpsp_neg_minus1fit_bench, "{return test(\"% 04d\", -4825);}"},
	{1, 911, "bonus_sp_d_prec_width_fit_fit_pos", bonus_sp_d_prec_width_fit_fit_pos, bonus_sp_d_prec_width_fit_fit_pos_bench, "{return test(\"% 8.5d\", 34);}"},
	{1, 912, "bonus_sp_d_prec_width_fit_fit_neg", bonus_sp_d_prec_width_fit_fit_neg, bonus_sp_d_prec_width_fit_fit_neg_bench, "{return test(\"% 10.5d\", -216);}"},
	{1, 913, "bonus_sp_d_prec_width_fit_fit_zero", bonus_sp_d_prec_width_fit_fit_zero, bonus_sp_d_prec_width_fit_fit_zero_bench, "{return test(\"% 8.5d\", 0);}"},
	{1, 914, "bonus_sp_d_prec_width_nofit_fit_pos", bonus_sp_d_prec_width_nofit_fit_pos, bonus_sp_d_prec_width_nofit_fit_pos_bench, "{return test(\"% 8.3d\", 8375);}"},
	{1, 915, "bonus_sp_d_prec_width_nofit_fit_neg", bonus_sp_d_prec_width_nofit_fit_neg, bonus_sp_d_prec_width_nofit_fit_neg_bench, "{return test(\"% 8.3d\", -8473);}"},
	{1, 916, "bonus_sp_d_prec_width_fit_nofit_pos", bonus_sp_d_prec_width_fit_nofit_pos, bonus_sp_d_prec_width_fit_nofit_pos_bench, "{return test(\"% 3.7d\", 3267);}"},
	{1, 917, "bonus_sp_d_prec_width_fit_nofit_neg", bonus_sp_d_prec_width_fit_nofit_neg, bonus_sp_d_prec_width_fit_nofit_neg_bench, "{return test(\"% 3.7d\", -2375);}"},
	{1, 918, "bonus_sp_d_prec_width_nofit_nofit_pos", bonus_sp_d_prec_width_nofit_nofit_pos, bonus_sp_d_prec_width_nofit_nofit_pos_bench, "{return test(\"% 3.3d\", 6983);}"},
	{1, 919, "bonus_sp_d_prec_width_nofit_nofit_neg", bonus_sp_d_prec_width_nofit_nofit_neg, bonus_sp_d_prec_width_nofit_nofit_neg_bench, "{return test(\"% 3.3d\", -8462);}"},
	{1, 920, "bonus_sp_d_prec_width_fit_fit_pos_lj", bonus_sp_d_prec_width_fit_fit_pos_lj, bonus_sp_d_prec_width_fit_fit_pos_lj_bench, "{return test(\"% -8.5d\", 34);}"},
	{1, 921, "bonus_sp_d_prec_width_fit_fit_neg_lj", bonus_sp_d_prec_width_fit_fit_neg_lj, bonus_sp_d_prec_width_fit_fit_neg_lj_bench, "{return test(\"% -10.5d\", -216);}"},
	{1, 922, "bonus_sp_d_prec_width_fit_fit_zero_lj", bonus_sp_d_prec_width_fit_fit_zero_lj, bonus_sp_d_prec_width_fit_fit_zero_lj_bench, "{return test(\"% -8.5d\", 0);}"},
	{1, 923, "bonus_sp_d_prec_width_nofit_fit_pos_lj", bonus_sp_d_prec_width_nofit_fit_pos_lj, bonus_sp_d_prec_width_nofit_fit_pos_lj_bench, "{return test(\"% -8.3d\", 8375);}"},
	{1, 924, "bonus_sp_d_prec_width_nofit_fit_neg_lj", bonus_sp_d_prec_width_nofit_fit_neg_lj, bonus_sp_d_prec_width_nofit_fit_neg_lj_bench, "{return test(\"% -8.3d\", -8473);}"},
	{1, 925, "bonus_sp_d_prec_width_fit_nofit_pos_lj", bonus_sp_d_prec_width_fit_nofit_pos_lj, bonus_sp_d_prec_width_fit_nofit_pos_lj_bench, "{return test(\"% -3.7d\", 3267);}"},
	{1, 926, "bonus_sp_d_prec_width_fit_nofit_neg_lj", bonus_sp_d_prec_width_fit_nofit_neg_lj, bonus_sp_d_prec_width_fit_nofit_neg_lj_bench, "{return test(\"% -3.7d\", -2375);}"},
	{1, 927, "bonus_sp_d_prec_width_nofit_nofit_pos_lj", bonus_sp_d_prec_width_nofit_nofit_pos_lj, bonus_sp_d_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"% -3.3d\", 6983);}"},
	{1, 928, "bonus_sp_d_prec_width_nofit_nofit_neg_lj", bonus_sp_d_prec_width_nofit_nofit_neg_lj, bonus_sp_d_prec_width_nofit_nofit_neg_lj_bench, "{return test(\"% -3.3d\", -8462);}"},
	{1, 929, "bonus_sp_d_prec_width_ff_pos_zp", bonus_sp_d_prec_width_ff_pos_zp, bonus_sp_d_prec_width_ff_pos_zp_bench, "{return test(\"% 08.5d\", 34);}"},
	{1, 930, "bonus_sp_d_prec_width_ff_neg_zp", bonus_sp_d_prec_width_ff_neg_zp, bonus_sp_d_prec_width_ff_neg_zp_bench, "{return test(\"% 010.5d\", -216);}"},
	{1, 931, "bonus_sp_d_prec_width_ff_zero_zp", bonus_sp_d_prec_width_ff_zero_zp, bonus_sp_d_prec_width_ff_zero_zp_bench, "{return test(\"% 08.5d\", 0);}"},
	{1, 932, "bonus_sp_d_prec_width_nf_pos_zp", bonus_sp_d_prec_width_nf_pos_zp, bonus_sp_d_prec_width_nf_pos_zp_bench, "{return test(\"% 08.3d\", 8375);}"},
	{1, 933, "bonus_sp_d_prec_width_nf_neg_zp", bonus_sp_d_prec_width_nf_neg_zp, bonus_sp_d_prec_width_nf_neg_zp_bench, "{return test(\"% 08.3d\", -8473);}"},
	{1, 934, "bonus_sp_d_prec_width_fn_pos_zp", bonus_sp_d_prec_width_fn_pos_zp, bonus_sp_d_prec_width_fn_pos_zp_bench, "{return test(\"% 03.7d\", 3267);}"},
	{1, 935, "bonus_sp_d_prec_width_fn_neg_zp", bonus_sp_d_prec_width_fn_neg_zp, bonus_sp_d_prec_width_fn_neg_zp_bench, "{return test(\"% 03.7d\", -2375);}"},
	{1, 936, "bonus_sp_d_prec_width_nn_pos_zp", bonus_sp_d_prec_width_nn_pos_zp, bonus_sp_d_prec_width_nn_pos_zp_bench, "{return test(\"% 03.3d\", 6983);}"},
	{1, 937, "bonus_sp_d_prec_width_nn_neg_zp", bonus_sp_d_prec_width_nn_neg_zp, bonus_sp_d_prec_width_nn_neg_zp_bench, "{return test(\"% 03.3d\", -8462);}"},
	{1, 938, "bonus_sp_d_prec_width_ff_pos_ljzpsp_ignoreflag", bonus_sp_d_prec_width_ff_pos_ljzpsp_ignoreflag, bonus_sp_d_prec_width_ff_pos_ljzpsp_ignoreflag_bench, "{return test(\"% 0-8.5d\", 34);}"},
	{1, 939, "bonus_sp_d_prec_width_ff_neg_ljzpsp_ignoreflag", bonus_sp_d_prec_width_ff_neg_ljzpsp_ignoreflag, bonus_sp_d_prec_width_ff_neg_ljzpsp_ignoreflag_bench, "{return test(\"% 0-10.5d\", -216);}"},
	{1, 940, "bonus_sp_d_prec_width_ff_zero_ljzpsp_ignoreflag", bonus_sp_d_prec_width_ff_zero_ljzpsp_ignoreflag, bonus_sp_d_prec_width_ff_zero_ljzpsp_ignoreflag_bench, "{return test(\"% 0-8.5d\", 0);}"},
	{1, 941, "bonus_sp_d_prec_width_nf_pos_ljzpsp_ignoreflag", bonus_sp_d_prec_width_nf_pos_ljzpsp_ignoreflag, bonus_sp_d_prec_width_nf_pos_ljzpsp_ignoreflag_bench, "{return test(\"% 0-8.3d\", 8375);}"},
	{1, 942, "bonus_sp_d_prec_width_nf_neg_ljzpsp_ignoreflag", bonus_sp_d_prec_width_nf_neg_ljzpsp_ignoreflag, bonus_sp_d_prec_width_nf_neg_ljzpsp_ignoreflag_bench, "{return test(\"% 0-8.3d\", -8473);}"},
	{1, 943, "bonus_sp_d_prec_width_fn_pos_ljzpsp_ignoreflag", bonus_sp_d_prec_width_fn_pos_ljzpsp_ignoreflag, bonus_sp_d_prec_width_fn_pos_ljzpsp_ignoreflag_bench, "{return test(\"% 0-3.7d\", 3267);}"},
	{1, 944, "bonus_sp_d_prec_width_fn_neg_ljzpsp_ignoreflag", bonus_sp_d_prec_width_fn_neg_ljzpsp_ignoreflag, bonus_sp_d_prec_width_fn_neg_ljzpsp_ignoreflag_bench, "{return test(\"% 0-3.7d\", -2375);}"},
	{1, 945, "bonus_sp_d_prec_width_nn_pos_ljzpsp_ignoreflag", bonus_sp_d_prec_width_nn_pos_ljzpsp_ignoreflag, bonus_sp_d_prec_width_nn_pos_ljzpsp_ignoreflag_bench, "{return test(\"% 0-3.3d\", 6983);}"},
	{1, 946, "bonus_sp_d_prec_width_nn_neg_ljzpsp_ignoreflag", bonus_sp_d_prec_width_nn_neg_ljzpsp_ignoreflag, bonus_sp_d_prec_width_nn_neg_ljzpsp_ignoreflag_bench, "{return test(\"% 0-3.3d\", -8462);}"},
	{1, 947, "bonus_sp_i_basic_i_pos", bonus_sp_i_basic_i_pos, bonus_sp_i_basic_i_pos_bench, "{return test(\"this % i number\", 17);}"},
	{1, 948, "bonus_sp_i_basic_i_neg", bonus_sp_i_basic_i_neg, bonus_sp_i_basic_i_neg_bench, "{return test(\"this % i number\", -267);}"},
	{1, 949, "bonus_sp_i_basic_i_zero", bonus_sp_i_basic_i_zero, bonus_sp_i_basic_i_zero_bench, "{return test(\"this % i number\", 0);}"},
	{1, 950, "bonus_sp_i_basic_i_onlypos", bonus_sp_i_basic_i_onlypos, bonus_sp_i_basic_i_onlypos_bench, "{return test(\"% i\", 3);}"},
	{1, 951, "bonus_sp_i_basic_i_onlyneg", bonus_sp_i_basic_i_onlyneg, bonus_sp_i_basic_i_onlyneg_bench, "{return test(\"% i\", -1);}"},
	{1, 952, "bonus_sp_i_basic_i_onlyzero", bonus_sp_i_basic_i_onlyzero, bonus_sp_i_basic_i_onlyzero_bench, "{return test(\"% i\", 0);}"},
	{1, 953, "bonus_sp_i_basic_i_pos_d", bonus_sp_i_basic_i_pos_d, bonus_sp_i_basic_i_pos_d_bench, "{return test(\"this % d number\", 17);}"},
	{1, 954, "bonus_sp_i_basic_i_neg_d", bonus_sp_i_basic_i_neg_d, bonus_sp_i_basic_i_neg_d_bench, "{return test(\"this % d number\", -267);}"},
	{1, 955, "bonus_sp_i_basic_i_zero_d", bonus_sp_i_basic_i_zero_d, bonus_sp_i_basic_i_zero_d_bench, "{return test(\"this % d number\", 0);}"},
	{1, 956, "bonus_sp_i_intmax", bonus_sp_i_intmax, bonus_sp_i_intmax_bench, "{return test(\"% i\", 2147483647);}"},
	{1, 957, "bonus_sp_i_intmin", bonus_sp_i_intmin, bonus_sp_i_intmin_bench, "{return test(\"% i\", (int)(-2147483678));}"},
	{1, 958, "bonus_sp_i_width_pos_fits", bonus_sp_i_width_pos_fits, bonus_sp_i_width_pos_fits_bench, "{return test(\"% 7i\", 33);}"},
	{1, 959, "bonus_sp_i_width_neg_fits", bonus_sp_i_width_neg_fits, bonus_sp_i_width_neg_fits_bench, "{return test(\"% 7i\", -14);}"},
	{1, 960, "bonus_sp_i_width_zero_fits", bonus_sp_i_width_zero_fits, bonus_sp_i_width_zero_fits_bench, "{return test(\"% 3i\", 0);}"},
	{1, 961, "bonus_sp_i_width_pos_exactfit", bonus_sp_i_width_pos_exactfit, bonus_sp_i_width_pos_exactfit_bench, "{return test(\"% 5i\", 52625);}"},
	{1, 962, "bonus_sp_i_width_neg_exactfit", bonus_sp_i_width_neg_exactfit, bonus_sp_i_width_neg_exactfit_bench, "{return test(\"% 5i\", -2562);}"},
	{1, 963, "bonus_sp_i_width_pos_nofit", bonus_sp_i_width_pos_nofit, bonus_sp_i_width_pos_nofit_bench, "{return test(\"% 4i\", 94827);}"},
	{1, 964, "bonus_sp_i_width_neg_nofit", bonus_sp_i_width_neg_nofit, bonus_sp_i_width_neg_nofit_bench, "{return test(\"% 4i\", -2464);}"},
	{1, 965, "bonus_sp_i_width_pos_fits_lj", bonus_sp_i_width_pos_fits_lj, bonus_sp_i_width_pos_fits_lj_bench, "{return test(\"% -7i\", 33);}"},
	{1, 966, "bonus_sp_i_width_neg_fits_lj", bonus_sp_i_width_neg_fits_lj, bonus_sp_i_width_neg_fits_lj_bench, "{return test(\"% -7i\", -14);}"},
	{1, 967, "bonus_sp_i_width_zero_fits_lj", bonus_sp_i_width_zero_fits_lj, bonus_sp_i_width_zero_fits_lj_bench, "{return test(\"% -3i\", 0);}"},
	{1, 968, "bonus_sp_i_width_pos_exactfit_lj", bonus_sp_i_width_pos_exactfit_lj, bonus_sp_i_width_pos_exactfit_lj_bench, "{return test(\"% -5i\", 52625);}"},
	{1, 969, "bonus_sp_i_width_neg_exactfit_lj", bonus_sp_i_width_neg_exactfit_lj, bonus_sp_i_width_neg_exactfit_lj_bench, "{return test(\"% -5i\", -2562);}"},
	{1, 970, "bonus_sp_i_width_pos_nofit_lj", bonus_sp_i_width_pos_nofit_lj, bonus_sp_i_width_pos_nofit_lj_bench, "{return test(\"% -4i\", 94827);}"},
	{1, 971, "bonus_sp_i_width_neg_nofit_lj", bonus_sp_i_width_neg_nofit_lj, bonus_sp_i_width_neg_nofit_lj_bench, "{return test(\"% -4i\", -2464);}"},
	{1, 972, "bonus_sp_i_prec_fits_pos", bonus_sp_i_prec_fits_pos, bonus_sp_i_prec_fits_pos_bench, "{return test(\"% .5i\", 2);}"},
	{1, 973, "bonus_sp_i_prec_fits_neg", bonus_sp_i_prec_fits_neg, bonus_sp_i_prec_fits_neg_bench, "{return test(\"% .6i\", -3);}"},
	{1, 974, "bonus_sp_i_prec_fits_zero", bonus_sp_i_prec_fits_zero, bonus_sp_i_prec_fits_zero_bench, "{return test(\"% .3i\", 0);}"},
	{1, 975, "bonus_sp_i_prec_exactfit_pos", bonus_sp_i_prec_exactfit_pos, bonus_sp_i_prec_exactfit_pos_bench, "{return test(\"% .4i\", 5263);}"},
	{1, 976, "bonus_sp_i_prec_exactfit_neg", bonus_sp_i_prec_exactfit_neg, bonus_sp_i_prec_exactfit_neg_bench, "{return test(\"% .4i\", -2372);}"},
	{1, 977, "bonus_sp_i_prec_nofit_pos", bonus_sp_i_prec_nofit_pos, bonus_sp_i_prec_nofit_pos_bench, "{return test(\"% .3i\", 13862);}"},
	{1, 978, "bonus_sp_i_prec_nofit_neg", bonus_sp_i_prec_nofit_neg, bonus_sp_i_prec_nofit_neg_bench, "{return test(\"% .3i\",-23646);}"},
	{1, 979, "bonus_sp_i_zpsp_pos_fits", bonus_sp_i_zpsp_pos_fits, bonus_sp_i_zpsp_pos_fits_bench, "{return test(\"% 05i\", 43);}"},
	{1, 980, "bonus_sp_i_zpsp_neg_fits", bonus_sp_i_zpsp_neg_fits, bonus_sp_i_zpsp_neg_fits_bench, "{return test(\"% 07i\", -54);}"},
	{1, 981, "bonus_sp_i_zpsp_zero_fits", bonus_sp_i_zpsp_zero_fits, bonus_sp_i_zpsp_zero_fits_bench, "{return test(\"% 03i\", 0);}"},
	{1, 982, "bonus_sp_i_zpsp_pos_exactfit", bonus_sp_i_zpsp_pos_exactfit, bonus_sp_i_zpsp_pos_exactfit_bench, "{return test(\"% 03i\", 634);}"},
	{1, 983, "bonus_sp_i_zpsp_neg_exactfit", bonus_sp_i_zpsp_neg_exactfit, bonus_sp_i_zpsp_neg_exactfit_bench, "{return test(\"% 04i\", -532);}"},
	{1, 984, "bonus_sp_i_zpsp_neg_minus1fit", bonus_sp_i_zpsp_neg_minus1fit, bonus_sp_i_zpsp_neg_minus1fit_bench, "{return test(\"% 04i\", -4825);}"},
	{1, 985, "bonus_sp_i_prec_width_fit_fit_pos", bonus_sp_i_prec_width_fit_fit_pos, bonus_sp_i_prec_width_fit_fit_pos_bench, "{return test(\"% 8.5i\", 34);}"},
	{1, 986, "bonus_sp_i_prec_width_fit_fit_neg", bonus_sp_i_prec_width_fit_fit_neg, bonus_sp_i_prec_width_fit_fit_neg_bench, "{return test(\"% 10.5i\", -216);}"},
	{1, 987, "bonus_sp_i_prec_width_fit_fit_zero", bonus_sp_i_prec_width_fit_fit_zero, bonus_sp_i_prec_width_fit_fit_zero_bench, "{return test(\"% 8.5i\", 0);}"},
	{1, 988, "bonus_sp_i_prec_width_nofit_fit_pos", bonus_sp_i_prec_width_nofit_fit_pos, bonus_sp_i_prec_width_nofit_fit_pos_bench, "{return test(\"% 8.3i\", 8375);}"},
	{1, 989, "bonus_sp_i_prec_width_nofit_fit_neg", bonus_sp_i_prec_width_nofit_fit_neg, bonus_sp_i_prec_width_nofit_fit_neg_bench, "{return test(\"% 8.3i\", -8473);}"},
	{1, 990, "bonus_sp_i_prec_width_fit_nofit_pos", bonus_sp_i_prec_width_fit_nofit_pos, bonus_sp_i_prec_width_fit_nofit_pos_bench, "{return test(\"% 3.7i\", 3267);}"},
	{1, 991, "bonus_sp_i_prec_width_fit_nofit_neg", bonus_sp_i_prec_width_fit_nofit_neg, bonus_sp_i_prec_width_fit_nofit_neg_bench, "{return test(\"% 3.7i\", -2375);}"},
	{1, 992, "bonus_sp_i_prec_width_nofit_nofit_pos", bonus_sp_i_prec_width_nofit_nofit_pos, bonus_sp_i_prec_width_nofit_nofit_pos_bench, "{return test(\"% 3.3i\", 6983);}"},
	{1, 993, "bonus_sp_i_prec_width_nofit_nofit_neg", bonus_sp_i_prec_width_nofit_nofit_neg, bonus_sp_i_prec_width_nofit_nofit_neg_bench, "{return test(\"% 3.3i\", -8462);}"},
	{1, 994, "bonus_sp_i_prec_width_fit_fit_pos_lj", bonus_sp_i_prec_width_fit_fit_pos_lj, bonus_sp_i_prec_width_fit_fit_pos_lj_bench, "{return test(\"% -8.5i\", 34);}"},
	{1, 995, "bonus_sp_i_prec_width_fit_fit_neg_lj", bonus_sp_i_prec_width_fit_fit_neg_lj, bonus_sp_i_prec_width_fit_fit_neg_lj_bench, "{return test(\"% -10.5i\", -216);}"},
	{1, 996, "bonus_sp_i_prec_width_fit_fit_zero_lj", bonus_sp_i_prec_width_fit_fit_zero_lj, bonus_sp_i_prec_width_fit_fit_zero_lj_bench, "{return test(\"% -8.5i\", 0);}"},
	{1, 997, "bonus_sp_i_prec_width_nofit_fit_pos_lj", bonus_sp_i_prec_width_nofit_fit_pos_lj, bonus_sp_i_prec_width_nofit_fit_pos_lj_bench, "{return test(\"% -8.3i\", 8375);}"},
	{1, 998, "bonus_sp_i_prec_width_nofit_fit_neg_lj", bonus_sp_i_prec_width_nofit_fit_neg_lj, bonus_sp_i_prec_width_nofit_fit_neg_lj_bench, "{return test(\"% -8.3i\", -8473);}"},
	{1, 999, "bonus_sp_i_prec_width_fit_nofit_pos_lj", bonus_sp_i_prec_width_fit_nofit_pos_lj, bonus_sp_i_prec_width_fit_nofit_pos_lj_bench, "{return test(\"% -3.7i\", 3267);}"},
	{1, 1000, "bonus_sp_i_prec_width_fit_nofit_neg_lj", bonus_sp_i_prec_width_fit_nofit_neg_lj, bonus_sp_i_prec_width_fit_nofit_neg_lj_bench, "{return test(\"% -3.7i\", -2375);}"},
	{1, 1001, "bonus_sp_i_prec_width_nofit_nofit_pos_lj", bonus_sp_i_prec_width_nofit_nofit_pos_lj, bonus_sp_i_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"% -3.3i\", 6983);}"},
	{1, 1002, "bonus_sp_i_prec_width_nofit_nofit_neg_lj", bonus_sp_i_prec_width_nofit_nofit_neg_lj, bonus_sp_i_prec_width_nofit_nofit_neg_lj_bench, "{return test(\"% -3.3i\", -8462);}"},
	{1, 1003, "bonus_sp_i_prec_width_ff_pos_zp", bonus_sp_i_prec_width_ff_pos_zp, bonus_sp_i_prec_width_ff_pos_zp_bench, "{return test(\"% 08.5i\", 34);}"},
	{1, 1004, "bonus_sp_i_prec_width_ff_neg_zp", bonus_sp_i_prec_width_ff_neg_zp, bonus_sp_i_prec_width_ff_neg_zp_bench, "{return test(\"% 010.5i\", -216);}"},
	{1, 1005, "bonus_sp_i_prec_width_ff_zero_zp", bonus_sp_i_prec_width_ff_zero_zp, bonus_sp_i_prec_width_ff_zero_zp_bench, "{return test(\"% 08.5i\", 0);}"},
	{1, 1006, "bonus_sp_i_prec_width_nf_pos_zp", bonus_sp_i_prec_width_nf_pos_zp, bonus_sp_i_prec_width_nf_pos_zp_bench, "{return test(\"% 08.3i\", 8375);}"},
	{1, 1007, "bonus_sp_i_prec_width_nf_neg_zp", bonus_sp_i_prec_width_nf_neg_zp, bonus_sp_i_prec_width_nf_neg_zp_bench, "{return test(\"% 08.3i\", -8473);}"},
	{1, 1008, "bonus_sp_i_prec_width_fn_pos_zp", bonus_sp_i_prec_width_fn_pos_zp, bonus_sp_i_prec_width_fn_pos_zp_bench, "{return test(\"% 03.7i\", 3267);}"},
	{1, 1009, "bonus_sp_i_prec_width_fn_neg_zp", bonus_sp_i_prec_width_fn_neg_zp, bonus_sp_i_prec_width_fn_neg_zp_bench, "{return test(\"% 03.7i\", -2375);}"},
	{1, 1010, "bonus_sp_i_prec_width_nn_pos_zp", bonus_sp_i_prec_width_nn_pos_zp, bonus_sp_i_prec_width_nn_pos_zp_bench, "{return test(\"% 03.3i\", 6983);}"},
	{1, 1011, "bonus_sp_i_prec_width_nn_neg_zp", bonus_sp_i_prec_width_nn_neg_zp, bonus_sp_i_prec_width_nn_neg_zp_bench, "{return test(\"% 03.3i\", -8462);}"},
	{1, 1012, "bonus_sp_i_prec_width_ff_pos_ljzpsp_ignoreflag", bonus_sp_i_prec_width_ff_pos_ljzpsp_ignoreflag, bonus_sp_i_prec_width_ff_pos_ljzpsp_ignoreflag_bench, "{return test(\"% 0-8.5i\", 34);}"},
	{1, 1013, "bonus_sp_i_prec_width_ff_neg_ljzpsp_ignoreflag", bonus_sp_i_prec_width_ff_neg_ljzpsp_ignoreflag, bonus_sp_i_prec_width_ff_neg_ljzpsp_ignoreflag_bench, "{return test(\"% 0-10.5i\", -216);}"},
	{1, 1014, "bonus_sp_i_prec_width_ff_zero_ljzpsp_ignoreflag", bonus_sp_i_prec_width_ff_zero_ljzpsp_ignoreflag, bonus_sp_i_prec_width_ff_zero_ljzpsp_ignoreflag_bench, "{return test(\"% 0-8.5i\", 0);}"},
	{1, 1015, "bonus_sp_i_prec_width_nf_pos_ljzpsp_ignoreflag", bonus_sp_i_prec_width_nf_pos_ljzpsp_ignoreflag, bonus_sp_i_prec_width_nf_pos_ljzpsp_ignoreflag_bench, "{return test(\"% 0-8.3i\", 8375);}"},
	{1, 1016, "bonus_sp_i_prec_width_nf_neg_ljzpsp_ignoreflag", bonus_sp_i_prec_width_nf_neg_ljzpsp_ignoreflag, bonus_sp_i_prec_width_nf_neg_ljzpsp_ignoreflag_bench, "{return test(\"% 0-8.3i\", -8473);}"},
	{1, 1017, "bonus_sp_i_prec_width_fn_pos_ljzpsp_ignoreflag", bonus_sp_i_prec_width_fn_pos_ljzpsp_ignoreflag, bonus_sp_i_prec_width_fn_pos_ljzpsp_ignoreflag_bench, "{return test(\"% 0-3.7i\", 3267);}"},
	{1, 1018, "bonus_sp_i_prec_width_fn_neg_ljzpsp_ignoreflag", bonus_sp_i_prec_width_fn_neg_ljzpsp_ignoreflag, bonus_sp_i_prec_width_fn_neg_ljzpsp_ignoreflag_bench, "{return test(\"% 0-3.7i\", -2375);}"},
	{1, 1019, "bonus_sp_i_prec_width_nn_pos_ljzpsp_ignoreflag", bonus_sp_i_prec_width_nn_pos_ljzpsp_ignoreflag, bonus_sp_i_prec_width_nn_pos_ljzpsp_ignoreflag_bench, "{return test(\"% 0-3.3i\", 6983);}"},
	{1, 1020, "bonus_sp_i_prec_width_nn_neg_ljzpsp_ignoreflag", bonus_sp_i_prec_width_nn_neg_ljzpsp_ignoreflag, bonus_sp_i_prec_width_nn_neg_ljzpsp_ignoreflag_bench, "{return test(\"% 0-3.3i\", -8462);}"},
	{1, 1021, "nocrash_notrequired_bonus_sp_dupflag_d", nocrash_notrequired_bonus_sp_dupflag_d, nocrash_notrequired_bonus_sp_dupflag_d_bench, "{return test(\"%  d\", 42);}"},
	{1, 1022, "nocrash_notrequired_bonus_sp_c_1", nocrash_notrequired_bonus_sp_c_1, nocrash_notrequired_bonus_sp_c_1_bench, "{return test(\"% c\", 'a');}"},
	{1, 1023, "nocrash_notrequired_bonus_sp_c_2", nocrash_notrequired_bonus_sp_c_2, nocrash_notrequired_bonus_sp_c_2_bench, "{return test(\"% c\", -42);}"},
	{1, 1024, "nocrash_notrequired_bonus_sp_s_1", nocrash_notrequired_bonus_sp_s_1, nocrash_notrequired_bonus_sp_s_1_bench, "{return test(\"% s\", \"hello\");}"},
	{1, 1025, "nocrash_notrequired_bonus_sp_p_1", nocrash_notrequired_bonus_sp_p_1, nocrash_notrequired_bonus_sp_p_1_bench, "{return test(\"% p\", &ncm_p);}"},
	{1, 1026, "nocrash_notrequired_bonus_sp_p_2", nocrash_notrequired_bonus_sp_p_2, nocrash_notrequired_bonus_sp_p_2_bench, "{return test(\"% p\", &ncm_p);}"},
	{1, 1027, "nocrash_notrequired_bonus_sp_u", nocrash_notrequired_bonus_sp_u, nocrash_notrequired_bonus_sp_u_bench, "{return test(\"% u\", 42);}"},
	{1, 1028, "nocrash_notrequired_bonus_sp_x", nocrash_notrequired_bonus_sp_x, nocrash_notrequired_bonus_sp_x_bench, "{return test(\"% x\", 42);}"},
	{1, 1029, "nocrash_notrequired_bonus_sp_X", nocrash_notrequired_bonus_sp_X, nocrash_notrequired_bonus_sp_X_bench, "{return test(\"% X\", 42);}"},
	{1, 1030, "bonus_af_x_basic_pos", bonus_af_x_basic_pos, bonus_af_x_basic_pos_bench, "{return test(\"this %#x number\", 17);}"},
	{1, 1031, "bonus_af_x_basic_zero", bonus_af_x_basic_zero, bonus_af_x_basic_zero_bench, "{return test(\"this %#x number\", 0);}"},
	{1, 1032, "bonus_af_x_basic_onlypos", bonus_af_x_basic_onlypos, bonus_af_x_basic_onlypos_bench, "{return test(\"%#x\", 3);}"},
	{1, 1033, "bonus_af_x_hexlmax", bonus_af_x_hexlmax, bonus_af_x_hexlmax_bench, "{return test(\"%#x\", 4294967295u);}"},
	{1, 1034, "bonus_af_x_width_pos_fits", bonus_af_x_width_pos_fits, bonus_af_x_width_pos_fits_bench, "{return test(\"%#7x\", 33);}"},
	{1, 1035, "bonus_af_x_width_zero_fits", bonus_af_x_width_zero_fits, bonus_af_x_width_zero_fits_bench, "{return test(\"%#3x\", 0);}"},
	{1, 1036, "bonus_af_x_width_pos_exactfit", bonus_af_x_width_pos_exactfit, bonus_af_x_width_pos_exactfit_bench, "{return test(\"%#5x\", 52625);}"},
	{1, 1037, "bonus_af_x_width_pos_nofit", bonus_af_x_width_pos_nofit, bonus_af_x_width_pos_nofit_bench, "{return test(\"%#2x\", 94827);}"},
	{1, 1038, "bonus_af_x_width_pos_fits_lj", bonus_af_x_width_pos_fits_lj, bonus_af_x_width_pos_fits_lj_bench, "{return test(\"%#-7x\", 33);}"},
	{1, 1039, "bonus_af_x_width_zero_fits_lj", bonus_af_x_width_zero_fits_lj, bonus_af_x_width_zero_fits_lj_bench, "{return test(\"%#-3x\", 0);}"},
	{1, 1040, "bonus_af_x_width_pos_exactfit_lj", bonus_af_x_width_pos_exactfit_lj, bonus_af_x_width_pos_exactfit_lj_bench, "{return test(\"%#-5x\", 52625);}"},
	{1, 1041, "bonus_af_x_width_pos_nofit_lj", bonus_af_x_width_pos_nofit_lj, bonus_af_x_width_pos_nofit_lj_bench, "{return test(\"%#-4x\", 9648627);}"},
	{1, 1042, "bonus_af_x_prec_fits_pos", bonus_af_x_prec_fits_pos, bonus_af_x_prec_fits_pos_bench, "{return test(\"%#.5x\", 21);}"},
	{1, 1043, "bonus_af_x_prec_fits_zero", bonus_af_x_prec_fits_zero, bonus_af_x_prec_fits_zero_bench, "{return test(\"%#.3x\", 0);}"},
	{1, 1044, "bonus_af_x_prec_exactfit_pos", bonus_af_x_prec_exactfit_pos, bonus_af_x_prec_exactfit_pos_bench, "{return test(\"%#.4x\", 5263);}"},
	{1, 1045, "bonus_af_x_prec_nofit_pos", bonus_af_x_prec_nofit_pos, bonus_af_x_prec_nofit_pos_bench, "{return test(\"%#.3x\", 938862);}"},
	{1, 1046, "bonus_af_x_prec0val0", bonus_af_x_prec0val0, bonus_af_x_prec0val0_bench, "{return test(\"%#.0x\", 0);}"},
	{1, 1047, "bonus_af_x_prec0val0_impl", bonus_af_x_prec0val0_impl, bonus_af_x_prec0val0_impl_bench, "{return test(\"%#.x\", 0);}"},
	{1, 1048, "bonus_af_x_prec0val0_waf", bonus_af_x_prec0val0_waf, bonus_af_x_prec0val0_waf_bench, "{return test(\"%#5.0x\", 0);}"},
	{1, 1049, "bonus_af_x_prec0val0_waf_impl", bonus_af_x_prec0val0_waf_impl, bonus_af_x_prec0val0_waf_impl_bench, "{return test(\"%#5.x\", 0);}"},
	{1, 1050, "bonus_af_x_prec0val0_waflj", bonus_af_x_prec0val0_waflj, bonus_af_x_prec0val0_waflj_bench, "{return test(\"%#-5.0x\", 0);}"},
	{1, 1051, "bonus_af_x_prec0val0_waflj_impl", bonus_af_x_prec0val0_waflj_impl, bonus_af_x_prec0val0_waflj_impl_bench, "{return test(\"%#-5.x\", 0);}"},
	{1, 1052, "bonus_af_x_zp_pos_fits", bonus_af_x_zp_pos_fits, bonus_af_x_zp_pos_fits_bench, "{return test(\"%#05x\", 43);}"},
	{1, 1053, "bonus_af_x_zp_zero_fits", bonus_af_x_zp_zero_fits, bonus_af_x_zp_zero_fits_bench, "{return test(\"%#03x\", 0);}"},
	{1, 1054, "bonus_af_x_zp_pos_exactfit", bonus_af_x_zp_pos_exactfit, bonus_af_x_zp_pos_exactfit_bench, "{return test(\"%#03x\", 698334);}"},
	{1, 1055, "bonus_af_x_prec_width_fit_fit_pos", bonus_af_x_prec_width_fit_fit_pos, bonus_af_x_prec_width_fit_fit_pos_bench, "{return test(\"%#8.5x\", 34);}"},
	{1, 1056, "bonus_af_x_prec_width_fit_fit_zero", bonus_af_x_prec_width_fit_fit_zero, bonus_af_x_prec_width_fit_fit_zero_bench, "{return test(\"%#8.5x\", 0);}"},
	{1, 1057, "bonus_af_x_prec_width_nofit_fit_pos", bonus_af_x_prec_width_nofit_fit_pos, bonus_af_x_prec_width_nofit_fit_pos_bench, "{return test(\"%#8.3x\", 8375);}"},
	{1, 1058, "bonus_af_x_prec_width_fit_nofit_pos", bonus_af_x_prec_width_fit_nofit_pos, bonus_af_x_prec_width_fit_nofit_pos_bench, "{return test(\"%#2.7x\", 3267);}"},
	{1, 1059, "bonus_af_x_prec_width_nofit_nofit_pos", bonus_af_x_prec_width_nofit_nofit_pos, bonus_af_x_prec_width_nofit_nofit_pos_bench, "{return test(\"%#3.3x\", 6983);}"},
	{1, 1060, "bonus_af_x_prec_width_fit_fit_pos_lj", bonus_af_x_prec_width_fit_fit_pos_lj, bonus_af_x_prec_width_fit_fit_pos_lj_bench, "{return test(\"%#-8.5x\", 34);}"},
	{1, 1061, "bonus_af_x_prec_width_fit_fit_zero_lj", bonus_af_x_prec_width_fit_fit_zero_lj, bonus_af_x_prec_width_fit_fit_zero_lj_bench, "{return test(\"%#-8.5x\", 0);}"},
	{1, 1062, "bonus_af_x_prec_width_nofit_fit_pos_lj", bonus_af_x_prec_width_nofit_fit_pos_lj, bonus_af_x_prec_width_nofit_fit_pos_lj_bench, "{return test(\"%#-8.3x\", 8375);}"},
	{1, 1063, "bonus_af_x_prec_width_fit_nofit_pos_lj", bonus_af_x_prec_width_fit_nofit_pos_lj, bonus_af_x_prec_width_fit_nofit_pos_lj_bench, "{return test(\"%#-2.7x\", 3267);}"},
	{1, 1064, "bonus_af_x_prec_width_nofit_nofit_pos_lj", bonus_af_x_prec_width_nofit_nofit_pos_lj, bonus_af_x_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"%#-3.3x\", 6983);}"},
	{1, 1065, "bonus_af_x_prec_width_ff_pos_zp", bonus_af_x_prec_width_ff_pos_zp, bonus_af_x_prec_width_ff_pos_zp_bench, "{return test(\"%#08.5x\", 34);}"},
	{1, 1066, "bonus_af_x_prec_width_ff_zero_zp", bonus_af_x_prec_width_ff_zero_zp, bonus_af_x_prec_width_ff_zero_zp_bench, "{return test(\"%#08.5x\", 0);}"},
	{1, 1067, "bonus_af_x_prec_width_nf_pos_zp", bonus_af_x_prec_width_nf_pos_zp, bonus_af_x_prec_width_nf_pos_zp_bench, "{return test(\"%#08.3x\", 8375);}"},
	{1, 1068, "bonus_af_x_prec_width_fn_pos_zp", bonus_af_x_prec_width_fn_pos_zp, bonus_af_x_prec_width_fn_pos_zp_bench, "{return test(\"%#02.7x\", 3267);}"},
	{1, 1069, "bonus_af_x_prec_width_nn_pos_zp", bonus_af_x_prec_width_nn_pos_zp, bonus_af_x_prec_width_nn_pos_zp_bench, "{return test(\"%#03.3x\", 6983);}"},
	{1, 1070, "bonus_af_x_prec_width_ff_pos_ljzpaf_ignoreflag", bonus_af_x_prec_width_ff_pos_ljzpaf_ignoreflag, bonus_af_x_prec_width_ff_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.5x\", 34);}"},
	{1, 1071, "bonus_af_x_prec_width_ff_zero_ljzpaf_ignoreflag", bonus_af_x_prec_width_ff_zero_ljzpaf_ignoreflag, bonus_af_x_prec_width_ff_zero_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.5x\", 0);}"},
	{1, 1072, "bonus_af_x_prec_width_nf_pos_ljzpaf_ignoreflag", bonus_af_x_prec_width_nf_pos_ljzpaf_ignoreflag, bonus_af_x_prec_width_nf_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.3x\", 8375);}"},
	{1, 1073, "bonus_af_x_prec_width_fn_pos_ljzpaf_ignoreflag", bonus_af_x_prec_width_fn_pos_ljzpaf_ignoreflag, bonus_af_x_prec_width_fn_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-2.7x\", 3267);}"},
	{1, 1074, "bonus_af_x_prec_width_nn_pos_ljzpaf_ignoreflag", bonus_af_x_prec_width_nn_pos_ljzpaf_ignoreflag, bonus_af_x_prec_width_nn_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-3.3x\", 6983);}"},
	{1, 1075, "bonus_af_X_basic_hexu_pos", bonus_af_X_basic_hexu_pos, bonus_af_X_basic_hexu_pos_bench, "{return test(\"this %#X number\", 17);}"},
	{1, 1076, "bonus_af_X_basic_hexu_zero", bonus_af_X_basic_hexu_zero, bonus_af_X_basic_hexu_zero_bench, "{return test(\"this %#X number\", 0);}"},
	{1, 1077, "bonus_af_X_basic_hexu_onlypos", bonus_af_X_basic_hexu_onlypos, bonus_af_X_basic_hexu_onlypos_bench, "{return test(\"%#X\", 3);}"},
	{1, 1078, "bonus_af_X_hexumax", bonus_af_X_hexumax, bonus_af_X_hexumax_bench, "{return test(\"%#X\", 4294967295u);}"},
	{1, 1079, "bonus_af_X_width_pos_fits", bonus_af_X_width_pos_fits, bonus_af_X_width_pos_fits_bench, "{return test(\"%#7X\", 33);}"},
	{1, 1080, "bonus_af_X_width_zero_fits", bonus_af_X_width_zero_fits, bonus_af_X_width_zero_fits_bench, "{return test(\"%#3X\", 0);}"},
	{1, 1081, "bonus_af_X_width_pos_exactfit", bonus_af_X_width_pos_exactfit, bonus_af_X_width_pos_exactfit_bench, "{return test(\"%#7X\", 52625);}"},
	{1, 1082, "bonus_af_X_width_pos_nofit", bonus_af_X_width_pos_nofit, bonus_af_X_width_pos_nofit_bench, "{return test(\"%#2X\", 94827);}"},
	{1, 1083, "bonus_af_X_width_pos_fits_lj", bonus_af_X_width_pos_fits_lj, bonus_af_X_width_pos_fits_lj_bench, "{return test(\"%#-7X\", 33);}"},
	{1, 1084, "bonus_af_X_width_zero_fits_lj", bonus_af_X_width_zero_fits_lj, bonus_af_X_width_zero_fits_lj_bench, "{return test(\"%#-3X\", 0);}"},
	{1, 1085, "bonus_af_X_width_pos_exactfit_lj", bonus_af_X_width_pos_exactfit_lj, bonus_af_X_width_pos_exactfit_lj_bench, "{return test(\"%#-7X\", 52625);}"},
	{1, 1086, "bonus_af_X_width_pos_nofit_lj", bonus_af_X_width_pos_nofit_lj, bonus_af_X_width_pos_nofit_lj_bench, "{return test(\"%#-4X\", 9648627);}"},
	{1, 1087, "bonus_af_X_prec_fits_pos", bonus_af_X_prec_fits_pos, bonus_af_X_prec_fits_pos_bench, "{return test(\"%#.5X\", 21);}"},
	{1, 1088, "bonus_af_X_prec_fits_zero", bonus_af_X_prec_fits_zero, bonus_af_X_prec_fits_zero_bench, "{return test(\"%#.3X\", 0);}"},
	{1, 1089, "bonus_af_X_prec_exactfit_pos", bonus_af_X_prec_exactfit_pos, bonus_af_X_prec_exactfit_pos_bench, "{return test(\"%#.4X\", 5263);}"},
	{1, 1090, "bonus_af_X_prec_nofit_pos", bonus_af_X_prec_nofit_pos, bonus_af_X_prec_nofit_pos_bench, "{return test(\"%#.3X\", 938862);}"},
	{1, 1091, "bonus_af_X_prec0val0", bonus_af_X_prec0val0, bonus_af_X_prec0val0_bench, "{return test(\"%#.0X\", 0);}"},
	{1, 1092, "bonus_af_X_prec0val0_impl", bonus_af_X_prec0val0_impl, bonus_af_X_prec0val0_impl_bench, "{return test(\"%#.X\", 0);}"},
	{1, 1093, "bonus_af_X_prec0val0_waf", bonus_af_X_prec0val0_waf, bonus_af_X_prec0val0_waf_bench, "{return test(\"%#5.0X\", 0);}"},
	{1, 1094, "bonus_af_X_prec0val0_waf_impl", bonus_af_X_prec0val0_waf_impl, bonus_af_X_prec0val0_waf_impl_bench, "{return test(\"%#5.X\", 0);}"},
	{1, 1095, "bonus_af_X_prec0val0_waflj", bonus_af_X_prec0val0_waflj, bonus_af_X_prec0val0_waflj_bench, "{return test(\"%#-5.0X\", 0);}"},
	{1, 1096, "bonus_af_X_prec0val0_waflj_impl", bonus_af_X_prec0val0_waflj_impl, bonus_af_X_prec0val0_waflj_impl_bench, "{return test(\"%#-5.X\", 0);}"},
	{1, 1097, "bonus_af_X_zp_pos_fits", bonus_af_X_zp_pos_fits, bonus_af_X_zp_pos_fits_bench, "{return test(\"%#05X\", 43);}"},
	{1, 1098, "bonus_af_X_zp_zero_fits", bonus_af_X_zp_zero_fits, bonus_af_X_zp_zero_fits_bench, "{return test(\"%#03X\", 0);}"},
	{1, 1099, "bonus_af_X_zp_pos_exactfit", bonus_af_X_zp_pos_exactfit, bonus_af_X_zp_pos_exactfit_bench, "{return test(\"%#03X\", 698334);}"},
	{1, 1100, "bonus_af_X_prec_width_fit_fit_pos", bonus_af_X_prec_width_fit_fit_pos, bonus_af_X_prec_width_fit_fit_pos_bench, "{return test(\"%#8.5X\", 34);}"},
	{1, 1101, "bonus_af_X_prec_width_fit_fit_zero", bonus_af_X_prec_width_fit_fit_zero, bonus_af_X_prec_width_fit_fit_zero_bench, "{return test(\"%#8.5X\", 0);}"},
	{1, 1102, "bonus_af_X_prec_width_nofit_fit_pos", bonus_af_X_prec_width_nofit_fit_pos, bonus_af_X_prec_width_nofit_fit_pos_bench, "{return test(\"%#8.3X\", 8375);}"},
	{1, 1103, "bonus_af_X_prec_width_fit_nofit_pos", bonus_af_X_prec_width_fit_nofit_pos, bonus_af_X_prec_width_fit_nofit_pos_bench, "{return test(\"%#2.7X\", 3267);}"},
	{1, 1104, "bonus_af_X_prec_width_nofit_nofit_pos", bonus_af_X_prec_width_nofit_nofit_pos, bonus_af_X_prec_width_nofit_nofit_pos_bench, "{return test(\"%#3.3X\", 6983);}"},
	{1, 1105, "bonus_af_X_prec_width_fit_fit_pos_lj", bonus_af_X_prec_width_fit_fit_pos_lj, bonus_af_X_prec_width_fit_fit_pos_lj_bench, "{return test(\"%#-8.5X\", 34);}"},
	{1, 1106, "bonus_af_X_prec_width_fit_fit_zero_lj", bonus_af_X_prec_width_fit_fit_zero_lj, bonus_af_X_prec_width_fit_fit_zero_lj_bench, "{return test(\"%#-8.5X\", 0);}"},
	{1, 1107, "bonus_af_X_prec_width_nofit_fit_pos_lj", bonus_af_X_prec_width_nofit_fit_pos_lj, bonus_af_X_prec_width_nofit_fit_pos_lj_bench, "{return test(\"%#-8.3X\", 8375);}"},
	{1, 1108, "bonus_af_X_prec_width_fit_nofit_pos_lj", bonus_af_X_prec_width_fit_nofit_pos_lj, bonus_af_X_prec_width_fit_nofit_pos_lj_bench, "{return test(\"%#-2.7X\", 3267);}"},
	{1, 1109, "bonus_af_X_prec_width_nofit_nofit_pos_lj", bonus_af_X_prec_width_nofit_nofit_pos_lj, bonus_af_X_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"%#-3.3X\", 6983);}"},
	{1, 1110, "bonus_af_X_prec_width_ff_pos_zp", bonus_af_X_prec_width_ff_pos_zp, bonus_af_X_prec_width_ff_pos_zp_bench, "{return test(\"%#08.5X\", 34);}"},
	{1, 1111, "bonus_af_X_prec_width_ff_zero_zp", bonus_af_X_prec_width_ff_zero_zp, bonus_af_X_prec_width_ff_zero_zp_bench, "{return test(\"%#08.5X\", 0);}"},
	{1, 1112, "bonus_af_X_prec_width_nf_pos_zp", bonus_af_X_prec_width_nf_pos_zp, bonus_af_X_prec_width_nf_pos_zp_bench, "{return test(\"%#08.3X\", 8375);}"},
	{1, 1113, "bonus_af_X_prec_width_fn_pos_zp", bonus_af_X_prec_width_fn_pos_zp, bonus_af_X_prec_width_fn_pos_zp_bench, "{return test(\"%#02.7X\", 3267);}"},
	{1, 1114, "bonus_af_X_prec_width_nn_pos_zp", bonus_af_X_prec_width_nn_pos_zp, bonus_af_X_prec_width_nn_pos_zp_bench, "{return test(\"%#03.3X\", 6983);}"},
	{1, 1115, "bonus_af_X_prec_width_ff_pos_ljzpaf_ignoreflag", bonus_af_X_prec_width_ff_pos_ljzpaf_ignoreflag, bonus_af_X_prec_width_ff_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.5X\", 34);}"},
	{1, 1116, "bonus_af_X_prec_width_ff_zero_ljzpaf_ignoreflag", bonus_af_X_prec_width_ff_zero_ljzpaf_ignoreflag, bonus_af_X_prec_width_ff_zero_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.5X\", 0);}"},
	{1, 1117, "bonus_af_X_prec_width_nf_pos_ljzpaf_ignoreflag", bonus_af_X_prec_width_nf_pos_ljzpaf_ignoreflag, bonus_af_X_prec_width_nf_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.3X\", 8375);}"},
	{1, 1118, "bonus_af_X_prec_width_fn_pos_ljzpaf_ignoreflag", bonus_af_X_prec_width_fn_pos_ljzpaf_ignoreflag, bonus_af_X_prec_width_fn_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-2.7X\", 3267);}"},
	{1, 1119, "bonus_af_X_prec_width_nn_pos_ljzpaf_ignoreflag", bonus_af_X_prec_width_nn_pos_ljzpaf_ignoreflag, bonus_af_X_prec_width_nn_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-3.3X\", 6983);}"},
	{1, 1120, "nocrash_notrequired_bonus_af_noarg_4", nocrash_notrequired_bonus_af_noarg_4, nocrash_notrequired_bonus_af_noarg_4_bench, "{return test(\"%#\"); }"},
	{1, 1121, "nocrash_notrequired_bonus_af_nullarg_4", nocrash_notrequired_bonus_af_nullarg_4, nocrash_notrequired_bonus_af_nullarg_4_bench, "{return test(\"%#s\", NULL); }"},
	{1, 1122, "nocrash_notrequired_bonus_af_dupflag_x", nocrash_notrequired_bonus_af_dupflag_x, nocrash_notrequired_bonus_af_dupflag_x_bench, "{return test(\"%##x\", 42);}"},
	{1, 1123, "nocrash_notrequired_bonus_af_dupflag_xasasljw", nocrash_notrequired_bonus_af_dupflag_xasasljw, nocrash_notrequired_bonus_af_dupflag_xasasljw_bench, "{return test(\"%#++#-5x\", 42);}"},
	{1, 1124, "nocrash_notrequired_bonus_af_c", nocrash_notrequired_bonus_af_c, nocrash_notrequired_bonus_af_c_bench, "{return test(\"%#c\", 'a');}"},
	{1, 1125, "nocrash_notrequired_bonus_af_s", nocrash_notrequired_bonus_af_s, nocrash_notrequired_bonus_af_s_bench, "{return test(\"%#s\", \"hello\");}"},
	{1, 1126, "nocrash_notrequired_bonus_af_p", nocrash_notrequired_bonus_af_p, nocrash_notrequired_bonus_af_p_bench, "{return test(\"%#p\", &ncm_p);}"},
	{1, 1127, "nocrash_notrequired_bonus_af_d", nocrash_notrequired_bonus_af_d, nocrash_notrequired_bonus_af_d_bench, "{return test(\"%#d\", 42);}"},
	{1, 1128, "nocrash_notrequired_bonus_af_i", nocrash_notrequired_bonus_af_i, nocrash_notrequired_bonus_af_i_bench, "{return test(\"%#i\", 42);}"},
	{1, 1129, "nocrash_notrequired_bonus_af_u", nocrash_notrequired_bonus_af_u, nocrash_notrequired_bonus_af_u_bench, "{return test(\"%#u\", 42);}"},
	{1, 1130, "bonus_assp_d_pos_ignoreflag", bonus_assp_d_pos_ignoreflag, bonus_assp_d_pos_ignoreflag_bench, "{return test(\"% +d\", 5);}"},
	{1, 1131, "bonus_assp_d_neg_ignoreflag", bonus_assp_d_neg_ignoreflag, bonus_assp_d_neg_ignoreflag_bench, "{return test(\"% +d\", -7);}"},
	{1, 1132, "bonus_assp_d_intmax_ignoreflag", bonus_assp_d_intmax_ignoreflag, bonus_assp_d_intmax_ignoreflag_bench, "{return test(\"% +d\", 2147483647);}"},
	{1, 1133, "bonus_assp_d_width_pos_ignoreflag", bonus_assp_d_width_pos_ignoreflag, bonus_assp_d_width_pos_ignoreflag_bench, "{return test(\"% +5d\", 35);}"},
	{1, 1134, "bonus_assp_d_width_zero_ignoreflag", bonus_assp_d_width_zero_ignoreflag, bonus_assp_d_width_zero_ignoreflag_bench, "{return test(\"% +7d\", 0);}"},
	{1, 1135, "bonus_assp_d_width_intmax_ignoreflag", bonus_assp_d_width_intmax_ignoreflag, bonus_assp_d_width_intmax_ignoreflag_bench, "{return test(\"% +24d\", 2147483647);}"},
	{1, 1136, "bonus_assp_d_prec_pos_ignoreflag", bonus_assp_d_prec_pos_ignoreflag, bonus_assp_d_prec_pos_ignoreflag_bench, "{return test(\"% +.7d\", 234);}"},
	{1, 1137, "bonus_assp_d_prec_neg_ignoreflag", bonus_assp_d_prec_neg_ignoreflag, bonus_assp_d_prec_neg_ignoreflag_bench, "{return test(\"% +.7d\", -446);}"},
	{1, 1138, "bonus_assp_d_prec_pos_nofit_ignoreflag", bonus_assp_d_prec_pos_nofit_ignoreflag, bonus_assp_d_prec_pos_nofit_ignoreflag_bench, "{return test(\"% +.3d\", 3723);}"},
	{1, 1139, "bonus_assp_d_zpassp_as_fits_ignoreflag", bonus_assp_d_zpassp_as_fits_ignoreflag, bonus_assp_d_zpassp_as_fits_ignoreflag_bench, "{return test(\"% +05d\", 432);}"},
	{1, 1140, "bonus_assp_d_zpassp_zero_ignoreflag", bonus_assp_d_zpassp_zero_ignoreflag, bonus_assp_d_zpassp_zero_ignoreflag_bench, "{return test(\"% +04d\", 0);}"},
	{1, 1141, "bonus_assp_d_prec_width_fit_fit_pos_ignoreflag", bonus_assp_d_prec_width_fit_fit_pos_ignoreflag, bonus_assp_d_prec_width_fit_fit_pos_ignoreflag_bench, "{return test(\"% +8.5d\", 34);}"},
	{1, 1142, "bonus_assp_d_prec_width_fit_fit_neg_ignoreflag", bonus_assp_d_prec_width_fit_fit_neg_ignoreflag, bonus_assp_d_prec_width_fit_fit_neg_ignoreflag_bench, "{return test(\"% +10.5d\", -216);}"},
	{1, 1143, "bonus_assp_d_prec_width_fit_fit_zero_ignoreflag", bonus_assp_d_prec_width_fit_fit_zero_ignoreflag, bonus_assp_d_prec_width_fit_fit_zero_ignoreflag_bench, "{return test(\"% +8.5d\", 0);}"},
	{1, 1144, "bonus_assp_d_prec_width_nofit_fit_pos_ignoreflag", bonus_assp_d_prec_width_nofit_fit_pos_ignoreflag, bonus_assp_d_prec_width_nofit_fit_pos_ignoreflag_bench, "{return test(\"% +8.3d\", 8375);}"},
	{1, 1145, "bonus_assp_d_prec_width_nofit_fit_neg_ignoreflag", bonus_assp_d_prec_width_nofit_fit_neg_ignoreflag, bonus_assp_d_prec_width_nofit_fit_neg_ignoreflag_bench, "{return test(\"% +8.3d\", -8473);}"},
	{1, 1146, "bonus_assp_d_prec_width_fit_nofit_pos_ignoreflag", bonus_assp_d_prec_width_fit_nofit_pos_ignoreflag, bonus_assp_d_prec_width_fit_nofit_pos_ignoreflag_bench, "{return test(\"% +3.7d\", 3267);}"},
	{1, 1147, "bonus_assp_d_prec_width_fit_nofit_neg_ignoreflag", bonus_assp_d_prec_width_fit_nofit_neg_ignoreflag, bonus_assp_d_prec_width_fit_nofit_neg_ignoreflag_bench, "{return test(\"% +3.7d\", -2375);}"},
	{1, 1148, "bonus_assp_d_prec_width_nofit_nofit_pos_ignoreflag", bonus_assp_d_prec_width_nofit_nofit_pos_ignoreflag, bonus_assp_d_prec_width_nofit_nofit_pos_ignoreflag_bench, "{return test(\"% +3.3d\", 6983);}"},
	{1, 1149, "bonus_assp_d_prec_width_nofit_nofit_neg_ignoreflag", bonus_assp_d_prec_width_nofit_nofit_neg_ignoreflag, bonus_assp_d_prec_width_nofit_nofit_neg_ignoreflag_bench, "{return test(\"% +3.3d\", -8462);}"},
	{1, 1150, "bonus_assp_d_prec0val0_was", bonus_assp_d_prec0val0_was, bonus_assp_d_prec0val0_was_bench, "{return test(\"%+5.0d\", 0);}"},
	{1, 1151, "bonus_assp_d_prec0val0_was_impl", bonus_assp_d_prec0val0_was_impl, bonus_assp_d_prec0val0_was_impl_bench, "{return test(\"%+5.d\", 0);}"},
	{1, 1152, "bonus_assp_d_prec0val0_waslj", bonus_assp_d_prec0val0_waslj, bonus_assp_d_prec0val0_waslj_bench, "{return test(\"%+-5.0d\", 0);}"},
	{1, 1153, "bonus_assp_d_prec0val0_waslj_impl", bonus_assp_d_prec0val0_waslj_impl, bonus_assp_d_prec0val0_waslj_impl_bench, "{return test(\"%+-5.d\", 0);}"},
	{1, 1154, "bonus_assp_d_prec_width_fit_fit_pos_lj_ignoreflag", bonus_assp_d_prec_width_fit_fit_pos_lj_ignoreflag, bonus_assp_d_prec_width_fit_fit_pos_lj_ignoreflag_bench, "{return test(\"% +-8.5d\", 34);}"},
	{1, 1155, "bonus_assp_d_prec_width_fit_fit_neg_lj_ignoreflag", bonus_assp_d_prec_width_fit_fit_neg_lj_ignoreflag, bonus_assp_d_prec_width_fit_fit_neg_lj_ignoreflag_bench, "{return test(\"% +-10.5d\", -216);}"},
	{1, 1156, "bonus_assp_d_prec_width_fit_fit_zero_lj_ignoreflag", bonus_assp_d_prec_width_fit_fit_zero_lj_ignoreflag, bonus_assp_d_prec_width_fit_fit_zero_lj_ignoreflag_bench, "{return test(\"% +-8.5d\", 0);}"},
	{1, 1157, "bonus_assp_d_prec_width_nofit_fit_pos_lj_ignoreflag", bonus_assp_d_prec_width_nofit_fit_pos_lj_ignoreflag, bonus_assp_d_prec_width_nofit_fit_pos_lj_ignoreflag_bench, "{return test(\"% +-8.3d\", 8375);}"},
	{1, 1158, "bonus_assp_d_prec_width_nofit_fit_neg_lj_ignoreflag", bonus_assp_d_prec_width_nofit_fit_neg_lj_ignoreflag, bonus_assp_d_prec_width_nofit_fit_neg_lj_ignoreflag_bench, "{return test(\"% +-8.3d\", -8473);}"},
	{1, 1159, "bonus_assp_d_prec_width_fit_nofit_pos_lj_ignoreflag", bonus_assp_d_prec_width_fit_nofit_pos_lj_ignoreflag, bonus_assp_d_prec_width_fit_nofit_pos_lj_ignoreflag_bench, "{return test(\"% +-3.7d\", 3267);}"},
	{1, 1160, "bonus_assp_d_prec_width_fit_nofit_neg_lj_ignoreflag", bonus_assp_d_prec_width_fit_nofit_neg_lj_ignoreflag, bonus_assp_d_prec_width_fit_nofit_neg_lj_ignoreflag_bench, "{return test(\"% +-3.7d\", -2375);}"},
	{1, 1161, "bonus_assp_d_prec_width_nofit_nofit_pos_lj_ignoreflag", bonus_assp_d_prec_width_nofit_nofit_pos_lj_ignoreflag, bonus_assp_d_prec_width_nofit_nofit_pos_lj_ignoreflag_bench, "{return test(\"% +-3.3d\", 6983);}"},
	{1, 1162, "bonus_assp_d_prec_width_nofit_nofit_neg_lj_ignoreflag", bonus_assp_d_prec_width_nofit_nofit_neg_lj_ignoreflag, bonus_assp_d_prec_width_nofit_nofit_neg_lj_ignoreflag_bench, "{return test(\"% +-3.3d\", -8462);}"},
	{1, 1163, "bonus_assp_d_prec_width_ff_pos_aszpsp_ignoreflag", bonus_assp_d_prec_width_ff_pos_aszpsp_ignoreflag, bonus_assp_d_prec_width_ff_pos_aszpsp_ignoreflag_bench, "{return test(\"% 0+8.5d\", 34);}"},
	{1, 1164, "bonus_assp_d_prec_width_ff_neg_aszpsp_ignoreflag", bonus_assp_d_prec_width_ff_neg_aszpsp_ignoreflag, bonus_assp_d_prec_width_ff_neg_aszpsp_ignoreflag_bench, "{return test(\"% 0+10.5d\", -216);}"},
	{1, 1165, "bonus_assp_d_prec_width_ff_zero_aszpsp_ignoreflag", bonus_assp_d_prec_width_ff_zero_aszpsp_ignoreflag, bonus_assp_d_prec_width_ff_zero_aszpsp_ignoreflag_bench, "{return test(\"% 0+8.5d\", 0);}"},
	{1, 1166, "bonus_assp_d_prec_width_nf_pos_aszpsp_ignoreflag", bonus_assp_d_prec_width_nf_pos_aszpsp_ignoreflag, bonus_assp_d_prec_width_nf_pos_aszpsp_ignoreflag_bench, "{return test(\"% 0+8.3d\", 8375);}"},
	{1, 1167, "bonus_assp_d_prec_width_nf_neg_aszpsp_ignoreflag", bonus_assp_d_prec_width_nf_neg_aszpsp_ignoreflag, bonus_assp_d_prec_width_nf_neg_aszpsp_ignoreflag_bench, "{return test(\"% 0+8.3d\", -8473);}"},
	{1, 1168, "bonus_assp_d_prec_width_fn_pos_aszpsp_ignoreflag", bonus_assp_d_prec_width_fn_pos_aszpsp_ignoreflag, bonus_assp_d_prec_width_fn_pos_aszpsp_ignoreflag_bench, "{return test(\"% 0+3.7d\", 3267);}"},
	{1, 1169, "bonus_assp_d_prec_width_fn_neg_aszpsp_ignoreflag", bonus_assp_d_prec_width_fn_neg_aszpsp_ignoreflag, bonus_assp_d_prec_width_fn_neg_aszpsp_ignoreflag_bench, "{return test(\"% 0+3.7d\", -2375);}"},
	{1, 1170, "bonus_assp_d_prec_width_nn_pos_aszpsp_ignoreflag", bonus_assp_d_prec_width_nn_pos_aszpsp_ignoreflag, bonus_assp_d_prec_width_nn_pos_aszpsp_ignoreflag_bench, "{return test(\"% 0+3.3d\", 6983);}"},
	{1, 1171, "bonus_assp_d_prec_width_nn_neg_aszpsp_ignoreflag", bonus_assp_d_prec_width_nn_neg_aszpsp_ignoreflag, bonus_assp_d_prec_width_nn_neg_aszpsp_ignoreflag_bench, "{return test(\"% 0+3.3d\", -8462);}"},
	{1, 1172, "bonus_assp_d_prec_width_ff_pos_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_ff_pos_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_ff_pos_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-8.5d\", 34);}"},
	{1, 1173, "bonus_assp_d_prec_width_ff_neg_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_ff_neg_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_ff_neg_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-10.5d\", -216);}"},
	{1, 1174, "bonus_assp_d_prec_width_ff_zero_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_ff_zero_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_ff_zero_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-8.5d\", 0);}"},
	{1, 1175, "bonus_assp_d_prec_width_nf_pos_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_nf_pos_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_nf_pos_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-8.3d\", 8375);}"},
	{1, 1176, "bonus_assp_d_prec_width_nf_neg_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_nf_neg_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_nf_neg_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-8.3d\", -8473);}"},
	{1, 1177, "bonus_assp_d_prec_width_fn_pos_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_fn_pos_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_fn_pos_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-3.7d\", 3267);}"},
	{1, 1178, "bonus_assp_d_prec_width_fn_neg_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_fn_neg_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_fn_neg_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-3.7d\", -2375);}"},
	{1, 1179, "bonus_assp_d_prec_width_nn_pos_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_nn_pos_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_nn_pos_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-3.3d\", 6983);}"},
	{1, 1180, "bonus_assp_d_prec_width_nn_neg_ljaszpsp_ignoreflag", bonus_assp_d_prec_width_nn_neg_ljaszpsp_ignoreflag, bonus_assp_d_prec_width_nn_neg_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-3.3d\", -8462);}"},
	{1, 1181, "bonus_assp_i_pos_ignoreflag", bonus_assp_i_pos_ignoreflag, bonus_assp_i_pos_ignoreflag_bench, "{return test(\"% +i\", 5);}"},
	{1, 1182, "bonus_assp_i_neg_ignoreflag", bonus_assp_i_neg_ignoreflag, bonus_assp_i_neg_ignoreflag_bench, "{return test(\"% +i\", -7);}"},
	{1, 1183, "bonus_assp_i_intmax_ignoreflag", bonus_assp_i_intmax_ignoreflag, bonus_assp_i_intmax_ignoreflag_bench, "{return test(\"% +i\", 2147483647);}"},
	{1, 1184, "bonus_assp_i_width_pos_ignoreflag", bonus_assp_i_width_pos_ignoreflag, bonus_assp_i_width_pos_ignoreflag_bench, "{return test(\"% +5i\", 35);}"},
	{1, 1185, "bonus_assp_i_width_zero_ignoreflag", bonus_assp_i_width_zero_ignoreflag, bonus_assp_i_width_zero_ignoreflag_bench, "{return test(\"% +7i\", 0);}"},
	{1, 1186, "bonus_assp_i_width_intmax_ignoreflag", bonus_assp_i_width_intmax_ignoreflag, bonus_assp_i_width_intmax_ignoreflag_bench, "{return test(\"% +24i\", 2147483647);}"},
	{1, 1187, "bonus_assp_i_prec_pos_ignoreflag", bonus_assp_i_prec_pos_ignoreflag, bonus_assp_i_prec_pos_ignoreflag_bench, "{return test(\"% +.7i\", 234);}"},
	{1, 1188, "bonus_assp_i_prec_neg_ignoreflag", bonus_assp_i_prec_neg_ignoreflag, bonus_assp_i_prec_neg_ignoreflag_bench, "{return test(\"% +.7i\", -446);}"},
	{1, 1189, "bonus_assp_i_prec_pos_nofit_ignoreflag", bonus_assp_i_prec_pos_nofit_ignoreflag, bonus_assp_i_prec_pos_nofit_ignoreflag_bench, "{return test(\"% +.3i\", 3723);}"},
	{1, 1190, "bonus_assp_i_zpassp_as_fits_ignoreflag", bonus_assp_i_zpassp_as_fits_ignoreflag, bonus_assp_i_zpassp_as_fits_ignoreflag_bench, "{return test(\"% +05i\", 432);}"},
	{1, 1191, "bonus_assp_i_zpassp_zero_ignoreflag", bonus_assp_i_zpassp_zero_ignoreflag, bonus_assp_i_zpassp_zero_ignoreflag_bench, "{return test(\"% +04i\", 0);}"},
	{1, 1192, "bonus_assp_i_prec_width_fit_fit_pos_ignoreflag", bonus_assp_i_prec_width_fit_fit_pos_ignoreflag, bonus_assp_i_prec_width_fit_fit_pos_ignoreflag_bench, "{return test(\"% +8.5i\", 34);}"},
	{1, 1193, "bonus_assp_i_prec_width_fit_fit_neg_ignoreflag", bonus_assp_i_prec_width_fit_fit_neg_ignoreflag, bonus_assp_i_prec_width_fit_fit_neg_ignoreflag_bench, "{return test(\"% +10.5i\", -216);}"},
	{1, 1194, "bonus_assp_i_prec_width_fit_fit_zero_ignoreflag", bonus_assp_i_prec_width_fit_fit_zero_ignoreflag, bonus_assp_i_prec_width_fit_fit_zero_ignoreflag_bench, "{return test(\"% +8.5i\", 0);}"},
	{1, 1195, "bonus_assp_i_prec_width_nofit_fit_pos_ignoreflag", bonus_assp_i_prec_width_nofit_fit_pos_ignoreflag, bonus_assp_i_prec_width_nofit_fit_pos_ignoreflag_bench, "{return test(\"% +8.3i\", 8375);}"},
	{1, 1196, "bonus_assp_i_prec_width_nofit_fit_neg_ignoreflag", bonus_assp_i_prec_width_nofit_fit_neg_ignoreflag, bonus_assp_i_prec_width_nofit_fit_neg_ignoreflag_bench, "{return test(\"% +8.3i\", -8473);}"},
	{1, 1197, "bonus_assp_i_prec_width_fit_nofit_pos_ignoreflag", bonus_assp_i_prec_width_fit_nofit_pos_ignoreflag, bonus_assp_i_prec_width_fit_nofit_pos_ignoreflag_bench, "{return test(\"% +3.7i\", 3267);}"},
	{1, 1198, "bonus_assp_i_prec_width_fit_nofit_neg_ignoreflag", bonus_assp_i_prec_width_fit_nofit_neg_ignoreflag, bonus_assp_i_prec_width_fit_nofit_neg_ignoreflag_bench, "{return test(\"% +3.7i\", -2375);}"},
	{1, 1199, "bonus_assp_i_prec_width_nofit_nofit_pos_ignoreflag", bonus_assp_i_prec_width_nofit_nofit_pos_ignoreflag, bonus_assp_i_prec_width_nofit_nofit_pos_ignoreflag_bench, "{return test(\"% +3.3i\", 6983);}"},
	{1, 1200, "bonus_assp_i_prec_width_nofit_nofit_neg_ignoreflag", bonus_assp_i_prec_width_nofit_nofit_neg_ignoreflag, bonus_assp_i_prec_width_nofit_nofit_neg_ignoreflag_bench, "{return test(\"% +3.3i\", -8462);}"},
	{1, 1201, "bonus_assp_i_prec_width_fit_fit_pos_lj_ignoreflag", bonus_assp_i_prec_width_fit_fit_pos_lj_ignoreflag, bonus_assp_i_prec_width_fit_fit_pos_lj_ignoreflag_bench, "{return test(\"% +-8.5i\", 34);}"},
	{1, 1202, "bonus_assp_i_prec_width_fit_fit_neg_lj_ignoreflag", bonus_assp_i_prec_width_fit_fit_neg_lj_ignoreflag, bonus_assp_i_prec_width_fit_fit_neg_lj_ignoreflag_bench, "{return test(\"% +-10.5i\", -216);}"},
	{1, 1203, "bonus_assp_i_prec_width_fit_fit_zero_lj_ignoreflag", bonus_assp_i_prec_width_fit_fit_zero_lj_ignoreflag, bonus_assp_i_prec_width_fit_fit_zero_lj_ignoreflag_bench, "{return test(\"% +-8.5i\", 0);}"},
	{1, 1204, "bonus_assp_i_prec_width_nofit_fit_pos_lj_ignoreflag", bonus_assp_i_prec_width_nofit_fit_pos_lj_ignoreflag, bonus_assp_i_prec_width_nofit_fit_pos_lj_ignoreflag_bench, "{return test(\"% +-8.3i\", 8375);}"},
	{1, 1205, "bonus_assp_i_prec_width_nofit_fit_neg_lj_ignoreflag", bonus_assp_i_prec_width_nofit_fit_neg_lj_ignoreflag, bonus_assp_i_prec_width_nofit_fit_neg_lj_ignoreflag_bench, "{return test(\"% +-8.3i\", -8473);}"},
	{1, 1206, "bonus_assp_i_prec_width_fit_nofit_pos_lj_ignoreflag", bonus_assp_i_prec_width_fit_nofit_pos_lj_ignoreflag, bonus_assp_i_prec_width_fit_nofit_pos_lj_ignoreflag_bench, "{return test(\"% +-3.7i\", 3267);}"},
	{1, 1207, "bonus_assp_i_prec_width_fit_nofit_neg_lj_ignoreflag", bonus_assp_i_prec_width_fit_nofit_neg_lj_ignoreflag, bonus_assp_i_prec_width_fit_nofit_neg_lj_ignoreflag_bench, "{return test(\"% +-3.7i\", -2375);}"},
	{1, 1208, "bonus_assp_i_prec_width_nofit_nofit_pos_lj_ignoreflag", bonus_assp_i_prec_width_nofit_nofit_pos_lj_ignoreflag, bonus_assp_i_prec_width_nofit_nofit_pos_lj_ignoreflag_bench, "{return test(\"% +-3.3i\", 6983);}"},
	{1, 1209, "bonus_assp_i_prec_width_nofit_nofit_neg_lj_ignoreflag", bonus_assp_i_prec_width_nofit_nofit_neg_lj_ignoreflag, bonus_assp_i_prec_width_nofit_nofit_neg_lj_ignoreflag_bench, "{return test(\"% +-3.3i\", -8462);}"},
	{1, 1210, "bonus_assp_i_prec_width_ff_pos_aszpsp_ignoreflag", bonus_assp_i_prec_width_ff_pos_aszpsp_ignoreflag, bonus_assp_i_prec_width_ff_pos_aszpsp_ignoreflag_bench, "{return test(\"% 0+8.5i\", 34);}"},
	{1, 1211, "bonus_assp_i_prec_width_ff_neg_aszpsp_ignoreflag", bonus_assp_i_prec_width_ff_neg_aszpsp_ignoreflag, bonus_assp_i_prec_width_ff_neg_aszpsp_ignoreflag_bench, "{return test(\"% 0+10.5i\", -216);}"},
	{1, 1212, "bonus_assp_i_prec_width_ff_zero_aszpsp_ignoreflag", bonus_assp_i_prec_width_ff_zero_aszpsp_ignoreflag, bonus_assp_i_prec_width_ff_zero_aszpsp_ignoreflag_bench, "{return test(\"% 0+8.5i\", 0);}"},
	{1, 1213, "bonus_assp_i_prec_width_nf_pos_aszpsp_ignoreflag", bonus_assp_i_prec_width_nf_pos_aszpsp_ignoreflag, bonus_assp_i_prec_width_nf_pos_aszpsp_ignoreflag_bench, "{return test(\"% 0+8.3i\", 8375);}"},
	{1, 1214, "bonus_assp_i_prec_width_nf_neg_aszpsp_ignoreflag", bonus_assp_i_prec_width_nf_neg_aszpsp_ignoreflag, bonus_assp_i_prec_width_nf_neg_aszpsp_ignoreflag_bench, "{return test(\"% 0+8.3i\", -8473);}"},
	{1, 1215, "bonus_assp_i_prec_width_fn_pos_aszpsp_ignoreflag", bonus_assp_i_prec_width_fn_pos_aszpsp_ignoreflag, bonus_assp_i_prec_width_fn_pos_aszpsp_ignoreflag_bench, "{return test(\"% 0+3.7i\", 3267);}"},
	{1, 1216, "bonus_assp_i_prec_width_fn_neg_aszpsp_ignoreflag", bonus_assp_i_prec_width_fn_neg_aszpsp_ignoreflag, bonus_assp_i_prec_width_fn_neg_aszpsp_ignoreflag_bench, "{return test(\"% 0+3.7i\", -2375);}"},
	{1, 1217, "bonus_assp_i_prec_width_nn_pos_aszpsp_ignoreflag", bonus_assp_i_prec_width_nn_pos_aszpsp_ignoreflag, bonus_assp_i_prec_width_nn_pos_aszpsp_ignoreflag_bench, "{return test(\"% 0+3.3i\", 6983);}"},
	{1, 1218, "bonus_assp_i_prec_width_nn_neg_aszpsp_ignoreflag", bonus_assp_i_prec_width_nn_neg_aszpsp_ignoreflag, bonus_assp_i_prec_width_nn_neg_aszpsp_ignoreflag_bench, "{return test(\"% 0+3.3i\", -8462);}"},
	{1, 1219, "bonus_assp_i_prec_width_ff_pos_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_ff_pos_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_ff_pos_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-8.5i\", 34);}"},
	{1, 1220, "bonus_assp_i_prec_width_ff_neg_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_ff_neg_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_ff_neg_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-10.5i\", -216);}"},
	{1, 1221, "bonus_assp_i_prec_width_ff_zero_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_ff_zero_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_ff_zero_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-8.5i\", 0);}"},
	{1, 1222, "bonus_assp_i_prec_width_nf_pos_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_nf_pos_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_nf_pos_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-8.3i\", 8375);}"},
	{1, 1223, "bonus_assp_i_prec_width_nf_neg_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_nf_neg_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_nf_neg_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-8.3i\", -8473);}"},
	{1, 1224, "bonus_assp_i_prec_width_fn_pos_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_fn_pos_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_fn_pos_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-3.7i\", 3267);}"},
	{1, 1225, "bonus_assp_i_prec_width_fn_neg_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_fn_neg_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_fn_neg_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-3.7i\", -2375);}"},
	{1, 1226, "bonus_assp_i_prec_width_nn_pos_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_nn_pos_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_nn_pos_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-3.3i\", 6983);}"},
	{1, 1227, "bonus_assp_i_prec_width_nn_neg_ljaszpsp_ignoreflag", bonus_assp_i_prec_width_nn_neg_ljaszpsp_ignoreflag, bonus_assp_i_prec_width_nn_neg_ljaszpsp_ignoreflag_bench, "{return test(\"% 0+-3.3i\", -8462);}"},
	{1, 1228, "nocrash_notrequired_bonus_assp_dupflag_d_spassp", nocrash_notrequired_bonus_assp_dupflag_d_spassp, nocrash_notrequired_bonus_assp_dupflag_d_spassp_bench, "{return test(\"% + d\", 42);}"},
	{1, 1229, "bonus_sp_moul_1", bonus_sp_moul_1, bonus_sp_moul_1_bench, "{return test(\"%%      i 42 == |%      i|\n\", 42);}"},
	{1, 1230, "bonus_sp_moul_2", bonus_sp_moul_2, bonus_sp_moul_2_bench, "{return test(\"%% i -42 == |% i|\n\", -42);}"},
	{1, 1231, "bonus_sp_moul_3", bonus_sp_moul_3, bonus_sp_moul_3_bench, "{return test(\"%% 4i 42 == |% 4i|\n\", 42);}"},
	{1, 1232, "bonus_sp_moul_prec_2", bonus_sp_moul_prec_2, bonus_sp_moul_prec_2_bench, "{return test(\"%% 4.5i 42 == |% 4.5i|\n\", 42);}"},
	{1, 1233, "bonus_as_moul_1", bonus_as_moul_1, bonus_as_moul_1_bench, "{return test(\"%%+i 42 == %+i\n\", 42);}"},
	{1, 1234, "bonus_as_moul_2", bonus_as_moul_2, bonus_as_moul_2_bench, "{return test(\"%%+d 42 == %+d\n\", INT_MAX);}"},
	{1, 1235, "bonus_as_moul_3", bonus_as_moul_3, bonus_as_moul_3_bench, "{return test(\"%%+i -42 == %+i\n\", -42);}"},
	{1, 1236, "bonus_as_moul_4", bonus_as_moul_4, bonus_as_moul_4_bench, "{return test(\"%%+04d 42 == %0+04d\n\", 42);}"},
	{1, 1237, "bonus_moul_hash_1", bonus_moul_hash_1, bonus_moul_hash_1_bench, "{return test(\"%%#X 42 ==  %#X\n\", 42);}"},
	{1, 1238, "bonus_moul_hash_2", bonus_moul_hash_2, bonus_moul_hash_2_bench, "{return test(\"%%X 42 ==  %X\n\", 42);}"},
	{1, 1239, "bonus_moul_hash_9", bonus_moul_hash_9, bonus_moul_hash_9_bench, "{return test(\"%%#X INT_MIN ==  %#X\n\", INT_MIN);}"},
	{1, 1240, "bonus_moul_hash_10", bonus_moul_hash_10, bonus_moul_hash_10_bench, "{return test(\"%%X INT_MIN ==  %X\n\", INT_MIN);}"},
	{1, 1241, "bonus_moul_hash_11", bonus_moul_hash_11, bonus_moul_hash_11_bench, "{return test(\"%%#X INT_MAX ==  %#X\n\", INT_MAX);}"},
	{1, 1242, "bonus_moul_hash_12", bonus_moul_hash_12, bonus_moul_hash_12_bench, "{return test(\"%%X INT_MAX ==  %X\n\", INT_MAX);}"},
	{1, 1243, "d_neg_prec_star_01", d_neg_prec_star_01, d_neg_prec_star_01_bench, "{return test(\"%.*d\", -3, 12345);}"},
	{1, 1244, "d_neg_prec_star_02", d_neg_prec_star_02, d_neg_prec_star_02_bench, "{return test(\"%.*d\", -1, 12345);}"},
	{1, 1245, "d_neg_prec_star_03", d_neg_prec_star_03, d_neg_prec_star_03_bench, "{return test(\"%.*d\", -1, 0);}"},
	{1, 1246, "u_neg_prec_star_01", u_neg_prec_star_01, u_neg_prec_star_01_bench, "{return test(\"%.*u\", -3, 12345);}"},
	{1, 1247, "u_neg_prec_star_02", u_neg_prec_star_02, u_neg_prec_star_02_bench, "{return test(\"%.*u\", -1, 12345);}"},
	{1, 1248, "u_neg_prec_star_03", u_neg_prec_star_03, u_neg_prec_star_03_bench, "{return test(\"%.*u\", -1, 0);}"},
	{1, 1249, "x_neg_prec_star_01", x_neg_prec_star_01, x_neg_prec_star_01_bench, "{return test(\"%.*x\", -3, 12345);}"},
	{1, 1250, "x_neg_prec_star_02", x_neg_prec_star_02, x_neg_prec_star_02_bench, "{return test(\"%.*x\", -1, 12345);}"},
	{1, 1251, "x_neg_prec_star_03", x_neg_prec_star_03, x_neg_prec_star_03_bench, "{return test(\"%.*x\", -1, 0);}"},
	{1, 1252, "X_neg_prec_star_01", X_neg_prec_star_01, X_neg_prec_star_01_bench, "{return test(\"%.*X\", -3, 12345);}"},
	{1, 1253, "X_neg_prec_star_02", X_neg_prec_star_02, X_neg_prec_star_02_bench, "{return test(\"%.*X\", -1, 12345);}"},
	{1, 1254, "X_neg_prec_star_03", X_neg_prec_star_03, X_neg_prec_star_03_bench, "{return test(\"%.*X\", -1, 0);}"},
	{1, 1255, "s_neg_prec_star_01", s_neg_prec_star_01, s_neg_prec_star_01_bench, "{return test(\"%.*s\", -3, 0);}"},
	{1, 1256, "s_neg_prec_star_02", s_neg_prec_star_02, s_neg_prec_star_02_bench, "{return test(\"%.*s\", -1, 0);}"},
	{1, 1257, "p_neg_prec_star_01", p_neg_prec_star_01, p_neg_prec_star_01_bench, "{return test(\"%.*p\", -3, s_hello);}"},
	{1, 1258, "p_neg_prec_star_02", p_neg_prec_star_02, p_neg_prec_star_02_bench, "{return test(\"%.*p\", -1, s_hello);}"},
	{1, 1259, "p_neg_prec_star_03", p_neg_prec_star_03, p_neg_prec_star_03_bench, "{return test(\"%.*p\", -3, 0);}"},
	{1, 1260, "p_neg_prec_star_04", p_neg_prec_star_04, p_neg_prec_star_04_bench, "{return test(\"%.*p\", -1, 0);}"},
	{1, 1261, "bonus_n_format_only", bonus_n_format_only, bonus_n_format_only_bench, "{return test(\"pft%ntest\", &n); (void)n;} "},
	{1, 1262, "bonus_n_format_only_sp", bonus_n_format_only_sp, bonus_n_format_only_sp_bench, "{return test(\"pft% ntest\", &n); (void)n;} "},
	{1, 1263, "bonus_n_format_only_af", bonus_n_format_only_af, bonus_n_format_only_af_bench, "{return test(\"pft%#ntest\", &n); (void)n;} "},
	{1, 1264, "bonus_n_format_only_zp", bonus_n_format_only_zp, bonus_n_format_only_zp_bench, "{return test(\"pft%0ntest\", &n); (void)n;} "},
	{1, 1265, "bonus_n_format_only_lj", bonus_n_format_only_lj, bonus_n_format_only_lj_bench, "{return test(\"pft%-ntest\", &n); (void)n;} "},
	{1, 1266, "bonus_n_format_only_as", bonus_n_format_only_as, bonus_n_format_only_as_bench, "{return test(\"pft%+ntest\", &n); (void)n;} "},
	{1, 1267, "bonus_n_format_only_w", bonus_n_format_only_w, bonus_n_format_only_w_bench, "{return test(\"pft%5ntest\", &n); (void)n;} "},
	{1, 1268, "bonus_n_format_only_prec", bonus_n_format_only_prec, bonus_n_format_only_prec_bench, "{return test(\"pft%.5ntest\", &n); (void)n;} "},
	{1, 1269, "bonus_n_format_only_w_prec", bonus_n_format_only_w_prec, bonus_n_format_only_w_prec_bench, "{return test(\"pft%5.5ntest\", &n); (void)n;} "},
	{1, 1270, "bonus_n_format_only_prec_star", bonus_n_format_only_prec_star, bonus_n_format_only_prec_star_bench, "{return test(\"pft%.*ntest%d\", 5, &n, 123); (void)n;}"},
	{1, 1271, "bonus_n_format_only_w_star", bonus_n_format_only_w_star, bonus_n_format_only_w_star_bench, "{return test(\"pft%*.ntest%d\", 5, &n, 123); (void)n;}"},
	{1, 1272, "bonus_n_format_only_wprec_star", bonus_n_format_only_wprec_star, bonus_n_format_only_wprec_star_bench, "{return test(\"pft%*.*ntest%d\", 5, 5, &n, 123); (void)n;}"},
	{1, 1273, "nocrash_notrequired_noarg_25", nocrash_notrequired_noarg_25, nocrash_notrequired_noarg_25_bench, "{return test(\"%o\"); }"},
	{1, 1274, "nocrash_notrequired_nullarg_25", nocrash_notrequired_nullarg_25, nocrash_notrequired_nullarg_25_bench, "{return test(\"%o\", NULL); }"},
	{1, 1275, "bonus_mix_successive_1", bonus_mix_successive_1, bonus_mix_successive_1_bench, "{return ( test(\"%o\", mx_u) + test(\"%%\"));}"},
	{1, 1276, "notinsubject_o_basic_octl_pos", notinsubject_o_basic_octl_pos, notinsubject_o_basic_octl_pos_bench, "{return test(\"this %o number\", 17);}"},
	{1, 1277, "notinsubject_o_basic_octl_zero", notinsubject_o_basic_octl_zero, notinsubject_o_basic_octl_zero_bench, "{return test(\"this %o number\", 0);}"},
	{1, 1278, "notinsubject_o_basic_octl_onlypos", notinsubject_o_basic_octl_onlypos, notinsubject_o_basic_octl_onlypos_bench, "{return test(\"%o\", 3);}"},
	{1, 1279, "notinsubject_o_octlmax", notinsubject_o_octlmax, notinsubject_o_octlmax_bench, "{return test(\"%o\", 4294967295u);}"},
	{1, 1280, "notinsubject_o_width_pos_fits", notinsubject_o_width_pos_fits, notinsubject_o_width_pos_fits_bench, "{return test(\"%7o\", 33);}"},
	{1, 1281, "notinsubject_o_width_zero_fits", notinsubject_o_width_zero_fits, notinsubject_o_width_zero_fits_bench, "{return test(\"%3o\", 0);}"},
	{1, 1282, "notinsubject_o_width_pos_exactfit", notinsubject_o_width_pos_exactfit, notinsubject_o_width_pos_exactfit_bench, "{return test(\"%6o\", 52625);}"},
	{1, 1283, "notinsubject_o_width_pos_nofit", notinsubject_o_width_pos_nofit, notinsubject_o_width_pos_nofit_bench, "{return test(\"%2o\", 94827);}"},
	{1, 1284, "notinsubject_o_width_pos_fits_lj", notinsubject_o_width_pos_fits_lj, notinsubject_o_width_pos_fits_lj_bench, "{return test(\"%-7o\", 33);}"},
	{1, 1285, "notinsubject_o_width_zero_fits_lj", notinsubject_o_width_zero_fits_lj, notinsubject_o_width_zero_fits_lj_bench, "{return test(\"%-3o\", 0);}"},
	{1, 1286, "notinsubject_o_width_pos_exactfit_lj", notinsubject_o_width_pos_exactfit_lj, notinsubject_o_width_pos_exactfit_lj_bench, "{return test(\"%-6o\", 52625);}"},
	{1, 1287, "notinsubject_o_width_pos_nofit_lj", notinsubject_o_width_pos_nofit_lj, notinsubject_o_width_pos_nofit_lj_bench, "{return test(\"%-4o\", 9648627);}"},
	{1, 1288, "notinsubject_o_prec_fits_pos", notinsubject_o_prec_fits_pos, notinsubject_o_prec_fits_pos_bench, "{return test(\"%.5o\", 21);}"},
	{1, 1289, "notinsubject_o_prec_fits_zero", notinsubject_o_prec_fits_zero, notinsubject_o_prec_fits_zero_bench, "{return test(\"%.3o\", 0);}"},
	{1, 1290, "notinsubject_o_prec_exactfit_pos", notinsubject_o_prec_exactfit_pos, notinsubject_o_prec_exactfit_pos_bench, "{return test(\"%.5o\", 5263);}"},
	{1, 1291, "notinsubject_o_prec_nofit_pos", notinsubject_o_prec_nofit_pos, notinsubject_o_prec_nofit_pos_bench, "{return test(\"%.3o\", 938862);}"},
	{1, 1292, "notinsubject_o_zp_pos_fits", notinsubject_o_zp_pos_fits, notinsubject_o_zp_pos_fits_bench, "{return test(\"%05o\", 43);}"},
	{1, 1293, "notinsubject_o_zp_zero_fits", notinsubject_o_zp_zero_fits, notinsubject_o_zp_zero_fits_bench, "{return test(\"%03o\", 0);}"},
	{1, 1294, "notinsubject_o_zp_pos_exactfit", notinsubject_o_zp_pos_exactfit, notinsubject_o_zp_pos_exactfit_bench, "{return test(\"%07o\", 698334);}"},
	{1, 1295, "notinsubject_o_prec_width_fit_fit_pos", notinsubject_o_prec_width_fit_fit_pos, notinsubject_o_prec_width_fit_fit_pos_bench, "{return test(\"%8.5o\", 34);}"},
	{1, 1296, "notinsubject_o_prec_width_fit_fit_zero", notinsubject_o_prec_width_fit_fit_zero, notinsubject_o_prec_width_fit_fit_zero_bench, "{return test(\"%8.5o\", 0);}"},
	{1, 1297, "notinsubject_o_prec_width_nofit_fit_pos", notinsubject_o_prec_width_nofit_fit_pos, notinsubject_o_prec_width_nofit_fit_pos_bench, "{return test(\"%8.3o\", 8375);}"},
	{1, 1298, "notinsubject_o_prec_width_fit_nofit_pos", notinsubject_o_prec_width_fit_nofit_pos, notinsubject_o_prec_width_fit_nofit_pos_bench, "{return test(\"%2.7o\", 3267);}"},
	{1, 1299, "notinsubject_o_prec_width_nofit_nofit_pos", notinsubject_o_prec_width_nofit_nofit_pos, notinsubject_o_prec_width_nofit_nofit_pos_bench, "{return test(\"%3.3o\", 6983);}"},
	{1, 1300, "notinsubject_o_prec_width_fit_fit_pos_lj", notinsubject_o_prec_width_fit_fit_pos_lj, notinsubject_o_prec_width_fit_fit_pos_lj_bench, "{return test(\"%-8.5o\", 34);}"},
	{1, 1301, "notinsubject_o_prec_width_fit_fit_zero_lj", notinsubject_o_prec_width_fit_fit_zero_lj, notinsubject_o_prec_width_fit_fit_zero_lj_bench, "{return test(\"%-8.5o\", 0);}"},
	{1, 1302, "notinsubject_o_prec_width_nofit_fit_pos_lj", notinsubject_o_prec_width_nofit_fit_pos_lj, notinsubject_o_prec_width_nofit_fit_pos_lj_bench, "{return test(\"%-8.3o\", 8375);}"},
	{1, 1303, "notinsubject_o_prec_width_fit_nofit_pos_lj", notinsubject_o_prec_width_fit_nofit_pos_lj, notinsubject_o_prec_width_fit_nofit_pos_lj_bench, "{return test(\"%-2.7o\", 3267);}"},
	{1, 1304, "notinsubject_o_prec_width_nofit_nofit_pos_lj", notinsubject_o_prec_width_nofit_nofit_pos_lj, notinsubject_o_prec_width_nofit_nofit_pos_lj_bench, "{return test(\"%-3.3o\", 6983);}"},
	{1, 1305, "notinsubject_o_prec_width_ff_pos_zp", notinsubject_o_prec_width_ff_pos_zp, notinsubject_o_prec_width_ff_pos_zp_bench, "{return test(\"%08.5o\", 34);}"},
	{1, 1306, "notinsubject_o_prec_width_ff_zero_zp", notinsubject_o_prec_width_ff_zero_zp, notinsubject_o_prec_width_ff_zero_zp_bench, "{return test(\"%08.5o\", 0);}"},
	{1, 1307, "notinsubject_o_prec_width_nf_pos_zp", notinsubject_o_prec_width_nf_pos_zp, notinsubject_o_prec_width_nf_pos_zp_bench, "{return test(\"%08.3o\", 8375);}"},
	{1, 1308, "notinsubject_o_prec_width_fn_pos_zp", notinsubject_o_prec_width_fn_pos_zp, notinsubject_o_prec_width_fn_pos_zp_bench, "{return test(\"%02.7o\", 3267);}"},
	{1, 1309, "notinsubject_o_prec_width_nn_pos_zp", notinsubject_o_prec_width_nn_pos_zp, notinsubject_o_prec_width_nn_pos_zp_bench, "{return test(\"%03.3o\", 6983);}"},
	{1, 1310, "notinsubject_o_prec_width_ff_pos_ljzp_ignoreflag", notinsubject_o_prec_width_ff_pos_ljzp_ignoreflag, notinsubject_o_prec_width_ff_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.5o\", 34);}"},
	{1, 1311, "notinsubject_o_prec_width_ff_zero_ljzp_ignoreflag", notinsubject_o_prec_width_ff_zero_ljzp_ignoreflag, notinsubject_o_prec_width_ff_zero_ljzp_ignoreflag_bench, "{return test(\"%0-8.5o\", 0);}"},
	{1, 1312, "notinsubject_o_prec_width_nf_pos_ljzp_ignoreflag", notinsubject_o_prec_width_nf_pos_ljzp_ignoreflag, notinsubject_o_prec_width_nf_pos_ljzp_ignoreflag_bench, "{return test(\"%0-8.3o\", 8375);}"},
	{1, 1313, "notinsubject_o_prec_width_fn_pos_ljzp_ignoreflag", notinsubject_o_prec_width_fn_pos_ljzp_ignoreflag, notinsubject_o_prec_width_fn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-2.7o\", 3267);}"},
	{1, 1314, "notinsubject_o_prec_width_nn_pos_ljzp_ignoreflag", notinsubject_o_prec_width_nn_pos_ljzp_ignoreflag, notinsubject_o_prec_width_nn_pos_ljzp_ignoreflag_bench, "{return test(\"%0-3.3o\", 6983);}"},
	{1, 1315, "notinsubject_o_basic_octl_pos_af", notinsubject_o_basic_octl_pos_af, notinsubject_o_basic_octl_pos_af_bench, "{return test(\"this %#o number\", 17);}"},
	{1, 1316, "notinsubject_o_basic_octl_zero_af", notinsubject_o_basic_octl_zero_af, notinsubject_o_basic_octl_zero_af_bench, "{return test(\"this %#o number\", 0);}"},
	{1, 1317, "notinsubject_o_basic_octl_onlypos_af", notinsubject_o_basic_octl_onlypos_af, notinsubject_o_basic_octl_onlypos_af_bench, "{return test(\"%#o\", 3);}"},
	{1, 1318, "notinsubject_o_octlmax_af", notinsubject_o_octlmax_af, notinsubject_o_octlmax_af_bench, "{return test(\"%#o\", 4294967295u);}"},
	{1, 1319, "notinsubject_o_width_pos_fits_af", notinsubject_o_width_pos_fits_af, notinsubject_o_width_pos_fits_af_bench, "{return test(\"%#7o\", 33);}"},
	{1, 1320, "notinsubject_o_width_zero_fits_af", notinsubject_o_width_zero_fits_af, notinsubject_o_width_zero_fits_af_bench, "{return test(\"%#3o\", 0);}"},
	{1, 1321, "notinsubject_o_width_pos_exactfit_af", notinsubject_o_width_pos_exactfit_af, notinsubject_o_width_pos_exactfit_af_bench, "{return test(\"%#6o\", 52625);}"},
	{1, 1322, "notinsubject_o_width_pos_nofit_af", notinsubject_o_width_pos_nofit_af, notinsubject_o_width_pos_nofit_af_bench, "{return test(\"%#2o\", 94827);}"},
	{1, 1323, "notinsubject_o_width_pos_fits_lj_af", notinsubject_o_width_pos_fits_lj_af, notinsubject_o_width_pos_fits_lj_af_bench, "{return test(\"%#-7o\", 33);}"},
	{1, 1324, "notinsubject_o_width_zero_fits_lj_af", notinsubject_o_width_zero_fits_lj_af, notinsubject_o_width_zero_fits_lj_af_bench, "{return test(\"%#-3o\", 0);}"},
	{1, 1325, "notinsubject_o_width_pos_exactfit_lj_af", notinsubject_o_width_pos_exactfit_lj_af, notinsubject_o_width_pos_exactfit_lj_af_bench, "{return test(\"%#-6o\", 52625);}"},
	{1, 1326, "notinsubject_o_width_pos_nofit_lj_af", notinsubject_o_width_pos_nofit_lj_af, notinsubject_o_width_pos_nofit_lj_af_bench, "{return test(\"%#-4o\", 9648627);}"},
	{1, 1327, "notinsubject_o_prec_fits_pos_af", notinsubject_o_prec_fits_pos_af, notinsubject_o_prec_fits_pos_af_bench, "{return test(\"%#.5o\", 21);}"},
	{1, 1328, "notinsubject_o_prec_fits_zero_af", notinsubject_o_prec_fits_zero_af, notinsubject_o_prec_fits_zero_af_bench, "{return test(\"%#.3o\", 0);}"},
	{1, 1329, "notinsubject_o_prec_exactfit_pos_af", notinsubject_o_prec_exactfit_pos_af, notinsubject_o_prec_exactfit_pos_af_bench, "{return test(\"%#.5o\", 5263);}"},
	{1, 1330, "notinsubject_o_prec_nofit_pos_af", notinsubject_o_prec_nofit_pos_af, notinsubject_o_prec_nofit_pos_af_bench, "{return test(\"%#.3o\", 938862);}"},
	{1, 1331, "notinsubject_o_zp_pos_fits_af", notinsubject_o_zp_pos_fits_af, notinsubject_o_zp_pos_fits_af_bench, "{return test(\"%#05o\", 43);}"},
	{1, 1332, "notinsubject_o_zp_zero_fits_af", notinsubject_o_zp_zero_fits_af, notinsubject_o_zp_zero_fits_af_bench, "{return test(\"%#03o\", 0);}"},
	{1, 1333, "notinsubject_o_zp_pos_exactfit_af", notinsubject_o_zp_pos_exactfit_af, notinsubject_o_zp_pos_exactfit_af_bench, "{return test(\"%#07o\", 698334);}"},
	{1, 1334, "notinsubject_o_prec_width_fit_fit_pos_af", notinsubject_o_prec_width_fit_fit_pos_af, notinsubject_o_prec_width_fit_fit_pos_af_bench, "{return test(\"%#8.5o\", 34);}"},
	{1, 1335, "notinsubject_o_prec_width_fit_fit_zero_af", notinsubject_o_prec_width_fit_fit_zero_af, notinsubject_o_prec_width_fit_fit_zero_af_bench, "{return test(\"%#8.5o\", 0);}"},
	{1, 1336, "notinsubject_o_prec_width_nofit_fit_pos_af", notinsubject_o_prec_width_nofit_fit_pos_af, notinsubject_o_prec_width_nofit_fit_pos_af_bench, "{return test(\"%#8.3o\", 8375);}"},
	{1, 1337, "notinsubject_o_prec_width_fit_nofit_pos_af", notinsubject_o_prec_width_fit_nofit_pos_af, notinsubject_o_prec_width_fit_nofit_pos_af_bench, "{return test(\"%#2.7o\", 3267);}"},
	{1, 1338, "notinsubject_o_prec_width_nofit_nofit_pos_af", notinsubject_o_prec_width_nofit_nofit_pos_af, notinsubject_o_prec_width_nofit_nofit_pos_af_bench, "{return test(\"%#3.3o\", 6983);}"},
	{1, 1339, "notinsubject_o_prec_width_fit_fit_pos_lj_af", notinsubject_o_prec_width_fit_fit_pos_lj_af, notinsubject_o_prec_width_fit_fit_pos_lj_af_bench, "{return test(\"%#-8.5o\", 34);}"},
	{1, 1340, "notinsubject_o_prec_width_fit_fit_zero_lj_af", notinsubject_o_prec_width_fit_fit_zero_lj_af, notinsubject_o_prec_width_fit_fit_zero_lj_af_bench, "{return test(\"%#-8.5o\", 0);}"},
	{1, 1341, "notinsubject_o_prec_width_nofit_fit_pos_lj_af", notinsubject_o_prec_width_nofit_fit_pos_lj_af, notinsubject_o_prec_width_nofit_fit_pos_lj_af_bench, "{return test(\"%#-8.3o\", 8375);}"},
	{1, 1342, "notinsubject_o_prec_width_fit_nofit_pos_lj_af", notinsubject_o_prec_width_fit_nofit_pos_lj_af, notinsubject_o_prec_width_fit_nofit_pos_lj_af_bench, "{return test(\"%#-2.7o\", 3267);}"},
	{1, 1343, "notinsubject_o_prec_width_nofit_nofit_pos_lj_af", notinsubject_o_prec_width_nofit_nofit_pos_lj_af, notinsubject_o_prec_width_nofit_nofit_pos_lj_af_bench, "{return test(\"%#-3.3o\", 6983);}"},
	{1, 1344, "notinsubject_o_prec_width_ff_pos_zp_af", notinsubject_o_prec_width_ff_pos_zp_af, notinsubject_o_prec_width_ff_pos_zp_af_bench, "{return test(\"%#08.5o\", 34);}"},
	{1, 1345, "notinsubject_o_prec_width_ff_zero_zp_af", notinsubject_o_prec_width_ff_zero_zp_af, notinsubject_o_prec_width_ff_zero_zp_af_bench, "{return test(\"%#08.5o\", 0);}"},
	{1, 1346, "notinsubject_o_prec_width_nf_pos_zp_af", notinsubject_o_prec_width_nf_pos_zp_af, notinsubject_o_prec_width_nf_pos_zp_af_bench, "{return test(\"%#08.3o\", 8375);}"},
	{1, 1347, "notinsubject_o_prec_width_fn_pos_zp_af", notinsubject_o_prec_width_fn_pos_zp_af, notinsubject_o_prec_width_fn_pos_zp_af_bench, "{return test(\"%#02.7o\", 3267);}"},
	{1, 1348, "notinsubject_o_prec_width_nn_pos_zp_af", notinsubject_o_prec_width_nn_pos_zp_af, notinsubject_o_prec_width_nn_pos_zp_af_bench, "{return test(\"%#03.3o\", 6983);}"},
	{1, 1349, "notinsubject_o_prec_width_ff_pos_ljzpaf_ignoreflag", notinsubject_o_prec_width_ff_pos_ljzpaf_ignoreflag, notinsubject_o_prec_width_ff_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.5o\", 34);}"},
	{1, 1350, "notinsubject_o_prec_width_ff_zero_ljzpaf_ignoreflag", notinsubject_o_prec_width_ff_zero_ljzpaf_ignoreflag, notinsubject_o_prec_width_ff_zero_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.5o\", 0);}"},
	{1, 1351, "notinsubject_o_prec_width_nf_pos_ljzpaf_ignoreflag", notinsubject_o_prec_width_nf_pos_ljzpaf_ignoreflag, notinsubject_o_prec_width_nf_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-8.3o\", 8375);}"},
	{1, 1352, "notinsubject_o_prec_width_fn_pos_ljzpaf_ignoreflag", notinsubject_o_prec_width_fn_pos_ljzpaf_ignoreflag, notinsubject_o_prec_width_fn_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-2.7o\", 3267);}"},
	{1, 1353, "notinsubject_o_prec_width_nn_pos_ljzpaf_ignoreflag", notinsubject_o_prec_width_nn_pos_ljzpaf_ignoreflag, notinsubject_o_prec_width_nn_pos_ljzpaf_ignoreflag_bench, "{return test(\"%#0-3.3o\", 6983);}"},
	{1, 1354, "notinsubject_o_prec0val0_basic", notinsubject_o_prec0val0_basic, notinsubject_o_prec0val0_basic_bench, "{return test(\"%.0o\", 0);}"},
	{1, 1355, "notinsubject_o_prec0val0_implicit", notinsubject_o_prec0val0_implicit, notinsubject_o_prec0val0_implicit_bench, "{return test(\"%.o\", 0);}"},
	{1, 1356, "notinsubject_o_prec0val0_w", notinsubject_o_prec0val0_w, notinsubject_o_prec0val0_w_bench, "{return test(\"%5.0o\", 0);}"},
	{1, 1357, "notinsubject_o_prec0val0_w_impl", notinsubject_o_prec0val0_w_impl, notinsubject_o_prec0val0_w_impl_bench, "{return test(\"%5.o\", 0);}"},
	{1, 1358, "notinsubject_o_prec0val0_wlj", notinsubject_o_prec0val0_wlj, notinsubject_o_prec0val0_wlj_bench, "{return test(\"%-5.0o\", 0);}"},
	{1, 1359, "notinsubject_o_prec0val0_wlj_impl", notinsubject_o_prec0val0_wlj_impl, notinsubject_o_prec0val0_wlj_impl_bench, "{return test(\"%-5.o\", 0);}"},
	{1, 1360, "notinsubject_o_prec0val0_af", notinsubject_o_prec0val0_af, notinsubject_o_prec0val0_af_bench, "{return test(\"%#.0o\", 0);}"},
	{1, 1361, "notinsubject_o_prec0val0_af_impl", notinsubject_o_prec0val0_af_impl, notinsubject_o_prec0val0_af_impl_bench, "{return test(\"%#.o\", 0);}"},
	{1, 1362, "notinsubject_o_prec0val0_waf", notinsubject_o_prec0val0_waf, notinsubject_o_prec0val0_waf_bench, "{return test(\"%#5.0o\", 0);}"},
	{1, 1363, "notinsubject_o_prec0val0_waf_impl", notinsubject_o_prec0val0_waf_impl, notinsubject_o_prec0val0_waf_impl_bench, "{return test(\"%#5.o\", 0);}"},
	{1, 1364, "notinsubject_o_prec0val0_waflj", notinsubject_o_prec0val0_waflj, notinsubject_o_prec0val0_waflj_bench, "{return test(\"%#-5.0o\", 0);}"},
	{1, 1365, "notinsubject_o_prec0val0_waflj_impl", notinsubject_o_prec0val0_waflj_impl, notinsubject_o_prec0val0_waflj_impl_bench, "{return test(\"%#-5.o\", 0);}"},
	{1, 1366, "nocrash_notinsubject_notrequired_o_sp", nocrash_notinsubject_notrequired_o_sp, nocrash_notinsubject_notrequired_o_sp_bench, "{return test(\"% o\", 42);}"},
	{1, 1367, "nocrash_notinsubject_notrequired_o_lj_nowidth", nocrash_notinsubject_notrequired_o_lj_nowidth, nocrash_notinsubject_notrequired_o_lj_nowidth_bench, "{return test(\"%-o\", 42);}"},
	{1, 1368, "nocrash_notinsubject_notrequired_o_as", nocrash_notinsubject_notrequired_o_as, nocrash_notinsubject_notrequired_o_as_bench, "{return test(\"%+o\", 42);}"},
	{1, 1369, "notinsubject_moul_o_1", notinsubject_moul_o_1, notinsubject_moul_o_1_bench, "{return test(\"%o\", 42);}"},
	{1, 1370, "notinsubject_moul_o_2", notinsubject_moul_o_2, notinsubject_moul_o_2_bench, "{return test(\"Kashim a %o histoires à raconter\", 1001);}"},
	{1, 1371, "notinsubject_moul_o_3", notinsubject_moul_o_3, notinsubject_moul_o_3_bench, "{return test(\"Il fait au moins %o\n\", -8000);}"},
	{1, 1372, "notinsubject_moul_o_4", notinsubject_moul_o_4, notinsubject_moul_o_4_bench, "{return test(\"%o\", -0);}"},
	{1, 1373, "notinsubject_moul_o_5", notinsubject_moul_o_5, notinsubject_moul_o_5_bench, "{return test(\"%o\", 0);}"},
	{1, 1374, "notinsubject_moul_o_6", notinsubject_moul_o_6, notinsubject_moul_o_6_bench, "{return test(\"%o\", INT_MAX);}"},
	{1, 1375, "notinsubject_moul_o_7", notinsubject_moul_o_7, notinsubject_moul_o_7_bench, "{return test(\"%o\", INT_MIN);}"},
	{1, 1376, "notinsubject_moul_o_8", notinsubject_moul_o_8, notinsubject_moul_o_8_bench, "{return test(\"%o\", INT_MIN - 1);}"},
	{1, 1377, "notinsubject_moul_o_9", notinsubject_moul_o_9, notinsubject_moul_o_9_bench, "{return test(\"%o\", INT_MAX + 1);}"},
	{1, 1378, "notinsubject_moul_o_10", notinsubject_moul_o_10, notinsubject_moul_o_10_bench, "{return test(\"%%o 0000042 == |%o|\n\", 0000042);}"},
	{1, 1379, "notinsubject_moul_o_11", notinsubject_moul_o_11, notinsubject_moul_o_11_bench, "{return test(\"%%o \t == |%o|\n\", '\t');}"},
	{1, 1380, "notinsubject_moul_o_12", notinsubject_moul_o_12, notinsubject_moul_o_12_bench, "{return test(\"%%o Lydie == |%o|\n\", 'L'+'y'+'d'+'i'+'e');}"},
	{1, 1381, "notinsubject_moul_o_hash_3", notinsubject_moul_o_hash_3, notinsubject_moul_o_hash_3_bench, "{return test(\"%%#o 0 ==  %#o\n\", 0);}"},
	{1, 1382, "notinsubject_moul_o_hash_4", notinsubject_moul_o_hash_4, notinsubject_moul_o_hash_4_bench, "{return test(\"%%o 0 ==  %o\n\", 0);}"},
	{1, 1383, "notinsubject_moul_o_hash_5", notinsubject_moul_o_hash_5, notinsubject_moul_o_hash_5_bench, "{return test(\"%%#o INT_MAX ==  %#o\n\", INT_MAX);}"},
	{1, 1384, "notinsubject_moul_o_hash_6", notinsubject_moul_o_hash_6, notinsubject_moul_o_hash_6_bench, "{return test(\"%%o INT_MAX ==  %o\n\", INT_MAX);}"},
	{1, 1385, "notinsubject_moul_o_hash_7", notinsubject_moul_o_hash_7, notinsubject_moul_o_hash_7_bench, "{return test(\"%%#o INT_MIN ==  %#o\n\", INT_MIN);}"},
	{1, 1386, "notinsubject_moul_o_hash_8", notinsubject_moul_o_hash_8, notinsubject_moul_o_hash_8_bench, "{return test(\"%%o INT_MIN ==  %o\n\", INT_MIN);}"},
	{0, 2147483647, NULL, NULL, NULL, NULL}
};

