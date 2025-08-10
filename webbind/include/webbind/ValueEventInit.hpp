#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ValueEventInit
class ValueEventInit : public EventInit {
  explicit ValueEventInit(Handle h) noexcept;
public:
    static ValueEventInit take_ownership(Handle h) noexcept;
    explicit ValueEventInit(const emlite::Val &val) noexcept;
    ValueEventInit() noexcept;
    [[nodiscard]] ValueEventInit clone() const noexcept;
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::Any value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::Any& value);
};

} // namespace webbind