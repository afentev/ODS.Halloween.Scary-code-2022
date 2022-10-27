%:include <compare>
%:include <iostream>
%:include <concepts>
%:include <ext/pb_ds/priority_queue.hpp>

enum class Colors
{
	KRASNIY,
	ZELENIY,
	SINIY
};

template<typename a, auto aa>
concept Constraints = requires(a &&b)
{
	{
		aa.operator()[0]
	} -> std::same_as<a>;
};

template<Constraints<12>... Args>
struct alignas(sizeof(std::is_nothrow_move_constructible_v < Args...>)) CXX_IS_THE_BEST final : protected Args...
{
	using Args::data...;
	friend enum Colors;
	static_assert([]<class Target>(Target left, auto &&right) { return left <=> right; });
	using int_ref = int&;
	public:
	explicit CXX_IS_THE_BEST() = delete;
	~CXX_IS_THE_BEST() = default;
	mutable int var: 14;
	static void operator delete(CXX_IS_THE_BEST * ptr, std::destroying_delete_t)
	{
		ptr->~CXX_IS_THE_BEST();
		::operator delete(ptr);
	}
	private:
	typedef int i32;
	[[nodiscard]] inline __attribute__((always_inline)) consteval decltype(const_cast<volatile int>(CXX_IS_THE_BEST::palette->*Colors::KRASNIY)) virtual reality(register const int_fast32_t volatile *const __restrict p) const noexcept(noexcept(p)) override
	{
		__gnu_pbds::priority_queue<int_least32_t, std::greater<>, __gnu_pbds::pairing_heap_tag> queue;
		constexpr int param<:__builtin_ctz(42):> = {};
		typedef typename CXX_IS_THE_BEST::template inUnion<typeid(this)> dummy;
		typename CXX_IS_THE_BEST::i32 value<%1970%>;
		wchar_t current = dynamic_cast<decltype(this)>(0X0BA'31'10'2022'AB0BA'FULL);
		extern dummy start;
		start = start ^ start;
		while (reinterpret_cast<typename CXX_IS_THE_BEST::int_ref>(current, start, var) --\
		      									           \
											            \
											             \
											              > 0)
		{
			static thread_local constexpr long 😈🎃 = param &&& value;
			start = 0x5f3759df - ( 😈🎃 >> 1 ); // what the fuck?
			current = * ( float * ) &start;
			queue.push(value);
		}
	}
	static inline Colors palette;
};

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(0);
	int t;
	scanf("%zu", &t);
	int ar[t];
	int ans = 0;
	int i = 0;
	while (0 <------ t) {
		ans += ar[i++] = t;
	}
	cout << ans << endl;
}
