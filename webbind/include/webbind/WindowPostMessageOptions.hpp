#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "StructuredSerializeOptions.hpp"

namespace webbind {

/// Dictionary type WindowPostMessageOptions
/// [`WindowPostMessageOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WindowPostMessageOptions)
class WindowPostMessageOptions : public StructuredSerializeOptions {
  explicit WindowPostMessageOptions(Handle h) noexcept;
public:
    static WindowPostMessageOptions take_ownership(Handle h) noexcept;
    explicit WindowPostMessageOptions(const emlite::Val &val) noexcept;
    WindowPostMessageOptions() noexcept;
    [[nodiscard]] WindowPostMessageOptions clone() const noexcept;
    [[nodiscard]] jsbind::String targetOrigin() const;
    void targetOrigin(const jsbind::String& value);
};

} // namespace webbind