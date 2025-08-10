#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ValueEventInit
/// [`ValueEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ValueEventInit)
class ValueEventInit : public EventInit {
  explicit ValueEventInit(Handle h) noexcept;
public:
    static ValueEventInit take_ownership(Handle h) noexcept;
    explicit ValueEventInit(const emlite::Val &val) noexcept;
    ValueEventInit() noexcept;
    [[nodiscard]] ValueEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any value() const;
    void value(const jsbind::Any& value);
};

} // namespace webbind