
namespace ex
{
    // 2.0
    template <typename T>
    struct add_const_ref
    {
        typedef T const& type;
    };

    // partial specialization for reference types.
    template <typename T>
    struct add_const_ref<T&>
    {
        typedef T& type;
    };

    // 2.1

    template<typename c, typename x, typename y>
    struct replace_type
    {
        typedef int* type;
    };
}
