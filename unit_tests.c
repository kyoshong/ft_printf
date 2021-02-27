/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 21:15:57 by gfielder          #+#    #+#             */
/*   Updated: 2021/02/27 14:38:04 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
**    int    test(const char *fmt, ...)
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
int nospec_no_specifier_test(void){return test("hello, world!");}
int nospec_empty_string(void){return test("");}
int nospec_some_escaped_chars(void){return test("\t\n\r\v\f\n");}
//Nospec tests with successive calls
int nospec_successive_5_5(void){return ( test("hello") + test("world"));}
int nospec_successive_2_9(void){return ( test("he") ^ test(" is alive"));}
int nospec_successive_8_3(void){return ( test("is alive") - test(" he"));}


/* -----------------------------------------------------------------------------
** 						%% PERCENTAGE TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//%% Tests
int pct_basic(void){return test("%%");}
int pct_5w(void){return test("%5%");}
int pct_5wlj(void){return test("%-5%");}
int pct_5wzp(void){return test("%05%");}
int pct_5wljzp(void){return test("%-05%");}
//Null specifier tests
int nocrash_notrequired_nullspec_basic(void){return test("%");}
int nocrash_notrequired_nullspec_5w(void){return test("%5");}
int nocrash_notrequired_nullspec_5wzp(void){return test("%05");}
int nocrash_notrequired_nullspec_5wzplj(void){return test("%-05");}
int nocrash_notrequired_nullspec_5wlj(void){return test("%-5");}


/* -----------------------------------------------------------------------------
** 						%c CHARS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Chars - Basic
int c_allprintable_combined(void){return test("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}

int c_1_31_combined(void){return test("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}

int c_128_255_combined(void){return test("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}

int c_allprintable_width(void){return test("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}

int c_1_31_width(void){return test("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}

int c_128_255_width(void){return test("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}

int c_allprintable_width_lj(void){return test("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');}

int c_1_31_width_lj(void){return test("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);}

int c_128_255_width_lj(void){return test("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);}

int c_nullterm_basic(void){return test("%c", '\0');}
int c_nullterm_5w(void){return test("%5c", '\0');}
int c_nullterm_5wlj(void){return test("%-5c", '\0');}


/* -----------------------------------------------------------------------------
** 						%s STRING TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//String specifiers - no modifiers
int s_basic_string_expansion(void){return test("hello, %s.", "gavin");}
int s_only_string_expansion(void){return test("%s", "testing testing");}
int s_two_string_expansions(void){return test("%s%s", "hello", "world");}
int s_two_string_expansions2(void){return test("..%s stuff %s", "a", "b");}
int s_empty_string_expansion(void){return test("this %s is empty", "");}
int s_full_then_empty_string(void){return test("this %s is %s", "hello", "");}
int s_empty_then_full_string(void){return test("this %s is %s", "", "hello");}
int s_three_strings(void){return test("%s%s%s", "1", "2", "3's a charm");}
//String specifiers with field_width, space- or zero-padded
int s_space_padded_field_width(void){return test("%32s", "abc");}
int s_space_padded_field_width2(void){return test("%16s", "nark nark");}
int s_space_padded_over_field_width(void){return test("%5s", "goes over");}
//String specifiers with field_width, space- or zero-padded, left-justified
int s_space_padded_field_width_lj(void){return test("%-32s", "abc");}
int s_space_padded_field_width2_lj(void){return test("%-16s", "nark nark");}
int s_space_padded_over_field_width_lj(void){return test("%-5s", "goes over");}
//String specifiers with precision
int s_string_prec_notrunc(void){return test("%.7s", "hello");}
int s_string_prec_trunc(void){return test("%.3s", "hello");}
int s_string_prec_default(void){return test("%.s", "hello");}
int s_string_prec_zero(void){return test("%.0s", "hello");}
int s_two_strings_prec_2trunc(void){return test("%.3s%.2s", "holla", "bitch");}
int s_two_strings_prec_1trunc_a(void){return test("%.2s%.7s", "hello", "world");}
int s_two_strings_prec_1trunc_b(void){return test("%.7s%.2s", "hello", "world");}
int s_two_strings_prec_0trunc(void){return test("%.5s%7s", "yo", "boi");}
//String specifiers with both precision and field width
int s_string_prec_width_notrunc(void){return test("%7.5s", "yolo");}
int s_string_prec_width_trunc(void){return test("%7.5s", "bombastic");}
int s_string_prec_width_notrunc_lj(void){return test("%-7.5s", "yolo");}
int s_string_prec_width_trunc_lj(void){return test("%-7.5s", "tubular");}
int s_two_s_prec_width_2fit_0trunc(void){return test("%7.7s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_a_0trunc(void){return test("%3.7s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_b_0trunc(void){return test("%7.7s%3.7s", "hello", "world");}
int s_two_s_prec_width_0fit_0trunc(void){return test("%3.7s%3.7s", "hello", "world");}
int s_two_s_prec_width_2fit_1trunc_a(void){return test("%7.3s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_a_1trunc_a(void){return test("%3.3s%7.7s", "hello", "world");}
int s_two_s_prec_width_1fit_b_1trunc_a(void){return test("%7.3s%3.7s", "hello", "world");}
int s_two_s_prec_width_0fit_1trunc_a(void){return test("%3.3s%3.7s", "hello", "world");}
int s_two_s_prec_width_2fit_1trunc_b(void){return test("%7.7s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_a_1trunc_b(void){return test("%3.7s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_b_1trunc_b(void){return test("%7.7s%3.3s", "hello", "world");}
int s_two_s_prec_width_0fit_1trunc_b(void){return test("%3.7s%3.3s", "hello", "world");}
int s_two_s_prec_width_2fit_2trunc(void){return test("%7.3s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_a_2trunc(void){return test("%3.3s%7.3s", "hello", "world");}
int s_two_s_prec_width_1fit_b_2trunc(void){return test("%7.3s%3.3s", "hello", "world");}
int s_two_s_prec_width_0fit_2trunc(void){return test("%3.3s%3.3s", "hello", "world");}
int s_two_s_prec_width_2trunc(void){return test("%3s%3s", "hello", "world");}
//String specifiers, other tests
int s_two_strings_lj_and_rj(void){return test("%-7s%5s", "hello", "world");}
int s_two_strings_rj_and_lj(void){return test("%7s%-5s", "hello", "world");}
//String specifiers - NULL strings
int s_null_basic_string_expansion(void){return test("hello, %s.", NULL);}
int s_null_only_string_expansion(void){return test("%s", NULL);}
int s_null_space_padded_field_width(void){return test("%32s", NULL);}
int s_null_space_padded_over_field_width(void){return test("%2s", NULL);}
int s_null_space_padded_field_width_lj(void){return test("%-32s", NULL);}
int s_null_space_padded_field_width2_lj(void){return test("%-16s", NULL);}
int s_null_space_padded_over_field_width_lj(void){return test("%-3s", NULL);}
//String specifiers with precision
int s_null_string_prec_notrunc(void){return test("%.9s", "NULL");}
int s_null_string_prec_trunc(void){return test("%.3s", "NULL");}
int s_null_string_prec_default(void){return test("%.s", "NULL");}
int s_null_string_prec_zero(void){return test("%.0s", "NULL");}
//String s_hidden tests
static char *s_hidden = "hi low\0don't print me lol\0";
int s_basic_s_hidden(void){return test("%s", s_hidden);}
// width pad
int s_width_3_s_hidden(void){return test("%3s", s_hidden);}
int s_width_9_s_hidden(void){return test("%9s", s_hidden);}
// precision no width
int s_prec_no_width_s_hidden(void){return test("%.s", s_hidden);}
int s_prec_9_no_width_s_hidden(void){return test("%.9s", s_hidden);}
// precision  0 before number
int s_prec_03_no_width_s_hidden(void){return test("%.03s", s_hidden);}
int s_prec_09_no_width_s_hidden(void){return test("%.09s", s_hidden);}
int s_prec_03_no_width_s_null(void){return test("%.03s", NULL);}
int s_prec_09_no_width_s_null(void){return test("%.09s", NULL);}
int s_prec_00_no_width_s_nullchar(void){return test("%.00s", "\0");}
int s_prec_01_no_width_s_nullchar(void){return test("%.01s", "\0");}
int s_prec_03_no_width_s_nullchar(void){return test("%.03s", "\0");}
int s_prec_09_no_width_s_nullchar(void){return test("%.09s", "\0");}
// width  no precision
int s_prec_0_width_3_s_hidden(void){return test("%3.s", s_hidden);}
int s_prec_0_width_10_s_hidden(void){return test("%10.s", s_hidden);}
int s_prec_0_width_3_s_null(void){return test("%3.s", NULL);}
int s_prec_0_width_10_s_null(void){return test("%10.s", NULL);}
int s_prec_0_width_1_s_nullchar(void){return test("%1.s", "\0");}
int s_prec_0_width_2_s_nullchar(void){return test("%2.s", "\0");}
int s_prec_0_width_9_s_nullchar(void){return test("%9.s", "\0");}
// lj flag width  no precision
int s_prec_0_lj_width_3_s_hidden(void){return test("%-3.s", s_hidden);}
int s_prec_0_lj_width_8_s_hidden(void){return test("%-8.s", s_hidden);}
int s_prec_0_lj_width_3_s_null(void){return test("%-3.s", NULL);}
int s_prec_0_lj_width_8_s_null(void){return test("%-8.s", NULL);}
int s_prec_0_lj_width_1_s_nullchar(void){return test("%-1.s", "\0");}
int s_prec_0_lj_width_2_s_nullchar(void){return test("%-2.s", "\0");}
int s_prec_0_lj_width_6_s_nullchar(void){return test("%-6.s", "\0");}
// width  precision 1
int s_prec_1_width_3_s_hidden(void){return test("%3.1s", s_hidden);}
int s_prec_1_width_10_s_hidden(void){return test("%10.1s", s_hidden);}
int s_prec_1_width_3_s_null(void){return test("%3.1s", NULL);}
int s_prec_1_width_9_s_null(void){return test("%9.1s", NULL);}
// lj flag width  precision 1
int s_prec_1_lj_width_3_s_hidden(void){return test("%-3.1s", s_hidden);}
int s_prec_1_lj_width_10_s_hidden(void){return test("%-10.1s", s_hidden);}
int s_prec_1_lj_width_3_s_null(void){return test("%-3.1s", NULL);}
int s_prec_1_lj_width_9_s_null(void){return test("%-9.1s", NULL);}
int s_prec_1_lj_width_3_s_nullchar(void){return test("%-3.1s", "\0");}
int s_prec_1_lj_width_6_s_nullchar(void){return test("%-6.1s", "\0");}
// width  exact precision
int s_prec_perfect_width_3_s_hidden(void){return test("%3.6s", s_hidden);}
int s_prec_perfect_width_20_s_hidden(void){return test("%20.6s", s_hidden);}
int s_prec_perfect_width_3_s_null(void){return test("%3.6s", NULL);}
int s_prec_perfect_width_20_s_null(void){return test("%20.6s", NULL);}
int s_prec_perfect_width_3_s_nullchar(void){return test("%3.6s", "\0");}
int s_prec_perfect_width_6_s_nullchar(void){return test("%6.6s", "\0");}
// lj flag width exact precision
int s_prec_perfect_lj_width_3_s_hidden(void){return test("%-3.6s", s_hidden);}
int s_prec_perfect_lj_width_20_s_hidden(void){return test("%-20.6s", s_hidden);}
// lj flag width excess precision
int s_prec_8_lj_width_3_s_hidden(void){return test("%-3.8s", s_hidden);}
int s_prec_8_lj_width_10_s_hidden(void){return test("%-10.8s", s_hidden);}
int s_prec_8_lj_width_3_s_null(void){return test("%-3.8s", NULL);}
int s_prec_8_lj_width_10_s_null(void){return test("%-10.8s", NULL);}
// decoy lj flag
int s_prec_00_lj_s_hidden_trunc(void){return test("%-.00s", s_hidden);}
int s_prec_09_lj_s_hidden_notrunc(void){return test("%-.09s", s_hidden);}
// multiple flags diff order same width and precision
int notrequired_s_undefbehav_4_flags_diff_order_1(void){return test("%+- 06.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_2(void){return test("% 0+-6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_3(void){return test("%0 +-6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_4(void){return test("%+-0 6.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_5(void){return test("%-+ 06.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_diff_order_6(void){return test("% -+06.06s", s_hidden);}
// multiple flags diff order width > precision
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_1(void){return test("%+- 07.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_2(void){return test("% 0+-8.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_3(void){return test("%0 +-9.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_4(void){return test("%+-0 10.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_5(void){return test("%-+ 011.06s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_padded_diff_order_6(void){return test("% -+012.06s", s_hidden);}
// multiple flags diff order width > precision, truncated string
int notrequired_s_undefbehav_4_flags_as_lj_sp_zero_trunc(void){return test("%+- 06.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_as_lj_trunc(void){return test("% 0+-6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_zero_sp_as_lj_trunc(void){return test("%0 +-6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_as_lj_zero_sp_trunc(void){return test("%+-0 6.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_lj_as_sp_zero_trunc(void){return test("%-+ 06.04s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_lj_as_trunc(void){return test("% 0-+6.04s", s_hidden);}
// multiple flags diff order width < precision, excess precision
int notrequired_s_undefbehav_4_flags_as_lj_sp_zero__pads(void){return test("%+- 06.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_as_lj__pads(void){return test("% 0+-6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_zero_sp_as_lj__pads(void){return test("%0 +-6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_as_lj_zero_sp__pads(void){return test("%+-0 6.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_lj_as_sp_zero__pads(void){return test("%-+ 06.09s", s_hidden);}
int notrequired_s_undefbehav_4_flags_sp_zero_lj_as__pads(void){return test("% 0-+6.09s", s_hidden);}
// multi zeros
int notrequired_s_undefbehav_0_2zero(void){return test("%00s", s_hidden);}
int notrequired_s_undefbehav_0_3zero(void){return test("%000s", s_hidden);}
int notrequired_s_undefbehav_0_4zero(void){return test("%0000s", s_hidden);}
int notrequired_s_undefbehav_0_lj_2zero(void){return test("%-00s", s_hidden);}
int notrequired_s_undefbehav_0_zero_lj_zero(void){return test("%0-0s", s_hidden);}
int notrequired_s_undefbehav_0_2zero_lj(void){return test("%00-s", s_hidden);}
// zero and width
int notrequired_s_undefbehav_0_width_3(void){return test("%03s", s_hidden);}
int notrequired_s_undefbehav_0_width_9(void){return test("%09s", s_hidden);}
// as and zero flags  width
int notrequired_s_undefbehav_as_0_width_3(void){return test("%+03s", s_hidden);}
int notrequired_s_undefbehav_as_0_width_9(void){return test("%+09s", s_hidden);}
// flag cancelling
int notrequired_s_undefbehav_lj_0_width_3(void){return test("%-03s", s_hidden);}
int notrequired_s_undefbehav_lj_0_width_9(void){return test("%-09s", s_hidden);}
int notrequired_s_undefbehav_as_sp_width_3(void){return test("%+ 3s", s_hidden);}
int notrequired_s_undefbehav_as_sp_width_6(void){return test("%+ 6s", s_hidden);}


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

int p_null(void){return test("%p", NULL);}

int notrequired_p_ftfc_literal_9w_prec2_undefbehav(void){return test("%9.2p\n", 1234);}
int notrequired_p_ftfc_literal_2w_prec9_undefbehav(void){return test("%2.9p\n", 1234);}
int notrequired_p_ftfc_zero_prec5_undefbehav(void){return test("%.5p", 0);}
int notrequired_p_ftfc_zero_prec0_undefbehav(void){return test("%.0p", 0);}
int p_ftfc_5w_throwswarning(void){return test("%5p", 0);}

int p_basic(void){return test("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_fit(void){return test("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_nofit(void){return test("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_16(void){return test("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_8(void){return test("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_32(void){return test("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_fit_lj(void){return test("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_nofit_lj(void){return test("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_16_lj(void){return test("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_8_lj(void){return test("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

int p_width_32_lj(void){return test("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


/* -----------------------------------------------------------------------------
** 						%d INTEGER TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Signed integers - no modifers
int d_basic_pos(void){return test("this %d number", 17);}
int d_basic_neg(void){return test("this %d number", -267);}
int d_basic_zero(void){return test("this %d number", 0);}
int d_basic_onlypos(void){return test("%d", 3);}
int d_basic_onlyneg(void){return test("%d", -1);}
int d_basic_onlyzero(void){return test("%d", 0);}
int d_intmax(void){return test("%d",  2147483647);}
int d_intmin(void){return test("%d", (int)(-2147483678));}
//Signed integers with field width
int d_width_pos_fits(void){return test("%7d", 33);}
int d_width_neg_fits(void){return test("%7d", -14);}
int d_width_zero_fits(void){return test("%3d", 0);}
int d_width_pos_exactfit(void){return test("%5d", 52625);}
int d_width_neg_exactfit(void){return test("%5d", -2562);}
int d_width_pos_nofit(void){return test("%4d", 94827);}
int d_width_neg_nofit(void){return test("%4d", -2464);}
int d_width_pos_fits_lj(void){return test("%-7d", 33);}
int d_width_neg_fits_lj(void){return test("%-7d", -14);}
int d_width_zero_fits_lj(void){return test("%-3d", 0);}
int d_width_pos_exactfit_lj(void){return test("%-5d", 52625);}
int d_width_neg_exactfit_lj(void){return test("%-5d", -2562);}
int d_width_pos_nofit_lj(void){return test("%-4d", 94827);}
int d_width_neg_nofit_lj(void){return test("%-4d", -2464);}
//signed integers with precision
int d_prec_fits_pos(void){return test("%.5d", 2);}
int d_prec_fits_neg(void){return test("%.6d", -3);}
int d_prec_fits_zero(void){return test("%.3d", 0);}
int d_prec_exactfit_pos(void){return test("%.4d", 5263);}
int d_prec_exactfit_neg(void){return test("%.4d", -2372);}
int d_prec_nofit_pos(void){return test("%.3d", 13862);}
int d_prec_nofit_neg(void){return test("%.3d",-23646);}
//Signed integers with zero field width padding
int d_zp_pos_fits(void){return test("%05d", 43);}
int d_zp_neg_fits(void){return test("%07d", -54);}
int d_zp_zero_fits(void){return test("%03d", 0);}
int d_zp_pos_exactfit(void){return test("%03d", 634);}
int d_zp_neg_exactfit(void){return test("%04d", -532);}
int d_zp_neg_minus1fit(void){return test("%04d", -4825);}
//Signed integers with field width and precision
int d_prec_width_fit_fit_pos(void){return test("%8.5d", 34);}
int d_prec_width_fit_fit_neg(void){return test("%10.5d", -216);}
int d_prec_width_fit_fit_zero(void){return test("%8.5d", 0);}
int d_prec_width_nofit_fit_pos(void){return test("%8.3d", 8375);}
int d_prec_width_nofit_fit_neg(void){return test("%8.3d", -8473);}
int d_prec_width_fit_nofit_pos(void){return test("%3.7d", 3267);}
int d_prec_width_fit_nofit_neg(void){return test("%3.7d", -2375);}
int d_prec_width_nofit_nofit_pos(void){return test("%3.3d", 6983);}
int d_prec_width_nofit_nofit_neg(void){return test("%3.3d", -8462);}
//Signed integers with field width and precision, left-justified
int d_prec_width_fit_fit_pos_lj(void){return test("%-8.5d", 34);}
int d_prec_width_fit_fit_neg_lj(void){return test("%-10.5d", -216);}
int d_prec_width_fit_fit_zero_lj(void){return test("%-8.5d", 0);}
int d_prec_width_nofit_fit_pos_lj(void){return test("%-8.3d", 8375);}
int d_prec_width_nofit_fit_neg_lj(void){return test("%-8.3d", -8473);}
int d_prec_width_fit_nofit_pos_lj(void){return test("%-3.7d", 3267);}
int d_prec_width_fit_nofit_neg_lj(void){return test("%-3.7d", -2375);}
int d_prec_width_nofit_nofit_pos_lj(void){return test("%-3.3d", 6983);}
int d_prec_width_nofit_nofit_neg_lj(void){return test("%-3.3d", -8462);}
//Signed integers with field width and precision with zeropadding
int d_prec_width_ff_pos_zp(void){return test("%08.5d", 34);}
int d_prec_width_ff_neg_zp(void){return test("%010.5d", -216);}
int d_prec_width_ff_zero_zp(void){return test("%08.5d", 0);}
int d_prec_width_nf_pos_zp(void){return test("%08.3d", 8375);}
int d_prec_width_nf_neg_zp(void){return test("%08.3d", -8473);}
int d_prec_width_fn_pos_zp(void){return test("%03.7d", 3267);}
int d_prec_width_fn_neg_zp(void){return test("%03.7d", -2375);}
int d_prec_width_nn_pos_zp(void){return test("%03.3d", 6983);}
int d_prec_width_nn_neg_zp(void){return test("%03.3d", -8462);}
//Signed integers with field width and precision, left-justified with zeropadding
int d_prec_width_ff_pos_lj_zp_ignoreflag(void){return test("%0-8.5d", 34);}
int d_prec_width_ff_neg_ljzp_ignoreflag(void){return test("%0-10.5d", -216);}
int d_prec_width_ff_zero_ljzp_ignoreflag(void){return test("%0-8.5d", 0);}
int d_prec_width_nf_pos_ljzp_ignoreflag(void){return test("%0-8.3d", 8375);}
int d_prec_width_nf_neg_ljzp_ignoreflag(void){return test("%0-8.3d", -8473);}
int d_prec_width_fn_pos_ljzp_ignoreflag(void){return test("%0-3.7d", 3267);}
int d_prec_width_fn_neg_ljzp_ignoreflag(void){return test("%0-3.7d", -2375);}
int d_prec_width_nn_pos_ljzp_ignoreflag(void){return test("%0-3.3d", 6983);}
int d_prec_width_nn_neg_ljzp_ignoreflag(void){return test("%0-3.3d", -8462);}
//Signed integers - zero precision zero value
int d_prec0val0_basic(void){return test("%.0d", 0);}
int d_prec0val0_implicit(void){return test("%.d", 0);}
int d_prec0val0_w(void){return test("%5.0d", 0);}
int d_prec0val0_w_impl(void){return test("%5.d", 0);}
int d_prec0val0_wlj(void){return test("%-5.0d", 0);}
int d_prec0val0_wlj_impl(void){return test("%-5.d", 0);}


/* -----------------------------------------------------------------------------
** 						%i INTEGER TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Signed integers - no modifers
int i_basic_pos(void){return test("this %i number", 17);}
int i_basic_neg(void){return test("this %i number", -267);}
int i_basic_zero(void){return test("this %i number", 0);}
int i_basic_onlypos(void){return test("%i", 3);}
int i_basic_onlyneg(void){return test("%i", -1);}
int i_basic_onlyzero(void){return test("%i", 0);}
int i_intmax(void){return test("%i",  2147483647);}
int i_intmin(void){return test("%i", (int)(-2147483678));}
//Signed integers  field width
int i_width_pos_fits(void){return test("%7i", 33);}
int i_width_neg_fits(void){return test("%7i", -14);}
int i_width_zero_fits(void){return test("%3i", 0);}
int i_width_pos_exactfit(void){return test("%5i", 52625);}
int i_width_neg_exactfit(void){return test("%5i", -2562);}
int i_width_pos_nofit(void){return test("%4i", 94827);}
int i_width_neg_nofit(void){return test("%4i", -2464);}
int i_width_pos_fits_lj(void){return test("%-7i", 33);}
int i_width_neg_fits_lj(void){return test("%-7i", -14);}
int i_width_zero_fits_lj(void){return test("%-3i", 0);}
int i_width_pos_exactfit_lj(void){return test("%-5i", 52625);}
int i_width_neg_exactfit_lj(void){return test("%-5i", -2562);}
int i_width_pos_nofit_lj(void){return test("%-4i", 94827);}
int i_width_neg_nofit_lj(void){return test("%-4i", -2464);}
//signed integers with precision
int i_prec_fits_pos(void){return test("%.5i", 2);}
int i_prec_fits_neg(void){return test("%.6i", -3);}
int i_prec_fits_zero(void){return test("%.3i", 0);}
int i_prec_exactfit_pos(void){return test("%.4i", 5263);}
int i_prec_exactfit_neg(void){return test("%.4i", -2372);}
int i_prec_nofit_pos(void){return test("%.3i", 13862);}
int i_prec_nofit_neg(void){return test("%.3i",-23646);}
//Signed integers with zero field width padding
int i_zp_pos_fits(void){return test("%05i", 43);}
int i_zp_neg_fits(void){return test("%07i", -54);}
int i_zp_zero_fits(void){return test("%03i", 0);}
int i_zp_pos_exactfit(void){return test("%03i", 634);}
int i_zp_neg_exactfit(void){return test("%04i", -532);}
int i_zp_neg_minus1fit(void){return test("%04i", -4825);}
//Signed integers with field width and precision
int i_prec_width_fit_fit_pos(void){return test("%8.5i", 34);}
int i_prec_width_fit_fit_neg(void){return test("%10.5i", -216);}
int i_prec_width_fit_fit_zero(void){return test("%8.5i", 0);}
int i_prec_width_nofit_fit_pos(void){return test("%8.3i", 8375);}
int i_prec_width_nofit_fit_neg(void){return test("%8.3i", -8473);}
int i_prec_width_fit_nofit_pos(void){return test("%3.7i", 3267);}
int i_prec_width_fit_nofit_neg(void){return test("%3.7i", -2375);}
int i_prec_width_nofit_nofit_pos(void){return test("%3.3i", 6983);}
int i_prec_width_nofit_nofit_neg(void){return test("%3.3i", -8462);}
//Signed integers with field width and precision, left-justified
int i_prec_width_fit_fit_pos_lj(void){return test("%-8.5i", 34);}
int i_prec_width_fit_fit_neg_lj(void){return test("%-10.5i", -216);}
int i_prec_width_fit_fit_zero_lj(void){return test("%-8.5i", 0);}
int i_prec_width_nofit_fit_pos_lj(void){return test("%-8.3i", 8375);}
int i_prec_width_nofit_fit_neg_lj(void){return test("%-8.3i", -8473);}
int i_prec_width_fit_nofit_pos_lj(void){return test("%-3.7i", 3267);}
int i_prec_width_fit_nofit_neg_lj(void){return test("%-3.7i", -2375);}
int i_prec_width_nofit_nofit_pos_lj(void){return test("%-3.3i", 6983);}
int i_prec_width_nofit_nofit_neg_lj(void){return test("%-3.3i", -8462);}
//Signed integers with field width and precision with zeropadding
int i_prec_width_ff_pos_zp(void){return test("%08.5i", 34);}
int i_prec_width_ff_neg_zp(void){return test("%010.5i", -216);}
int i_prec_width_ff_zero_zp(void){return test("%08.5i", 0);}
int i_prec_width_nf_pos_zp(void){return test("%08.3i", 8375);}
int i_prec_width_nf_neg_zp(void){return test("%08.3i", -8473);}
int i_prec_width_fn_pos_zp(void){return test("%03.7i", 3267);}
int i_prec_width_fn_neg_zp(void){return test("%03.7i", -2375);}
int i_prec_width_nn_pos_zp(void){return test("%03.3i", 6983);}
int i_prec_width_nn_neg_zp(void){return test("%03.3i", -8462);}
//Signed integers with field width and precision, left-justified with zeropadding
int i_prec_width_ff_pos_lj_zp_ignoreflag(void){return test("%0-8.5i", 34);}
int i_prec_width_ff_neg_ljzp_ignoreflag(void){return test("%0-10.5i", -216);}
int i_prec_width_ff_zero_ljzp_ignoreflag(void){return test("%0-8.5i", 0);}
int i_prec_width_nf_pos_ljzp_ignoreflag(void){return test("%0-8.3i", 8375);}
int i_prec_width_nf_neg_ljzp_ignoreflag(void){return test("%0-8.3i", -8473);}
int i_prec_width_fn_pos_ljzp_ignoreflag(void){return test("%0-3.7i", 3267);}
int i_prec_width_fn_neg_ljzp_ignoreflag(void){return test("%0-3.7i", -2375);}
int i_prec_width_nn_pos_ljzp_ignoreflag(void){return test("%0-3.3i", 6983);}
int i_prec_width_nn_neg_ljzp_ignoreflag(void){return test("%0-3.3i", -8462);}
//Signed integers - zero precision zero value
int i_prec0val0_basic(void){return test("%.0i", 0);}
int i_prec0val0_implicit(void){return test("%.i", 0);}
int i_prec0val0_w(void){return test("%5.0i", 0);}
int i_prec0val0_w_impl(void){return test("%5.i", 0);}
int i_prec0val0_wlj(void){return test("%-5.0i", 0);}
int i_prec0val0_wlj_impl(void){return test("%-5.i", 0);}


/* -----------------------------------------------------------------------------
** 						%u UNSIGNED INTEGERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Unsigned integers - no modifers
int u_basic_pos(void){return test("this %u number", 17);}
int u_basic_zero(void){return test("this %u number", 0);}
int u_basic_onlypos(void){return test("%u", 3);}
int u_uintmax(void){return test("%u", 4294967295u);}
//Unsigned integers with field width
int u_width_pos_fits(void){return test("%7u", 33);}
int u_width_zero_fits(void){return test("%3u", 0);}
int u_width_pos_exactfit(void){return test("%5u", 52625);}
int u_width_pos_nofit(void){return test("%4u", 94827);}
int u_width_pos_fits_lj(void){return test("%-7u", 33);}
int u_width_zero_fits_lj(void){return test("%-3u", 0);}
int u_width_pos_exactfit_lj(void){return test("%-5u", 52625);}
int u_width_pos_nofit_lj(void){return test("%-4u", 94827);}
//unsigned integers with precision
int u_prec_fits_pos(void){return test("%.5u", 2);}
int u_prec_fits_zero(void){return test("%.3u", 0);}
int u_prec_exactfit_pos(void){return test("%.4u", 5263);}
int u_prec_nofit_pos(void){return test("%.3u", 13862);}
//Unsigned integers with zero field width padding
int u_zp_pos_fits(void){return test("%05u", 43);}
int u_zp_zero_fits(void){return test("%03u", 0);}
int u_zp_pos_exactfit(void){return test("%03u", 634);}
//Unsigned integers with field width and precision
int u_prec_width_fit_fit_pos(void){return test("%8.5u", 34);}
int u_prec_width_fit_fit_zero(void){return test("%8.5u", 0);}
int u_prec_width_nofit_fit_pos(void){return test("%8.3u", 8375);}
int u_prec_width_fit_nofit_pos(void){return test("%3.7u", 3267);}
int u_prec_width_nofit_nofit_pos(void){return test("%3.3u", 6983);}
//Unsigned integers with field width and precision, left-justified
int u_prec_width_fit_fit_pos_lj(void){return test("%-8.5u", 34);}
int u_prec_width_fit_fit_zero_lj(void){return test("%-8.5u", 0);}
int u_prec_width_nofit_fit_pos_lj(void){return test("%-8.3u", 8375);}
int u_prec_width_fit_nofit_pos_lj(void){return test("%-3.7u", 3267);}
int u_prec_width_nofit_nofit_pos_lj(void){return test("%-3.3u", 6983);}
//Unsigned integers with field width and precision with zeropadding
int u_prec_width_ff_pos_zp(void){return test("%08.5u", 34);}
int u_prec_width_ff_zero_zp(void){return test("%08.5u", 0);}
int u_prec_width_nf_pos_zp(void){return test("%08.3u", 8375);}
int u_prec_width_fn_pos_zp(void){return test("%03.7u", 3267);}
int u_prec_width_nn_pos_zp(void){return test("%03.3u", 6983);}
//Unsigned integers with field width and precision, left-justified with zeropadding
int u_prec_width_ff_pos_ljzp_ignoreflag(void){return test("%0-8.5u", 34);}
int u_prec_width_ff_zero_ljzp_ignoreflag(void){return test("%0-8.5u", 0);}
int u_prec_width_nf_pos_ljzp_ignoreflag(void){return test("%0-8.3u", 8375);}
int u_prec_width_fn_pos_ljzp_ignoreflag(void){return test("%0-3.7u", 3267);}
int u_prec_width_nn_pos_ljzp_ignoreflag(void){return test("%0-3.3u", 6983);}
//Unsigned integers - zero precision zero value
int u_prec0val0_basic(void){return test("%.0u", 0);}
int u_prec0val0_implicit(void){return test("%.u", 0);}
int u_prec0val0_w(void){return test("%5.0u", 0);}
int u_prec0val0_w_impl(void){return test("%5.u", 0);}
int u_prec0val0_wlj(void){return test("%-5.0u", 0);}
int u_prec0val0_wlj_impl(void){return test("%-5.u", 0);}


/* -----------------------------------------------------------------------------
** 						%x HEXADECIMAL LOWERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Hexadecimal lowers - no modifers
int x_basic_pos(void){return test("this %x number", 17);}
int x_basic_zero(void){return test("this %x number", 0);}
int x_basic_onlypos(void){return test("%x", 3);}
int x_hexlmax(void){return test("%x", 4294967295u);}
//Hexadecimal lowers with field width
int x_width_pos_fits(void){return test("%7x", 33);}
int x_width_zero_fits(void){return test("%3x", 0);}
int x_width_pos_exactfit(void){return test("%5x", 52625);}
int x_width_pos_nofit(void){return test("%2x", 94827);}
int x_width_pos_fits_lj(void){return test("%-7x", 33);}
int x_width_zero_fits_lj(void){return test("%-3x", 0);}
int x_width_pos_exactfit_lj(void){return test("%-5x", 52625);}
int x_width_pos_nofit_lj(void){return test("%-4x", 9648627);}
//Hexadecimal lowers with precision
int x_prec_fits_pos(void){return test("%.5x", 21);}
int x_prec_fits_zero(void){return test("%.3x", 0);}
int x_prec_exactfit_pos(void){return test("%.4x", 5263);}
int x_prec_nofit_pos(void){return test("%.3x", 938862);}
//Hexadecimal lowers with zero field width padding
int x_zp_pos_fits(void){return test("%05x", 43);}
int x_zp_zero_fits(void){return test("%03x", 0);}
int x_zp_pos_exactfit(void){return test("%03x", 698334);}
//Hexadecimal lowers with field width and precision
int x_prec_width_fit_fit_pos(void){return test("%8.5x", 34);}
int x_prec_width_fit_fit_zero(void){return test("%8.5x", 0);}
int x_prec_width_nofit_fit_pos(void){return test("%8.3x", 8375);}
int x_prec_width_fit_nofit_pos(void){return test("%2.7x", 3267);}
int x_prec_width_nofit_nofit_pos(void){return test("%3.3x", 6983);}
//Hexadecimal lowers with field width and precision, left-justified
int x_prec_width_fit_fit_pos_lj(void){return test("%-8.5x", 34);}
int x_prec_width_fit_fit_zero_lj(void){return test("%-8.5x", 0);}
int x_prec_width_nofit_fit_pos_lj(void){return test("%-8.3x", 8375);}
int x_prec_width_fit_nofit_pos_lj(void){return test("%-2.7x", 3267);}
int x_prec_width_nofit_nofit_pos_lj(void){return test("%-3.3x", 6983);}
//Hexadecimal lowers with field width and precision with zeropadding
int x_prec_width_ff_pos_zp(void){return test("%08.5x", 34);}
int x_prec_width_ff_zero_zp(void){return test("%08.5x", 0);}
int x_prec_width_nf_pos_zp(void){return test("%08.3x", 8375);}
int x_prec_width_fn_pos_zp(void){return test("%02.7x", 3267);}
int x_prec_width_nn_pos_zp(void){return test("%03.3x", 6983);}
//Hexadecimal lowers with field width and precision, left-justified with zeropadding
int x_prec_width_ff_pos_ljzp_ignoreflag(void){return test("%0-8.5x", 34);}
int x_prec_width_ff_zero_ljzp_ignoreflag(void){return test("%0-8.5x", 0);}
int x_prec_width_nf_pos_ljzp_ignoreflag(void){return test("%0-8.3x", 8375);}
int x_prec_width_fn_pos_ljzp_ignoreflag(void){return test("%0-2.7x", 3267);}
int x_prec_width_nn_pos_ljzp_ignoreflag(void){return test("%0-3.3x", 6983);}
//Hexadecimal lower - zero precision zero value
int x_prec0val0_basic(void){return test("%.0x", 0);}
int x_prec0val0_implicit(void){return test("%.x", 0);}
int x_prec0val0_w(void){return test("%5.0x", 0);}
int x_prec0val0_w_impl(void){return test("%5.x", 0);}
int x_prec0val0_wlj(void){return test("%-5.0x", 0);}
int x_prec0val0_wlj_impl(void){return test("%-5.x", 0);}


/* -----------------------------------------------------------------------------
** 						%X HEXADECIMAL UPPERS TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Hexadecimal uppers - no modifers
int X_basic_hexu_pos(void){return test("this %X number", 17);}
int X_basic_hexu_zero(void){return test("this %X number", 0);}
int X_basic_hexu_onlypos(void){return test("%X", 3);}
int X_hexumax(void){return test("%X", 4294967295u);}
//Hexadecimal uppers with field width
int X_width_pos_fits(void){return test("%7X", 33);}
int X_width_zero_fits(void){return test("%3X", 0);}
int X_width_pos_exactfit(void){return test("%5X", 52625);}
int X_width_pos_nofit(void){return test("%2X", 94827);}
int X_width_pos_fits_lj(void){return test("%-7X", 33);}
int X_width_zero_fits_lj(void){return test("%-3X", 0);}
int X_width_pos_exactfit_lj(void){return test("%-5X", 52625);}
int X_width_pos_nofit_lj(void){return test("%-4X", 9648627);}
//Hexadecimal uppers with precision
int X_prec_fits_pos(void){return test("%.5X", 21);}
int X_prec_fits_zero(void){return test("%.3X", 0);}
int X_prec_exactfit_pos(void){return test("%.4X", 5263);}
int X_prec_nofit_pos(void){return test("%.3X", 938862);}
//Hexadecimal uppers with zero field width padding
int X_zp_pos_fits(void){return test("%05X", 43);}
int X_zp_zero_fits(void){return test("%03X", 0);}
int X_zp_pos_exactfit(void){return test("%03X", 698334);}
//Hexadecimal uppers with field width and precision
int X_prec_width_fit_fit_pos(void){return test("%8.5X", 34);}
int X_prec_width_fit_fit_zero(void){return test("%8.5X", 0);}
int X_prec_width_nofit_fit_pos(void){return test("%8.3X", 8375);}
int X_prec_width_fit_nofit_pos(void){return test("%2.7X", 3267);}
int X_prec_width_nofit_nofit_pos(void){return test("%3.3X", 6983);}
//Hexadecimal uppers with field width and precision, left-justified
int X_prec_width_fit_fit_pos_lj(void){return test("%-8.5X", 34);}
int X_prec_width_fit_fit_zero_lj(void){return test("%-8.5X", 0);}
int X_prec_width_nofit_fit_pos_lj(void){return test("%-8.3X", 8375);}
int X_prec_width_fit_nofit_pos_lj(void){return test("%-2.7X", 3267);}
int X_prec_width_nofit_nofit_pos_lj(void){return test("%-3.3X", 6983);}
//Hexadecimal uppers with field width and precision with zeropadding
int X_prec_width_ff_pos_zp(void){return test("%08.5X", 34);}
int X_prec_width_ff_zero_zp(void){return test("%08.5X", 0);}
int X_prec_width_nf_pos_zp(void){return test("%08.3X", 8375);}
int X_prec_width_fn_pos_zp(void){return test("%02.7X", 3267);}
int X_prec_width_nn_pos_zp(void){return test("%03.3X", 6983);}
//Hexadecimal uppers with field width and precision, left-justified with zeropadding
int X_prec_width_ff_pos_ljzp_ignoreflag(void){return test("%0-8.5X", 34);}
int X_prec_width_ff_zero_ljzp_ignoreflag(void){return test("%0-8.5X", 0);}
int X_prec_width_nf_pos_ljzp_ignoreflag(void){return test("%0-8.3X", 8375);}
int X_prec_width_fn_pos_ljzp_ignoreflag(void){return test("%0-2.7X", 3267);}
int X_prec_width_nn_pos_ljzp_ignoreflag(void){return test("%0-3.3X", 6983);}
//Hexadecimal uppers - zero precision zero value
int X_prec0val0_basic(void){return test("%.0X", 0);}
int X_prec0val0_implicit(void){return test("%.X", 0);}
int X_prec0val0_w(void){return test("%5.0X", 0);}
int X_prec0val0_w_impl(void){return test("%5.X", 0);}
int X_prec0val0_wlj(void){return test("%-5.0X", 0);}
int X_prec0val0_wlj_impl(void){return test("%-5.X", 0);}


/* -----------------------------------------------------------------------------
** 							STAR TESTS (MANDATORY)
** ---------------------------------------------------------------------------*/
//Taken from https://github.com/cclaude42/PFT_2019
int new2019_star_1(void){return test("%*s", 32, "abc");}
int new2019_star_2(void){return test("%-*s", 32, "abc");}
int new2019_star_3(void){return test("%*s", 3, "hello");}
int new2019_star_4(void){return test("%.*s", 3, "hello");}
int new2019_star_5(void){return test("%.*s", 0, "hello");}
int new2019_star_6(void){return test("%-*.*s", 7, 3, "yolo");}
int new2019_star_7(void){return test("%*i", 4, 94827);}
int new2019_star_8(void){return test("%*i", 14, 94827);}
int new2019_star_9(void){return test("%.*i", 6, -3);}
int new2019_star_10(void){return test("%0*i", 7, -54);}
int new2019_negstar_1(void){return test("%*s", -32, "abc");}
int new2019_negstar_2(void){return test("%-*s", -32, "abc");}
int new2019_negstar_3(void){return test("%*s", -3, "hello");}
int new2019_negstar_4(void){return test("%.*s", -3, "hello");}
int new2019_negstar_5(void){return test("%-*.*s", -7, -3, "yolo");}
int new2019_negstar_6(void){return test("%*i", -4, 94827);}
int new2019_negstar_7(void){return test("%*i", -14, 94827);}
int new2019_negstar_8(void){return test("%.*i", -6, -3);}
int new2019_negstar_9(void){return test("%0*i", -7, -54);}


/* -----------------------------------------------------------------------------
** 					NO CRASH / NO SEGFAULT TESTS (NOT REQUIRED)
** ---------------------------------------------------------------------------*/
//No-crash-no-segfault test
int nocrash_notrequired_noarg_1(void){return test("%1$"); }
int nocrash_notrequired_noarg_2(void){return test("%0"); }
int nocrash_notrequired_noarg_3(void){return test("% "); }
int nocrash_notrequired_noarg_5(void){return test("%-"); }
int nocrash_notrequired_noarg_6(void){return test("%+"); }
int nocrash_notrequired_noarg_9(void){return test("%23"); }
int nocrash_notrequired_noarg_10(void){return test("%."); }
int nocrash_notrequired_noarg_16(void){return test("%p"); }
int nocrash_notrequired_noarg_17(void){return test("%d"); }
int nocrash_notrequired_noarg_19(void){return test("%u"); }
int nocrash_notrequired_noarg_20(void){return test("%x"); }
int nocrash_notrequired_noarg_21(void){return test("%X"); }
int nocrash_notrequired_noarg_24(void){return test("%c"); }
int nocrash_notrequired_noarg_25(void){return test("%o"); }
int nocrash_notrequired_nullarg_2(void){return test("%0s", NULL); }
int nocrash_notrequired_nullarg_3(void){return test("% s", NULL); }
int nocrash_notrequired_nullarg_5(void){return test("%-s", NULL); }
int nocrash_notrequired_nullarg_6(void){return test("%+s", NULL); }
int nocrash_notrequired_nullarg_9(void){return test("%23s", NULL); }
int nocrash_notrequired_nullarg_10(void){return test("%.s", NULL); }
int nocrash_notrequired_nullarg_16(void){return test("%p", NULL); }
int nocrash_notrequired_nullarg_17(void){return test("%d", NULL); }
int nocrash_notrequired_nullarg_19(void){return test("%u", NULL); }
int nocrash_notrequired_nullarg_20(void){return test("%x", NULL); }
int nocrash_notrequired_nullarg_21(void){return test("%X", NULL); }
int nocrash_notrequired_nullarg_23(void){return test("%s", NULL); }
int nocrash_notrequired_nullarg_24(void){return test("%c", NULL); }
int nocrash_notrequired_nullarg_25(void){return test("%o", NULL); }
//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_dupflag_d_ljljw(void){return test("%--5d", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_c_prec_1(void){return test("%.4c", 'a');}
int nocrash_notrequired_c_prec_2(void){return test("%.c", 'a');}
int nocrash_notrequired_c_zp_1(void){return test("%05c", 'a');}
int nocrash_notrequired_c_zp_2(void){return test("%0c", 'a');}
int nocrash_notrequired_c_lj_nowidth(void){return test("%-c", 'a');}
int nocrash_notrequired_s_zp_1(void){return test("%05s", "hello");}
int nocrash_notrequired_s_zp_2(void){return test("%0s", "hello");}
int nocrash_notrequired_s_lj_nowidth(void){return test("%-s", "hello");}

static int ncm_p = 5;
int nocrash_notrequired_p_prec_1(void){return test("%.4p", &ncm_p);}
int nocrash_notrequired_p_prec_2(void){return test("%.p", &ncm_p);}
int nocrash_notrequired_p_zp_1(void){return test("%05p", &ncm_p);}
int nocrash_notrequired_p_zp_2(void){return test("%0p", &ncm_p);}
int nocrash_notrequired_p_lj_nowidth(void){return test("%-p", &ncm_p);}
int nocrash_notrequired_i_lj_nowidth(void){return test("%-i", 42);}
int nocrash_notrequired_u_lj_nowidth(void){return test("%-u", 42);}
int nocrash_notrequired_x_lj_nowidth(void){return test("%-x", 42);}
int nocrash_notrequired_f_lj_nowidth(void){return test("%-f", 42.5);}


/* -----------------------------------------------------------------------------
** 							MOULINETTE TESTS - MANDATORY
** ---------------------------------------------------------------------------*/

int moul_c_1(void){return test("%c", 42);}
int moul_c_2(void){return test("Kashim a %c histoires à raconter", 1001);}
int moul_c_3(void){return test("Il fait au moins %c\n", -8000);}
int moul_c_4(void){return test("%c", -0);}
int moul_c_5(void){return test("%c", 0);}
int moul_c_5b(void){return test("%c\n", INT_MAX);}
int moul_c_6(void){return test("%c\n", 'c');}
int moul_c_7(void){return test("%c\n", '\n');}
int moul_c_8(void){return test("%c", 'l');}
int moul_c_9(void){return test("%c", 'y');}
int moul_c_10(void){return test("%c", ' ');}
int moul_c_11(void){return test("%c", 'e');}
int moul_c_12(void){return test("%c", 's');}
int moul_c_13(void){return test("%c", 't');}
int moul_c_14(void){return test("%c", ' ');}
int moul_c_15(void){return test("%c", 'f');}
int moul_c_16(void){return test("%c", 'a');}
int moul_c_17(void){return test("%c", 'n');}
int moul_c_18(void){return test("%c", 't');}
int moul_c_19(void){return test("%c", 'a');}
int moul_c_20(void){return test("%c", 's');}
int moul_c_21(void){return test("%c", 't');}
int moul_c_22(void){return test("%c", 'i');}
int moul_c_23(void){return test("%c", 'q');}
int moul_c_24(void){return test("%c", 'u');}
int moul_c_25(void){return test("%c", 'e');}
int moul_c_26(void){return test("%c\n", '!');}
int moul_c_27(void){return test("%c\n", '\r');}
int moul_c_28(void){return test("%c\n", '\t');}

int moul_s_1(void){return test(" pouet %s !!", "camembert");}
int moul_s_2(void){return test("%s !", "Ceci n'est pas un \0 exercice !");}
int moul_s_3(void){return test("%s!", "Ceci n'est toujours pas un exercice !");}
int moul_s_4(void){char *str = NULL; return test("%s!", str);}

int moul_s_5_this_ones_a_doozy(void){return test("%s",
		"Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoirde2005,j'étaisinvitéàuneconférenceàLaSorbonnepourparlerdelachansonfrancaiseetdel'écrituredetexteavecpleinsd'autresgens.ParmilesstarsémergentesilyavaitOliviaRuizquietaitentraindedevenirunestaravecsachansonsurlechocolatàlacon.Brefjeelretrouvecoincélorsd'une\"atelierderéflexion\"entreOliviaetRichardCrossquicommençaitàêtrepasmalconnudanslemilieuencemomentàcausedequelquesémissionsdeteréalité.J'aibienrigoleavecOliviaRuizcesoirlà,jeluiparlaitdemonrêved'écritetunechansondepirate,elledelafaçonqu'elleavaitd'écriredeschansons\"commeellessortaient\"etdes'étonnerparfoisqued'autrestrouventcabien.Brefçac'étaitunechouettesoirée/nuitquis'estterminéeauxalentoursde7hdumatinenprenantuncaféauChaidel'AbbayeprèsdeMabillon.Avantqu'ellenedisparaissepourtoujoursdemonexistence.JesuissouventrepasséauChaitôtlematinenespérantlarevoirmaisniet.Rien.JusteChristineScottThomasaperçuunjeudimatinoùilfaisaitchaud.Etalafinilla*bip*");}

int moul_d_1(void){return test("%d", 42);}
int moul_d_2(void){return test("Kashim a %d histoires à raconter", 1001);}
int moul_d_3(void){return test("Il fait au moins %d\n", -8000);}
int moul_d_4(void){return test("%d", -0);}
int moul_d_5(void){return test("%d", 0);}
int moul_d_6(void){return test("%d", INT_MAX);}
int moul_d_7(void){return test("%d", INT_MIN);}
int moul_d_8(void){return test("%d", INT_MIN - 1);}
int moul_d_9(void){return test("%d", INT_MAX + 1);}
int moul_d_10(void){return test("%%d 0000042 == |%d|\n", 0000042);}
int moul_d_11(void){return test("%%d \t == |%d|\n", '\t');}
int moul_d_12(void){return test("%%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');}

int moul_mix_1(void){int r00 = 0; return test("Lalalala, %d%% des gens qui parlent à Ly adorent %s. Ou Presque. %p", 100, "Ly", &r00);}

int moul_i_1(void){return test("%i", 42);}
int moul_i_2(void){return test("Kashim a %i histoires à raconter", 1001);}
int moul_i_3(void){return test("Il fait au moins %i\n", -8000);}
int moul_i_4(void){return test("%i", -0);}
int moul_i_5(void){return test("%i", 0);}
int moul_i_6(void){return test("%i", INT_MAX);}
int moul_i_7(void){return test("%i", INT_MIN);}
int moul_i_8(void){return test("%i", INT_MIN - 1);}
int moul_i_9(void){return test("%i", INT_MAX + 1);}
int moul_i_10(void){return test("%%i 0000042 == |%i|\n", 0000042);}
int moul_i_11(void){return test("%%i \t == |%i|\n", '\t');}
int moul_i_12(void){return test("%%i Lydie == |%i|\n", 'L'+'y'+'d'+'i'+'e');}

int moul_u_1(void){return test("%u", 42);}
int moul_u_2(void){return test("Kashim a %u histoires à raconter", 1001);}
int moul_u_3(void){return test("Il fait au moins %u\n", -8000);}
int moul_u_4(void){return test("%u", -0);}
int moul_u_5(void){return test("%u", 0);}
int moul_u_6(void){return test("%u", INT_MAX);}
int moul_u_7(void){return test("%u", INT_MIN);}
int moul_u_8(void){return test("%u", INT_MIN - 1);}
int moul_u_9(void){return test("%u", INT_MAX + 1);}
int moul_u_10(void){return test("%%u 0000042 == |%u|\n", 0000042);}
int moul_u_11(void){return test("%%u \t == |%u|\n", '\t');}
int moul_u_12(void){return test("%%u Lydie == |%u|\n", 'L'+'y'+'d'+'i'+'e');}

int moul_x_1(void){return test("%x", 42);}
int moul_x_2(void){return test("Kashim a %x histoires à raconter", 1001);}
int moul_x_3(void){return test("Il fait au moins %x\n", -8000);}
int moul_x_4(void){return test("%x", -0);}
int moul_x_5(void){return test("%x", 0);}
int moul_x_6(void){return test("%x", INT_MAX);}
int moul_x_7(void){return test("%x", INT_MIN);}
int moul_x_8(void){return test("%x", INT_MIN - 1);}
int moul_x_9(void){return test("%x", INT_MAX + 1);}
int moul_x_10(void){return test("%%x 0000042 == |%x|\n", 0000042);}
int moul_x_11(void){return test("%%x \t == |%x|\n", '\t');}
int moul_x_12(void){return test("%%x Lydie == |%x|\n", 'L'+'y'+'d'+'i'+'e');}

int moul_prec_1(void){return test("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");}
int moul_prec_3(void){return test("%%04.5i 42 == |%04.5i|\n", 42);}
int moul_prec_4(void){return test("%%04.3i 42 == |%04.3i|\n", 42);}
int moul_prec_5(void){return test("%%04.2i 42 == |%04.2i|\n", 42);}

int moul_zeropad_1(void){return test("%%04i 42 == |%04i|\n", 42);}
int moul_zeropad_2(void){return test("%%05i 42 == |%05i|\n", 42);}
int moul_zeropad_3(void){return test("%%0i 42 == |%0i|\n", 42);}
int moul_zeropad_4(void){return test("%%0d 0000042 == |%0d|\n", 0000042);}

int moul_leftjusty_1(void){return test("%%-i 42 == %-i\n", 42);}
int moul_leftjusty_2(void){return test("%%-d 42 == %-d\n", INT_MIN);}
int moul_leftjusty_3(void){return test("%%-i -42 == %-i\n", -42);}
int moul_leftjusty_4(void){return test("%%-4d 42 == |%-4d|\n", 42);}
int moul_leftjusty_5(void){return test("%%-5d -42 == |%-5d|\n", -42);}
int moul_leftjusty_6(void){return test("|%3i|%-3i|\n", 42, 42);}
int moul_leftjusty_7(void){return test("%%-4i 42 == |%-4i|\n", 42);}

int moul_star_1(void){return test("%%-*.3s LYDI == |%-*.3s|\n", 5, "LYDI");}
int moul_star_2(void){return test("%% *.5i 42 == |% *.5i|\n", 4, 42);}
int moul_star_3(void){return test("%%*i 42 == |%*i|\n", 5, 42);}
int moul_star_4(void){return test("%%*i 42 == |%*i|\n", 3, 42);}
int moul_star_5(void){return test("%%*i 42 == |%*i|\n", 2, 42);}



/* -----------------------------------------------------------------------------
** 						'+' FLAG (ALLSIGN) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Signed integers with allsign ('+')
int bonus_as_d_pos(void){return test("%+d", 5);}
int bonus_as_d_neg(void){return test("%+d", -7);}
int bonus_as_d_intmax(void){return test("%+d", 2147483647);}
int bonus_as_d_prec_pos(void){return test("%+.7d", 234);}
int bonus_as_d_prec_neg(void){return test("%+.7d", -446);}
int bonus_as_d_prec_pos_nofit(void){return test("%+.3d", 3723);}
int bonus_as_d_width_pos(void){return test("%+5d", 35);}
int bonus_as_d_width_zero(void){return test("%+7d", 0);}
int bonus_as_d_width_intmax(void){return test("%+24d", 2147483647);}
int bonus_as_d_zp_fits(void){return test("%+05d", 432);}
int bonus_as_d_zp_zero(void){return test("%+04d", 0);}
//Signed integers with field width and precision with allsign
int bonus_as_d_prec0val0(void){return test("%+.0d", 0);}
int bonus_as_d_prec0val0_impl(void){return test("%+.d", 0);}
int bonus_as_d_prec_width_fit_fit_pos(void){return test("%+8.5d", 34);}
int bonus_as_d_prec_width_fit_fit_neg(void){return test("%+10.5d", -216);}
int bonus_as_d_prec_width_fit_fit_zero(void){return test("%+8.5d", 0);}
int bonus_as_d_prec_width_nofit_fit_pos(void){return test("%+8.3d", 8375);}
int bonus_as_d_prec_width_nofit_fit_neg(void){return test("%+8.3d", -8473);}
int bonus_as_d_prec_width_fit_nofit_pos(void){return test("%+3.7d", 3267);}
int bonus_as_d_prec_width_fit_nofit_neg(void){return test("%+3.7d", -2375);}
int bonus_as_d_prec_width_nofit_nofit_pos(void){return test("%+3.3d", 6983);}
int bonus_as_d_prec_width_nofit_nofit_neg(void){return test("%+3.3d", -8462);}
//Signed integers with field width and precision, left-justified with allsign
int bonus_as_d_prec_width_fit_fit_pos_ljas(void){return test("%+-8.5d", 34);}
int bonus_as_d_prec_width_fit_fit_neg_ljas(void){return test("%+-10.5d", -216);}
int bonus_as_d_prec_width_fit_fit_zero_ljas(void){return test("%+-8.5d", 0);}
int bonus_as_d_prec_width_nofit_fit_pos_ljas(void){return test("%+-8.3d", 8375);}
int bonus_as_d_prec_width_nofit_fit_neg_ljas(void){return test("%+-8.3d", -8473);}
int bonus_as_d_prec_width_fit_nofit_pos_ljas(void){return test("%+-3.7d", 3267);}
int bonus_as_d_prec_width_fit_nofit_neg_ljas(void){return test("%+-3.7d", -2375);}
int bonus_as_d_prec_width_nofit_nofit_pos_ljas(void){return test("%+-3.3d", 6983);}
int bonus_as_d_prec_width_nofit_nofit_neg_ljas(void){return test("%+-3.3d", -8462);}
//Signed integers with field width and precision with allsign with zeropadding
int bonus_as_d_prec_width_ff_pos_zp(void){return test("%0+8.5d", 34);}
int bonus_as_d_prec_width_ff_neg_zp(void){return test("%0+10.5d", -216);}
int bonus_as_d_prec_width_ff_zero_zp(void){return test("%0+8.5d", 0);}
int bonus_as_d_prec_width_nf_pos_zp(void){return test("%0+8.3d", 8375);}
int bonus_as_d_prec_width_nf_neg_zp(void){return test("%0+8.3d", -8473);}
int bonus_as_d_prec_width_fn_pos_zp(void){return test("%0+3.7d", 3267);}
int bonus_as_d_prec_width_fn_neg_zp(void){return test("%0+3.7d", -2375);}
int bonus_as_d_prec_width_nn_pos_zp(void){return test("%0+3.3d", 6983);}
int bonus_as_d_prec_width_nn_neg_zp(void){return test("%0+3.3d", -8462);}
//Signed integers with field width and precision, left-justified with allsign with zeropadding
int bonus_as_d_prec_width_ff_pos_ljaszp_ignoreflag(void){return test("%0+-8.5d", 34);}
int bonus_as_d_prec_width_ff_neg_ljaszp_ignoreflag(void){return test("%0+-10.5d", -216);}
int bonus_as_d_prec_width_ff_zero_ljaszp_ignoreflag(void){return test("%0+-8.5d", 0);}
int bonus_as_d_prec_width_nf_pos_ljaszp_ignoreflag(void){return test("%0+-8.3d", 8375);}
int bonus_as_d_prec_width_nf_neg_ljaszp_ignoreflag(void){return test("%0+-8.3d", -8473);}
int bonus_as_d_prec_width_fn_pos_ljaszp_ignoreflag(void){return test("%0+-3.7d", 3267);}
int bonus_as_d_prec_width_fn_neg_ljaszp_ignoreflag(void){return test("%0+-3.7d", -2375);}
int bonus_as_d_prec_width_nn_pos_ljaszp_ignoreflag(void){return test("%0+-3.3d", 6983);}
int bonus_as_d_prec_width_nn_neg_ljaszp_ignoreflag(void){return test("%0+-3.3d", -8462);}

//Signed integers  allsign ('+')
int bonus_as_i_pos(void){return test("%+i", 5);}
int bonus_as_i_neg(void){return test("%+i", -7);}
int bonus_as_i_intmax(void){return test("%+i", 2147483647);}
int bonus_as_i_zp_fits(void){return test("%+05i", 432);}
int bonus_as_i_zp_zero(void){return test("%+04i", 0);}
//signed integers  field width and allsign
int bonus_as_i_width_pos(void){return test("%+5i", 35);}
int bonus_as_i_width_zero(void){return test("%+7i", 0);}
int bonus_as_i_width_intmax(void){return test("%+24i", 2147483647);}
//signed integers with precision
int bonus_as_i_prec_pos(void){return test("%+.7i", 234);}
int bonus_as_i_prec_neg(void){return test("%+.7i", -446);}
int bonus_as_i_prec_pos_nofit(void){return test("%+.3i", 3723);}
int bonus_as_i_prec0val0(void){return test("%+.0i", 0);}
int bonus_as_i_prec0val0_impl(void){return test("%+.i", 0);}
int bonus_as_i_prec0val0_was(void){return test("%+5.0i", 0);}
int bonus_as_i_prec0val0_was_impl(void){return test("%+5.i", 0);}
int bonus_as_i_prec0val0_waslj(void){return test("%+-5.0i", 0);}
int bonus_as_i_prec0val0_waslj_impl(void){return test("%+-5.i", 0);}
//Signed integers with field width and precision with allsign
int bonus_as_i_prec_width_fit_fit_pos(void){return test("%+8.5i", 34);}
int bonus_as_i_prec_width_fit_fit_neg(void){return test("%+10.5i", -216);}
int bonus_as_i_prec_width_fit_fit_zero(void){return test("%+8.5i", 0);}
int bonus_as_i_prec_width_nofit_fit_pos(void){return test("%+8.3i", 8375);}
int bonus_as_i_prec_width_nofit_fit_neg(void){return test("%+8.3i", -8473);}
int bonus_as_i_prec_width_fit_nofit_pos(void){return test("%+3.7i", 3267);}
int bonus_as_i_prec_width_fit_nofit_neg(void){return test("%+3.7i", -2375);}
int bonus_as_i_prec_width_nofit_nofit_pos(void){return test("%+3.3i", 6983);}
int bonus_as_i_prec_width_nofit_nofit_neg(void){return test("%+3.3i", -8462);}
//Signed integers with field width and precision with allsign with zeropadding
int bonus_as_i_prec_width_ff_pos_zp(void){return test("%0+8.5i", 34);}
int bonus_as_i_prec_width_ff_neg_zp(void){return test("%0+10.5i", -216);}
int bonus_as_i_prec_width_ff_zero_zp(void){return test("%0+8.5i", 0);}
int bonus_as_i_prec_width_nf_pos_zp(void){return test("%0+8.3i", 8375);}
int bonus_as_i_prec_width_nf_neg_zp(void){return test("%0+8.3i", -8473);}
int bonus_as_i_prec_width_fn_pos_zp(void){return test("%0+3.7i", 3267);}
int bonus_as_i_prec_width_fn_neg_zp(void){return test("%0+3.7i", -2375);}
int bonus_as_i_prec_width_nn_pos_zp(void){return test("%0+3.3i", 6983);}
int bonus_as_i_prec_width_nn_neg_zp(void){return test("%0+3.3i", -8462);}
//Signed integers with field width and precision, left-justified with allsign
int bonus_as_i_prec_width_fit_fit_pos_ljas(void){return test("%+-8.5i", 34);}
int bonus_as_i_prec_width_fit_fit_neg_ljas(void){return test("%+-10.5i", -216);}
int bonus_as_i_prec_width_fit_fit_zero_ljas(void){return test("%+-8.5i", 0);}
int bonus_as_i_prec_width_nofit_fit_pos_ljas(void){return test("%+-8.3i", 8375);}
int bonus_as_i_prec_width_nofit_fit_neg_ljas(void){return test("%+-8.3i", -8473);}
int bonus_as_i_prec_width_fit_nofit_pos_ljas(void){return test("%+-3.7i", 3267);}
int bonus_as_i_prec_width_fit_nofit_neg_ljas(void){return test("%+-3.7i", -2375);}
int bonus_as_i_prec_width_nofit_nofit_pos_ljas(void){return test("%+-3.3i", 6983);}
int bonus_as_i_prec_width_nofit_nofit_neg_ljas(void){return test("%+-3.3i", -8462);}
//Signed integers with field width and precision, left-justified with allsign with zeropadding
int bonus_as_i_prec_width_ff_pos_ljaszp_ignoreflag(void){return test("%0+-8.5i", 34);}
int bonus_as_i_prec_width_ff_neg_ljaszp_ignoreflag(void){return test("%0+-10.5i", -216);}
int bonus_as_i_prec_width_ff_zero_ljaszp_ignoreflag(void){return test("%0+-8.5i", 0);}
int bonus_as_i_prec_width_nf_pos_ljaszp_ignoreflag(void){return test("%0+-8.3i", 8375);}
int bonus_as_i_prec_width_nf_neg_ljaszp_ignoreflag(void){return test("%0+-8.3i", -8473);}
int bonus_as_i_prec_width_fn_pos_ljaszp_ignoreflag(void){return test("%0+-3.7i", 3267);}
int bonus_as_i_prec_width_fn_neg_ljaszp_ignoreflag(void){return test("%0+-3.7i", -2375);}
int bonus_as_i_prec_width_nn_pos_ljaszp_ignoreflag(void){return test("%0+-3.3i", 6983);}
int bonus_as_i_prec_width_nn_neg_ljaszp_ignoreflag(void){return test("%0+-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_as_dupflag_d(void){return test("%++d", 42);}
int nocrash_notrequired_bonus_as_dupflag_d_ljasljw(void){return test("%-+-5d", 42);}
int nocrash_notrequired_bonus_as_c_1(void){return test("%+c", 'a');}
int nocrash_notrequired_bonus_as_c_2(void){return test("%+c", -42);}
int nocrash_notrequired_bonus_as_s_1(void){return test("%+s", "hello");}
int nocrash_notrequired_bonus_as_p_1(void){return test("%+p", &ncm_p);}
int nocrash_notrequired_bonus_as_p_2(void){return test("%+p", &ncm_p);}
int nocrash_notrequired_bonus_as_u(void){return test("%+u", 42);}
int nocrash_notrequired_bonus_as_x(void){return test("%+x", 42);}
int nocrash_notrequired_bonus_as_X(void){return test("%+X", 42);}


/* -----------------------------------------------------------------------------
** 						' ' FLAG (SPACE) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Signed integers - space - no modifers
int bonus_sp_d_basic_i_pos(void){return test("this % d number", 17);}
int bonus_sp_d_basic_i_neg(void){return test("this % d number", -267);}
int bonus_sp_d_basic_i_zero(void){return test("this % d number", 0);}
int bonus_sp_d_basic_i_onlypos(void){return test("% d", 3);}
int bonus_sp_d_basic_i_onlyneg(void){return test("% d", -1);}
int bonus_sp_d_basic_i_onlyzero(void){return test("% d", 0);}
int bonus_sp_d_basic_i_pos_d(void){return test("this % d number", 17);}
int bonus_sp_d_basic_i_neg_d(void){return test("this % d number", -267);}
int bonus_sp_d_basic_i_zero_d(void){return test("this % d number", 0);}
int bonus_sp_d_intmax(void){return test("% d", 2147483647);}
int bonus_sp_d_intmin(void){return test("% d", (int)(-2147483678));}
//Signed integers - space with field width
int bonus_sp_d_width_pos_fits(void){return test("% 7d", 33);}
int bonus_sp_d_width_neg_fits(void){return test("% 7d", -14);}
int bonus_sp_d_width_zero_fits(void){return test("% 3d", 0);}
int bonus_sp_d_width_pos_exactfit(void){return test("% 5d", 52625);}
int bonus_sp_d_width_neg_exactfit(void){return test("% 5d", -2562);}
int bonus_sp_d_width_pos_nofit(void){return test("% 4d", 94827);}
int bonus_sp_d_width_neg_nofit(void){return test("% 4d", -2464);}
int bonus_sp_d_width_pos_fits_lj(void){return test("% -7d", 33);}
int bonus_sp_d_width_neg_fits_lj(void){return test("% -7d", -14);}
int bonus_sp_d_width_zero_fits_lj(void){return test("% -3d", 0);}
int bonus_sp_d_width_pos_exactfit_lj(void){return test("% -5d", 52625);}
int bonus_sp_d_width_neg_exactfit_lj(void){return test("% -5d", -2562);}
int bonus_sp_d_width_pos_nofit_lj(void){return test("% -4d", 94827);}
int bonus_sp_d_width_neg_nofit_lj(void){return test("% -4d", -2464);}
//signed integers with precision
int bonus_sp_d_prec_fits_pos(void){return test("% .5d", 2);}
int bonus_sp_d_prec_fits_neg(void){return test("% .6d", -3);}
int bonus_sp_d_prec_fits_zero(void){return test("% .3d", 0);}
int bonus_sp_d_prec_exactfit_pos(void){return test("% .4d", 5263);}
int bonus_sp_d_prec_exactfit_neg(void){return test("% .4d", -2372);}
int bonus_sp_d_prec_nofit_pos(void){return test("% .3d", 13862);}
int bonus_sp_d_prec_nofit_neg(void){return test("% .3d",-23646);}
//Signed integers - space with zero field width padding
int bonus_sp_d_zpsp_pos_fits(void){return test("% 05d", 43);}
int bonus_sp_d_zpsp_neg_fits(void){return test("% 07d", -54);}
int bonus_sp_d_zpsp_zero_fits(void){return test("% 03d", 0);}
int bonus_sp_d_zpsp_pos_exactfit(void){return test("% 03d", 634);}
int bonus_sp_d_zpsp_neg_exactfit(void){return test("% 04d", -532);}
int bonus_sp_d_zpsp_neg_minus1fit(void){return test("% 04d", -4825);}
//Signed integers - space with field width and precision
int bonus_sp_d_prec_width_fit_fit_pos(void){return test("% 8.5d", 34);}
int bonus_sp_d_prec_width_fit_fit_neg(void){return test("% 10.5d", -216);}
int bonus_sp_d_prec_width_fit_fit_zero(void){return test("% 8.5d", 0);}
int bonus_sp_d_prec_width_nofit_fit_pos(void){return test("% 8.3d", 8375);}
int bonus_sp_d_prec_width_nofit_fit_neg(void){return test("% 8.3d", -8473);}
int bonus_sp_d_prec_width_fit_nofit_pos(void){return test("% 3.7d", 3267);}
int bonus_sp_d_prec_width_fit_nofit_neg(void){return test("% 3.7d", -2375);}
int bonus_sp_d_prec_width_nofit_nofit_pos(void){return test("% 3.3d", 6983);}
int bonus_sp_d_prec_width_nofit_nofit_neg(void){return test("% 3.3d", -8462);}
//Signed integers - space with field width and precision, left-justified
int bonus_sp_d_prec_width_fit_fit_pos_lj(void){return test("% -8.5d", 34);}
int bonus_sp_d_prec_width_fit_fit_neg_lj(void){return test("% -10.5d", -216);}
int bonus_sp_d_prec_width_fit_fit_zero_lj(void){return test("% -8.5d", 0);}
int bonus_sp_d_prec_width_nofit_fit_pos_lj(void){return test("% -8.3d", 8375);}
int bonus_sp_d_prec_width_nofit_fit_neg_lj(void){return test("% -8.3d", -8473);}
int bonus_sp_d_prec_width_fit_nofit_pos_lj(void){return test("% -3.7d", 3267);}
int bonus_sp_d_prec_width_fit_nofit_neg_lj(void){return test("% -3.7d", -2375);}
int bonus_sp_d_prec_width_nofit_nofit_pos_lj(void){return test("% -3.3d", 6983);}
int bonus_sp_d_prec_width_nofit_nofit_neg_lj(void){return test("% -3.3d", -8462);}
//Signed integers - space with field width and precision with zeropadding
int bonus_sp_d_prec_width_ff_pos_zp(void){return test("% 08.5d", 34);}
int bonus_sp_d_prec_width_ff_neg_zp(void){return test("% 010.5d", -216);}
int bonus_sp_d_prec_width_ff_zero_zp(void){return test("% 08.5d", 0);}
int bonus_sp_d_prec_width_nf_pos_zp(void){return test("% 08.3d", 8375);}
int bonus_sp_d_prec_width_nf_neg_zp(void){return test("% 08.3d", -8473);}
int bonus_sp_d_prec_width_fn_pos_zp(void){return test("% 03.7d", 3267);}
int bonus_sp_d_prec_width_fn_neg_zp(void){return test("% 03.7d", -2375);}
int bonus_sp_d_prec_width_nn_pos_zp(void){return test("% 03.3d", 6983);}
int bonus_sp_d_prec_width_nn_neg_zp(void){return test("% 03.3d", -8462);}
//Signed integers - space with field width and precision, left-justified with zeropadding
int bonus_sp_d_prec_width_ff_pos_ljzpsp_ignoreflag(void){return test("% 0-8.5d", 34);}
int bonus_sp_d_prec_width_ff_neg_ljzpsp_ignoreflag(void){return test("% 0-10.5d", -216);}
int bonus_sp_d_prec_width_ff_zero_ljzpsp_ignoreflag(void){return test("% 0-8.5d", 0);}
int bonus_sp_d_prec_width_nf_pos_ljzpsp_ignoreflag(void){return test("% 0-8.3d", 8375);}
int bonus_sp_d_prec_width_nf_neg_ljzpsp_ignoreflag(void){return test("% 0-8.3d", -8473);}
int bonus_sp_d_prec_width_fn_pos_ljzpsp_ignoreflag(void){return test("% 0-3.7d", 3267);}
int bonus_sp_d_prec_width_fn_neg_ljzpsp_ignoreflag(void){return test("% 0-3.7d", -2375);}
int bonus_sp_d_prec_width_nn_pos_ljzpsp_ignoreflag(void){return test("% 0-3.3d", 6983);}
int bonus_sp_d_prec_width_nn_neg_ljzpsp_ignoreflag(void){return test("% 0-3.3d", -8462);}

//Signed integers - space - no modifers
int bonus_sp_i_basic_i_pos(void){return test("this % i number", 17);}
int bonus_sp_i_basic_i_neg(void){return test("this % i number", -267);}
int bonus_sp_i_basic_i_zero(void){return test("this % i number", 0);}
int bonus_sp_i_basic_i_onlypos(void){return test("% i", 3);}
int bonus_sp_i_basic_i_onlyneg(void){return test("% i", -1);}
int bonus_sp_i_basic_i_onlyzero(void){return test("% i", 0);}
int bonus_sp_i_basic_i_pos_d(void){return test("this % d number", 17);}
int bonus_sp_i_basic_i_neg_d(void){return test("this % d number", -267);}
int bonus_sp_i_basic_i_zero_d(void){return test("this % d number", 0);}
int bonus_sp_i_intmax(void){return test("% i", 2147483647);}
int bonus_sp_i_intmin(void){return test("% i", (int)(-2147483678));}
//Signed integers - space with field width
int bonus_sp_i_width_pos_fits(void){return test("% 7i", 33);}
int bonus_sp_i_width_neg_fits(void){return test("% 7i", -14);}
int bonus_sp_i_width_zero_fits(void){return test("% 3i", 0);}
int bonus_sp_i_width_pos_exactfit(void){return test("% 5i", 52625);}
int bonus_sp_i_width_neg_exactfit(void){return test("% 5i", -2562);}
int bonus_sp_i_width_pos_nofit(void){return test("% 4i", 94827);}
int bonus_sp_i_width_neg_nofit(void){return test("% 4i", -2464);}
int bonus_sp_i_width_pos_fits_lj(void){return test("% -7i", 33);}
int bonus_sp_i_width_neg_fits_lj(void){return test("% -7i", -14);}
int bonus_sp_i_width_zero_fits_lj(void){return test("% -3i", 0);}
int bonus_sp_i_width_pos_exactfit_lj(void){return test("% -5i", 52625);}
int bonus_sp_i_width_neg_exactfit_lj(void){return test("% -5i", -2562);}
int bonus_sp_i_width_pos_nofit_lj(void){return test("% -4i", 94827);}
int bonus_sp_i_width_neg_nofit_lj(void){return test("% -4i", -2464);}
//signed integers with precision
int bonus_sp_i_prec_fits_pos(void){return test("% .5i", 2);}
int bonus_sp_i_prec_fits_neg(void){return test("% .6i", -3);}
int bonus_sp_i_prec_fits_zero(void){return test("% .3i", 0);}
int bonus_sp_i_prec_exactfit_pos(void){return test("% .4i", 5263);}
int bonus_sp_i_prec_exactfit_neg(void){return test("% .4i", -2372);}
int bonus_sp_i_prec_nofit_pos(void){return test("% .3i", 13862);}
int bonus_sp_i_prec_nofit_neg(void){return test("% .3i",-23646);}
//Signed integers - space with zero field width padding
int bonus_sp_i_zpsp_pos_fits(void){return test("% 05i", 43);}
int bonus_sp_i_zpsp_neg_fits(void){return test("% 07i", -54);}
int bonus_sp_i_zpsp_zero_fits(void){return test("% 03i", 0);}
int bonus_sp_i_zpsp_pos_exactfit(void){return test("% 03i", 634);}
int bonus_sp_i_zpsp_neg_exactfit(void){return test("% 04i", -532);}
int bonus_sp_i_zpsp_neg_minus1fit(void){return test("% 04i", -4825);}
//Signed integers - space with field width and precision
int bonus_sp_i_prec_width_fit_fit_pos(void){return test("% 8.5i", 34);}
int bonus_sp_i_prec_width_fit_fit_neg(void){return test("% 10.5i", -216);}
int bonus_sp_i_prec_width_fit_fit_zero(void){return test("% 8.5i", 0);}
int bonus_sp_i_prec_width_nofit_fit_pos(void){return test("% 8.3i", 8375);}
int bonus_sp_i_prec_width_nofit_fit_neg(void){return test("% 8.3i", -8473);}
int bonus_sp_i_prec_width_fit_nofit_pos(void){return test("% 3.7i", 3267);}
int bonus_sp_i_prec_width_fit_nofit_neg(void){return test("% 3.7i", -2375);}
int bonus_sp_i_prec_width_nofit_nofit_pos(void){return test("% 3.3i", 6983);}
int bonus_sp_i_prec_width_nofit_nofit_neg(void){return test("% 3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified
int bonus_sp_i_prec_width_fit_fit_pos_lj(void){return test("% -8.5i", 34);}
int bonus_sp_i_prec_width_fit_fit_neg_lj(void){return test("% -10.5i", -216);}
int bonus_sp_i_prec_width_fit_fit_zero_lj(void){return test("% -8.5i", 0);}
int bonus_sp_i_prec_width_nofit_fit_pos_lj(void){return test("% -8.3i", 8375);}
int bonus_sp_i_prec_width_nofit_fit_neg_lj(void){return test("% -8.3i", -8473);}
int bonus_sp_i_prec_width_fit_nofit_pos_lj(void){return test("% -3.7i", 3267);}
int bonus_sp_i_prec_width_fit_nofit_neg_lj(void){return test("% -3.7i", -2375);}
int bonus_sp_i_prec_width_nofit_nofit_pos_lj(void){return test("% -3.3i", 6983);}
int bonus_sp_i_prec_width_nofit_nofit_neg_lj(void){return test("% -3.3i", -8462);}
//Signed integers - space with field width and precision with zeropadding
int bonus_sp_i_prec_width_ff_pos_zp(void){return test("% 08.5i", 34);}
int bonus_sp_i_prec_width_ff_neg_zp(void){return test("% 010.5i", -216);}
int bonus_sp_i_prec_width_ff_zero_zp(void){return test("% 08.5i", 0);}
int bonus_sp_i_prec_width_nf_pos_zp(void){return test("% 08.3i", 8375);}
int bonus_sp_i_prec_width_nf_neg_zp(void){return test("% 08.3i", -8473);}
int bonus_sp_i_prec_width_fn_pos_zp(void){return test("% 03.7i", 3267);}
int bonus_sp_i_prec_width_fn_neg_zp(void){return test("% 03.7i", -2375);}
int bonus_sp_i_prec_width_nn_pos_zp(void){return test("% 03.3i", 6983);}
int bonus_sp_i_prec_width_nn_neg_zp(void){return test("% 03.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with zeropadding
int bonus_sp_i_prec_width_ff_pos_ljzpsp_ignoreflag(void){return test("% 0-8.5i", 34);}
int bonus_sp_i_prec_width_ff_neg_ljzpsp_ignoreflag(void){return test("% 0-10.5i", -216);}
int bonus_sp_i_prec_width_ff_zero_ljzpsp_ignoreflag(void){return test("% 0-8.5i", 0);}
int bonus_sp_i_prec_width_nf_pos_ljzpsp_ignoreflag(void){return test("% 0-8.3i", 8375);}
int bonus_sp_i_prec_width_nf_neg_ljzpsp_ignoreflag(void){return test("% 0-8.3i", -8473);}
int bonus_sp_i_prec_width_fn_pos_ljzpsp_ignoreflag(void){return test("% 0-3.7i", 3267);}
int bonus_sp_i_prec_width_fn_neg_ljzpsp_ignoreflag(void){return test("% 0-3.7i", -2375);}
int bonus_sp_i_prec_width_nn_pos_ljzpsp_ignoreflag(void){return test("% 0-3.3i", 6983);}
int bonus_sp_i_prec_width_nn_neg_ljzpsp_ignoreflag(void){return test("% 0-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_sp_dupflag_d(void){return test("%  d", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_bonus_sp_c_1(void){return test("% c", 'a');}
int nocrash_notrequired_bonus_sp_c_2(void){return test("% c", -42);}
int nocrash_notrequired_bonus_sp_s_1(void){return test("% s", "hello");}
int nocrash_notrequired_bonus_sp_p_1(void){return test("% p", &ncm_p);}
int nocrash_notrequired_bonus_sp_p_2(void){return test("% p", &ncm_p);}
int nocrash_notrequired_bonus_sp_u(void){return test("% u", 42);}
int nocrash_notrequired_bonus_sp_x(void){return test("% x", 42);}
int nocrash_notrequired_bonus_sp_X(void){return test("% X", 42);}


/* -----------------------------------------------------------------------------
** 						'#' FLAG (ALTFORM) TESTS (BONUS)
** ---------------------------------------------------------------------------*/
//Hexadecimal lower (altform) - no modifers
int bonus_af_x_basic_pos(void){return test("this %#x number", 17);}
int bonus_af_x_basic_zero(void){return test("this %#x number", 0);}
int bonus_af_x_basic_onlypos(void){return test("%#x", 3);}
int bonus_af_x_hexlmax(void){return test("%#x", 4294967295u);}
//Hexadecimal lower (altform) with field width
int bonus_af_x_width_pos_fits(void){return test("%#7x", 33);}
int bonus_af_x_width_zero_fits(void){return test("%#3x", 0);}
int bonus_af_x_width_pos_exactfit(void){return test("%#5x", 52625);}
int bonus_af_x_width_pos_nofit(void){return test("%#2x", 94827);}
int bonus_af_x_width_pos_fits_lj(void){return test("%#-7x", 33);}
int bonus_af_x_width_zero_fits_lj(void){return test("%#-3x", 0);}
int bonus_af_x_width_pos_exactfit_lj(void){return test("%#-5x", 52625);}
int bonus_af_x_width_pos_nofit_lj(void){return test("%#-4x", 9648627);}
//Hexadecimal lower (altform) with precision
int bonus_af_x_prec_fits_pos(void){return test("%#.5x", 21);}
int bonus_af_x_prec_fits_zero(void){return test("%#.3x", 0);}
int bonus_af_x_prec_exactfit_pos(void){return test("%#.4x", 5263);}
int bonus_af_x_prec_nofit_pos(void){return test("%#.3x", 938862);}
int bonus_af_x_prec0val0(void){return test("%#.0x", 0);}
int bonus_af_x_prec0val0_impl(void){return test("%#.x", 0);}
int bonus_af_x_prec0val0_waf(void){return test("%#5.0x", 0);}
int bonus_af_x_prec0val0_waf_impl(void){return test("%#5.x", 0);}
int bonus_af_x_prec0val0_waflj(void){return test("%#-5.0x", 0);}
int bonus_af_x_prec0val0_waflj_impl(void){return test("%#-5.x", 0);}
//Hexadecimal lower (altform) with zero field width padding
int bonus_af_x_zp_pos_fits(void){return test("%#05x", 43);}
int bonus_af_x_zp_zero_fits(void){return test("%#03x", 0);}
int bonus_af_x_zp_pos_exactfit(void){return test("%#03x", 698334);}
//Hexadecimal lower (altform) with field width and precision
int bonus_af_x_prec_width_fit_fit_pos(void){return test("%#8.5x", 34);}
int bonus_af_x_prec_width_fit_fit_zero(void){return test("%#8.5x", 0);}
int bonus_af_x_prec_width_nofit_fit_pos(void){return test("%#8.3x", 8375);}
int bonus_af_x_prec_width_fit_nofit_pos(void){return test("%#2.7x", 3267);}
int bonus_af_x_prec_width_nofit_nofit_pos(void){return test("%#3.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision, left-justified
int bonus_af_x_prec_width_fit_fit_pos_lj(void){return test("%#-8.5x", 34);}
int bonus_af_x_prec_width_fit_fit_zero_lj(void){return test("%#-8.5x", 0);}
int bonus_af_x_prec_width_nofit_fit_pos_lj(void){return test("%#-8.3x", 8375);}
int bonus_af_x_prec_width_fit_nofit_pos_lj(void){return test("%#-2.7x", 3267);}
int bonus_af_x_prec_width_nofit_nofit_pos_lj(void){return test("%#-3.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision with zeropadding
int bonus_af_x_prec_width_ff_pos_zp(void){return test("%#08.5x", 34);}
int bonus_af_x_prec_width_ff_zero_zp(void){return test("%#08.5x", 0);}
int bonus_af_x_prec_width_nf_pos_zp(void){return test("%#08.3x", 8375);}
int bonus_af_x_prec_width_fn_pos_zp(void){return test("%#02.7x", 3267);}
int bonus_af_x_prec_width_nn_pos_zp(void){return test("%#03.3x", 6983);}
//Hexadecimal lower (altform) with field width and precision, left-justified with zeropadding
int bonus_af_x_prec_width_ff_pos_ljzpaf_ignoreflag(void){return test("%#0-8.5x", 34);}
int bonus_af_x_prec_width_ff_zero_ljzpaf_ignoreflag(void){return test("%#0-8.5x", 0);}
int bonus_af_x_prec_width_nf_pos_ljzpaf_ignoreflag(void){return test("%#0-8.3x", 8375);}
int bonus_af_x_prec_width_fn_pos_ljzpaf_ignoreflag(void){return test("%#0-2.7x", 3267);}
int bonus_af_x_prec_width_nn_pos_ljzpaf_ignoreflag(void){return test("%#0-3.3x", 6983);}

//Hex uppers (altform) - no modifers
int bonus_af_X_basic_hexu_pos(void){return test("this %#X number", 17);}
int bonus_af_X_basic_hexu_zero(void){return test("this %#X number", 0);}
int bonus_af_X_basic_hexu_onlypos(void){return test("%#X", 3);}
int bonus_af_X_hexumax(void){return test("%#X", 4294967295u);}
//Hex uppers (altform) with field width
int bonus_af_X_width_pos_fits(void){return test("%#7X", 33);}
int bonus_af_X_width_zero_fits(void){return test("%#3X", 0);}
int bonus_af_X_width_pos_exactfit(void){return test("%#7X", 52625);}
int bonus_af_X_width_pos_nofit(void){return test("%#2X", 94827);}
int bonus_af_X_width_pos_fits_lj(void){return test("%#-7X", 33);}
int bonus_af_X_width_zero_fits_lj(void){return test("%#-3X", 0);}
int bonus_af_X_width_pos_exactfit_lj(void){return test("%#-7X", 52625);}
int bonus_af_X_width_pos_nofit_lj(void){return test("%#-4X", 9648627);}
//Hex uppers (altform) with precision
int bonus_af_X_prec_fits_pos(void){return test("%#.5X", 21);}
int bonus_af_X_prec_fits_zero(void){return test("%#.3X", 0);}
int bonus_af_X_prec_exactfit_pos(void){return test("%#.4X", 5263);}
int bonus_af_X_prec_nofit_pos(void){return test("%#.3X", 938862);}
int bonus_af_X_prec0val0(void){return test("%#.0X", 0);}
int bonus_af_X_prec0val0_impl(void){return test("%#.X", 0);}
int bonus_af_X_prec0val0_waf(void){return test("%#5.0X", 0);}
int bonus_af_X_prec0val0_waf_impl(void){return test("%#5.X", 0);}
int bonus_af_X_prec0val0_waflj(void){return test("%#-5.0X", 0);}
int bonus_af_X_prec0val0_waflj_impl(void){return test("%#-5.X", 0);}
//Hex uppers (altform) with zero field width padding
int bonus_af_X_zp_pos_fits(void){return test("%#05X", 43);}
int bonus_af_X_zp_zero_fits(void){return test("%#03X", 0);}
int bonus_af_X_zp_pos_exactfit(void){return test("%#03X", 698334);}
//Hex uppers (altform) with field width and precision
int bonus_af_X_prec_width_fit_fit_pos(void){return test("%#8.5X", 34);}
int bonus_af_X_prec_width_fit_fit_zero(void){return test("%#8.5X", 0);}
int bonus_af_X_prec_width_nofit_fit_pos(void){return test("%#8.3X", 8375);}
int bonus_af_X_prec_width_fit_nofit_pos(void){return test("%#2.7X", 3267);}
int bonus_af_X_prec_width_nofit_nofit_pos(void){return test("%#3.3X", 6983);}
//Hex uppers (altform) with field width and precision, left-justified
int bonus_af_X_prec_width_fit_fit_pos_lj(void){return test("%#-8.5X", 34);}
int bonus_af_X_prec_width_fit_fit_zero_lj(void){return test("%#-8.5X", 0);}
int bonus_af_X_prec_width_nofit_fit_pos_lj(void){return test("%#-8.3X", 8375);}
int bonus_af_X_prec_width_fit_nofit_pos_lj(void){return test("%#-2.7X", 3267);}
int bonus_af_X_prec_width_nofit_nofit_pos_lj(void){return test("%#-3.3X", 6983);}
//Hex uppers (altform) with field width and precision with zeropadding
int bonus_af_X_prec_width_ff_pos_zp(void){return test("%#08.5X", 34);}
int bonus_af_X_prec_width_ff_zero_zp(void){return test("%#08.5X", 0);}
int bonus_af_X_prec_width_nf_pos_zp(void){return test("%#08.3X", 8375);}
int bonus_af_X_prec_width_fn_pos_zp(void){return test("%#02.7X", 3267);}
int bonus_af_X_prec_width_nn_pos_zp(void){return test("%#03.3X", 6983);}
//Hex uppers (altform) with field width and precision, left-justified with zeropadding
int bonus_af_X_prec_width_ff_pos_ljzpaf_ignoreflag(void){return test("%#0-8.5X", 34);}
int bonus_af_X_prec_width_ff_zero_ljzpaf_ignoreflag(void){return test("%#0-8.5X", 0);}
int bonus_af_X_prec_width_nf_pos_ljzpaf_ignoreflag(void){return test("%#0-8.3X", 8375);}
int bonus_af_X_prec_width_fn_pos_ljzpaf_ignoreflag(void){return test("%#0-2.7X", 3267);}
int bonus_af_X_prec_width_nn_pos_ljzpaf_ignoreflag(void){return test("%#0-3.3X", 6983);}

//No-crash-no-segfault test
int nocrash_notrequired_bonus_af_noarg_4(void){return test("%#"); }
int nocrash_notrequired_bonus_af_nullarg_4(void){return test("%#s", NULL); }
//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_af_dupflag_x(void){return test("%##x", 42);}
int nocrash_notrequired_bonus_af_dupflag_xasasljw(void){return test("%#++#-5x", 42);}
//nocrash tests that came about as part of the minimal specification
int nocrash_notrequired_bonus_af_c(void){return test("%#c", 'a');}
int nocrash_notrequired_bonus_af_s(void){return test("%#s", "hello");}
int nocrash_notrequired_bonus_af_p(void){return test("%#p", &ncm_p);}
int nocrash_notrequired_bonus_af_d(void){return test("%#d", 42);}
int nocrash_notrequired_bonus_af_i(void){return test("%#i", 42);}
int nocrash_notrequired_bonus_af_u(void){return test("%#u", 42);}


/* -----------------------------------------------------------------------------
** 						'# +' FLAGS TESTS (BONUS)
** ---------------------------------------------------------------------------*/

// SPACE WITH ALLSIGN - MIGHT BE UNDEFINED BEHAVIOR
//Signed integers - space with allsign ('+')
int bonus_assp_d_pos_ignoreflag(void){return test("% +d", 5);}
int bonus_assp_d_neg_ignoreflag(void){return test("% +d", -7);}
int bonus_assp_d_intmax_ignoreflag(void){return test("% +d", 2147483647);}
//signed integers with field width and allsign
int bonus_assp_d_width_pos_ignoreflag(void){return test("% +5d", 35);}
int bonus_assp_d_width_zero_ignoreflag(void){return test("% +7d", 0);}
int bonus_assp_d_width_intmax_ignoreflag(void){return test("% +24d", 2147483647);}
int bonus_assp_d_prec_pos_ignoreflag(void){return test("% +.7d", 234);}
int bonus_assp_d_prec_neg_ignoreflag(void){return test("% +.7d", -446);}
int bonus_assp_d_prec_pos_nofit_ignoreflag(void){return test("% +.3d", 3723);}
int bonus_assp_d_zpassp_as_fits_ignoreflag(void){return test("% +05d", 432);}
int bonus_assp_d_zpassp_zero_ignoreflag(void){return test("% +04d", 0);}
//Signed integers - space with field width and precision with allsign
int bonus_assp_d_prec_width_fit_fit_pos_ignoreflag(void){return test("% +8.5d", 34);}
int bonus_assp_d_prec_width_fit_fit_neg_ignoreflag(void){return test("% +10.5d", -216);}
int bonus_assp_d_prec_width_fit_fit_zero_ignoreflag(void){return test("% +8.5d", 0);}
int bonus_assp_d_prec_width_nofit_fit_pos_ignoreflag(void){return test("% +8.3d", 8375);}
int bonus_assp_d_prec_width_nofit_fit_neg_ignoreflag(void){return test("% +8.3d", -8473);}
int bonus_assp_d_prec_width_fit_nofit_pos_ignoreflag(void){return test("% +3.7d", 3267);}
int bonus_assp_d_prec_width_fit_nofit_neg_ignoreflag(void){return test("% +3.7d", -2375);}
int bonus_assp_d_prec_width_nofit_nofit_pos_ignoreflag(void){return test("% +3.3d", 6983);}
int bonus_assp_d_prec_width_nofit_nofit_neg_ignoreflag(void){return test("% +3.3d", -8462);}
int bonus_assp_d_prec0val0_was(void){return test("%+5.0d", 0);}
int bonus_assp_d_prec0val0_was_impl(void){return test("%+5.d", 0);}
int bonus_assp_d_prec0val0_waslj(void){return test("%+-5.0d", 0);}
int bonus_assp_d_prec0val0_waslj_impl(void){return test("%+-5.d", 0);}
//Signed integers - space with field width and precision, left-justified with allsign
int bonus_assp_d_prec_width_fit_fit_pos_lj_ignoreflag(void){return test("% +-8.5d", 34);}
int bonus_assp_d_prec_width_fit_fit_neg_lj_ignoreflag(void){return test("% +-10.5d", -216);}
int bonus_assp_d_prec_width_fit_fit_zero_lj_ignoreflag(void){return test("% +-8.5d", 0);}
int bonus_assp_d_prec_width_nofit_fit_pos_lj_ignoreflag(void){return test("% +-8.3d", 8375);}
int bonus_assp_d_prec_width_nofit_fit_neg_lj_ignoreflag(void){return test("% +-8.3d", -8473);}
int bonus_assp_d_prec_width_fit_nofit_pos_lj_ignoreflag(void){return test("% +-3.7d", 3267);}
int bonus_assp_d_prec_width_fit_nofit_neg_lj_ignoreflag(void){return test("% +-3.7d", -2375);}
int bonus_assp_d_prec_width_nofit_nofit_pos_lj_ignoreflag(void){return test("% +-3.3d", 6983);}
int bonus_assp_d_prec_width_nofit_nofit_neg_lj_ignoreflag(void){return test("% +-3.3d", -8462);}
//Signed integers - space with field width and precision with allsign with zeropadding
int bonus_assp_d_prec_width_ff_pos_aszpsp_ignoreflag(void){return test("% 0+8.5d", 34);}
int bonus_assp_d_prec_width_ff_neg_aszpsp_ignoreflag(void){return test("% 0+10.5d", -216);}
int bonus_assp_d_prec_width_ff_zero_aszpsp_ignoreflag(void){return test("% 0+8.5d", 0);}
int bonus_assp_d_prec_width_nf_pos_aszpsp_ignoreflag(void){return test("% 0+8.3d", 8375);}
int bonus_assp_d_prec_width_nf_neg_aszpsp_ignoreflag(void){return test("% 0+8.3d", -8473);}
int bonus_assp_d_prec_width_fn_pos_aszpsp_ignoreflag(void){return test("% 0+3.7d", 3267);}
int bonus_assp_d_prec_width_fn_neg_aszpsp_ignoreflag(void){return test("% 0+3.7d", -2375);}
int bonus_assp_d_prec_width_nn_pos_aszpsp_ignoreflag(void){return test("% 0+3.3d", 6983);}
int bonus_assp_d_prec_width_nn_neg_aszpsp_ignoreflag(void){return test("% 0+3.3d", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign with zeropadding
int bonus_assp_d_prec_width_ff_pos_ljaszpsp_ignoreflag(void){return test("% 0+-8.5d", 34);}
int bonus_assp_d_prec_width_ff_neg_ljaszpsp_ignoreflag(void){return test("% 0+-10.5d", -216);}
int bonus_assp_d_prec_width_ff_zero_ljaszpsp_ignoreflag(void){return test("% 0+-8.5d", 0);}
int bonus_assp_d_prec_width_nf_pos_ljaszpsp_ignoreflag(void){return test("% 0+-8.3d", 8375);}
int bonus_assp_d_prec_width_nf_neg_ljaszpsp_ignoreflag(void){return test("% 0+-8.3d", -8473);}
int bonus_assp_d_prec_width_fn_pos_ljaszpsp_ignoreflag(void){return test("% 0+-3.7d", 3267);}
int bonus_assp_d_prec_width_fn_neg_ljaszpsp_ignoreflag(void){return test("% 0+-3.7d", -2375);}
int bonus_assp_d_prec_width_nn_pos_ljaszpsp_ignoreflag(void){return test("% 0+-3.3d", 6983);}
int bonus_assp_d_prec_width_nn_neg_ljaszpsp_ignoreflag(void){return test("% 0+-3.3d", -8462);}
//Signed integers - space with allsign ('+')
int bonus_assp_i_pos_ignoreflag(void){return test("% +i", 5);}
int bonus_assp_i_neg_ignoreflag(void){return test("% +i", -7);}
int bonus_assp_i_intmax_ignoreflag(void){return test("% +i", 2147483647);}
//signed integers with field width and allsign
int bonus_assp_i_width_pos_ignoreflag(void){return test("% +5i", 35);}
int bonus_assp_i_width_zero_ignoreflag(void){return test("% +7i", 0);}
int bonus_assp_i_width_intmax_ignoreflag(void){return test("% +24i", 2147483647);}
int bonus_assp_i_prec_pos_ignoreflag(void){return test("% +.7i", 234);}
int bonus_assp_i_prec_neg_ignoreflag(void){return test("% +.7i", -446);}
int bonus_assp_i_prec_pos_nofit_ignoreflag(void){return test("% +.3i", 3723);}
int bonus_assp_i_zpassp_as_fits_ignoreflag(void){return test("% +05i", 432);}
int bonus_assp_i_zpassp_zero_ignoreflag(void){return test("% +04i", 0);}
//Signed integers - space with field width and precision with allsign
int bonus_assp_i_prec_width_fit_fit_pos_ignoreflag(void){return test("% +8.5i", 34);}
int bonus_assp_i_prec_width_fit_fit_neg_ignoreflag(void){return test("% +10.5i", -216);}
int bonus_assp_i_prec_width_fit_fit_zero_ignoreflag(void){return test("% +8.5i", 0);}
int bonus_assp_i_prec_width_nofit_fit_pos_ignoreflag(void){return test("% +8.3i", 8375);}
int bonus_assp_i_prec_width_nofit_fit_neg_ignoreflag(void){return test("% +8.3i", -8473);}
int bonus_assp_i_prec_width_fit_nofit_pos_ignoreflag(void){return test("% +3.7i", 3267);}
int bonus_assp_i_prec_width_fit_nofit_neg_ignoreflag(void){return test("% +3.7i", -2375);}
int bonus_assp_i_prec_width_nofit_nofit_pos_ignoreflag(void){return test("% +3.3i", 6983);}
int bonus_assp_i_prec_width_nofit_nofit_neg_ignoreflag(void){return test("% +3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign
int bonus_assp_i_prec_width_fit_fit_pos_lj_ignoreflag(void){return test("% +-8.5i", 34);}
int bonus_assp_i_prec_width_fit_fit_neg_lj_ignoreflag(void){return test("% +-10.5i", -216);}
int bonus_assp_i_prec_width_fit_fit_zero_lj_ignoreflag(void){return test("% +-8.5i", 0);}
int bonus_assp_i_prec_width_nofit_fit_pos_lj_ignoreflag(void){return test("% +-8.3i", 8375);}
int bonus_assp_i_prec_width_nofit_fit_neg_lj_ignoreflag(void){return test("% +-8.3i", -8473);}
int bonus_assp_i_prec_width_fit_nofit_pos_lj_ignoreflag(void){return test("% +-3.7i", 3267);}
int bonus_assp_i_prec_width_fit_nofit_neg_lj_ignoreflag(void){return test("% +-3.7i", -2375);}
int bonus_assp_i_prec_width_nofit_nofit_pos_lj_ignoreflag(void){return test("% +-3.3i", 6983);}
int bonus_assp_i_prec_width_nofit_nofit_neg_lj_ignoreflag(void){return test("% +-3.3i", -8462);}
//Signed integers - space with field width and precision with allsign with zeropadding
int bonus_assp_i_prec_width_ff_pos_aszpsp_ignoreflag(void){return test("% 0+8.5i", 34);}
int bonus_assp_i_prec_width_ff_neg_aszpsp_ignoreflag(void){return test("% 0+10.5i", -216);}
int bonus_assp_i_prec_width_ff_zero_aszpsp_ignoreflag(void){return test("% 0+8.5i", 0);}
int bonus_assp_i_prec_width_nf_pos_aszpsp_ignoreflag(void){return test("% 0+8.3i", 8375);}
int bonus_assp_i_prec_width_nf_neg_aszpsp_ignoreflag(void){return test("% 0+8.3i", -8473);}
int bonus_assp_i_prec_width_fn_pos_aszpsp_ignoreflag(void){return test("% 0+3.7i", 3267);}
int bonus_assp_i_prec_width_fn_neg_aszpsp_ignoreflag(void){return test("% 0+3.7i", -2375);}
int bonus_assp_i_prec_width_nn_pos_aszpsp_ignoreflag(void){return test("% 0+3.3i", 6983);}
int bonus_assp_i_prec_width_nn_neg_aszpsp_ignoreflag(void){return test("% 0+3.3i", -8462);}
//Signed integers - space with field width and precision, left-justified with allsign with zeropadding
int bonus_assp_i_prec_width_ff_pos_ljaszpsp_ignoreflag(void){return test("% 0+-8.5i", 34);}
int bonus_assp_i_prec_width_ff_neg_ljaszpsp_ignoreflag(void){return test("% 0+-10.5i", -216);}
int bonus_assp_i_prec_width_ff_zero_ljaszpsp_ignoreflag(void){return test("% 0+-8.5i", 0);}
int bonus_assp_i_prec_width_nf_pos_ljaszpsp_ignoreflag(void){return test("% 0+-8.3i", 8375);}
int bonus_assp_i_prec_width_nf_neg_ljaszpsp_ignoreflag(void){return test("% 0+-8.3i", -8473);}
int bonus_assp_i_prec_width_fn_pos_ljaszpsp_ignoreflag(void){return test("% 0+-3.7i", 3267);}
int bonus_assp_i_prec_width_fn_neg_ljaszpsp_ignoreflag(void){return test("% 0+-3.7i", -2375);}
int bonus_assp_i_prec_width_nn_pos_ljaszpsp_ignoreflag(void){return test("% 0+-3.3i", 6983);}
int bonus_assp_i_prec_width_nn_neg_ljaszpsp_ignoreflag(void){return test("% 0+-3.3i", -8462);}

//nocrash tests adapted from tests contributed by phtruong
int nocrash_notrequired_bonus_assp_dupflag_d_spassp(void){return test("% + d", 42);}



/* -----------------------------------------------------------------------------	
** 						%n NOTHING PRINTED TESTS (BONUS)	
** ---------------------------------------------------------------------------*/	
// To do

int notinsubject_o_basic_octl_pos(void){return test("this %o number", 17);}
int notinsubject_o_basic_octl_zero(void){return test("this %o number", 0);}
int notinsubject_o_basic_octl_onlypos(void){return test("%o", 3);}
int notinsubject_o_octlmax(void){return test("%o", 4294967295u);}
//Octals with field width
int notinsubject_o_width_pos_fits(void){return test("%7o", 33);}
int notinsubject_o_width_zero_fits(void){return test("%3o", 0);}
int notinsubject_o_width_pos_exactfit(void){return test("%6o", 52625);}
int notinsubject_o_width_pos_nofit(void){return test("%2o", 94827);}
int notinsubject_o_width_pos_fits_lj(void){return test("%-7o", 33);}
int notinsubject_o_width_zero_fits_lj(void){return test("%-3o", 0);}
int notinsubject_o_width_pos_exactfit_lj(void){return test("%-6o", 52625);}
int notinsubject_o_width_pos_nofit_lj(void){return test("%-4o", 9648627);}
//Octals with precision
int notinsubject_o_prec_fits_pos(void){return test("%.5o", 21);}
int notinsubject_o_prec_fits_zero(void){return test("%.3o", 0);}
int notinsubject_o_prec_exactfit_pos(void){return test("%.5o", 5263);}
int notinsubject_o_prec_nofit_pos(void){return test("%.3o", 938862);}
//Octals with zero field width padding
int notinsubject_o_zp_pos_fits(void){return test("%05o", 43);}
int notinsubject_o_zp_zero_fits(void){return test("%03o", 0);}
int notinsubject_o_zp_pos_exactfit(void){return test("%07o", 698334);}
//Octals with field width and precision
int notinsubject_o_prec_width_fit_fit_pos(void){return test("%8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero(void){return test("%8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos(void){return test("%8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos(void){return test("%2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos(void){return test("%3.3o", 6983);}
//Octals with field width and precision, left-justified
int notinsubject_o_prec_width_fit_fit_pos_lj(void){return test("%-8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_lj(void){return test("%-8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_lj(void){return test("%-8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_lj(void){return test("%-2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_lj(void){return test("%-3.3o", 6983);}
//Octals with field width and precision with zeropadding
int notinsubject_o_prec_width_ff_pos_zp(void){return test("%08.5o", 34);}
int notinsubject_o_prec_width_ff_zero_zp(void){return test("%08.5o", 0);}
int notinsubject_o_prec_width_nf_pos_zp(void){return test("%08.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_zp(void){return test("%02.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_zp(void){return test("%03.3o", 6983);}
//Octals with field width and precision, left-justified with zeropadding
int notinsubject_o_prec_width_ff_pos_ljzp_ignoreflag(void){return test("%0-8.5o", 34);}
int notinsubject_o_prec_width_ff_zero_ljzp_ignoreflag(void){return test("%0-8.5o", 0);}
int notinsubject_o_prec_width_nf_pos_ljzp_ignoreflag(void){return test("%0-8.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_ljzp_ignoreflag(void){return test("%0-2.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_ljzp_ignoreflag(void){return test("%0-3.3o", 6983);}
//Octal (Altform)s - no modifers
int notinsubject_o_basic_octl_pos_af(void){return test("this %#o number", 17);}
int notinsubject_o_basic_octl_zero_af(void){return test("this %#o number", 0);}
int notinsubject_o_basic_octl_onlypos_af(void){return test("%#o", 3);}
int notinsubject_o_octlmax_af(void){return test("%#o", 4294967295u);}
//Octal (Altform)s with field width
int notinsubject_o_width_pos_fits_af(void){return test("%#7o", 33);}
int notinsubject_o_width_zero_fits_af(void){return test("%#3o", 0);}
int notinsubject_o_width_pos_exactfit_af(void){return test("%#6o", 52625);}
int notinsubject_o_width_pos_nofit_af(void){return test("%#2o", 94827);}
int notinsubject_o_width_pos_fits_lj_af(void){return test("%#-7o", 33);}
int notinsubject_o_width_zero_fits_lj_af(void){return test("%#-3o", 0);}
int notinsubject_o_width_pos_exactfit_lj_af(void){return test("%#-6o", 52625);}
int notinsubject_o_width_pos_nofit_lj_af(void){return test("%#-4o", 9648627);}
//Octal (Altform)s with precision
int notinsubject_o_prec_fits_pos_af(void){return test("%#.5o", 21);}
int notinsubject_o_prec_fits_zero_af(void){return test("%#.3o", 0);}
int notinsubject_o_prec_exactfit_pos_af(void){return test("%#.5o", 5263);}
int notinsubject_o_prec_nofit_pos_af(void){return test("%#.3o", 938862);}
//Octal (Altform)s with zero field width padding
int notinsubject_o_zp_pos_fits_af(void){return test("%#05o", 43);}
int notinsubject_o_zp_zero_fits_af(void){return test("%#03o", 0);}
int notinsubject_o_zp_pos_exactfit_af(void){return test("%#07o", 698334);}
//Octal (Altform)s with field width and precision
int notinsubject_o_prec_width_fit_fit_pos_af(void){return test("%#8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_af(void){return test("%#8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_af(void){return test("%#8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_af(void){return test("%#2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_af(void){return test("%#3.3o", 6983);}
//Octal (Altform)s with field width and precision, left-justified
int notinsubject_o_prec_width_fit_fit_pos_lj_af(void){return test("%#-8.5o", 34);}
int notinsubject_o_prec_width_fit_fit_zero_lj_af(void){return test("%#-8.5o", 0);}
int notinsubject_o_prec_width_nofit_fit_pos_lj_af(void){return test("%#-8.3o", 8375);}
int notinsubject_o_prec_width_fit_nofit_pos_lj_af(void){return test("%#-2.7o", 3267);}
int notinsubject_o_prec_width_nofit_nofit_pos_lj_af(void){return test("%#-3.3o", 6983);}
//Octal (Altform)s with field width and precision with zeropadding
int notinsubject_o_prec_width_ff_pos_zp_af(void){return test("%#08.5o", 34);}
int notinsubject_o_prec_width_ff_zero_zp_af(void){return test("%#08.5o", 0);}
int notinsubject_o_prec_width_nf_pos_zp_af(void){return test("%#08.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_zp_af(void){return test("%#02.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_zp_af(void){return test("%#03.3o", 6983);}
//Octal (Altform)s with field width and precision, left-justified with zeropadding
int notinsubject_o_prec_width_ff_pos_ljzpaf_ignoreflag(void){return test("%#0-8.5o", 34);}
int notinsubject_o_prec_width_ff_zero_ljzpaf_ignoreflag(void){return test("%#0-8.5o", 0);}
int notinsubject_o_prec_width_nf_pos_ljzpaf_ignoreflag(void){return test("%#0-8.3o", 8375);}
int notinsubject_o_prec_width_fn_pos_ljzpaf_ignoreflag(void){return test("%#0-2.7o", 3267);}
int notinsubject_o_prec_width_nn_pos_ljzpaf_ignoreflag(void){return test("%#0-3.3o", 6983);}
//Octals - zero precision zero value
int notinsubject_o_prec0val0_basic(void){return test("%.0o", 0);}
int notinsubject_o_prec0val0_implicit(void){return test("%.o", 0);}
int notinsubject_o_prec0val0_w(void){return test("%5.0o", 0);}
int notinsubject_o_prec0val0_w_impl(void){return test("%5.o", 0);}
int notinsubject_o_prec0val0_wlj(void){return test("%-5.0o", 0);}
int notinsubject_o_prec0val0_wlj_impl(void){return test("%-5.o", 0);}
int notinsubject_o_prec0val0_af(void){return test("%#.0o", 0);}
int notinsubject_o_prec0val0_af_impl(void){return test("%#.o", 0);}
int notinsubject_o_prec0val0_waf(void){return test("%#5.0o", 0);}
int notinsubject_o_prec0val0_waf_impl(void){return test("%#5.o", 0);}
int notinsubject_o_prec0val0_waflj(void){return test("%#-5.0o", 0);}
int notinsubject_o_prec0val0_waflj_impl(void){return test("%#-5.o", 0);}

int notinsubject_moul_o_1(void){return test("%o", 42);}
int notinsubject_moul_o_2(void){return test("Kashim a %o histoires à raconter", 1001);}
int notinsubject_moul_o_3(void){return test("Il fait au moins %o\n", -8000);}
int notinsubject_moul_o_4(void){return test("%o", -0);}
int notinsubject_moul_o_5(void){return test("%o", 0);}
int notinsubject_moul_o_6(void){return test("%o", INT_MAX);}
int notinsubject_moul_o_7(void){return test("%o", INT_MIN);}
int notinsubject_moul_o_8(void){return test("%o", INT_MIN - 1);}
int notinsubject_moul_o_9(void){return test("%o", INT_MAX + 1);}
int notinsubject_moul_o_10(void){return test("%%o 0000042 == |%o|\n", 0000042);}
int notinsubject_moul_o_11(void){return test("%%o \t == |%o|\n", '\t');}
int notinsubject_moul_o_12(void){return test("%%o Lydie == |%o|\n", 'L'+'y'+'d'+'i'+'e');}
int notinsubject_moul_o_hash_3(void){return test("%%#o 0 ==  %#o\n", 0);}
int notinsubject_moul_o_hash_4(void){return test("%%o 0 ==  %o\n", 0);}
int notinsubject_moul_o_hash_5(void){return test("%%#o INT_MAX ==  %#o\n", INT_MAX);}
int notinsubject_moul_o_hash_6(void){return test("%%o INT_MAX ==  %o\n", INT_MAX);}
int notinsubject_moul_o_hash_7(void){return test("%%#o INT_MIN ==  %#o\n", INT_MIN);}
int notinsubject_moul_o_hash_8(void){return test("%%o INT_MIN ==  %o\n", INT_MIN);}

#pragma clang diagnostic pop
