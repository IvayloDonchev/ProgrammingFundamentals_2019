#include <charconv>		// std::from_chars(), std::to_chars()
#include <system_error>	// std::errc
#include <stdio.h>		// test code
#include <type_traits>	// test code
#include <string_view>

void test_from(const std::string_view sw) {
	const char* const first = sw.data();
	const char* const last = first + sw.size();
	double dbl;
	const std::from_chars_result res = std::from_chars(first, last, dbl);
	printf("Parsed %td chars, ", res.ptr - first);
	if (res.ec == std::errc{}) {
		printf("success: %g\n", dbl);
	}
	else
		if (res.ec == std::errc::result_out_of_range) {
			printf("result_out_of_range: %g\n", dbl);
		}
		else
			if (res.ec == std::errc::invalid_argument) {
				printf("invalid argument\n");
			}
			else
				printf("cant't happen\n");
}

template <typename T>
void test_to(const T t)
{
	static_assert(std::is_floating_point_v<T>);
	constexpr bool IsFloat = std::is_same_v<T, float>;
	constexpr size_t Size = IsFloat ? 15 : 24;
	char buf[Size];
	const std::to_chars_result res = std::to_chars(buf, buf + Size, t);
	if (res.ec == std::errc{}) {
		printf("success: %.*s\n", static_cast<int>(res.ptr-buf), buf);
	}
	else
		if (res.ec == std::errc::value_too_large) {
			printf("value too large\n");
		}
		else
			printf("cant't happen\n");
}

int main()
{
	test_from("3.875");
	test_from("1e9999");
	test_from("meow");

	test_to(17.29000091552734357f);
	test_to(1.233999999999999985789145284797996282577514648375);
}
