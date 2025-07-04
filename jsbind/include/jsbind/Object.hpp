#pragma once

#include "utils.hpp"
#include <emlite/emlite.hpp>
namespace jsbind {
class Object : public emlite::Val {
    explicit Object(Handle h) noexcept;

  public:
    static Object take_ownership(Handle h) noexcept;
    explicit Object(const emlite::Val &val) noexcept;
    bool hasOwnProperty(const char *prop) noexcept;

    DECLARE_CLONE(Object)
};
} // namespace jsbind
