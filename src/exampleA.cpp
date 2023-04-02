#include <Rcpp.h>
#include <RcppDA.h>

//=== module A ===//
#define MODULE_A_LEVEL 1 // macro to control assertion level
// usually set by the build system

// tag type that defines a module 
struct module_a
: debug_assert::default_handler, 		// it uses the default handler
  debug_assert::set_level<MODULE_A_LEVEL>, 	// and this level
  debug_assert::allow_exception                 // and allows throws -- important for R use
{};

double d = 4;
void *ptr = &d;

//' @name Debug_Assert
//' @title Debug_Assert
//' @description Illustration of \sQuote{Debug_Assert}
//' @return All functions have a default return of \code{TRUE}

//' @rdname Debug_Assert
// [[Rcpp::export]]
bool module_a_func0() {
    Rcpp::stop("Testing 123");
    return true;
}

//' @rdname Debug_Assert
// [[Rcpp::export]]
bool module_a_func1() {
    DEBUG_ASSERT(ptr, module_a{}); // minimal assertion
    return true;
}

//' @rdname Debug_Assert
// [[Rcpp::export]]
bool module_a_func1b() {
    DEBUG_ASSERT(false, module_a{}); // minimal assertion
    return true;
}

//' @rdname Debug_Assert
// [[Rcpp::export]]
bool module_a_func2() {
    DEBUG_ASSERT(2 + 2 == 4, module_a{}, debug_assert::level<2>{}); // assertion with level
    return true;
}

//' @rdname Debug_Assert
// [[Rcpp::export]]
bool module_a_func3() {
    DEBUG_ASSERT(1 == 0, module_a{}, "this should be true"); // assertion with additional parameters, i.e. a message
    return true;
}

//' @rdname Debug_Assert
// [[Rcpp::export]]
bool module_a_func4() {
    DEBUG_UNREACHABLE(module_a{}); // mark unreachable statements
    return true;
}
