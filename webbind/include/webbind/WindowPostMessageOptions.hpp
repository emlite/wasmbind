#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "StructuredSerializeOptions.hpp"

namespace webbind {

/// Dictionary type WindowPostMessageOptions
class WindowPostMessageOptions : public StructuredSerializeOptions {
  explicit WindowPostMessageOptions(Handle h) noexcept;
public:
    static WindowPostMessageOptions take_ownership(Handle h) noexcept;
    explicit WindowPostMessageOptions(const emlite::Val &val) noexcept;
    WindowPostMessageOptions() noexcept;
    [[nodiscard]] WindowPostMessageOptions clone() const noexcept;
    /// Getter of the `targetOrigin` attribute.
    [[nodiscard]] jsbind::String targetOrigin() const;
    /// Setter of the `targetOrigin` attribute.
    void targetOrigin(const jsbind::String& value);
};

} // namespace webbind