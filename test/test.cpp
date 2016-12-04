#include "Problem_1.h"
#include "Problem_2.h"
#include "Problem_3.h"
#include "Problem_4.h"
#include "Problem_5.h"
#include "Problem_6.h"
#include "Problem_7.h"
#include "Problem_8.h"
#include "Problem_9.h"
#include "Problem_10.h"
#include "Problem_11.h"
#include "Problem_12.h"
#include "Problem_13.h"
#include "Problem_14.h"
#include "Problem_16.h"
#include "Problem_17.h"
#include "Problem_19.h"
#include "Problem_20.h"
#include "Problem_21.h"
#include "Problem_22.h"
#include "Problem_23.h"
#include "Problem_24.h"
#include "Problem_25.h"
#include "Problem_26.h"
#include "Problem_27.h"
#include "Problem_29.h"
#include "Problem_30.h"
#include "Problem_32.h"
#include "Problem_33.h"
#include "Problem_34.h"
#include "Problem_35.h"
#include "Problem_36.h"
#include "Problem_37.h"
#include "Problem_38.h"
#include "Problem_39.h"
#include "Problem_40.h"
#include "Problem_41.h"
#include "Problem_42.h"
#include "Problem_43.h"
#include "Problem_44.h"
#include "Problem_45.h"
#include "Problem_46.h"
#include "Problem_47.h"
#include "Problem_48.h"
#include "Problem_49.h"
#include "Problem_50.h"
#include "Problem_52.h"
#include "Problem_54.h"
#include "Problem_55.h"
#include "Problem_56.h"
#include "Problem_59.h"
#include "Problem_69.h"
#include "Problem_72.h"
#include "Problem_92.h"
#include "Problem_97.h"
#include "Problem_99.h"
#include "Problem_125.h"
#include <cstdio>
#include <ctime>

namespace pp = project_euler::problems;

void test_case_for_problem_1() {
    const std::clock_t start = clock();
    
    pp::Problem_1 problem;
    const int N = 999;
    printf("Sum == [%d]\n", (problem.sum(3, N) + problem.sum(5, N)) - problem.sum(15, N));

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_2() {
    const std::clock_t start = clock();
    
    pp::Problem_2 problem;
    printf("Sum of even fibbonacci numbers == [%d]\n", problem.sum());

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");        
}

void test_case_for_problem_3() {
    const std::clock_t start = clock();
    
    pp::Problem_3 problem;
    problem.largest_factor(600851475143);

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_4() {
    const std::clock_t start = clock();
    
    pp::Problem_4 problem;
    problem.largest_palindrome_product();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_5() {
    const std::clock_t start = clock();
    
    pp::Problem_5 problem;
    problem.smallest_multiple(20);

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_6() {
    const std::clock_t start = clock();
    
    pp::Problem_6 problem;
    problem.sum_of_squares(100);

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_7() {
    const std::clock_t start = clock();
    
    pp::Problem_7 problem;
    problem.prime_number(10001);

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_8() {
    const std::clock_t start = clock();
    
    pp::Problem_8 problem;
    problem.series_product("../data/largest_product.txt");

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_9() {
    const std::clock_t start = clock();
    
    pp::Problem_9 problem;
    problem.special_triplet();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_10() {
    const std::clock_t start = clock();
    
    pp::Problem_10 problem;
    problem.sum_of_primes();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_11() {
    const std::clock_t start = clock();
    
    pp::Problem_11 problem;
    problem.largest_product("../data/largest_product_in_a_grid.txt");

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_12() {
    const std::clock_t start = clock();
    
    pp::Problem_12 problem;
    problem.max_divisible_triangular_number();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_13() {
    const std::clock_t start = clock();
    
    pp::Problem_13 problem;
    problem.large_sum("../data/large_sum.txt");

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_14() {
    const std::clock_t start = clock();
    
    pp::Problem_14 problem;
    problem.collatz_sequence();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_16() {
    const std::clock_t start = clock();
    
    pp::Problem_16 problem;
    problem.sum();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_17() {
    const std::clock_t start = clock();
    
    pp::Problem_17 problem;
    problem.letter_count();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_19() {
    const std::clock_t start = clock();
    
    pp::Problem_19 problem;
    problem.sundays();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_20() {
    const std::clock_t start = clock();
    
    pp::Problem_20 problem;
    problem.sum_of_factorial_digits(100);

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_21() {
    const std::clock_t start = clock();
    
    pp::Problem_21 problem;
    problem.sum_of_amicable_numbers();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_22() {
    const std::clock_t start = clock();
    
    pp::Problem_22 problem;
    problem.names_scores("../data/names.txt");

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_23() {
    const std::clock_t start = clock();
    
    pp::Problem_23 problem;
    problem.non_abundant_sums();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_24() {
    const std::clock_t start = clock();
    
    pp::Problem_24 problem;
    problem.permutation_generator();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_25() {
    const std::clock_t start = clock();
    
    pp::Problem_25 problem;
    problem.fibonacci();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_26() {
    const std::clock_t start = clock();
    
    pp::Problem_26 problem;
    problem.reciprocal_cycles();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_27() {
    const std::clock_t start = clock();
    
    pp::Problem_27 problem;
    problem.quadratic_primes();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_29() {
    const std::clock_t start = clock();
    
    pp::Problem_29 problem;
    problem.distinct_powers();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_30() {
    const std::clock_t start = clock();
    
    pp::Problem_30 problem;
    problem.digit_fifth_power();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_32() {
    const std::clock_t start = clock();
    
    pp::Problem_32 problem;
    problem.pandigital_product();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_33() {
    const std::clock_t start = clock();
    
    pp::Problem_33 problem;
    problem.digit_cancelling_fractions();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_34() {
    const std::clock_t start = clock();
    
    pp::Problem_34 problem;
    problem.digit_factorials();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_35() {
    const std::clock_t start = clock();
    
    pp::Problem_35 problem;
    problem.circular_primes();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_36() {
    const std::clock_t start = clock();
    
    pp::Problem_36 problem;
    problem.double_base_palindromes();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_37() {
    const std::clock_t start = clock();
    
    pp::Problem_37 problem;
    problem.truncatable_primes();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_38() {
    const std::clock_t start = clock();
    
    pp::Problem_38 problem;
    problem.pandigital_multiples();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_39() {
    const std::clock_t start = clock();
    
    pp::Problem_39 problem;
    problem.integer_right_triangles();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_40() {
    const std::clock_t start = clock();
    
    pp::Problem_40 problem;
    problem.champernowne_constant();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_41() {
    const std::clock_t start = clock();
    
    pp::Problem_41 problem;
    problem.pandigital_prime();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_42() {
    const std::clock_t start = clock();
    
    pp::Problem_42 problem;
    problem.count_coded_triangle_numbers("../data/words.txt");

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_43() {
    const std::clock_t start = clock();
    
    pp::Problem_43 problem;
    problem.sub_string_divisiblity();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_44() {
    const std::clock_t start = clock();
    
    pp::Problem_44 problem;
    problem.min_difference();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_45() {
    const std::clock_t start = clock();
    
    pp::Problem_45 problem;
    problem.next_number();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_46() {
    const std::clock_t start = clock();
    
    pp::Problem_46 problem;
    problem.goldbach_conjecture();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_47() {
    const std::clock_t start = clock();
    
    pp::Problem_47 problem;
    problem.distinct_prime_factors();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_48() {
    const std::clock_t start = clock();
    
    pp::Problem_48 problem;
    problem.self_powers();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_49() {
    const std::clock_t start = clock();
    
    pp::Problem_49 problem;
    problem.prime_permutations();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_50() {
    const std::clock_t start = clock();
    
    pp::Problem_50 problem;
    problem.consecutive_prime_sum();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_52() {
    const std::clock_t start = clock();
    
    pp::Problem_52 problem;
    problem.permutated_multiples();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_54() {
    const std::clock_t start = clock();
    
    pp::Problem_54 problem;
    problem.count_player_wins(1);

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_55() {
    const std::clock_t start = clock();
    
    pp::Problem_55 problem;
    problem.lychrel_numbers(10000);

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_56() {
    const std::clock_t start = clock();
    
    pp::Problem_56 problem;
    problem.powerful_digit_sum();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_59() {
    const std::clock_t start = clock();
    
    pp::Problem_59 problem;
    problem.sum_of_encrypted_message("../data/cipher.txt");

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");        
}

void test_case_for_problem_69() {
    const std::clock_t start = clock();
    
    pp::Problem_69 problem;
    const int n = 1000000;
    problem.totient_maximum(n);

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");        
}

void test_case_for_problem_72() {
    const std::clock_t start = clock();
    const int n = 1000000;

    pp::Problem_72 problem;
    printf("Counting fractions based on Euler's totient function for [%d] == [%ld]\n", n, problem.counting_fractions(n));

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_92() {
    const std::clock_t start = clock();
    
    pp::Problem_92 problem;
    problem.square_digit_chains();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_97() {
    const std::clock_t start = clock();
    
    pp::Problem_97 problem;
    problem.large_prime();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_99() {
    const std::clock_t start = clock();
    
    pp::Problem_99 problem;
    problem.largest_number("../data/base_exp.txt");

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

void test_case_for_problem_125() {
    const std::clock_t start = clock();
    
    pp::Problem_125 problem;
    problem.palindromic_sums();

    printf("----------------------------------------------------------------------------------------\n");
    printf("Execution time == [%.8f] seconds\n", (clock() - start) / static_cast<double>(CLOCKS_PER_SEC));
    printf("----------------------------------------------------------------------------------------\n");    
}

int main() {
#if 0
    printf("------------------------------------- Problem 1 ----------------------------------------\n");
    test_case_for_problem_1();
    printf("------------------------------------- Problem 2 ----------------------------------------\n");    
    test_case_for_problem_2();
    printf("------------------------------------- Problem 3 ----------------------------------------\n");    
    test_case_for_problem_3();
    printf("------------------------------------- Problem 4 ----------------------------------------\n");    
    test_case_for_problem_4();
    printf("------------------------------------- Problem 5 ----------------------------------------\n");    
    test_case_for_problem_5();
    printf("------------------------------------- Problem 6 ----------------------------------------\n");    
    test_case_for_problem_6();
    printf("------------------------------------- Problem 7 ----------------------------------------\n");    
    test_case_for_problem_7();
    printf("------------------------------------- Problem 8 ----------------------------------------\n");    
    test_case_for_problem_8();
    printf("------------------------------------- Problem 9 ----------------------------------------\n");    
    test_case_for_problem_9();
    printf("------------------------------------- Problem 10 ---------------------------------------\n");    
    test_case_for_problem_10();
    printf("------------------------------------- Problem 11 ---------------------------------------\n");    
    test_case_for_problem_11();
    printf("------------------------------------- Problem 12 ---------------------------------------\n");    
    test_case_for_problem_12();
    printf("------------------------------------- Problem 13 ---------------------------------------\n");    
    test_case_for_problem_13();
    printf("------------------------------------- Problem 14 ---------------------------------------\n");    
    test_case_for_problem_14();
    printf("------------------------------------- Problem 16 ---------------------------------------\n");    
    test_case_for_problem_16();
    printf("------------------------------------- Problem 17 ---------------------------------------\n");    
    test_case_for_problem_17();
    printf("------------------------------------- Problem 19 ---------------------------------------\n");    
    test_case_for_problem_19();
    printf("------------------------------------- Problem 20 ---------------------------------------\n");    
    test_case_for_problem_20();
    printf("------------------------------------- Problem 21 ---------------------------------------\n");    
    test_case_for_problem_21();
    printf("------------------------------------- Problem 22 ---------------------------------------\n");    
    test_case_for_problem_22();
    printf("------------------------------------- Problem 23 ---------------------------------------\n");    
    test_case_for_problem_23();
    printf("------------------------------------- Problem 24 ---------------------------------------\n");    
    test_case_for_problem_24();
    printf("------------------------------------- Problem 25 ---------------------------------------\n");    
    test_case_for_problem_25();
    printf("------------------------------------- Problem 26 ---------------------------------------\n");    
    test_case_for_problem_26();
    printf("------------------------------------- Problem 27 ---------------------------------------\n");    
    test_case_for_problem_27();
    printf("------------------------------------- Problem 29 ---------------------------------------\n");    
    test_case_for_problem_29();
    printf("------------------------------------- Problem 30 ---------------------------------------\n");    
    test_case_for_problem_30();
    printf("------------------------------------- Problem 32 ---------------------------------------\n");    
    test_case_for_problem_32();
    printf("------------------------------------- Problem 33 ---------------------------------------\n");    
    test_case_for_problem_33();
    printf("------------------------------------- Problem 34 ---------------------------------------\n");    
    test_case_for_problem_34();
    printf("------------------------------------- Problem 35 ---------------------------------------\n");    
    test_case_for_problem_35();
    printf("------------------------------------- Problem 36 ---------------------------------------\n");    
    test_case_for_problem_36();
    printf("------------------------------------- Problem 37 ---------------------------------------\n");    
    test_case_for_problem_37();
    printf("------------------------------------- Problem 38 ---------------------------------------\n");    
    test_case_for_problem_38();
    printf("------------------------------------- Problem 39 ---------------------------------------\n");    
    test_case_for_problem_39();
    printf("------------------------------------- Problem 40 ---------------------------------------\n");    
    test_case_for_problem_40();
    printf("------------------------------------- Problem 41 ---------------------------------------\n");    
    test_case_for_problem_41();
    printf("------------------------------------- Problem 42 ---------------------------------------\n");    
    test_case_for_problem_42();
    printf("------------------------------------- Problem 43 ---------------------------------------\n");    
    test_case_for_problem_43();
    printf("------------------------------------- Problem 44 ---------------------------------------\n");    
    test_case_for_problem_44();
    printf("------------------------------------- Problem 45 ---------------------------------------\n");    
    test_case_for_problem_45();
    printf("------------------------------------- Problem 46 ---------------------------------------\n");    
    test_case_for_problem_46();
    printf("------------------------------------- Problem 47 ---------------------------------------\n");    
    test_case_for_problem_47();
    printf("------------------------------------- Problem 48 ---------------------------------------\n");    
    test_case_for_problem_48();
    printf("------------------------------------- Problem 49 ---------------------------------------\n");    
    test_case_for_problem_49();
    printf("------------------------------------- Problem 50 ---------------------------------------\n");    
    test_case_for_problem_50();
    printf("------------------------------------- Problem 52 ---------------------------------------\n");    
    test_case_for_problem_52();
    printf("------------------------------------- Problem 54 ---------------------------------------\n");    
    test_case_for_problem_54();
    printf("------------------------------------- Problem 55 ---------------------------------------\n");    
    test_case_for_problem_55();
    printf("------------------------------------- Problem 56 ---------------------------------------\n");    
    test_case_for_problem_56();
    printf("------------------------------------- Problem 59 ---------------------------------------\n");    
    test_case_for_problem_59();
#endif
    printf("------------------------------------- Problem 69 ---------------------------------------\n");        
    test_case_for_problem_69();
#if 0    
    printf("------------------------------------- Problem 72 ---------------------------------------\n");        
    test_case_for_problem_72();
    printf("------------------------------------- Problem 92 ---------------------------------------\n");        
    test_case_for_problem_92();
    printf("------------------------------------- Problem 97 ---------------------------------------\n");        
    test_case_for_problem_97();    
    printf("------------------------------------- Problem 99 ---------------------------------------\n");    
    test_case_for_problem_99();
    printf("------------------------------------- Problem 125 --------------------------------------\n");    
    test_case_for_problem_125();
#endif
    
    return 0;
}
