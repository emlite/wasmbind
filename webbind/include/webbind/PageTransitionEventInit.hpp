#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PageTransitionEventInit
/// [`PageTransitionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PageTransitionEventInit)
class PageTransitionEventInit : public EventInit {
  explicit PageTransitionEventInit(Handle h) noexcept;
public:
    static PageTransitionEventInit take_ownership(Handle h) noexcept;
    explicit PageTransitionEventInit(const emlite::Val &val) noexcept;
    PageTransitionEventInit() noexcept;
    [[nodiscard]] PageTransitionEventInit clone() const noexcept;
    [[nodiscard]] bool persisted() const;
    void persisted(bool value);
};

} // namespace webbind