#pragma once

#include "Function.hpp"
#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind {
struct Performance {
    static double now() noexcept;
};

template <class... Extra>
int32_t setTimeout(const Function &cb, int32_t millis, const Extra &...extra_args) {
    return emlite::Val::global("setTimeout")(
               emlite::Val(cb), emlite::Val(millis), emlite::Val(extra_args)...
    )
        .template as<int32_t>();
}

/* clearTimeout(id) */
void clearTimeout(int32_t id);

template <class... Extra>
int32_t setInterval(const Function &cb, int32_t millis, const Extra &...extra_args) {
    return emlite::Val::global("setInterval")(
               emlite::Val(cb), emlite::Val(millis), emlite::Val(extra_args)...
    )
        .template as<int32_t>();
}

/* clearInterval(id) */
void clearInterval(int32_t id);

int32_t setTimeout(const Function &cb, int32_t millis);
int32_t setInterval(const Function &cb, int32_t millis);
} // namespace jsbind