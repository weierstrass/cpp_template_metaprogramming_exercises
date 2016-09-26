#include "chapter2_test.hpp"

#include <type_traits>

#include "../src/chapter2.hpp"


/**
 * @test add_const_ref<T> should return T if T is a reference type, otherwise
 * return T const&.
 */
TEST(chapter2, exercise0)
{
    // non-reference type in input -> add const reference.
    ASSERT_TRUE((std::is_same<int const&, ex::add_const_ref<int>::type >::value));

    // reference type in input
    ASSERT_TRUE((std::is_same<int&, ex::add_const_ref<int&>::type>::value));
}

TEST(chapter2, exercise1)
{
    
}
