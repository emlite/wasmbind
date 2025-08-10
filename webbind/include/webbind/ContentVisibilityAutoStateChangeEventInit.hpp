#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ContentVisibilityAutoStateChangeEventInit
/// [`ContentVisibilityAutoStateChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ContentVisibilityAutoStateChangeEventInit)
class ContentVisibilityAutoStateChangeEventInit : public EventInit {
  explicit ContentVisibilityAutoStateChangeEventInit(Handle h) noexcept;
public:
    static ContentVisibilityAutoStateChangeEventInit take_ownership(Handle h) noexcept;
    explicit ContentVisibilityAutoStateChangeEventInit(const emlite::Val &val) noexcept;
    ContentVisibilityAutoStateChangeEventInit() noexcept;
    [[nodiscard]] ContentVisibilityAutoStateChangeEventInit clone() const noexcept;
    [[nodiscard]] bool skipped() const;
    void skipped(bool value);
};

} // namespace webbind