//          Copyright Emil Fresk 2017.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE.md or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
#pragma once

#include "../../types/integral_constant.hpp"
#include "../../functional/identity.hpp"

namespace kvasir {
	namespace mpl {
		template<typename C = identity>
		struct decrement {
			template <typename A>
			using f = typename C::template f<integral_constant<decltype(A::value -1), (A::value -1)>>;
		};
		namespace eager {
			template <typename A>
			using decrement = integral_constant<decltype(A::value - 1), (A::value - 1)>;
		}
	}
}
