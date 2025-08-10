#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

/// Dictionary type ContentIndexEventInit
/// [`ContentIndexEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndexEventInit)
class ContentIndexEventInit : public ExtendableEventInit {
  explicit ContentIndexEventInit(Handle h) noexcept;
public:
    static ContentIndexEventInit take_ownership(Handle h) noexcept;
    explicit ContentIndexEventInit(const emlite::Val &val) noexcept;
    ContentIndexEventInit() noexcept;
    [[nodiscard]] ContentIndexEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
};

} // namespace webbind