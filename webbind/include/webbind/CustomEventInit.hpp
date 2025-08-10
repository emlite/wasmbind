#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CustomEventInit
class CustomEventInit : public EventInit {
  explicit CustomEventInit(Handle h) noexcept;
public:
    static CustomEventInit take_ownership(Handle h) noexcept;
    explicit CustomEventInit(const emlite::Val &val) noexcept;
    CustomEventInit() noexcept;
    [[nodiscard]] CustomEventInit clone() const noexcept;
    /// Getter of the `detail` attribute.
    [[nodiscard]] jsbind::Any detail() const;
    /// Setter of the `detail` attribute.
    void detail(const jsbind::Any& value);
};

} // namespace webbind