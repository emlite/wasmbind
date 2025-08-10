#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEventInit.hpp"

namespace webbind {

/// Dictionary type CompositionEventInit
class CompositionEventInit : public UIEventInit {
  explicit CompositionEventInit(Handle h) noexcept;
public:
    static CompositionEventInit take_ownership(Handle h) noexcept;
    explicit CompositionEventInit(const emlite::Val &val) noexcept;
    CompositionEventInit() noexcept;
    [[nodiscard]] CompositionEventInit clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::String data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::String& value);
};

} // namespace webbind