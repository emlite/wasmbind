#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PageTransitionEventInit
class PageTransitionEventInit : public EventInit {
  explicit PageTransitionEventInit(Handle h) noexcept;
public:
    static PageTransitionEventInit take_ownership(Handle h) noexcept;
    explicit PageTransitionEventInit(const emlite::Val &val) noexcept;
    PageTransitionEventInit() noexcept;
    [[nodiscard]] PageTransitionEventInit clone() const noexcept;
    /// Getter of the `persisted` attribute.
    [[nodiscard]] bool persisted() const;
    /// Setter of the `persisted` attribute.
    void persisted(bool value);
};

} // namespace webbind