
namespace ex
{
    // 2.0
    template <typename T>
    struct add_const_ref
    {
        typedef T const& type;
    };

    template <typename T>
    struct add_const_ref<T&>
    {
        typedef T& type;
    };

}
