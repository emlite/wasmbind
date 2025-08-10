#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ExtendableEventInit
class ExtendableEventInit : public EventInit {
  explicit ExtendableEventInit(Handle h) noexcept;
public:
    static ExtendableEventInit take_ownership(Handle h) noexcept;
    explicit ExtendableEventInit(const emlite::Val &val) noexcept;
    ExtendableEventInit() noexcept;
    [[nodiscard]] ExtendableEventInit clone() const noexcept;
};

} // namespace webbind