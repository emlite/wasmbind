#pragma once

#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>

struct Params {
    emlite::Uniq<emlite::Val[]> params = nullptr;
    size_t len                         = 0;
};

namespace jsbind {
class Function : public emlite::Val {
    explicit Function(Handle h) noexcept;

  public:
    static Function take_ownership(Handle h) noexcept;
    explicit Function(const emlite::Val &val) noexcept;
    explicit Function(Callback f) noexcept;
    static Params params(Handle h);

    DECLARE_CLONE(Function)
};
} // namespace jsbind
